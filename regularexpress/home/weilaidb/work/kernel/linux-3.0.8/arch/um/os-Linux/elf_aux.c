#if UM_ELF_CLASS == UM_ELFCLASS32
typedef Elf32_auxv_t elf_auxv_t;
typedef Elf64_auxv_t elf_auxv_t;
char * elf_aux_platform;
long elf_aux_hwcap;
unsigned long vsyscall_ehdr;
unsigned long vsyscall_end;
unsigned long __kernel_vsyscall;
__init void scan_elf_aux( char **envp)
