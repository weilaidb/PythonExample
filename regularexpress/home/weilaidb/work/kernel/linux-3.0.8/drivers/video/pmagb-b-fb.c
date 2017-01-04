struct pmagbbfb_par ;
static struct fb_var_screeninfo pmagbbfb_defined __devinitdata = ;
static struct fb_fix_screeninfo pmagbbfb_fix __devinitdata = ;
static inline void sfb_write(struct pmagbbfb_par *par, unsigned int reg, u32 v)
static inline u32 sfb_read(struct pmagbbfb_par *par, unsigned int reg)
static inline void dac_write(struct pmagbbfb_par *par, unsigned int reg, u8 v)
static inline u8 dac_read(struct pmagbbfb_par *par, unsigned int reg)
static inline void gp0_write(struct pmagbbfb_par *par, u32 v)
static int pmagbbfb_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static struct fb_ops pmagbbfb_ops = ;
static void __init pmagbbfb_erase_cursor(struct fb_info *info)
static void __devinit pmagbbfb_screen_setup(struct fb_info *info)
;
static void __devinit pmagbbfb_osc_setup(struct fb_info *info)
;
static int __devinit pmagbbfb_probe(struct device *dev)
static int __exit pmagbbfb_remove(struct device *dev)
static const struct tc_device_id pmagbbfb_tc_table[] = ;
MODULE_DEVICE_TABLE(tc, pmagbbfb_tc_table);
static struct tc_driver pmagbbfb_driver = ;
static int __init pmagbbfb_init(void)
static void __exit pmagbbfb_exit(void)
module_init(pmagbbfb_init);
module_exit(pmagbbfb_exit);
MODULE_LICENSE("GPL");
