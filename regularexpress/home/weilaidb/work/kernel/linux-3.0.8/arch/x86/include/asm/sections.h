#define _ASM_X86_SECTIONS_H
extern char __brk_base[], __brk_limit[];
extern struct exception_table_entry __stop___ex_table[];
#if defined(CONFIG_X86_64) && defined(CONFIG_DEBUG_RODATA)
extern char __end_rodata_hpage_align[];
