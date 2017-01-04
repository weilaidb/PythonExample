#undef DEBUG
#define SAMPLE_COUNT		256
#define CPU_SAMPLING_RATE	250
struct rackmeter_dma  ____cacheline_aligned;
struct rackmeter_cpu  ____cacheline_aligned;
struct rackmeter ;
static int rackmeter_ignore_nice;
#define RACKMETER_MAGIC_GPIO	0x78
static inline cputime64_t get_cpu_idle_time(unsigned int cpu)
static void rackmeter_setup_i2s(struct rackmeter *rm)
static void rackmeter_set_default_pattern(struct rackmeter *rm)
static void rackmeter_do_pause(struct rackmeter *rm, int pause)
static void rackmeter_setup_dbdma(struct rackmeter *rm)
static void rackmeter_do_timer(struct work_struct *work)
static void __devinit rackmeter_init_cpu_sniffer(struct rackmeter *rm)
static void rackmeter_stop_cpu_sniffer(struct rackmeter *rm)
static int __devinit rackmeter_setup(struct rackmeter *rm)
static u32 rackmeter_calc_sample(struct rackmeter *rm, unsigned int index)
static irqreturn_t rackmeter_irq(int irq, void *arg)
static int __devinit rackmeter_probe(struct macio_dev* mdev,
const struct of_device_id *match)
static int __devexit rackmeter_remove(struct macio_dev* mdev)
static int rackmeter_shutdown(struct macio_dev* mdev)
static struct of_device_id rackmeter_match[] = ;
static struct macio_driver rackmeter_driver = ;
static int __init rackmeter_init(void)
static void __exit rackmeter_exit(void)
module_init(rackmeter_init);
module_exit(rackmeter_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("RackMeter: Support vu-meter on XServe front panel");
