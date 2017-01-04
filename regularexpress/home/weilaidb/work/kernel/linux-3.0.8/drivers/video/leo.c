static int leo_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int leo_blank(int, struct fb_info *);
static int leo_mmap(struct fb_info *, struct vm_area_struct *);
static int leo_ioctl(struct fb_info *, unsigned int, unsigned long);
static int leo_pan_display(struct fb_var_screeninfo *, struct fb_info *);
static struct fb_ops leo_ops = ;
#define LEO_OFF_LC_SS0_KRN	0x00200000UL
#define LEO_OFF_LC_SS0_USR	0x00201000UL
#define LEO_OFF_LC_SS1_KRN	0x01200000UL
#define LEO_OFF_LC_SS1_USR	0x01201000UL
#define LEO_OFF_LD_SS0		0x00400000UL
#define LEO_OFF_LD_SS1		0x01400000UL
#define LEO_OFF_LD_GBL		0x00401000UL
#define LEO_OFF_LX_KRN		0x00600000UL
#define LEO_OFF_LX_CURSOR	0x00601000UL
#define LEO_OFF_SS0		0x00800000UL
#define LEO_OFF_SS1		0x01800000UL
#define LEO_OFF_UNK		0x00602000UL
#define LEO_OFF_UNK2		0x00000000UL
#define LEO_CUR_ENABLE		0x00000080
#define LEO_CUR_UPDATE		0x00000030
#define LEO_CUR_PROGRESS	0x00000006
#define LEO_CUR_UPDATECMAP	0x00000003
#define LEO_CUR_TYPE_MASK	0x00000000
#define LEO_CUR_TYPE_IMAGE	0x00000020
#define LEO_CUR_TYPE_CMAP	0x00000050
struct leo_cursor ;
#define LEO_KRN_TYPE_CLUT0	0x00001000
#define LEO_KRN_TYPE_CLUT1	0x00001001
#define LEO_KRN_TYPE_CLUT2	0x00001002
#define LEO_KRN_TYPE_WID	0x00001003
#define LEO_KRN_TYPE_UNK	0x00001006
#define LEO_KRN_TYPE_VIDEO	0x00002003
#define LEO_KRN_TYPE_CLUTDATA	0x00004000
#define LEO_KRN_CSR_ENABLE	0x00000008
#define LEO_KRN_CSR_PROGRESS	0x00000004
#define LEO_KRN_CSR_UNK		0x00000002
#define LEO_KRN_CSR_UNK2	0x00000001
struct leo_lx_krn ;
struct leo_lc_ss0_krn ;
struct leo_lc_ss0_usr ;
struct leo_lc_ss1_krn ;
struct leo_lc_ss1_usr ;
struct leo_ld_ss0 ;
#define LEO_SS1_MISC_ENABLE	0x00000001
#define LEO_SS1_MISC_STEREO	0x00000002
struct leo_ld_ss1 ;
struct leo_ld_gbl ;
struct leo_par ;
static void leo_wait(struct leo_lx_krn __iomem *lx_krn)
static void leo_switch_from_graph(struct fb_info *info)
static int leo_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int leo_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int leo_blank(int blank, struct fb_info *info)
static struct sbus_mmap_map leo_mmap_map[] = ;
static int leo_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int leo_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static void
leo_init_fix(struct fb_info *info, struct device_node *dp)
static void leo_wid_put(struct fb_info *info, struct fb_wid_list *wl)
static void leo_init_wids(struct fb_info *info)
static void leo_init_hw(struct fb_info *info)
static void leo_fixup_var_rgb(struct fb_var_screeninfo *var)
static void leo_unmap_regs(struct platform_device *op, struct fb_info *info,
struct leo_par *par)
static int __devinit leo_probe(struct platform_device *op)
static int __devexit leo_remove(struct platform_device *op)
static const struct of_device_id leo_match[] = ;
MODULE_DEVICE_TABLE(of, leo_match);
static struct platform_driver leo_driver = ;
static int __init leo_init(void)
static void __exit leo_exit(void)
module_init(leo_init);
module_exit(leo_exit);
MODULE_DESCRIPTION("framebuffer driver for LEO chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
