#define _ASM_POWERPC_MODULE_H
struct ppc_plt_entry ;
struct mod_arch_specific ;
#    define Elf_Shdr	Elf64_Shdr
#    define Elf_Sym	Elf64_Sym
#    define Elf_Ehdr	Elf64_Ehdr
#    ifdef MODULE
asm(".section .stubs,\"ax\",@nobits; .align 3; .previous");
#    endif
#    define Elf_Shdr	Elf32_Shdr
#    define Elf_Sym	Elf32_Sym
#    define Elf_Ehdr	Elf32_Ehdr
#    ifdef MODULE
asm(".section .plt,\"ax\",@nobits; .align 3; .previous");
asm(".section .init.plt,\"ax\",@nobits; .align 3; .previous");
#    endif
#    ifdef MODULE
asm(".section .ftrace.tramp,\"ax\",@nobits; .align 3; .previous");
#    endif
struct exception_table_entry;
void sort_ex_table(struct exception_table_entry *start,
struct exception_table_entry *finish);
#define ARCH_RELOCATES_KCRCTAB
extern const unsigned long reloc_start[];
