#if !defined(CONFIG_FB_SIS_300) && !defined(CONFIG_FB_SIS_315)
#warning Neither CONFIG_FB_SIS_300 nor CONFIG_FB_SIS_315 is set
#warning sisfb will not work!
static void sisfb_handle_command(struct sis_video_info *ivideo,
struct sisfb_cmd *sisfb_command);
static void __init
sisfb_setdefaultparms(void)
static void __devinit
sisfb_search_vesamode(unsigned int vesamode, bool quiet)
static void __devinit
sisfb_search_mode(char *name, bool quiet)
static void __devinit
sisfb_get_vga_mode_from_kernel(void)
static void __init
sisfb_search_crt2type(const char *name)
static void __init
sisfb_search_tvstd(const char *name)
static void __init
sisfb_search_specialtiming(const char *name)
static void __devinit
sisfb_detect_custom_timing(struct sis_video_info *ivideo)
static bool __devinit
sisfb_interpret_edid(struct sisfb_monitor *monitor, u8 *buffer)
static void __devinit
sisfb_handle_ddc(struct sis_video_info *ivideo, struct sisfb_monitor *monitor, int crtno)
static bool
sisfb_verify_rate(struct sis_video_info *ivideo, struct sisfb_monitor *monitor,
int mode_idx, int rate_idx, int rate)
static int
sisfb_validate_mode(struct sis_video_info *ivideo, int myindex, u32 vbflags)
static u8
sisfb_search_refresh_rate(struct sis_video_info *ivideo, unsigned int rate, int mode_idx)
static bool
sisfb_bridgeisslave(struct sis_video_info *ivideo)
static bool
sisfballowretracecrt1(struct sis_video_info *ivideo)
static bool
sisfbcheckvretracecrt1(struct sis_video_info *ivideo)
static void
sisfbwaitretracecrt1(struct sis_video_info *ivideo)
static bool
sisfbcheckvretracecrt2(struct sis_video_info *ivideo)
static bool
sisfb_CheckVBRetrace(struct sis_video_info *ivideo)
static u32
sisfb_setupvbblankflags(struct sis_video_info *ivideo, u32 *vcount, u32 *hcount)
static int
sisfb_myblank(struct sis_video_info *ivideo, int blank)
unsigned int
sisfb_read_nbridge_pci_dword(struct SiS_Private *SiS_Pr, int reg)
void
sisfb_write_nbridge_pci_dword(struct SiS_Private *SiS_Pr, int reg, unsigned int val)
unsigned int
sisfb_read_lpc_pci_dword(struct SiS_Private *SiS_Pr, int reg)
void
sisfb_write_nbridge_pci_byte(struct SiS_Private *SiS_Pr, int reg, unsigned char val)
unsigned int
sisfb_read_mio_pci_word(struct SiS_Private *SiS_Pr, int reg)
static int
sisfb_get_cmap_len(const struct fb_var_screeninfo *var)
static void
sisfb_set_vparms(struct sis_video_info *ivideo)
static int
sisfb_calc_maxyres(struct sis_video_info *ivideo, struct fb_var_screeninfo *var)
static void
sisfb_calc_pitch(struct sis_video_info *ivideo, struct fb_var_screeninfo *var)
static void
sisfb_set_pitch(struct sis_video_info *ivideo)
static void
sisfb_bpp_to_var(struct sis_video_info *ivideo, struct fb_var_screeninfo *var)
static int
sisfb_set_mode(struct sis_video_info *ivideo, int clrscrn)
static int
sisfb_do_set_var(struct fb_var_screeninfo *var, int isactive, struct fb_info *info)
static void
sisfb_set_base_CRT1(struct sis_video_info *ivideo, unsigned int base)
static void
sisfb_set_base_CRT2(struct sis_video_info *ivideo, unsigned int base)
static int
sisfb_pan_var(struct sis_video_info *ivideo, struct fb_var_screeninfo *var)
static int
sisfb_open(struct fb_info *info, int user)
static int
sisfb_release(struct fb_info *info, int user)
static int
sisfb_setcolreg(unsigned regno, unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int
sisfb_set_par(struct fb_info *info)
static int
sisfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int
sisfb_pan_display(struct fb_var_screeninfo *var, struct fb_info* info)
static int
sisfb_blank(int blank, struct fb_info *info)
static int	sisfb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int
sisfb_get_fix(struct fb_fix_screeninfo *fix, int con, struct fb_info *info)
static struct fb_ops sisfb_ops = ;
static struct pci_dev * __devinit
sisfb_get_northbridge(int basechipid)
static int __devinit
sisfb_get_dram_size(struct sis_video_info *ivideo)
static void __devinit
sisfb_detect_VB_connect(struct sis_video_info *ivideo)
static bool __devinit
sisfb_test_DDC1(struct sis_video_info *ivideo)
static void __devinit
sisfb_sense_crt1(struct sis_video_info *ivideo)
static void __devinit
SiS_SenseLCD(struct sis_video_info *ivideo)
static int __devinit
SISDoSense(struct sis_video_info *ivideo, u16 type, u16 test)
static void __devinit
SiS_Sense30x(struct sis_video_info *ivideo)
static void __devinit
SiS_SenseCh(struct sis_video_info *ivideo)
static void __devinit
sisfb_get_VB_type(struct sis_video_info *ivideo)
static void
sisfb_engine_init(struct sis_video_info *ivideo)
static void __devinit
sisfb_detect_lcd_type(struct sis_video_info *ivideo)
static void __devinit
sisfb_save_pdc_emi(struct sis_video_info *ivideo)
static u32 __devinit
sisfb_getheapstart(struct sis_video_info *ivideo)
static u32 __devinit
sisfb_getheapsize(struct sis_video_info *ivideo)
static int __devinit
sisfb_heap_init(struct sis_video_info *ivideo)
static struct SIS_OH *
sisfb_poh_new_node(struct SIS_HEAP *memheap)
static struct SIS_OH *
sisfb_poh_allocate(struct SIS_HEAP *memheap, u32 size)
static void
sisfb_delete_node(struct SIS_OH *poh)
static void
sisfb_insert_node(struct SIS_OH *pohList, struct SIS_OH *poh)
static struct SIS_OH *
sisfb_poh_free(struct SIS_HEAP *memheap, u32 base)
static void
sisfb_free_node(struct SIS_HEAP *memheap, struct SIS_OH *poh)
static void
sis_int_malloc(struct sis_video_info *ivideo, struct sis_memreq *req)
void
sis_malloc(struct sis_memreq *req)
void
sis_malloc_new(struct pci_dev *pdev, struct sis_memreq *req)
static void
sis_int_free(struct sis_video_info *ivideo, u32 base)
void
sis_free(u32 base)
void
sis_free_new(struct pci_dev *pdev, u32 base)
static void
sisfb_check_engine_and_sync(struct sis_video_info *ivideo)
static void
sisfb_pre_setmode(struct sis_video_info *ivideo)
static void
sisfb_fixup_SR11(struct sis_video_info *ivideo)
static void
sisfb_set_TVxposoffset(struct sis_video_info *ivideo, int val)
static void
sisfb_set_TVyposoffset(struct sis_video_info *ivideo, int val)
static void
sisfb_post_setmode(struct sis_video_info *ivideo)
static int
sisfb_reset_mode(struct sis_video_info *ivideo)
static void
sisfb_handle_command(struct sis_video_info *ivideo, struct sisfb_cmd *sisfb_command)
static int __init sisfb_setup(char *options)
static int __devinit
sisfb_check_rom(void __iomem *rom_base, struct sis_video_info *ivideo)
static unsigned char * __devinit
sisfb_find_rom(struct pci_dev *pdev)
static void __devinit
sisfb_post_map_vram(struct sis_video_info *ivideo, unsigned int *mapsize,
unsigned int min)
static int __devinit
sisfb_post_300_buswidth(struct sis_video_info *ivideo)
static int __devinit
sisfb_post_300_rwtest(struct sis_video_info *ivideo, int iteration, int buswidth,
int PseudoRankCapacity, int PseudoAdrPinCount,
unsigned int mapsize)
static void __devinit
sisfb_post_300_ramsize(struct pci_dev *pdev, unsigned int mapsize)
static void __devinit
sisfb_post_sis300(struct pci_dev *pdev)
static inline int sisfb_xgi_is21(struct sis_video_info *ivideo)
static void __devinit
sisfb_post_xgi_delay(struct sis_video_info *ivideo, int delay)
static int __devinit
sisfb_find_host_bridge(struct sis_video_info *ivideo, struct pci_dev *mypdev,
unsigned short pcivendor)
static int __devinit
sisfb_post_xgi_rwtest(struct sis_video_info *ivideo, int starta,
unsigned int enda, unsigned int mapsize)
static int __devinit
sisfb_post_xgi_ramsize(struct sis_video_info *ivideo)
static void __devinit
sisfb_post_xgi_setclocks(struct sis_video_info *ivideo, u8 regb)
static void __devinit
sisfb_post_xgi_ddr2_mrs_default(struct sis_video_info *ivideo, u8 regb)
static void __devinit
sisfb_post_xgi_ddr2_mrs_xg21(struct sis_video_info *ivideo)
static void __devinit
sisfb_post_xgi_ddr2(struct sis_video_info *ivideo, u8 regb)
static u8 __devinit
sisfb_post_xgi_ramtype(struct sis_video_info *ivideo)
static int __devinit
sisfb_post_xgi(struct pci_dev *pdev)
static int __devinit
sisfb_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit sisfb_remove(struct pci_dev *pdev)
;
static struct pci_driver sisfb_driver = ;
static int __init sisfb_init(void)
module_init(sisfb_init);
static char		*mode = NULL;
static int		vesa = -1;
static unsigned int	rate = 0;
static unsigned int	crt1off = 1;
static unsigned int	mem = 0;
static char		*forcecrt2type = NULL;
static int		forcecrt1 = -1;
static int		pdc = -1;
static int		pdc1 = -1;
static int		noaccel = -1;
static int		noypan  = -1;
static int		nomax = -1;
static int		userom = -1;
static int		useoem = -1;
static char		*tvstandard = NULL;
static int		nocrt2rate = 0;
static int		scalelcd = -1;
static char		*specialtiming = NULL;
static int		lvdshl = -1;
static int		tvxposoffset = 0, tvyposoffset = 0;
#if !defined(__i386__) && !defined(__x86_64__)
static int		resetcard = 0;
static int		videoram = 0;
static int __init sisfb_init_module(void)
static void __exit sisfb_remove_module(void)
module_init(sisfb_init_module);
module_exit(sisfb_remove_module);
MODULE_DESCRIPTION("SiS 300/540/630/730/315/55x/65x/661/74x/330/76x/34x, XGI V3XT/V5/V8/Z7 framebuffer device driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thomas Winischhofer <thomas@winischhofer.net>, Others");
module_param(mem, int, 0);
module_param(noaccel, int, 0);
module_param(noypan, int, 0);
module_param(nomax, int, 0);
module_param(userom, int, 0);
module_param(useoem, int, 0);
module_param(mode, charp, 0);
module_param(vesa, int, 0);
module_param(rate, int, 0);
module_param(forcecrt1, int, 0);
module_param(forcecrt2type, charp, 0);
module_param(scalelcd, int, 0);
module_param(pdc, int, 0);
module_param(pdc1, int, 0);
module_param(specialtiming, charp, 0);
module_param(lvdshl, int, 0);
module_param(tvstandard, charp, 0);
module_param(tvxposoffset, int, 0);
module_param(tvyposoffset, int, 0);
module_param(nocrt2rate, int, 0);
#if !defined(__i386__) && !defined(__x86_64__)
module_param(resetcard, int, 0);
module_param(videoram, int, 0);
MODULE_PARM_DESC(mem,
"\nDetermines the beginning of the video memory heap in KB. This heap is used\n"
"for video RAM management for eg. DRM/DRI. On 300 series, the default depends\n"
"on the amount of video RAM available. If 8MB of video RAM or less is available,\n"
"the heap starts at 4096KB, if between 8 and 16MB are available at 8192KB,\n"
"otherwise at 12288KB. On 315/330/340 series, the heap size is 32KB by default.\n"
"The value is to be specified without 'KB'.\n");
MODULE_PARM_DESC(noaccel,
"\nIf set to anything other than 0, 2D acceleration will be disabled.\n"
"(default: 0)\n");
MODULE_PARM_DESC(noypan,
"\nIf set to anything other than 0, y-panning will be disabled and scrolling\n"
"will be performed by redrawing the screen. (default: 0)\n");
MODULE_PARM_DESC(nomax,
"\nIf y-panning is enabled, sisfb will by default use the entire available video\n"
"memory for the virtual screen in order to optimize scrolling performance. If\n"
"this is set to anything other than 0, sisfb will not do this and thereby \n"
"enable the user to positively specify a virtual Y size of the screen using\n"
"fbset. (default: 0)\n");
MODULE_PARM_DESC(mode,
"\nSelects the desired default display mode in the format XxYxDepth,\n"
"eg. 1024x768x16. Other formats supported include XxY-Depth and\n"
"XxY-Depth@Rate. If the parameter is only one (decimal or hexadecimal)\n"
"number, it will be interpreted as a VESA mode number. (default: 800x600x8)\n");
MODULE_PARM_DESC(vesa,
"\nSelects the desired default display mode by VESA defined mode number, eg.\n"
"0x117 (default: 0x0103)\n");
MODULE_PARM_DESC(rate,
"\nSelects the desired vertical refresh rate for CRT1 (external VGA) in Hz.\n"
"If the mode is specified in the format XxY-Depth@Rate, this parameter\n"
"will be ignored (default: 60)\n");
MODULE_PARM_DESC(forcecrt1,
"\nNormally, the driver autodetects whether or not CRT1 (external VGA) is \n"
"connected. With this option, the detection can be overridden (1=CRT1 ON,\n"
"0=CRT1 OFF) (default: [autodetected])\n");
MODULE_PARM_DESC(forcecrt2type,
"\nIf this option is omitted, the driver autodetects CRT2 output devices, such as\n"
"LCD, TV or secondary VGA. With this option, this autodetection can be\n"
"overridden. Possible parameters are LCD, TV, VGA or NONE. NONE disables CRT2.\n"
"On systems with a SiS video bridge, parameters SVIDEO, COMPOSITE or SCART can\n"
"be used instead of TV to override the TV detection. Furthermore, on systems\n"
"with a SiS video bridge, SVIDEO+COMPOSITE, HIVISION, YPBPR480I, YPBPR480P,\n"
"YPBPR720P and YPBPR1080I are understood. However, whether or not these work\n"
"depends on the very hardware in use. (default: [autodetected])\n");
MODULE_PARM_DESC(scalelcd,
"\nSetting this to 1 will force the driver to scale the LCD image to the panel's\n"
"native resolution. Setting it to 0 will disable scaling; LVDS panels will\n"
"show black bars around the image, TMDS panels will probably do the scaling\n"
"themselves. Default: 1 on LVDS panels, 0 on TMDS panels\n");
MODULE_PARM_DESC(pdc,
"\nThis is for manually selecting the LCD panel delay compensation. The driver\n"
"should detect this correctly in most cases; however, sometimes this is not\n"
"possible. If you see 'small waves' on the LCD, try setting this to 4, 32 or 24\n"
"on a 300 series chipset; 6 on other chipsets. If the problem persists, try\n"
"other values (on 300 series: between 4 and 60 in steps of 4; otherwise: any\n"
"value from 0 to 31). (default: autodetected, if LCD is active during start)\n");
MODULE_PARM_DESC(pdc1,
"\nThis is same as pdc, but for LCD-via CRT1. Hence, this is for the 315/330/340\n"
"series only. (default: autodetected if LCD is in LCD-via-CRT1 mode during\n"
"startup) - Note: currently, this has no effect because LCD-via-CRT1 is not\n"
"implemented yet.\n");
MODULE_PARM_DESC(specialtiming,
"\nPlease refer to documentation for more information on this option.\n");
MODULE_PARM_DESC(lvdshl,
"\nPlease refer to documentation for more information on this option.\n");
MODULE_PARM_DESC(tvstandard,
"\nThis allows overriding the BIOS default for the TV standard. Valid choices are\n"
"pal, ntsc, palm and paln. (default: [auto; pal or ntsc only])\n");
MODULE_PARM_DESC(tvxposoffset,
"\nRelocate TV output horizontally. Possible parameters: -32 through 32.\n"
"Default: 0\n");
MODULE_PARM_DESC(tvyposoffset,
"\nRelocate TV output vertically. Possible parameters: -32 through 32.\n"
"Default: 0\n");
MODULE_PARM_DESC(nocrt2rate,
"\nSetting this to 1 will force the driver to use the default refresh rate for\n"
"CRT2 if CRT2 type is VGA. (default: 0, use same rate as CRT1)\n");
#if !defined(__i386__) && !defined(__x86_64__)
MODULE_PARM_DESC(resetcard,
"\nSet this to 1 in order to reset (POST) the card on non-x86 machines where\n"
"the BIOS did not POST the card (only supported for SiS 300/305 and XGI cards\n"
"currently). Default: 0\n");
MODULE_PARM_DESC(videoram,
"\nSet this to the amount of video RAM (in kilobyte) the card has. Required on\n"
"some non-x86 architectures where the memory auto detection fails. Only\n"
"relevant if resetcard is set, too. SiS300/305 only. Default: [auto-detect]\n");
EXPORT_SYMBOL(sis_malloc);
EXPORT_SYMBOL(sis_free);
EXPORT_SYMBOL_GPL(sis_malloc_new);
EXPORT_SYMBOL_GPL(sis_free_new);
