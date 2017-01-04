static unsigned int count_be_is_fixup;
static unsigned int count_be_handler;
static unsigned int count_be_interrupt;
static int debug_be_interrupt;
static unsigned int cpu_err_stat;
static unsigned int gio_err_stat;
static unsigned int cpu_err_addr;
static unsigned int gio_err_addr;
static unsigned int extio_stat;
static unsigned int hpc3_berr_stat;
struct hpc3_stat ;
static struct  hpc3;
static struct  cache_tags;
static inline void save_cache_tags(unsigned busaddr)
#define GIO_ERRMASK	0xff00
#define CPU_ERRMASK	0x3f00
static void save_and_clear_buserr(void)
static void print_cache_tags(void)
static inline const char *cause_excode_text(int cause)
static void print_buserr(const struct pt_regs *regs)
static int addr_is_ram(unsigned long addr, unsigned sz)
static int check_microtlb(u32 hi, u32 lo, unsigned long vaddr)
static int check_vdma_memaddr(void)
static int check_vdma_gioaddr(void)
static int ip28_be_interrupt(const struct pt_regs *regs)
void ip22_be_interrupt(int irq)
static int ip28_be_handler(struct pt_regs *regs, int is_fixup)
void __init ip22_be_init(void)
int ip28_show_be_info(struct seq_file *m)
static int __init debug_be_setup(char *str)
__setup("ip28_debug_be", debug_be_setup);
