#define to_clcd(info)	container_of(info, struct clcd_fb, fb)
static const char *clcd_name = "CLCD FB";
static inline void clcdfb_sleep(unsigned int ms)
static inline void clcdfb_set_start(struct clcd_fb *fb)
static void clcdfb_disable(struct clcd_fb *fb)
static void clcdfb_enable(struct clcd_fb *fb, u32 cntl)
static int
clcdfb_set_bitfields(struct clcd_fb *fb, struct fb_var_screeninfo *var)
static int clcdfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int clcdfb_set_par(struct fb_info *info)
static inline u32 convert_bitfield(int val, struct fb_bitfield *bf)
static int
clcdfb_setcolreg(unsigned int regno, unsigned int red, unsigned int green,
unsigned int blue, unsigned int transp, struct fb_info *info)
static int clcdfb_blank(int blank_mode, struct fb_info *info)
static int clcdfb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
static struct fb_ops clcdfb_ops = ;
static int clcdfb_register(struct clcd_fb *fb)
static int clcdfb_probe(struct amba_device *dev, const struct amba_id *id)
static int clcdfb_remove(struct amba_device *dev)
static struct amba_id clcdfb_id_table[] = ;
static struct amba_driver clcd_driver = ;
static int __init amba_clcdfb_init(void)
module_init(amba_clcdfb_init);
static void __exit amba_clcdfb_exit(void)
module_exit(amba_clcdfb_exit);
MODULE_DESCRIPTION("ARM PrimeCell PL110 CLCD core driver");
MODULE_LICENSE("GPL");
