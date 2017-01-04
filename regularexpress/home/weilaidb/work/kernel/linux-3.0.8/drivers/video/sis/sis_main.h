#define _SISFB_MAIN
static struct fb_var_screeninfo my_default_var = ;
#define MODE_INDEX_NONE           0
static int sisfb_off = 0;
static int sisfb_parm_mem = 0;
static int sisfb_accel = -1;
static int sisfb_ypan = -1;
static int sisfb_max = -1;
static int sisfb_userom = 1;
static int sisfb_useoem = -1;
static int sisfb_mode_idx = -1;
static int sisfb_parm_rate = -1;
static int sisfb_crt1off = 0;
static int sisfb_forcecrt1 = -1;
static int sisfb_crt2type  = -1;
static int sisfb_crt2flags = 0;
static int sisfb_pdc = 0xff;
static int sisfb_pdca = 0xff;
static int sisfb_scalelcd = -1;
static int sisfb_specialtiming = CUT_NONE;
static int sisfb_lvdshl = -1;
static int sisfb_dstn = 0;
static int sisfb_fstn = 0;
static int sisfb_tvplug = -1;
static int sisfb_tvstd  = -1;
static int sisfb_tvxposoffset = 0;
static int sisfb_tvyposoffset = 0;
static int sisfb_nocrt2rate = 0;
#if !defined(__i386__) && !defined(__x86_64__)
static int sisfb_resetcard = 0;
static int sisfb_videoram = 0;
static struct sisfb_chip_info  sisfb_chip_info[] __devinitdata = ;
static struct pci_device_id __devinitdata sisfb_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, sisfb_pci_table);
static struct sis_video_info *card_list = NULL;
static struct SIS_HEAP	*sisfb_heap;
#define MD_SIS300 1
#define MD_SIS315 2
static const struct _sisbios_mode  sisbios_mode[] = ;
#define SIS_LCD_NUMBER 18
static struct _sis_lcd_data  sis_lcd_data[] __devinitdata = ;
static unsigned short sis300paneltype[] __devinitdata = ;
static unsigned short sis310paneltype[] __devinitdata = ;
static unsigned short sis661paneltype[] __devinitdata = ;
#define FL_550_DSTN 0x01
#define FL_550_FSTN 0x02
#define FL_300      0x04
#define FL_315      0x08
static struct _sis_crt2type  sis_crt2type[] __initdata = ;
static struct _sis_tvtype  sis_tvtype[] __initdata = ;
static const struct _sis_vrate  sisfb_vrate[] = ;
static struct _sisfbddcsmodes  sisfb_ddcsmodes[] __devinitdata = ;
static struct _sisfbddcfmodes  sisfb_ddcfmodes[] __devinitdata = ;
static struct _chswtable  mychswtable[] __devinitdata = ;
static struct _customttable  mycustomttable[] __devinitdata = ;
static int sisfb_setup(char *options);
static int sisfb_init(void);
static int	sisfb_get_fix(struct fb_fix_screeninfo *fix, int con,
struct fb_info *info);
static int	sisfb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg);
static int	sisfb_set_par(struct fb_info *info);
static int	sisfb_blank(int blank,
struct fb_info *info);
extern void	fbcon_sis_fillrect(struct fb_info *info,
const struct fb_fillrect *rect);
extern void	fbcon_sis_copyarea(struct fb_info *info,
const struct fb_copyarea *area);
extern int	fbcon_sis_sync(struct fb_info *info);
extern int	sisfb_initaccel(struct sis_video_info *ivideo);
extern void	sisfb_syncaccel(struct sis_video_info *ivideo);
static void	sisfb_search_mode(char *name, bool quiet);
static int	sisfb_validate_mode(struct sis_video_info *ivideo, int modeindex, u32 vbflags);
static u8	sisfb_search_refresh_rate(struct sis_video_info *ivideo, unsigned int rate,
int index);
static int	sisfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *fb_info);
static int	sisfb_do_set_var(struct fb_var_screeninfo *var, int isactive,
struct fb_info *info);
static void	sisfb_pre_setmode(struct sis_video_info *ivideo);
static void	sisfb_post_setmode(struct sis_video_info *ivideo);
static bool	sisfb_CheckVBRetrace(struct sis_video_info *ivideo);
static bool	sisfbcheckvretracecrt2(struct sis_video_info *ivideo);
static bool	sisfbcheckvretracecrt1(struct sis_video_info *ivideo);
static bool	sisfb_bridgeisslave(struct sis_video_info *ivideo);
static void	sisfb_detect_VB_connect(struct sis_video_info *ivideo);
static void	sisfb_get_VB_type(struct sis_video_info *ivideo);
static void	sisfb_set_TVxposoffset(struct sis_video_info *ivideo, int val);
static void	sisfb_set_TVyposoffset(struct sis_video_info *ivideo, int val);
unsigned int	sisfb_read_nbridge_pci_dword(struct SiS_Private *SiS_Pr, int reg);
void		sisfb_write_nbridge_pci_dword(struct SiS_Private *SiS_Pr, int reg, unsigned int val);
unsigned int	sisfb_read_lpc_pci_dword(struct SiS_Private *SiS_Pr, int reg);
void		sisfb_write_nbridge_pci_byte(struct SiS_Private *SiS_Pr, int reg, unsigned char val);
unsigned int	sisfb_read_mio_pci_word(struct SiS_Private *SiS_Pr, int reg);
void			sis_malloc(struct sis_memreq *req);
void			sis_malloc_new(struct pci_dev *pdev, struct sis_memreq *req);
void			sis_free(u32 base);
void			sis_free_new(struct pci_dev *pdev, u32 base);
static int		sisfb_heap_init(struct sis_video_info *ivideo);
static struct SIS_OH *	sisfb_poh_new_node(struct SIS_HEAP *memheap);
static struct SIS_OH *	sisfb_poh_allocate(struct SIS_HEAP *memheap, u32 size);
static void		sisfb_delete_node(struct SIS_OH *poh);
static void		sisfb_insert_node(struct SIS_OH *pohList, struct SIS_OH *poh);
static struct SIS_OH *	sisfb_poh_free(struct SIS_HEAP *memheap, u32 base);
static void		sisfb_free_node(struct SIS_HEAP *memheap, struct SIS_OH *poh);
extern unsigned short	SiS_GetModeID_LCD(int VGAEngine, unsigned int VBFlags, int HDisplay,
int VDisplay, int Depth, bool FSTN, unsigned short CustomT,
int LCDwith, int LCDheight, unsigned int VBFlags2);
extern unsigned short	SiS_GetModeID_TV(int VGAEngine, unsigned int VBFlags, int HDisplay,
int VDisplay, int Depth, unsigned int VBFlags2);
extern unsigned short	SiS_GetModeID_VGA2(int VGAEngine, unsigned int VBFlags, int HDisplay,
int VDisplay, int Depth, unsigned int VBFlags2);
extern void		SiSRegInit(struct SiS_Private *SiS_Pr, SISIOADDRESS BaseAddr);
extern bool		SiSSetMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo);
extern void		SiS_SetEnableDstn(struct SiS_Private *SiS_Pr, int enable);
extern void		SiS_SetEnableFstn(struct SiS_Private *SiS_Pr, int enable);
extern bool		SiSDetermineROMLayout661(struct SiS_Private *SiS_Pr);
extern bool		sisfb_gettotalfrommode(struct SiS_Private *SiS_Pr, unsigned char modeno,
int *htotal, int *vtotal, unsigned char rateindex);
extern int		sisfb_mode_rate_to_dclock(struct SiS_Private *SiS_Pr,
unsigned char modeno, unsigned char rateindex);
extern int		sisfb_mode_rate_to_ddata(struct SiS_Private *SiS_Pr, unsigned char modeno,
unsigned char rateindex, struct fb_var_screeninfo *var);
extern unsigned short	SiS_GetCH700x(struct SiS_Private *SiS_Pr, unsigned short reg);
extern void		SiS_SetCH700x(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val);
extern unsigned short	SiS_GetCH701x(struct SiS_Private *SiS_Pr, unsigned short reg);
extern void		SiS_SetCH701x(struct SiS_Private *SiS_Pr, unsigned short reg, unsigned char val);
extern void		SiS_SetCH70xxANDOR(struct SiS_Private *SiS_Pr, unsigned short reg,
unsigned char myor, unsigned char myand);
extern void		SiS_DDC2Delay(struct SiS_Private *SiS_Pr, unsigned int delaytime);
extern void		SiS_SetChrontelGPIO(struct SiS_Private *SiS_Pr, unsigned short myvbinfo);
extern unsigned short	SiS_HandleDDC(struct SiS_Private *SiS_Pr, unsigned int VBFlags, int VGAEngine,
unsigned short adaptnum, unsigned short DDCdatatype, unsigned char *buffer,
unsigned int VBFlags2);
extern unsigned short	SiS_ReadDDC1Bit(struct SiS_Private *SiS_Pr);
extern void		SiS_Chrontel701xBLOn(struct SiS_Private *SiS_Pr);
extern void		SiS_Chrontel701xBLOff(struct SiS_Private *SiS_Pr);
extern void		SiS_SiS30xBLOn(struct SiS_Private *SiS_Pr);
extern void		SiS_SiS30xBLOff(struct SiS_Private *SiS_Pr);
