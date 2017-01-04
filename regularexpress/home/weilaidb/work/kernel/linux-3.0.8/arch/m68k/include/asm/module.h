#define _ASM_M68K_MODULE_H
struct mod_arch_specific ;
#define MODULE_ARCH_INIT
enum m68k_fixup_type ;
struct m68k_fixup_info ;
#define m68k_fixup(type, addr)			\
"	.section \".m68k_fixup\",\"aw\"\n"	\
"	.long " #type "," #addr "\n"	\
"	.previous\n"
extern struct m68k_fixup_info __start_fixup[], __stop_fixup[];
struct module;
extern void module_fixup(struct module *mod, struct m68k_fixup_info *start,
struct m68k_fixup_info *end);
struct mod_arch_specific ;
#define Elf_Shdr Elf32_Shdr
#define Elf_Sym Elf32_Sym
#define Elf_Ehdr Elf32_Ehdr
