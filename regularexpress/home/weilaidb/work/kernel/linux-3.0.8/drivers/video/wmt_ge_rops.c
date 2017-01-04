#define GE_COMMAND_OFF		0x00
#define GE_DEPTH_OFF		0x04
#define GE_HIGHCOLOR_OFF	0x08
#define GE_ROPCODE_OFF		0x14
#define GE_FIRE_OFF		0x18
#define GE_SRCBASE_OFF		0x20
#define GE_SRCDISPW_OFF		0x24
#define GE_SRCDISPH_OFF		0x28
#define GE_SRCAREAX_OFF		0x2c
#define GE_SRCAREAY_OFF		0x30
#define GE_SRCAREAW_OFF		0x34
#define GE_SRCAREAH_OFF		0x38
#define GE_DESTBASE_OFF		0x3c
#define GE_DESTDISPW_OFF	0x40
#define GE_DESTDISPH_OFF	0x44
#define GE_DESTAREAX_OFF	0x48
#define GE_DESTAREAY_OFF	0x4c
#define GE_DESTAREAW_OFF	0x50
#define GE_DESTAREAH_OFF	0x54
#define GE_PAT0C_OFF		0x88
#define GE_ENABLE_OFF		0xec
#define GE_INTEN_OFF		0xf0
#define GE_STATUS_OFF		0xf8
static void __iomem *regbase;
void wmt_ge_fillrect(struct fb_info *p, const struct fb_fillrect *rect)
EXPORT_SYMBOL_GPL(wmt_ge_fillrect);
void wmt_ge_copyarea(struct fb_info *p, const struct fb_copyarea *area)
EXPORT_SYMBOL_GPL(wmt_ge_copyarea);
int wmt_ge_sync(struct fb_info *p)
EXPORT_SYMBOL_GPL(wmt_ge_sync);
static int __devinit wmt_ge_rops_probe(struct platform_device *pdev)
static int __devexit wmt_ge_rops_remove(struct platform_device *pdev)
static struct platform_driver wmt_ge_rops_driver = ;
static int __init wmt_ge_rops_init(void)
static void __exit wmt_ge_rops_exit(void)
module_init(wmt_ge_rops_init);
module_exit(wmt_ge_rops_exit);
MODULE_AUTHOR("Alexey Charkov <alchark@gmail.com");
MODULE_DESCRIPTION("Accelerators for raster operations using "
"WonderMedia Graphics Engine");
MODULE_LICENSE("GPL");
