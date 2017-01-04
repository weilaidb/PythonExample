#define PMU_LPCR               0xB0
#define SB_MPS1                0x61
#define HW_LEVEL_MAX           0x77
#define HW_LEVEL_MIN           0x4f
static struct pci_dev *pmu_dev = NULL;
static struct pci_dev *sb_dev = NULL;
static int progearbl_set_intensity(struct backlight_device *bd)
static int progearbl_get_intensity(struct backlight_device *bd)
static const struct backlight_ops progearbl_ops = ;
static int progearbl_probe(struct platform_device *pdev)
static int progearbl_remove(struct platform_device *pdev)
static struct platform_driver progearbl_driver = ;
static struct platform_device *progearbl_device;
static int __init progearbl_init(void)
static void __exit progearbl_exit(void)
module_init(progearbl_init);
module_exit(progearbl_exit);
MODULE_AUTHOR("Marcin Juszkiewicz <linux@hrw.one.pl>");
MODULE_DESCRIPTION("ProGear Backlight Driver");
MODULE_LICENSE("GPL");
