#define write_ind(num, val, ap, dp)	do  while (0)
#define read_ind(num, var, ap, dp)	do  while (0)
#define write_xr(num, val)	write_ind(num, val, 0x3d6, 0x3d7)
#define read_xr(num, var)	read_ind(num, var, 0x3d6, 0x3d7)
#define write_fr(num, val)	write_ind(num, val, 0x3d0, 0x3d1)
#define read_fr(num, var)	read_ind(num, var, 0x3d0, 0x3d1)
#define write_cr(num, val)	write_ind(num, val, 0x3d4, 0x3d5)
#define read_cr(num, var)	read_ind(num, var, 0x3d4, 0x3d5)
#define write_gr(num, val)	write_ind(num, val, 0x3ce, 0x3cf)
#define read_gr(num, var)	read_ind(num, var, 0x3ce, 0x3cf)
#define write_sr(num, val)	write_ind(num, val, 0x3c4, 0x3c5)
#define read_sr(num, var)	read_ind(num, var, 0x3c4, 0x3c5)
#define write_ar(num, val)	do  while (0)
#define read_ar(num, var)	do  while (0)
int chips_init(void);
static int chipsfb_pci_init(struct pci_dev *dp, const struct pci_device_id *);
static int chipsfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int chipsfb_set_par(struct fb_info *info);
static int chipsfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int chipsfb_blank(int blank, struct fb_info *info);
static struct fb_ops chipsfb_ops = ;
static int chipsfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int chipsfb_set_par(struct fb_info *info)
static int chipsfb_blank(int blank, struct fb_info *info)
static int chipsfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
struct chips_init_reg ;
static struct chips_init_reg chips_init_sr[] = ;
static struct chips_init_reg chips_init_gr[] = ;
static struct chips_init_reg chips_init_ar[] = ;
static struct chips_init_reg chips_init_cr[] = ;
static struct chips_init_reg chips_init_fr[] = ;
static struct chips_init_reg chips_init_xr[] = ;
static void __init chips_hw_init(void)
static struct fb_fix_screeninfo chipsfb_fix __devinitdata = ;
static struct fb_var_screeninfo chipsfb_var __devinitdata = ;
static void __devinit init_chips(struct fb_info *p, unsigned long addr)
static int __devinit
chipsfb_pci_init(struct pci_dev *dp, const struct pci_device_id *ent)
static void __devexit chipsfb_remove(struct pci_dev *dp)
static int chipsfb_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int chipsfb_pci_resume(struct pci_dev *pdev)
static struct pci_device_id chipsfb_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, chipsfb_pci_tbl);
static struct pci_driver chipsfb_driver = ;
int __init chips_init(void)
module_init(chips_init);
static void __exit chipsfb_exit(void)
MODULE_LICENSE("GPL");
