#define MAX_BUS_CLK	(4)
struct sdhci_s3c ;
static inline struct sdhci_s3c *to_s3c(struct sdhci_host *host)
static u32 get_curclk(u32 ctrl2)
static void sdhci_s3c_check_sclk(struct sdhci_host *host)
static unsigned int sdhci_s3c_get_max_clk(struct sdhci_host *host)
static unsigned int sdhci_s3c_consider_clock(struct sdhci_s3c *ourhost,
unsigned int src,
unsigned int wanted)
static void sdhci_s3c_set_clock(struct sdhci_host *host, unsigned int clock)
static unsigned int sdhci_s3c_get_min_clock(struct sdhci_host *host)
static unsigned int sdhci_cmu_get_max_clock(struct sdhci_host *host)
static unsigned int sdhci_cmu_get_min_clock(struct sdhci_host *host)
static void sdhci_cmu_set_clock(struct sdhci_host *host, unsigned int clock)
static int sdhci_s3c_platform_8bit_width(struct sdhci_host *host, int width)
static struct sdhci_ops sdhci_s3c_ops = ;
static void sdhci_s3c_notify_change(struct platform_device *dev, int state)
static irqreturn_t sdhci_s3c_gpio_card_detect_thread(int irq, void *dev_id)
static void sdhci_s3c_setup_card_detect_gpio(struct sdhci_s3c *sc)
static int __devinit sdhci_s3c_probe(struct platform_device *pdev)
static int __devexit sdhci_s3c_remove(struct platform_device *pdev)
static int sdhci_s3c_suspend(struct platform_device *dev, pm_message_t pm)
static int sdhci_s3c_resume(struct platform_device *dev)
#define sdhci_s3c_suspend NULL
#define sdhci_s3c_resume NULL
static struct platform_driver sdhci_s3c_driver = ;
static int __init sdhci_s3c_init(void)
static void __exit sdhci_s3c_exit(void)
module_init(sdhci_s3c_init);
module_exit(sdhci_s3c_exit);
MODULE_DESCRIPTION("Samsung SDHCI (HSMMC) glue");
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:s3c-sdhci");
