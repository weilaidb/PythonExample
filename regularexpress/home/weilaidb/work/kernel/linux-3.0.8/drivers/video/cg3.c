static int cg3_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int cg3_blank(int, struct fb_info *);
static int cg3_mmap(struct fb_info *, struct vm_area_struct *);
static int cg3_ioctl(struct fb_info *, unsigned int, unsigned long);
static struct fb_ops cg3_ops = ;
#define CG3_CR_ENABLE_INTS      0x80
#define CG3_CR_ENABLE_VIDEO     0x40
#define CG3_CR_ENABLE_TIMING    0x20
#define CG3_CR_ENABLE_CURCMP    0x10
#define CG3_CR_XTAL_MASK        0x0c
#define CG3_CR_DIVISOR_MASK     0x03
#define CG3_SR_PENDING_INT      0x80
#define CG3_SR_RES_MASK         0x70
#define CG3_SR_1152_900_76_A    0x40
#define CG3_SR_1152_900_76_B    0x60
#define CG3_SR_ID_MASK          0x0f
#define CG3_SR_ID_COLOR         0x01
#define CG3_SR_ID_MONO          0x02
#define CG3_SR_ID_MONO_ECL      0x03
enum cg3_type ;
struct bt_regs ;
struct cg3_regs ;
#define CG3_REGS_OFFSET	     0x400000UL
#define CG3_RAM_OFFSET	     0x800000UL
struct cg3_par ;
static int cg3_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int cg3_blank(int blank, struct fb_info *info)
static struct sbus_mmap_map cg3_mmap_map[] = ;
static int cg3_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int cg3_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static void __devinit cg3_init_fix(struct fb_info *info, int linebytes,
struct device_node *dp)
static void __devinit cg3_rdi_maybe_fixup_var(struct fb_var_screeninfo *var,
struct device_node *dp)
static u8 cg3regvals_66hz[] __devinitdata = ;
static u8 cg3regvals_76hz[] __devinitdata = ;
static u8 cg3regvals_rdi[] __devinitdata = ;
static u8 *cg3_regvals[] __devinitdata = ;
static u_char cg3_dacvals[] __devinitdata = ;
static int __devinit cg3_do_default_mode(struct cg3_par *par)
static int __devinit cg3_probe(struct platform_device *op)
static int __devexit cg3_remove(struct platform_device *op)
static const struct of_device_id cg3_match[] = ;
MODULE_DEVICE_TABLE(of, cg3_match);
static struct platform_driver cg3_driver = ;
static int __init cg3_init(void)
static void __exit cg3_exit(void)
module_init(cg3_init);
module_exit(cg3_exit);
MODULE_DESCRIPTION("framebuffer driver for CGthree chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
