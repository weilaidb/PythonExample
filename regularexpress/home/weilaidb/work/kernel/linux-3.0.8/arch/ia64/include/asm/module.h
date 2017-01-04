#define _ASM_IA64_MODULE_H
struct elf64_shdr;
struct mod_arch_specific ;
#define Elf_Shdr	Elf64_Shdr
#define Elf_Sym		Elf64_Sym
#define Elf_Ehdr	Elf64_Ehdr
#define MODULE_PROC_FAMILY	"ia64"
#define MODULE_ARCH_VERMAGIC	MODULE_PROC_FAMILY \
"gcc-" __stringify(__GNUC__) "." __stringify(__GNUC_MINOR__)
#define ARCH_SHF_SMALL	SHF_IA_64_SHORT
