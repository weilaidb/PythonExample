#define _ASM_POWERPC_UDBG_H
extern void (*udbg_putc)(char c);
extern void (*udbg_flush)(void);
extern int (*udbg_getc)(void);
extern int (*udbg_getc_poll)(void);
extern void udbg_puts(const char *s);
extern int udbg_write(const char *s, int n);
extern int udbg_read(char *buf, int buflen);
extern void register_early_udbg_console(void);
extern void udbg_printf(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
extern void udbg_progress(char *s, unsigned short hex);
extern void udbg_init_uart(void __iomem *comport, unsigned int speed,
unsigned int clock);
extern unsigned int udbg_probe_uart_speed(void __iomem *comport,
unsigned int clock);
struct device_node;
extern void udbg_scc_init(int force_scc);
extern int udbg_adb_init(int force_btext);
extern void udbg_adb_init_early(void);
extern void __init udbg_early_init(void);
extern void __init udbg_init_debug_lpar(void);
extern void __init udbg_init_pmac_realmode(void);
extern void __init udbg_init_maple_realmode(void);
extern void __init udbg_init_pas_realmode(void);
extern void __init udbg_init_iseries(void);
extern void __init udbg_init_rtas_panel(void);
extern void __init udbg_init_rtas_console(void);
extern void __init udbg_init_debug_beat(void);
extern void __init udbg_init_btext(void);
extern void __init udbg_init_44x_as1(void);
extern void __init udbg_init_40x_realmode(void);
extern void __init udbg_init_cpm(void);
extern void __init udbg_init_usbgecko(void);
extern void __init udbg_init_wsp(void);
