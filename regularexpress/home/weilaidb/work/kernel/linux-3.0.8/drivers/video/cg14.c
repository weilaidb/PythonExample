static int cg14_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int cg14_mmap(struct fb_info *, struct vm_area_struct *);
static int cg14_ioctl(struct fb_info *, unsigned int, unsigned long);
static int cg14_pan_display(struct fb_var_screeninfo *, struct fb_info *);
static struct fb_ops cg14_ops = ;
#define CG14_MCR_INTENABLE_SHIFT	7
#define CG14_MCR_INTENABLE_MASK		0x80
#define CG14_MCR_VIDENABLE_SHIFT	6
#define CG14_MCR_VIDENABLE_MASK		0x40
#define CG14_MCR_PIXMODE_SHIFT		4
#define CG14_MCR_PIXMODE_MASK		0x30
#define CG14_MCR_TMR_SHIFT		2
#define CG14_MCR_TMR_MASK		0x0c
#define CG14_MCR_TMENABLE_SHIFT		1
#define CG14_MCR_TMENABLE_MASK		0x02
#define CG14_MCR_RESET_SHIFT		0
#define CG14_MCR_RESET_MASK		0x01
#define CG14_REV_REVISION_SHIFT		4
#define CG14_REV_REVISION_MASK		0xf0
#define CG14_REV_IMPL_SHIFT		0
#define CG14_REV_IMPL_MASK		0x0f
#define CG14_VBR_FRAMEBASE_SHIFT	12
#define CG14_VBR_FRAMEBASE_MASK		0x00fff000
#define CG14_VMCR1_SETUP_SHIFT		0
#define CG14_VMCR1_SETUP_MASK		0x000001ff
#define CG14_VMCR1_VCONFIG_SHIFT	9
#define CG14_VMCR1_VCONFIG_MASK		0x00000e00
#define CG14_VMCR2_REFRESH_SHIFT	0
#define CG14_VMCR2_REFRESH_MASK		0x00000001
#define CG14_VMCR2_TESTROWCNT_SHIFT	1
#define CG14_VMCR2_TESTROWCNT_MASK	0x00000002
#define CG14_VMCR2_FBCONFIG_SHIFT	2
#define CG14_VMCR2_FBCONFIG_MASK	0x0000000c
#define CG14_VCR_REFRESHREQ_SHIFT	0
#define CG14_VCR_REFRESHREQ_MASK	0x000003ff
#define CG14_VCR1_REFRESHENA_SHIFT	10
#define CG14_VCR1_REFRESHENA_MASK	0x00000400
#define CG14_VCA_CAD_SHIFT		0
#define CG14_VCA_CAD_MASK		0x000003ff
#define CG14_VCA_VERS_SHIFT		10
#define CG14_VCA_VERS_MASK		0x00000c00
#define CG14_VCA_RAMSPEED_SHIFT		12
#define CG14_VCA_RAMSPEED_MASK		0x00001000
#define CG14_VCA_8MB_SHIFT		13
#define CG14_VCA_8MB_MASK		0x00002000
#define CG14_MCR_PIXMODE_8		0
#define CG14_MCR_PIXMODE_16		2
#define CG14_MCR_PIXMODE_32		3
struct cg14_regs;
#define CG14_CCR_ENABLE	0x04
#define CG14_CCR_SELECT 0x02
struct cg14_cursor ;
struct cg14_dac ;
struct cg14_xlut;
struct cg14_clut ;
#define CG14_MMAP_ENTRIES	16
struct cg14_par ;
static void __cg14_reset(struct cg14_par *par)
static int cg14_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int cg14_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int cg14_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int cg14_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static void __devinit cg14_init_fix(struct fb_info *info, int linebytes,
struct device_node *dp)
static struct sbus_mmap_map __cg14_mmap_map[CG14_MMAP_ENTRIES] __devinitdata = ;
static void cg14_unmap_regs(struct platform_device *op, struct fb_info *info,
struct cg14_par *par)
static int __devinit cg14_probe(struct platform_device *op)
static int __devexit cg14_remove(struct platform_device *op)
static const struct of_device_id cg14_match[] = ;
MODULE_DEVICE_TABLE(of, cg14_match);
static struct platform_driver cg14_driver = ;
static int __init cg14_init(void)
static void __exit cg14_exit(void)
module_init(cg14_init);
module_exit(cg14_exit);
MODULE_DESCRIPTION("framebuffer driver for CGfourteen chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
