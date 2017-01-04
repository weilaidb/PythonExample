#define smdbg(format, arg...) printk(KERN_DEBUG format , ## arg)
#define smdbg(format, arg...)
struct screen_info smtc_screen_info;
struct smtcfb_info ;
struct par_info ;
struct vesa_mode_table	;
static struct vesa_mode_table vesa_mode[] = ;
char __iomem *smtc_RegBaseAddress;
char __iomem *smtc_VRAMBaseAddress;
static u32 colreg[17];
static struct par_info hw;
u16 smtc_ChipIDs[] = ;
#define numSMTCchipIDs ARRAY_SIZE(smtc_ChipIDs)
static struct fb_var_screeninfo smtcfb_var = ;
static struct fb_fix_screeninfo smtcfb_fix = ;
static void sm712_set_timing(struct smtcfb_info *sfb,
struct par_info *ppar_info)
static void sm712_setpalette(int regno, unsigned red, unsigned green,
unsigned blue, struct fb_info *info)
static void smtc_set_timing(struct smtcfb_info *sfb, struct par_info
*ppar_info)
static inline unsigned int chan_to_field(unsigned int chan,
struct fb_bitfield *bf)
static int cfb_blank(int blank_mode, struct fb_info *info)
static int smtc_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned trans, struct fb_info *info)
static ssize_t smtcfb_read(struct fb_info *info, char __user * buf, size_t
count, loff_t *ppos)
static ssize_t
smtcfb_write(struct fb_info *info, const char __user *buf, size_t count,
loff_t *ppos)
void smtcfb_setmode(struct smtcfb_info *sfb)
static int smtc_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int smtc_set_par(struct fb_info *info)
static struct fb_ops smtcfb_ops = ;
static struct smtcfb_info *smtc_alloc_fb_info(struct pci_dev *dev,
char *name)
static void smtc_unmap_mmio(struct smtcfb_info *sfb)
static int smtc_map_smem(struct smtcfb_info *sfb,
struct pci_dev *dev, u_long smem_len)
static void smtc_unmap_smem(struct smtcfb_info *sfb)
static inline void sm7xx_init_hw(void)
static void smtc_free_fb_info(struct smtcfb_info *sfb)
static int __init sm712vga_setup(char *options)
__setup("vga=", sm712vga_setup);
static int __devinit smtcfb_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static DEFINE_PCI_DEVICE_TABLE(smtcfb_pci_table) = ;
static void __devexit smtcfb_pci_remove(struct pci_dev *pdev)
static int smtcfb_pci_suspend(struct device *device)
static int smtcfb_pci_resume(struct device *device)
static const struct dev_pm_ops sm7xx_pm_ops = ;
#define SM7XX_PM_OPS (&sm7xx_pm_ops)
#define SM7XX_PM_OPS NULL
static struct pci_driver smtcfb_driver = ;
static int __init smtcfb_init(void)
static void __exit smtcfb_exit(void)
module_init(smtcfb_init);
module_exit(smtcfb_exit);
MODULE_AUTHOR("Siliconmotion ");
MODULE_DESCRIPTION("Framebuffer driver for SMI Graphic Cards");
MODULE_LICENSE("GPL");
