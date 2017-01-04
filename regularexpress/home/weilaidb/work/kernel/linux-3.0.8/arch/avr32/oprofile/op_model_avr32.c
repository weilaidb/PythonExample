#define AVR32_PERFCTR_IRQ_GROUP	0
#define AVR32_PERFCTR_IRQ_LINE	1
void avr32_backtrace(struct pt_regs * const regs, unsigned int depth);
enum ;
struct avr32_perf_counter ;
static struct avr32_perf_counter counter[NR_counter] = ;
static void avr32_perf_counter_reset(void)
static irqreturn_t avr32_perf_counter_interrupt(int irq, void *dev_id)
static int avr32_perf_counter_create_files(struct super_block *sb,
struct dentry *root)
static int avr32_perf_counter_setup(void)
static void avr32_perf_counter_shutdown(void)
static int avr32_perf_counter_start(void)
static void avr32_perf_counter_stop(void)
static struct oprofile_operations avr32_perf_counter_ops __initdata = ;
int __init oprofile_arch_init(struct oprofile_operations *ops)
void oprofile_arch_exit(void)
