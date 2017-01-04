#define _ASM_SCORE_MODULE_H
struct mod_arch_specific ;
typedef uint8_t Elf64_Byte;
#define Elf_Shdr	Elf32_Shdr
#define Elf_Sym		Elf32_Sym
#define Elf_Ehdr	Elf32_Ehdr
#define Elf_Addr	Elf32_Addr
const struct exception_table_entry *search_module_dbetables(unsigned long addr);
static inline const struct exception_table_entry
*search_module_dbetables(unsigned long addr)
#define MODULE_PROC_FAMILY "SCORE7"
#define MODULE_KERNEL_TYPE "32BIT "
#define MODULE_KERNEL_SMTC ""
#define MODULE_ARCH_VERMAGIC \
MODULE_PROC_FAMILY MODULE_KERNEL_TYPE MODULE_KERNEL_SMTC
