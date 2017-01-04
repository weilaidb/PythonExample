#define _ASM_ARM_MODULE_H
#define Elf_Shdr	Elf32_Shdr
#define Elf_Sym		Elf32_Sym
#define Elf_Ehdr	Elf32_Ehdr
struct unwind_table;
enum ;
struct mod_arch_specific ;
#define MODULE_ARCH_VERMAGIC_ARMVSN "ARMv" __stringify(__LINUX_ARM_ARCH__) " "
#define MODULE_ARCH_VERMAGIC_P2V "p2v16 "
#define MODULE_ARCH_VERMAGIC_P2V "p2v8 "
#define MODULE_ARCH_VERMAGIC_P2V ""
#define MODULE_ARCH_VERMAGIC_ARMTHUMB "thumb2 "
#define MODULE_ARCH_VERMAGIC_ARMTHUMB ""
#define MODULE_ARCH_VERMAGIC \
MODULE_ARCH_VERMAGIC_ARMVSN \
MODULE_ARCH_VERMAGIC_ARMTHUMB \
MODULE_ARCH_VERMAGIC_P2V
