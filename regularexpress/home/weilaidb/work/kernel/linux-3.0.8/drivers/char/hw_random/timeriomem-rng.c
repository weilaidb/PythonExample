static struct timeriomem_rng_data *timeriomem_rng_data;
static void timeriomem_rng_trigger(unsigned long);
static DEFINE_TIMER(timeriomem_rng_timer, timeriomem_rng_trigger, 0, 0);
static int timeriomem_rng_data_present(struct hwrng *rng, int wait)
static int timeriomem_rng_data_read(struct hwrng *rng, u32 *data)
static void timeriomem_rng_trigger(unsigned long dummy)
static struct hwrng timeriomem_rng_ops = ;
static int __devinit timeriomem_rng_probe(struct platform_device *pdev)
static int __devexit timeriomem_rng_remove(struct platform_device *pdev)
static struct platform_driver timeriomem_rng_driver = ;
static int __init timeriomem_rng_init(void)
static void __exit timeriomem_rng_exit(void)
module_init(timeriomem_rng_init);
module_exit(timeriomem_rng_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexander Clouter <alex@digriz.org.uk>");
MODULE_DESCRIPTION("Timer IOMEM H/W RNG driver");
