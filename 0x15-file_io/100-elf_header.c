#include "main.h"

/**
 * main - The program's entry point for the ELF header
 * @argc: The num of arg given to the program
 * @argv: A string of arrays containing the arguments
 * Return: 0  on success
 */

int main(int argc, char *argv[])
{int fileDescriptor;
Elf64_Ehdr *buf;
ssize_t readsUp;

if (argc != 2)
{dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
fileDescriptor = open(argv[1], O_RDONLY);
if (fileDescriptor == -1)
{dprintf(STDERR_FILENO, "Error: unable to read the file %s\n", argv[1]);
return (98);
}
buf = malloc(sizeof(Elf64_Ehdr));
if (buf == NULL)
{
close_elf(fileDescriptor);
dprintf(STDERR_FILENO, "Error:Unable to allocate memory\n");
return (98);
}
readsUp = read(fileDescriptor, buf, sizeof(Elf64_Ehdr));
if (readsUp == -1)
{free(buf);
close_elf(fileDescriptor);
dprintf(STDERR_FILENO, "Error:unable to read the fileUna %s\n", argv[1]);
return (98);
}
check_elf(buf->e_ident);
printf("ELF Header:\n");
print_magic(buf->e_ident);
print_class(buf->e_ident);
print_data(buf->e_ident);
print_version(buf->e_ident);
print_osabi(buf->e_ident);
print_abi(buf->e_ident);
print_type(buf->e_type, buf->e_ident);
print_entry_point(buf->e_entry, buf->e_ident);
free(buf);
close_elf(fileDescriptor);
return (0);
}
/**
 * check_elf - Determines whether a file is in ELF format
 * @e_ident: A reference to an array of ELF versions
 * Return: Nothing
 */

void check_elf(unsigned char *e_ident)
{
int x;
for (x = 0; x < 4; x++)
{
if (e_ident[x] != 127 &&
e_ident[x] != 'E' &&
e_ident[x] != 'L' &&
e_ident[x] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
 * print_magic - Prints the ELF magic number
 * @e_ident: A refernce to an array of ELf versions
 * Return: Void
 */

void print_magic(unsigned char *e_ident)
{
int x;
printf("  Magic:   ");
for (x = 0; x < EI_NIDENT; x++)
{
printf("%02x", e_ident[x]);
if (x == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
 * print_class - prints the ELF class
 * @e_ident: A reference to an array of ELF versions
 * Return: Void
 */

void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_data - Prints the ELF data formats
 * @e_ident: A reference to an array of ELF versions
 * Return: Nothing
 *
 */
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_version - A function that prints the ELF version
 * @e_ident: A reference to an array of ELF versions
 * Return: Void
 */
void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d", e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}


/**
 * print_osabi -Prints the OS/ABI
 * @e_ident: A reference to an array of ELF versions
 * Return: Void
 */

void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
 * print_abi - Prints the ABI version
 * @e_ident: Pointer to array of ELF versions
 * Return: Void
 */
void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the ELF type
 * @e_type: ELF type needed for printing
 * @e_ident: A reference to an array of ELF versions
 */

void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:                              ");
switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}

/**
 * print_entry_point - Displays the address of the ELF entry point
 * @e_entry: The address of the entry point to be printed
 * @e_ident: Pointer to an array of ELF versions
 * Return: Void
 */
void print_entry_point(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}

/**
 * close_elf - A function that closes the ELF file descriptor
 * @elf: The file descriptor that will be closed
 * Return: Void
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fileDescriptor %d\n", elf);
exit(98);
}
}

