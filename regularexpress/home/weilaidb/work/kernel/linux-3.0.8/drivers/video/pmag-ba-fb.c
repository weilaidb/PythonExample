struct pmagbafb_par ;
static struct fb_var_screeninfo pmagbafb_defined __devinitdata = ;
static struct fb_fix_screeninfo pmagbafb_fix __devinitdata = ;
static inline void dac_write(struct pmagbafb_par *par, unsigned int reg, u8 v)
static inline u8 dac_read(struct pmagbafb_par *par, unsigned int reg)
static int pmagbafb_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static struct fb_ops pmagbafb_ops = ;
static void __init pmagbafb_erase_cursor(struct fb_info *info)
static int __devinit pmagbafb_probe(struct device *dev)
static int __exit pmagbafb_remove(struct device *dev)
static const struct tc_device_id pmagbafb_tc_table[] = ;
MODULE_DEVICE_TABLE(tc, pmagbafb_tc_table);
static struct tc_driver pmagbafb_driver = ;
static int __init pmagbafb_init(void)
static void __exit pmagbafb_exit(void)
module_init(pmagbafb_init);
module_exit(pmagbafb_exit);
MODULE_LICENSE("GPL");
