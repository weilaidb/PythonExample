#define _ASM_TILE_SETUP_H
#define COMMAND_LINE_SIZE	2048
#define MAXMEM_PFN	PFN_DOWN(MAXMEM)
void early_panic(const char *fmt, ...);
void warn_early_printk(void);
void __init disable_early_printk(void);
