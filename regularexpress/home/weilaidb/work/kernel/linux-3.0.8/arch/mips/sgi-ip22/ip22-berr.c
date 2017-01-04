static unsigned int cpu_err_stat;
static unsigned int gio_err_stat;
static unsigned int cpu_err_addr;
static unsigned int gio_err_addr;
static unsigned int extio_stat;
static unsigned int hpc3_berr_stat;
static void save_and_clear_buserr(void)
#define GIO_ERRMASK	0xff00
#define CPU_ERRMASK	0x3f00
static void print_buserr(void)
void ip22_be_interrupt(int irq)
static int ip22_be_handler(struct pt_regs *regs, int is_fixup)
void __init ip22_be_init(void)
