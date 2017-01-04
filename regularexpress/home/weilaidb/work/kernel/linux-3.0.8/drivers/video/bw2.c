static int bw2_blank(int, struct fb_info *);
static int bw2_mmap(struct fb_info *, struct vm_area_struct *);
static int bw2_ioctl(struct fb_info *, unsigned int, unsigned long);
static struct fb_ops bw2_ops = ;
#define BWTWO_REGISTER_OFFSET 0x400000
struct bt_regs ;
struct bw2_regs ;
#define BWTWO_SR_RES_MASK	0x70
#define BWTWO_SR_1600_1280	0x50
#define BWTWO_SR_1152_900_76_A	0x40
#define BWTWO_SR_1152_900_76_B	0x60
#define BWTWO_SR_ID_MASK	0x0f
#define BWTWO_SR_ID_MONO	0x02
#define BWTWO_SR_ID_MONO_ECL	0x03
#define BWTWO_SR_ID_MSYNC	0x04
#define BWTWO_SR_ID_NOCONN	0x0a
#define BWTWO_CTL_ENABLE_INTS   0x80
#define BWTWO_CTL_ENABLE_VIDEO  0x40
#define BWTWO_CTL_ENABLE_TIMING 0x20
#define BWTWO_CTL_ENABLE_CURCMP 0x10
#define BWTWO_CTL_XTAL_MASK     0x0C
#define BWTWO_CTL_DIVISOR_MASK  0x03
#define BWTWO_STAT_PENDING_INT  0x80
#define BWTWO_STAT_MSENSE_MASK  0x70
#define BWTWO_STAT_ID_MASK      0x0f
struct bw2_par ;
static int
bw2_blank(int blank, struct fb_info *info)
static struct sbus_mmap_map bw2_mmap_map[] = ;
static int bw2_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int bw2_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static void __devinit bw2_init_fix(struct fb_info *info, int linebytes)
static u8 bw2regs_1600[] __devinitdata = ;
static u8 bw2regs_ecl[] __devinitdata = ;
static u8 bw2regs_analog[] __devinitdata = ;
static u8 bw2regs_76hz[] __devinitdata = ;
static u8 bw2regs_66hz[] __devinitdata = ;
static int __devinit bw2_do_default_mode(struct bw2_par *par,
struct fb_info *info,
int *linebytes)
static int __devinit bw2_probe(struct platform_device *op)
static int __devexit bw2_remove(struct platform_device *op)
static const struct of_device_id bw2_match[] = ;
MODULE_DEVICE_TABLE(of, bw2_match);
static struct platform_driver bw2_driver = ;
static int __init bw2_init(void)
static void __exit bw2_exit(void)
module_init(bw2_init);
module_exit(bw2_exit);
MODULE_DESCRIPTION("framebuffer driver for BWTWO chipsets");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
