#undef DEBUG
#define GUI_RESERVE	(1 * PAGE_SIZE)
#define FAIL(msg) do  while (0)
#define FAIL_MAX(msg, x, _max_) do  while (0)
#define DPRINTK(fmt, args...)	printk(KERN_DEBUG "atyfb: " fmt, ## args)
#define DPRINTK(fmt, args...)
#define PRINTKI(fmt, args...)	printk(KERN_INFO "atyfb: " fmt, ## args)
#define PRINTKE(fmt, args...)	printk(KERN_ERR "atyfb: " fmt, ## args)
#if defined(CONFIG_PM) || defined(CONFIG_PMAC_BACKLIGHT) || \
defined (CONFIG_FB_ATY_GENERIC_LCD) || defined(CONFIG_FB_ATY_BACKLIGHT)
static const u32 lt_lcd_regs[] = ;
void aty_st_lcd(int index, u32 val, const struct atyfb_par *par)
u32 aty_ld_lcd(int index, const struct atyfb_par *par)
static void ATIReduceRatio(int *Numerator, int *Denominator)
struct pci_mmap_map ;
static struct fb_fix_screeninfo atyfb_fix __devinitdata = ;
static int atyfb_open(struct fb_info *info, int user);
static int atyfb_release(struct fb_info *info, int user);
static int atyfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int atyfb_set_par(struct fb_info *info);
static int atyfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int atyfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static int atyfb_blank(int blank, struct fb_info *info);
static int atyfb_ioctl(struct fb_info *info, u_int cmd, u_long arg);
static int atyfb_mmap(struct fb_info *info, struct vm_area_struct *vma);
static int atyfb_sync(struct fb_info *info);
static int aty_init(struct fb_info *info);
static void aty_get_crtc(const struct atyfb_par *par, struct crtc *crtc);
static void aty_set_crtc(const struct atyfb_par *par, const struct crtc *crtc);
static int aty_var_to_crtc(const struct fb_info *info,
const struct fb_var_screeninfo *var,
struct crtc *crtc);
static int aty_crtc_to_var(const struct crtc *crtc,
struct fb_var_screeninfo *var);
static void set_off_pitch(struct atyfb_par *par, const struct fb_info *info);
static int read_aty_sense(const struct atyfb_par *par);
static DEFINE_MUTEX(reboot_lock);
static struct fb_info *reboot_info;
static struct fb_var_screeninfo default_var = ;
static struct fb_videomode defmode = ;
static struct fb_ops atyfb_ops = ;
static int noaccel;
static int nomtrr;
static int vram;
static int pll;
static int mclk;
static int xclk;
static int comp_sync __devinitdata = -1;
static char *mode;
static int backlight __devinitdata = 1;
static int backlight __devinitdata = 0;
static int default_vmode __devinitdata = VMODE_CHOOSE;
static int default_cmode __devinitdata = CMODE_CHOOSE;
module_param_named(vmode, default_vmode, int, 0);
MODULE_PARM_DESC(vmode, "int: video mode for mac");
module_param_named(cmode, default_cmode, int, 0);
MODULE_PARM_DESC(cmode, "int: color mode for mac");
static unsigned int mach64_count __devinitdata = 0;
static unsigned long phys_vmembase[FB_MAX] __devinitdata = ;
static unsigned long phys_size[FB_MAX] __devinitdata = ;
static unsigned long phys_guiregbase[FB_MAX] __devinitdata = ;
#define ATI_CHIP_88800GX   (M64F_GX)
#define ATI_CHIP_88800CX   (M64F_GX)
#define ATI_CHIP_264CT     (M64F_CT | M64F_INTEGRATED | M64F_CT_BUS | M64F_MAGIC_FIFO)
#define ATI_CHIP_264ET     (M64F_CT | M64F_INTEGRATED | M64F_CT_BUS | M64F_MAGIC_FIFO)
#define ATI_CHIP_264VT     (M64F_VT | M64F_INTEGRATED | M64F_VT_BUS | M64F_MAGIC_FIFO)
#define ATI_CHIP_264GT     (M64F_GT | M64F_INTEGRATED               | M64F_MAGIC_FIFO | M64F_EXTRA_BRIGHT)
#define ATI_CHIP_264VTB    (M64F_VT | M64F_INTEGRATED | M64F_VT_BUS | M64F_GTB_DSP)
#define ATI_CHIP_264VT3    (M64F_VT | M64F_INTEGRATED | M64F_VT_BUS | M64F_GTB_DSP | M64F_SDRAM_MAGIC_PLL)
#define ATI_CHIP_264VT4    (M64F_VT | M64F_INTEGRATED               | M64F_GTB_DSP)
#define ATI_CHIP_264LT     (M64F_GT | M64F_INTEGRATED               | M64F_GTB_DSP)
#define ATI_MODERN_SET     (M64F_GT | M64F_INTEGRATED               | M64F_GTB_DSP | M64F_EXTRA_BRIGHT)
#define ATI_CHIP_264GTB    (ATI_MODERN_SET | M64F_SDRAM_MAGIC_PLL)
#define ATI_CHIP_264LTG    (ATI_MODERN_SET | M64F_SDRAM_MAGIC_PLL)
#define ATI_CHIP_264GT2C   (ATI_MODERN_SET | M64F_SDRAM_MAGIC_PLL | M64F_HW_TRIPLE)
#define ATI_CHIP_264GTPRO  (ATI_MODERN_SET | M64F_SDRAM_MAGIC_PLL | M64F_HW_TRIPLE | M64F_FIFO_32 | M64F_RESET_3D)
#define ATI_CHIP_264LTPRO  (ATI_MODERN_SET | M64F_HW_TRIPLE | M64F_FIFO_32 | M64F_RESET_3D)
#define ATI_CHIP_264XL     (ATI_MODERN_SET | M64F_HW_TRIPLE | M64F_FIFO_32 | M64F_RESET_3D | M64F_XL_DLL | M64F_MFB_FORCE_4 | M64F_XL_MEM)
#define ATI_CHIP_MOBILITY  (ATI_MODERN_SET | M64F_HW_TRIPLE | M64F_FIFO_32 | M64F_RESET_3D | M64F_XL_DLL | M64F_MFB_FORCE_4 | M64F_XL_MEM | M64F_MOBIL_BUS)
static struct  aty_chips[] __devinitdata = ;
static int __devinit correct_chipset(struct atyfb_par *par)
static char ram_dram[] __devinitdata = "DRAM";
static char ram_resv[] __devinitdata = "RESV";
static char ram_vram[] __devinitdata = "VRAM";
static char ram_edo[] __devinitdata = "EDO";
static char ram_sdram[] __devinitdata = "SDRAM (1:1)";
static char ram_sgram[] __devinitdata = "SGRAM (1:1)";
static char ram_sdram32[] __devinitdata = "SDRAM (2:1) (32-bit)";
static char ram_wram[] __devinitdata = "WRAM";
static char ram_off[] __devinitdata = "OFF";
static char *aty_gx_ram[8] __devinitdata = ;
static char *aty_ct_ram[8] __devinitdata = ;
static char *aty_xl_ram[8] __devinitdata = ;
static u32 atyfb_get_pixclock(struct fb_var_screeninfo *var,
struct atyfb_par *par)
#if defined(CONFIG_PPC)
static int __devinit read_aty_sense(const struct atyfb_par *par)
static void aty_get_crtc(const struct atyfb_par *par, struct crtc *crtc)
static void aty_set_crtc(const struct atyfb_par *par, const struct crtc *crtc)
static u32 calc_line_length(struct atyfb_par *par, u32 vxres, u32 bpp)
static int aty_var_to_crtc(const struct fb_info *info,
const struct fb_var_screeninfo *var,
struct crtc *crtc)
static int aty_crtc_to_var(const struct crtc *crtc,
struct fb_var_screeninfo *var)
static int atyfb_set_par(struct fb_info *info)
static int atyfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static void set_off_pitch(struct atyfb_par *par, const struct fb_info *info)
static int atyfb_open(struct fb_info *info, int user)
static irqreturn_t aty_irq(int irq, void *dev_id)
static int aty_enable_irq(struct atyfb_par *par, int reenable)
static int aty_disable_irq(struct atyfb_par *par)
static int atyfb_release(struct fb_info *info, int user)
static int atyfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int aty_waitforvblank(struct atyfb_par *par, u32 crtc)
#define ATYIO_CLKR		0x41545900
#define ATYIO_CLKW		0x41545901
struct atyclk ;
#define ATYIO_FEATR		0x41545902
#define ATYIO_FEATW		0x41545903
static int atyfb_ioctl(struct fb_info *info, u_int cmd, u_long arg)
static int atyfb_sync(struct fb_info *info)
static int atyfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
#if defined(CONFIG_PM) && defined(CONFIG_PCI)
static int aty_power_mgmt(int sleep, struct atyfb_par *par)
static int atyfb_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static void aty_resume_chip(struct fb_info *info)
static int atyfb_pci_resume(struct pci_dev *pdev)
#define MAX_LEVEL 0xFF
static int aty_bl_get_level_brightness(struct atyfb_par *par, int level)
static int aty_bl_update_status(struct backlight_device *bd)
static int aty_bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops aty_bl_data = ;
static void aty_bl_init(struct atyfb_par *par)
static void aty_bl_exit(struct backlight_device *bd)
static void __devinit aty_calc_mem_refresh(struct atyfb_par *par, int xclk)
static struct fb_info *fb_list = NULL;
#if defined(__i386__) && defined(CONFIG_FB_ATY_GENERIC_LCD)
static int __devinit atyfb_get_timings_from_lcd(struct atyfb_par *par,
struct fb_var_screeninfo *var)
static int __devinit aty_init(struct fb_info *info)
#if defined(CONFIG_ATARI) && !defined(MODULE)
static int __devinit store_video_par(char *video_str, unsigned char m64_num)
static int atyfb_blank(int blank, struct fb_info *info)
static void aty_st_pal(u_int regno, u_int red, u_int green, u_int blue,
const struct atyfb_par *par)
static int atyfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int __devinit atyfb_setup_sparc(struct pci_dev *pdev,
struct fb_info *info,
unsigned long addr)
static void __devinit aty_init_lcd(struct atyfb_par *par, u32 bios_base)
static int __devinit init_from_bios(struct atyfb_par *par)
static int __devinit atyfb_setup_generic(struct pci_dev *pdev,
struct fb_info *info,
unsigned long addr)
static int __devinit atyfb_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __init atyfb_atari_probe(void)
static void __devexit atyfb_remove(struct fb_info *info)
static void __devexit atyfb_pci_remove(struct pci_dev *pdev)
static struct pci_device_id atyfb_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, atyfb_pci_tbl);
static struct pci_driver atyfb_driver = ;
static int __init atyfb_setup(char *options)
static int atyfb_reboot_notify(struct notifier_block *nb,
unsigned long code, void *unused)
static struct notifier_block atyfb_reboot_notifier = ;
static const struct dmi_system_id atyfb_reboot_ids[] = ;
static int __init atyfb_init(void)
static void __exit atyfb_exit(void)
module_init(atyfb_init);
module_exit(atyfb_exit);
MODULE_DESCRIPTION("FBDev driver for ATI Mach64 cards");
MODULE_LICENSE("GPL");
module_param(noaccel, bool, 0);
MODULE_PARM_DESC(noaccel, "bool: disable acceleration");
module_param(vram, int, 0);
MODULE_PARM_DESC(vram, "int: override size of video ram");
module_param(pll, int, 0);
MODULE_PARM_DESC(pll, "int: override video clock");
module_param(mclk, int, 0);
MODULE_PARM_DESC(mclk, "int: override memory clock");
module_param(xclk, int, 0);
MODULE_PARM_DESC(xclk, "int: override accelerated engine clock");
module_param(comp_sync, int, 0);
MODULE_PARM_DESC(comp_sync, "Set composite sync signal to low (0) or high (1)");
module_param(mode, charp, 0);
MODULE_PARM_DESC(mode, "Specify resolution as \"<xres>x<yres>[-<bpp>][@<refresh>]\" ");
module_param(nomtrr, bool, 0);
MODULE_PARM_DESC(nomtrr, "bool: disable use of MTRR registers");
