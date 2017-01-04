struct fsl_usb2_dev_data ;
struct fsl_usb2_dev_data dr_mode_data[] __devinitdata = ;
struct fsl_usb2_dev_data * __devinit get_dr_mode_data(struct device_node *np)
static enum fsl_usb2_phy_modes __devinit determine_usb_phy(const char *phy_type)
struct platform_device * __devinit fsl_usb2_device_register(
struct platform_device *ofdev,
struct fsl_usb2_platform_data *pdata,
const char *name, int id)
static const struct of_device_id fsl_usb2_mph_dr_of_match[];
static int __devinit fsl_usb2_mph_dr_of_probe(struct platform_device *ofdev)
static int __devexit __unregister_subdev(struct device *dev, void *d)
static int __devexit fsl_usb2_mph_dr_of_remove(struct platform_device *ofdev)
#define USBGENCTRL		0x200
#define GC_WU_INT_CLR		(1 << 5)
#define GC_ULPI_SEL		(1 << 4)
#define GC_PPP			(1 << 3)
#define GC_PFP			(1 << 2)
#define GC_WU_ULPI_EN		(1 << 1)
#define GC_WU_IE		(1 << 1)
#define ISIPHYCTRL		0x204
#define PHYCTRL_PHYE		(1 << 4)
#define PHYCTRL_BSENH		(1 << 3)
#define PHYCTRL_BSEN		(1 << 2)
#define PHYCTRL_LSFE		(1 << 1)
#define PHYCTRL_PXE		(1 << 0)
int fsl_usb2_mpc5121_init(struct platform_device *pdev)
static void fsl_usb2_mpc5121_exit(struct platform_device *pdev)
static struct fsl_usb2_platform_data fsl_usb2_mpc5121_pd = ;
static struct fsl_usb2_platform_data fsl_usb2_mpc8xxx_pd = ;
static const struct of_device_id fsl_usb2_mph_dr_of_match[] = ;
static struct platform_driver fsl_usb2_mph_dr_driver = ;
static int __init fsl_usb2_mph_dr_init(void)
module_init(fsl_usb2_mph_dr_init);
static void __exit fsl_usb2_mph_dr_exit(void)
module_exit(fsl_usb2_mph_dr_exit);
MODULE_DESCRIPTION("FSL MPH DR OF devices driver");
MODULE_AUTHOR("Anatolij Gustschin <agust@denx.de>");
MODULE_LICENSE("GPL");
