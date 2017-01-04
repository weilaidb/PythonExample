static int softingcs_index;
static spinlock_t softingcs_index_lock;
static int softingcs_reset(struct platform_device *pdev, int v);
static int softingcs_enable_irq(struct platform_device *pdev, int v);
#define MHZ (1000*1000)
static const struct softing_platform_data softingcs_platform_data[] = ;
MODULE_FIRMWARE(fw_dir "bcard.bin");
MODULE_FIRMWARE(fw_dir "ldcard.bin");
MODULE_FIRMWARE(fw_dir "cancard.bin");
MODULE_FIRMWARE(fw_dir "cansja.bin");
MODULE_FIRMWARE(fw_dir "bcard2.bin");
MODULE_FIRMWARE(fw_dir "ldcard2.bin");
MODULE_FIRMWARE(fw_dir "cancrd2.bin");
static __devinit const struct softing_platform_data
*softingcs_find_platform_data(unsigned int manf, unsigned int prod)
static int softingcs_reset(struct platform_device *pdev, int v)
static int softingcs_enable_irq(struct platform_device *pdev, int v)
static __devinit int softingcs_probe_config(struct pcmcia_device *pcmcia,
void *priv_data)
static __devexit void softingcs_remove(struct pcmcia_device *pcmcia)
static void softingcs_pdev_release(struct device *dev)
static __devinit int softingcs_probe(struct pcmcia_device *pcmcia)
static const struct pcmcia_device_id softingcs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, softingcs_ids);
static struct pcmcia_driver softingcs_driver = ;
static int __init softingcs_start(void)
static void __exit softingcs_stop(void)
module_init(softingcs_start);
module_exit(softingcs_stop);
MODULE_DESCRIPTION("softing CANcard driver"
", links PCMCIA card to softing driver");
MODULE_LICENSE("GPL v2");
