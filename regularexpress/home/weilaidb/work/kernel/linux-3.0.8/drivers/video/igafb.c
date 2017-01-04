struct pci_mmap_map ;
struct iga_par ;
struct fb_info fb_info;
struct fb_fix_screeninfo igafb_fix __initdata = ;
struct fb_var_screeninfo default_var = ;
struct fb_var_screeninfo default_var_1024x768 __initdata = ;
struct fb_var_screeninfo default_var_1152x900 __initdata = ;
struct fb_var_screeninfo default_var_1280x1024 __initdata = ;
#define pci_inb(par, reg)        readb(par->io_base+(reg))
#define pci_outb(par, val, reg)  writeb(val, par->io_base+(reg))
static inline unsigned int iga_inb(struct iga_par *par, unsigned int reg,
unsigned int idx)
static inline void iga_outb(struct iga_par *par, unsigned char val,
unsigned int reg, unsigned int idx )
static void iga_blank_border(struct iga_par *par)
static int igafb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
static int igafb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static struct fb_ops igafb_ops = ;
static int __init iga_init(struct fb_info *info, struct iga_par *par)
static int __init igafb_init(void)
static int __init igafb_setup(char *options)
module_init(igafb_init);
MODULE_LICENSE("GPL");
static struct pci_device_id igafb_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, igafb_pci_tbl);
