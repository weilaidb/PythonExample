#define _M68K_AMIGAHW_H
#define AMI_UNKNOWN	(0)
#define AMI_500		(1)
#define AMI_500PLUS	(2)
#define AMI_600		(3)
#define AMI_1000	(4)
#define AMI_1200	(5)
#define AMI_2000	(6)
#define AMI_2500	(7)
#define AMI_3000	(8)
#define AMI_3000T	(9)
#define AMI_3000PLUS	(10)
#define AMI_4000	(11)
#define AMI_4000T	(12)
#define AMI_CDTV	(13)
#define AMI_CD32	(14)
#define AMI_DRACO	(15)
extern unsigned long amiga_chipset;
#define CS_STONEAGE	(0)
#define CS_OCS		(1)
#define CS_ECS		(2)
#define CS_AGA		(3)
extern unsigned long amiga_eclock;
extern unsigned long amiga_colorclock;
extern unsigned long amiga_chip_size;
extern unsigned char amiga_vblank;
#define AMIGAHW_DECLARE(name)	unsigned name : 1
#define AMIGAHW_SET(name)	(amiga_hw_present.name = 1)
#define AMIGAHW_PRESENT(name)	(amiga_hw_present.name)
struct amiga_hw_present ;
extern struct amiga_hw_present amiga_hw_present;
struct CUSTOM ;
#define DMAF_SETCLR		(0x8000)
#define DMAF_AUD0		(0x0001)
#define DMAF_AUD1		(0x0002)
#define DMAF_AUD2		(0x0004)
#define DMAF_AUD3		(0x0008)
#define DMAF_DISK		(0x0010)
#define DMAF_SPRITE		(0x0020)
#define DMAF_BLITTER		(0x0040)
#define DMAF_COPPER		(0x0080)
#define DMAF_RASTER		(0x0100)
#define DMAF_MASTER		(0x0200)
#define DMAF_BLITHOG		(0x0400)
#define DMAF_BLTNZERO		(0x2000)
#define DMAF_BLTDONE		(0x4000)
#define DMAF_ALL		(0x01FF)
struct CIA ;
#define zTwoBase (0x80000000)
#define ZTWO_PADDR(x) (((unsigned long)(x))-zTwoBase)
#define ZTWO_VADDR(x) (((unsigned long)(x))+zTwoBase)
#define CUSTOM_PHYSADDR     (0xdff000)
#define amiga_custom ((*(volatile struct CUSTOM *)(zTwoBase+CUSTOM_PHYSADDR)))
#define CIAA_PHYSADDR	  (0xbfe001)
#define CIAB_PHYSADDR	  (0xbfd000)
#define ciaa   ((*(volatile struct CIA *)(zTwoBase + CIAA_PHYSADDR)))
#define ciab   ((*(volatile struct CIA *)(zTwoBase + CIAB_PHYSADDR)))
#define CHIP_PHYSADDR	    (0x000000)
void amiga_chip_init (void);
void *amiga_chip_alloc(unsigned long size, const char *name);
void *amiga_chip_alloc_res(unsigned long size, struct resource *res);
void amiga_chip_free(void *ptr);
unsigned long amiga_chip_avail( void );
extern volatile unsigned short amiga_audio_min_period;
static inline void amifb_video_off(void)
struct tod3000 ;
#define TOD3000_CNTRL1_HOLD	0
#define TOD3000_CNTRL1_FREE	9
#define tod_3000 ((*(volatile struct tod3000 *)(zTwoBase+0xDC0000)))
struct tod2000 ;
#define TOD2000_CNTRL1_HOLD	(1<<0)
#define TOD2000_CNTRL1_BUSY	(1<<1)
#define TOD2000_CNTRL3_24HMODE	(1<<2)
#define TOD2000_HOUR1_PM	(1<<2)
#define tod_2000 ((*(volatile struct tod2000 *)(zTwoBase+0xDC0000)))
