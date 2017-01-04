#define _SISUSB_INIT_H_
#define ModeText		0x00
#define ModeCGA			0x01
#define ModeEGA			0x02
#define ModeVGA			0x03
#define Mode15Bpp		0x04
#define Mode16Bpp		0x05
#define Mode24Bpp		0x06
#define Mode32Bpp		0x07
#define ModeTypeMask		0x07
#define IsTextMode		0x07
#define DACInfoFlag		0x0018
#define MemoryInfoFlag		0x01E0
#define MemorySizeShift		5
#define Charx8Dot		0x0200
#define LineCompareOff		0x0400
#define CRT2Mode		0x0800
#define HalfDCLK		0x1000
#define NoSupportSimuTV		0x2000
#define NoSupportLCDScale	0x4000
#define DoubleScanMode		0x8000
#define SupportTV		0x0008
#define SupportTV1024		0x0800
#define SupportCHTV		0x0800
#define Support64048060Hz	0x0800
#define SupportHiVision		0x0010
#define SupportYPbPr750p	0x1000
#define SupportLCD		0x0020
#define SupportRAMDAC2		0x0040
#define SupportRAMDAC2_135	0x0100
#define SupportRAMDAC2_162	0x0200
#define SupportRAMDAC2_202	0x0400
#define InterlaceMode		0x0080
#define SyncPP			0x0000
#define SyncPN			0x4000
#define SyncNP			0x8000
#define SyncNN			0xc000
#define ProgrammingCRT2		0x0001
#define LowModeTests		0x0002
#define LCDVESATiming		0x0008
#define EnableLVDSDDA		0x0010
#define SetDispDevSwitchFlag	0x0020
#define CheckWinDos		0x0040
#define SetDOSMode		0x0080
#define SIS_RI_320x200		0
#define SIS_RI_320x240		1
#define SIS_RI_320x400		2
#define SIS_RI_400x300		3
#define SIS_RI_512x384		4
#define SIS_RI_640x400		5
#define SIS_RI_640x480		6
#define SIS_RI_800x600		7
#define SIS_RI_1024x768		8
#define SIS_RI_1280x1024	9
#define SIS_RI_1600x1200	10
#define SIS_RI_1920x1440	11
#define SIS_RI_2048x1536	12
#define SIS_RI_720x480		13
#define SIS_RI_720x576		14
#define SIS_RI_1280x960		15
#define SIS_RI_800x480		16
#define SIS_RI_1024x576		17
#define SIS_RI_1280x720		18
#define SIS_RI_856x480		19
#define SIS_RI_1280x768		20
#define SIS_RI_1400x1050	21
#define SIS_RI_1152x864		22
#define SIS_RI_848x480		23
#define SIS_RI_1360x768		24
#define SIS_RI_1024x600		25
#define SIS_RI_1152x768		26
#define SIS_RI_768x576		27
#define SIS_RI_1360x1024	28
#define SIS_RI_1680x1050	29
#define SIS_RI_1280x800		30
#define SIS_RI_1920x1080	31
#define SIS_RI_960x540		32
#define SIS_RI_960x600		33
#define SIS_VIDEO_CAPTURE	0x00 - 0x30
#define SIS_VIDEO_PLAYBACK	0x02 - 0x30
#define SIS_CRT2_PORT_04	0x04 - 0x30
static const unsigned short ModeIndex_320x200[] = ;
static const unsigned short ModeIndex_320x240[] = ;
static const unsigned short ModeIndex_400x300[] = ;
static const unsigned short ModeIndex_512x384[] = ;
static const unsigned short ModeIndex_640x400[] = ;
static const unsigned short ModeIndex_640x480[] = ;
static const unsigned short ModeIndex_720x480[] = ;
static const unsigned short ModeIndex_720x576[] = ;
static const unsigned short ModeIndex_768x576[] = ;
static const unsigned short ModeIndex_800x480[] = ;
static const unsigned short ModeIndex_800x600[] = ;
static const unsigned short ModeIndex_848x480[] = ;
static const unsigned short ModeIndex_856x480[] = ;
static const unsigned short ModeIndex_960x540[] = ;
static const unsigned short ModeIndex_960x600[] = ;
static const unsigned short ModeIndex_1024x768[] = ;
static const unsigned short ModeIndex_1024x576[] = ;
static const unsigned short ModeIndex_1152x864[] = ;
static const unsigned short ModeIndex_1280x720[] = ;
static const unsigned short ModeIndex_1280x768[] = ;
static const unsigned short ModeIndex_1280x1024[] = ;
static const unsigned char SiS_MDA_DAC[] = ;
static const unsigned char SiS_CGA_DAC[] = ;
static const unsigned char SiS_EGA_DAC[] = ;
static const unsigned char SiS_VGA_DAC[] = ;
static const struct SiS_St SiSUSB_SModeIDTable[] = ;
static const struct SiS_StResInfo_S SiSUSB_StResInfo[] = ;
static const struct SiS_ModeResInfo SiSUSB_ModeResInfo[] = ;
static const struct SiS_StandTable SiSUSB_StandTable[] = ;
static const struct SiS_Ext SiSUSB_EModeIDTable[] = ;
static const struct SiS_Ext2 SiSUSB_RefIndex[] = ;
static const struct SiS_CRT1Table SiSUSB_CRT1Table[] = ;
static const struct SiS_VCLKData SiSUSB_VCLKData[] = ;
int SiSUSBSetMode(struct SiS_Private *SiS_Pr, unsigned short ModeNo);
int SiSUSBSetVESAMode(struct SiS_Private *SiS_Pr, unsigned short VModeNo);
extern int sisusb_setreg(struct sisusb_usb_data *sisusb, int port, u8 data);
extern int sisusb_getreg(struct sisusb_usb_data *sisusb, int port, u8 * data);
extern int sisusb_setidxreg(struct sisusb_usb_data *sisusb, int port,
u8 index, u8 data);
extern int sisusb_getidxreg(struct sisusb_usb_data *sisusb, int port,
u8 index, u8 * data);
extern int sisusb_setidxregandor(struct sisusb_usb_data *sisusb, int port,
u8 idx, u8 myand, u8 myor);
extern int sisusb_setidxregor(struct sisusb_usb_data *sisusb, int port,
u8 index, u8 myor);
extern int sisusb_setidxregand(struct sisusb_usb_data *sisusb, int port,
u8 idx, u8 myand);
void sisusb_delete(struct kref *kref);
int sisusb_writeb(struct sisusb_usb_data *sisusb, u32 adr, u8 data);
int sisusb_readb(struct sisusb_usb_data *sisusb, u32 adr, u8 * data);
int sisusb_copy_memory(struct sisusb_usb_data *sisusb, char *src,
u32 dest, int length, size_t * bytes_written);
int sisusb_reset_text_mode(struct sisusb_usb_data *sisusb, int init);
int sisusbcon_do_font_op(struct sisusb_usb_data *sisusb, int set, int slot,
u8 * arg, int cmapsz, int ch512, int dorecalc,
struct vc_data *c, int fh, int uplock);
void sisusb_set_cursor(struct sisusb_usb_data *sisusb, unsigned int location);
int sisusb_console_init(struct sisusb_usb_data *sisusb, int first, int last);
void sisusb_console_exit(struct sisusb_usb_data *sisusb);
void sisusb_init_concode(void);
