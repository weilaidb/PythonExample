#define DATA_REG_OFFSET		0x0200
#define CSR_REG_OFFSET		0x0278
#define CSR_OUT_EMPTY_MASK	(1 << 24)
#define CSR_FAULT_MASK		(1 << 1)
#define TRNG_BLOCK_RESET_MASK	(1 << 0)
#define TAI_REG_OFFSET		0x0380
#define PICO_TRNG_TIMEOUT		20
static void __iomem *rng_base;
static struct clk *rng_clk;
struct device *rng_dev;
static inline u32 picoxcell_trng_read_csr(void)
static inline bool picoxcell_trng_is_empty(void)
static void picoxcell_trng_start(void)
static void picoxcell_trng_reset(void)
static int picoxcell_trng_read(struct hwrng *rng, void *buf, size_t max,
bool wait)
static struct hwrng picoxcell_trng = ;
static int picoxcell_trng_probe(struct platform_device *pdev)
static int __devexit picoxcell_trng_remove(struct platform_device *pdev)
static int picoxcell_trng_suspend(struct device *dev)
static int picoxcell_trng_resume(struct device *dev)
static const struct dev_pm_ops picoxcell_trng_pm_ops = ;
static struct platform_driver picoxcell_trng_driver = ;
static int __init picoxcell_trng_init(void)
module_init(picoxcell_trng_init);
static void __exit picoxcell_trng_exit(void)
module_exit(picoxcell_trng_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jamie Iles");
MODULE_DESCRIPTION("Picochip picoXcell TRNG driver");
