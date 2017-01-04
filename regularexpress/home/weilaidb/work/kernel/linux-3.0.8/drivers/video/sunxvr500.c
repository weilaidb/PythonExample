struct e3d_info ;
static int __devinit e3d_get_props(struct e3d_info *ep)
#define RAMDAC_VID_WH		0x00000070UL
#define RAMDAC_VID_CFG		0x00000074UL
#define RAMDAC_VID_32FB_0	0x00000078UL
#define RAMDAC_VID_32FB_1	0x0000007cUL
#define RAMDAC_VID_8FB_0	0x00000080UL
#define RAMDAC_VID_8FB_1	0x00000084UL
#define RAMDAC_VID_XXXFB	0x00000088UL
#define RAMDAC_VID_YYYFB	0x0000008cUL
#define RAMDAC_VID_ZZZFB	0x00000090UL
#define RAMDAC_INDEX		0x000000bcUL
#define RAMDAC_DATA		0x000000c0UL
static void e3d_clut_write(struct e3d_info *ep, int index, u32 val)
static int e3d_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static void e3d_imageblit(struct fb_info *info, const struct fb_image *image)
static void e3d_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void e3d_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static struct fb_ops e3d_ops = ;
static int __devinit e3d_set_fbinfo(struct e3d_info *ep)
static int __devinit e3d_pci_register(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit e3d_pci_unregister(struct pci_dev *pdev)
static struct pci_device_id e3d_pci_table[] = ;
static struct pci_driver e3d_driver = ;
static int __init e3d_init(void)
static void __exit e3d_exit(void)
module_init(e3d_init);
module_exit(e3d_exit);
MODULE_DESCRIPTION("framebuffer driver for Sun XVR-500 graphics");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
