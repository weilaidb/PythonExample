#define SMTC_LINUX_FB_VERSION	"version 0.11.2619.21.01 July 27, 2008"
#define NR_PALETTE        256
#define NR_RGB            2
#define FB_ACCEL_SMI_LYNX 88
#define PC_VGA            0
#define PC_VGA            1
#define SCREEN_X_RES      1024
#define SCREEN_Y_RES      600
#define SCREEN_BPP        16
#define SM712_VIDEOMEMORYSIZE	  0x00400000
#define SM722_VIDEOMEMORYSIZE	  0x00800000
#define dac_reg	(0x3c8)
#define dac_val	(0x3c9)
extern char *smtc_RegBaseAddress;
#define smtc_mmiowb(dat, reg)	writeb(dat, smtc_RegBaseAddress + reg)
#define smtc_mmioww(dat, reg)	writew(dat, smtc_RegBaseAddress + reg)
#define smtc_mmiowl(dat, reg)	writel(dat, smtc_RegBaseAddress + reg)
#define smtc_mmiorb(reg)	readb(smtc_RegBaseAddress + reg)
#define smtc_mmiorw(reg)	readw(smtc_RegBaseAddress + reg)
#define smtc_mmiorl(reg)	readl(smtc_RegBaseAddress + reg)
#define SIZE_SR00_SR04      (0x04 - 0x00 + 1)
#define SIZE_SR10_SR24      (0x24 - 0x10 + 1)
#define SIZE_SR30_SR75      (0x75 - 0x30 + 1)
#define SIZE_SR80_SR93      (0x93 - 0x80 + 1)
#define SIZE_SRA0_SRAF      (0xAF - 0xA0 + 1)
#define SIZE_GR00_GR08      (0x08 - 0x00 + 1)
#define SIZE_AR00_AR14      (0x14 - 0x00 + 1)
#define SIZE_CR00_CR18      (0x18 - 0x00 + 1)
#define SIZE_CR30_CR4D      (0x4D - 0x30 + 1)
#define SIZE_CR90_CRA7      (0xA7 - 0x90 + 1)
#define SIZE_VPR		(0x6C + 1)
#define SIZE_DPR		(0x44 + 1)
static inline void smtc_crtcw(int reg, int val)
static inline unsigned int smtc_crtcr(int reg)
static inline void smtc_grphw(int reg, int val)
static inline unsigned int smtc_grphr(int reg)
static inline void smtc_attrw(int reg, int val)
static inline void smtc_seqw(int reg, int val)
static inline unsigned int smtc_seqr(int reg)
struct ModeInit ;
struct ModeInit VGAMode[] = ;
#define numVGAModes		ARRAY_SIZE(VGAMode)
