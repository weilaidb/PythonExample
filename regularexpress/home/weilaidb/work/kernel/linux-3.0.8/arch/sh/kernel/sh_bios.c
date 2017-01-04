#define BIOS_CALL_CONSOLE_WRITE		0
#define BIOS_CALL_ETH_NODE_ADDR		10
#define BIOS_CALL_SHUTDOWN		11
#define BIOS_CALL_GDB_DETACH		0xff
void *gdb_vbr_vector = NULL;
static inline long sh_bios_call(long func, long arg0, long arg1, long arg2,
long arg3)
void sh_bios_console_write(const char *buf, unsigned int len)
void sh_bios_gdb_detach(void)
EXPORT_SYMBOL_GPL(sh_bios_gdb_detach);
void sh_bios_get_node_addr(unsigned char *node_addr)
EXPORT_SYMBOL_GPL(sh_bios_get_node_addr);
void sh_bios_shutdown(unsigned int how)
void sh_bios_vbr_init(void)
void sh_bios_vbr_reload(void)
static void sh_console_write(struct console *co, const char *s,
unsigned count)
static int __init sh_console_setup(struct console *co, char *options)
static struct console bios_console = ;
static struct console *early_console;
static int __init setup_early_printk(char *buf)
early_param("earlyprintk", setup_early_printk);
