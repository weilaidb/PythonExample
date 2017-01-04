static int cg6_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int cg6_blank(int, struct fb_info *);
static void cg6_imageblit(struct fb_info *, const struct fb_image *);
static void cg6_fillrect(struct fb_info *, const struct fb_fillrect *);
static void cg6_copyarea(struct fb_info *info, const struct fb_copyarea *area);
static int cg6_sync(struct fb_info *);
static int cg6_mmap(struct fb_info *, struct vm_area_struct *);
static int cg6_ioctl(struct fb_info *, unsigned int, unsigned long);
static int cg6_pan_display(struct fb_var_screeninfo *, struct fb_info *);
static struct fb_ops cg6_ops = ;
#define CG6_ROM_OFFSET			0x0UL
#define CG6_BROOKTREE_OFFSET		0x200000UL
#define CG6_DHC_OFFSET			0x240000UL
#define CG6_ALT_OFFSET			0x280000UL
#define CG6_FHC_OFFSET			0x300000UL
#define CG6_THC_OFFSET			0x301000UL
#define CG6_FBC_OFFSET			0x700000UL
#define CG6_TEC_OFFSET			0x701000UL
#define CG6_RAM_OFFSET			0x800000UL
#define CG6_FHC_FBID_SHIFT		24
#define CG6_FHC_FBID_MASK		255
#define CG6_FHC_REV_SHIFT		20
#define CG6_FHC_REV_MASK		15
#define CG6_FHC_FROP_DISABLE		(1 << 19)
#define CG6_FHC_ROW_DISABLE		(1 << 18)
#define CG6_FHC_SRC_DISABLE		(1 << 17)
#define CG6_FHC_DST_DISABLE		(1 << 16)
#define CG6_FHC_RESET			(1 << 15)
#define CG6_FHC_LITTLE_ENDIAN		(1 << 13)
#define CG6_FHC_RES_MASK		(3 << 11)
#define CG6_FHC_1024			(0 << 11)
#define CG6_FHC_1152			(1 << 11)
#define CG6_FHC_1280			(2 << 11)
#define CG6_FHC_1600			(3 << 11)
#define CG6_FHC_CPU_MASK		(3 << 9)
#define CG6_FHC_CPU_SPARC		(0 << 9)
#define CG6_FHC_CPU_68020		(1 << 9)
#define CG6_FHC_CPU_386			(2 << 9)
#define CG6_FHC_TEST			(1 << 8)
#define CG6_FHC_TEST_X_SHIFT		4
#define CG6_FHC_TEST_X_MASK		15
#define CG6_FHC_TEST_Y_SHIFT		0
#define CG6_FHC_TEST_Y_MASK		15
#define CG6_FBC_BLIT_IGNORE		0x00000000
#define CG6_FBC_BLIT_NOSRC		0x00100000
#define CG6_FBC_BLIT_SRC		0x00200000
#define CG6_FBC_BLIT_ILLEGAL		0x00300000
#define CG6_FBC_BLIT_MASK		0x00300000
#define CG6_FBC_VBLANK			0x00080000
#define CG6_FBC_MODE_IGNORE		0x00000000
#define CG6_FBC_MODE_COLOR8		0x00020000
#define CG6_FBC_MODE_COLOR1		0x00040000
#define CG6_FBC_MODE_HRMONO		0x00060000
#define CG6_FBC_MODE_MASK		0x00060000
#define CG6_FBC_DRAW_IGNORE		0x00000000
#define CG6_FBC_DRAW_RENDER		0x00008000
#define CG6_FBC_DRAW_PICK		0x00010000
#define CG6_FBC_DRAW_ILLEGAL		0x00018000
#define CG6_FBC_DRAW_MASK		0x00018000
#define CG6_FBC_BWRITE0_IGNORE		0x00000000
#define CG6_FBC_BWRITE0_ENABLE		0x00002000
#define CG6_FBC_BWRITE0_DISABLE		0x00004000
#define CG6_FBC_BWRITE0_ILLEGAL		0x00006000
#define CG6_FBC_BWRITE0_MASK		0x00006000
#define CG6_FBC_BWRITE1_IGNORE		0x00000000
#define CG6_FBC_BWRITE1_ENABLE		0x00000800
#define CG6_FBC_BWRITE1_DISABLE		0x00001000
#define CG6_FBC_BWRITE1_ILLEGAL		0x00001800
#define CG6_FBC_BWRITE1_MASK		0x00001800
#define CG6_FBC_BREAD_IGNORE		0x00000000
#define CG6_FBC_BREAD_0			0x00000200
#define CG6_FBC_BREAD_1			0x00000400
#define CG6_FBC_BREAD_ILLEGAL		0x00000600
#define CG6_FBC_BREAD_MASK		0x00000600
#define CG6_FBC_BDISP_IGNORE		0x00000000
#define CG6_FBC_BDISP_0			0x00000080
#define CG6_FBC_BDISP_1			0x00000100
#define CG6_FBC_BDISP_ILLEGAL		0x00000180
#define CG6_FBC_BDISP_MASK		0x00000180
#define CG6_FBC_INDEX_MOD		0x00000040
#define CG6_FBC_INDEX_MASK		0x00000030
#define CG6_THC_MISC_REV_SHIFT		16
#define CG6_THC_MISC_REV_MASK		15
#define CG6_THC_MISC_RESET		(1 << 12)
#define CG6_THC_MISC_VIDEO		(1 << 10)
#define CG6_THC_MISC_SYNC		(1 << 9)
#define CG6_THC_MISC_VSYNC		(1 << 8)
#define CG6_THC_MISC_SYNC_ENAB		(1 << 7)
#define CG6_THC_MISC_CURS_RES		(1 << 6)
#define CG6_THC_MISC_INT_ENAB		(1 << 5)
#define CG6_THC_MISC_INT		(1 << 4)
#define CG6_THC_MISC_INIT		0x9f
#define CG6_THC_CURSOFF			((65536-32) | ((65536-32) << 16))
struct cg6_tec ;
struct cg6_thc ;
struct cg6_fbc ;
struct bt_regs ;
struct cg6_par ;
static int cg6_sync(struct fb_info *info)
static void cg6_switch_from_graph(struct cg6_par *par)
static int cg6_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static void cg6_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void cg6_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void cg6_imageblit(struct fb_info *info, const struct fb_image *image)
static int cg6_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int cg6_blank(int blank, struct fb_info *info)
static struct sbus_mmap_map cg6_mmap_map[] = ;
static int cg6_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int cg6_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static void __devinit cg6_init_fix(struct fb_info *info, int linebytes)
static void __devinit cg6_bt_init(struct cg6_par *par)
static void __devinit cg6_chip_init(struct fb_info *info)
static void cg6_unmap_regs(struct platform_device *op, struct fb_info *info,
struct cg6_par *par)
static int __devinit cg6_probe(struct platform_device *op)
static int __devexit cg6_remove(struct platform_device *op)
static const struct of_device_id cg6_match[] = ;
MODULE_DEVICE_TABLE(of, cg6_match);
static struct platform_driver cg6_driver = ;
static int __init cg6_init(void)
static void __exit cg6_exit(void)
module_init(cg6_init);
module_exit(cg6_exit);
MODULE_DESCRIPTION("framebuffer driver for CGsix chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
