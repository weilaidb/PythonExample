#define HAS_FPU         0x0001
#define HAS_MMU         0x0002
#define HAS_ETHERNET100 0x0004
#define HAS_TOKENRING   0x0008
#define HAS_SCSI        0x0010
#define HAS_ATA         0x0020
#define HAS_USB         0x0040
#define HAS_IRQ_BUG     0x0080
#define HAS_MMU_BUG     0x0100
struct cpu_info ;
static struct cpu_info cpinfo[] = ;
int show_cpuinfo(struct seq_file *m, void *v)
void show_etrax_copyright(void)
static struct i2c_board_info __initdata i2c_info[] = ;
static struct i2c_board_info __initdata i2c_info2[] = ;
static struct i2c_board_info __initdata i2c_info3[] = ;
static int __init etrax_init(void)
arch_initcall(etrax_init);
