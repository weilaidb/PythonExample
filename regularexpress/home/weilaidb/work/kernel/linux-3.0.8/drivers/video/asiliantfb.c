static const unsigned Fref = 14318180;
#define mmio_base (p->screen_base + 0x400000)
#define mm_write_ind(num, val, ap, dp)	do  while (0)
static void mm_write_xr(struct fb_info *p, u8 reg, u8 data)
#define write_xr(num, val)	mm_write_xr(p, num, val)
static void mm_write_fr(struct fb_info *p, u8 reg, u8 data)
#define write_fr(num, val)	mm_write_fr(p, num, val)
static void mm_write_cr(struct fb_info *p, u8 reg, u8 data)
#define write_cr(num, val)	mm_write_cr(p, num, val)
static void mm_write_gr(struct fb_info *p, u8 reg, u8 data)
#define write_gr(num, val)	mm_write_gr(p, num, val)
static void mm_write_sr(struct fb_info *p, u8 reg, u8 data)
#define write_sr(num, val)	mm_write_sr(p, num, val)
static void mm_write_ar(struct fb_info *p, u8 reg, u8 data)
#define write_ar(num, val)	mm_write_ar(p, num, val)
static int asiliantfb_pci_init(struct pci_dev *dp, const struct pci_device_id *);
static int asiliantfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int asiliantfb_set_par(struct fb_info *info);
static int asiliantfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static struct fb_ops asiliantfb_ops = ;
static void asiliant_calc_dclk2(u32 *ppixclock, u8 *dclk2_m, u8 *dclk2_n, u8 *dclk2_div)
static void asiliant_set_timing(struct fb_info *p)
static int asiliantfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *p)
static int asiliantfb_set_par(struct fb_info *p)
static int asiliantfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *p)
struct chips_init_reg ;
static struct chips_init_reg chips_init_sr[] =
;
static struct chips_init_reg chips_init_gr[] =
;
static struct chips_init_reg chips_init_ar[] =
;
static struct chips_init_reg chips_init_cr[] =
;
static struct chips_init_reg chips_init_fr[] =
;
static struct chips_init_reg chips_init_xr[] =
;
static void __devinit chips_hw_init(struct fb_info *p)
static struct fb_fix_screeninfo asiliantfb_fix __devinitdata = ;
static struct fb_var_screeninfo asiliantfb_var __devinitdata = ;
static int __devinit init_asiliant(struct fb_info *p, unsigned long addr)
static int __devinit
asiliantfb_pci_init(struct pci_dev *dp, const struct pci_device_id *ent)
static void __devexit asiliantfb_remove(struct pci_dev *dp)
static struct pci_device_id asiliantfb_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, asiliantfb_pci_tbl);
static struct pci_driver asiliantfb_driver = ;
static int __init asiliantfb_init(void)
module_init(asiliantfb_init);
static void __exit asiliantfb_exit(void)
MODULE_LICENSE("GPL");
