extern struct console *bfin_earlyserial_init(unsigned int port,
unsigned int cflag);
extern struct console *bfin_jc_early_init(void);
static struct console *early_console;
#define DEFAULT_PORT 0
#define DEFAULT_CFLAG CS8|B57600
#define DEFAULT_EARLY_PORT "serial,uart0,57600"
static struct console * __init earlyserial_init(char *buf)
int __init setup_early_printk(char *buf)
asmlinkage void __init init_early_exception_vectors(void)
__attribute__((__noreturn__))
asmlinkage void __init early_trap_c(struct pt_regs *fp, void *retaddr)
early_param("earlyprintk", setup_early_printk);
