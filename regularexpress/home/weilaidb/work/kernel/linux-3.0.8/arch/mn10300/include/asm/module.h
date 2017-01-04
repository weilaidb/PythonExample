#define _ASM_MODULE_H
struct mod_arch_specific ;
#define Elf_Shdr	Elf32_Shdr
#define Elf_Sym		Elf32_Sym
#define Elf_Ehdr	Elf32_Ehdr
#define MODULE_ARCH_VERMAGIC __stringify(PROCESSOR_MODEL_NAME) " "
