#define _ASM_S390_MODULE_H
struct mod_arch_syminfo
;
struct mod_arch_specific
;
#define ElfW(x) Elf64_ ## x
#define ELFW(x) ELF64_ ## x
#define ElfW(x) Elf32_ ## x
#define ELFW(x) ELF32_ ## x
#define Elf_Addr ElfW(Addr)
#define Elf_Rela ElfW(Rela)
#define Elf_Shdr ElfW(Shdr)
#define Elf_Sym ElfW(Sym)
#define Elf_Ehdr ElfW(Ehdr)
#define ELF_R_SYM ELFW(R_SYM)
#define ELF_R_TYPE ELFW(R_TYPE)
