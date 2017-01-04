struct spear_sdhci ;
static struct sdhci_ops sdhci_pltfm_ops = ;
static irqreturn_t sdhci_gpio_irq(int irq, void *dev_id)
static int __devinit sdhci_probe(struct platform_device *pdev)
static int __devexit sdhci_remove(struct platform_device *pdev)
static struct platform_driver sdhci_driver = ;
static int __init sdhci_init(void)
module_init(sdhci_init);
static void __exit sdhci_exit(void)
module_exit(sdhci_exit);
MODULE_DESCRIPTION("SPEAr Secure Digital Host Controller Interface driver");
MODULE_AUTHOR("Viresh Kumar <viresh.kumar@st.com>");
MODULE_LICENSE("GPL v2");
