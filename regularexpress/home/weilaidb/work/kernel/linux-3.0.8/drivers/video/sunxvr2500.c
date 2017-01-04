struct s3d_info ;
static int __devinit s3d_get_props(struct s3d_info *sp)
static int s3d_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static struct fb_ops s3d_ops = ;
static int __devinit s3d_set_fbinfo(struct s3d_info *sp)
static int __devinit s3d_pci_register(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit s3d_pci_unregister(struct pci_dev *pdev)
static struct pci_device_id s3d_pci_table[] = ;
static struct pci_driver s3d_driver = ;
static int __init s3d_init(void)
static void __exit s3d_exit(void)
module_init(s3d_init);
module_exit(s3d_exit);
MODULE_DESCRIPTION("framebuffer driver for Sun XVR-2500 graphics");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
