#undef DEBUG
#if defined(CONFIG_OF)
#define NR_PALETTE		256
#define MB862XX_MEM_SIZE	0x1000000
#define CORALP_MEM_SIZE		0x2000000
#define CARMINE_MEM_SIZE	0x8000000
#define DRV_NAME		"mb862xxfb"
#if defined(CONFIG_SOCRATES)
static struct mb862xx_gc_mode socrates_gc_mode = ;
static inline int h_total(struct fb_var_screeninfo *var)
static inline int v_total(struct fb_var_screeninfo *var)
static inline int hsp(struct fb_var_screeninfo *var)
static inline int vsp(struct fb_var_screeninfo *var)
static inline int d_pitch(struct fb_var_screeninfo *var)
static inline unsigned int chan_to_field(unsigned int chan,
struct fb_bitfield *bf)
static int mb862xxfb_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int mb862xxfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *fbi)
static int mb862xxfb_set_par(struct fb_info *fbi)
static int mb862xxfb_pan(struct fb_var_screeninfo *var,
struct fb_info *info)
static int mb862xxfb_blank(int mode, struct fb_info *fbi)
static int mb862xxfb_ioctl(struct fb_info *fbi, unsigned int cmd,
unsigned long arg)
static struct fb_ops mb862xxfb_ops = ;
static int mb862xxfb_init_fbinfo(struct fb_info *fbi)
static ssize_t mb862xxfb_show_dispregs(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(dispregs, 0444, mb862xxfb_show_dispregs, NULL);
irqreturn_t mb862xx_intr(int irq, void *dev_id)
#if defined(CONFIG_FB_MB862XX_LIME)
static int mb862xx_gdc_init(struct mb862xxfb_par *par)
static int __devinit of_platform_mb862xx_probe(struct platform_device *ofdev)
static int __devexit of_platform_mb862xx_remove(struct platform_device *ofdev)
static struct of_device_id __devinitdata of_platform_mb862xx_tbl[] = ;
static struct platform_driver of_platform_mb862xxfb_driver = ;
#if defined(CONFIG_FB_MB862XX_PCI_GDC)
static int coralp_init(struct mb862xxfb_par *par)
static int init_dram_ctrl(struct mb862xxfb_par *par)
static int carmine_init(struct mb862xxfb_par *par)
static inline int mb862xx_pci_gdc_init(struct mb862xxfb_par *par)
#define CHIP_ID(id)	\
static struct pci_device_id mb862xx_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, mb862xx_pci_tbl);
static int __devinit mb862xx_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit mb862xx_pci_remove(struct pci_dev *pdev)
static struct pci_driver mb862xxfb_pci_driver = ;
static int __devinit mb862xxfb_init(void)
static void __exit mb862xxfb_exit(void)
module_init(mb862xxfb_init);
module_exit(mb862xxfb_exit);
MODULE_DESCRIPTION("Fujitsu MB862xx Framebuffer driver");
MODULE_AUTHOR("Anatolij Gustschin <agust@denx.de>");
MODULE_LICENSE("GPL v2");
