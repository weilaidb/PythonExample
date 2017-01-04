#define _LINUX_ATARIHW_H_
extern u_long atari_mch_cookie;
extern u_long atari_mch_type;
extern u_long atari_switches;
extern int atari_rtc_year_offset;
extern int atari_dont_touch_floppy_select;
#define MACH_IS_ST	((atari_mch_cookie >> 16) == ATARI_MCH_ST)
#define MACH_IS_STE	((atari_mch_cookie >> 16) == ATARI_MCH_STE && \
(atari_mch_cookie & 0xffff) == 0)
#define MACH_IS_MSTE	((atari_mch_cookie >> 16) == ATARI_MCH_STE && \
(atari_mch_cookie & 0xffff) == 0x10)
#define MACH_IS_TT	((atari_mch_cookie >> 16) == ATARI_MCH_TT)
#define MACH_IS_FALCON	((atari_mch_cookie >> 16) == ATARI_MCH_FALCON)
#define MACH_IS_MEDUSA	(atari_mch_type == ATARI_MACH_MEDUSA)
#define MACH_IS_AB40	(atari_mch_type == ATARI_MACH_AB40)
#define ATARI_SWITCH_IKBD	0x01
#define ATARI_SWITCH_MIDI	0x02
#define ATARI_SWITCH_SND6	0x04
#define ATARI_SWITCH_SND7	0x08
#define ATARI_SWITCH_OVSC_SHIFT	16
#define ATARI_SWITCH_OVSC_IKBD	(ATARI_SWITCH_IKBD << ATARI_SWITCH_OVSC_SHIFT)
#define ATARI_SWITCH_OVSC_MIDI	(ATARI_SWITCH_MIDI << ATARI_SWITCH_OVSC_SHIFT)
#define ATARI_SWITCH_OVSC_SND6	(ATARI_SWITCH_SND6 << ATARI_SWITCH_OVSC_SHIFT)
#define ATARI_SWITCH_OVSC_SND7	(ATARI_SWITCH_SND7 << ATARI_SWITCH_OVSC_SHIFT)
#define ATARI_SWITCH_OVSC_MASK	0xffff0000
#define ATARIHW_DECLARE(name)	unsigned name : 1
#define ATARIHW_SET(name)	(atari_hw_present.name = 1)
#define ATARIHW_PRESENT(name)	(atari_hw_present.name)
struct atari_hw_present ;
extern struct atari_hw_present atari_hw_present;
#define	MFPDELAY() \
__asm__ __volatile__ ( "tstb %0" : : "m" (st_mfp.par_dt_reg) : "cc" );
#define atari_readb   raw_inb
#define atari_writeb  raw_outb
#define atari_inb_p   raw_inb
#define atari_outb_p  raw_outb
static inline void dma_cache_maintenance( unsigned long paddr,
unsigned long len,
int writeflag )
#define ST_LOW  0
#define ST_MID  1
#define ST_HIGH 2
#define TT_LOW  7
#define TT_MID  4
#define TT_HIGH 6
#define SHF_BAS (0xffff8200)
struct SHIFTER
;
# define shifter ((*(volatile struct SHIFTER *)SHF_BAS))
#define SHF_FBAS (0xffff820e)
struct SHIFTER_F030
;
# define shifter_f030 ((*(volatile struct SHIFTER_F030 *)SHF_FBAS))
#define	SHF_TBAS (0xffff8200)
struct SHIFTER_TT ;
#define	shifter_tt	((*(volatile struct SHIFTER_TT *)SHF_TBAS))
#define	TT_SHIFTER_STLOW		0x0000
#define	TT_SHIFTER_STMID		0x0100
#define	TT_SHIFTER_STHIGH		0x0200
#define	TT_SHIFTER_TTLOW		0x0700
#define	TT_SHIFTER_TTMID		0x0400
#define	TT_SHIFTER_TTHIGH		0x0600
#define	TT_SHIFTER_MODEMASK	0x0700
#define TT_SHIFTER_NUMMODE	0x0008
#define	TT_SHIFTER_PALETTE_MASK	0x000f
#define	TT_SHIFTER_GRAYMODE		0x1000
#define	TT_PALETTE_BASE	(0xffff8400)
#define	tt_palette	((volatile u_short *)TT_PALETTE_BASE)
#define	TT_PALETTE_RED_MASK		0x0f00
#define	TT_PALETTE_GREEN_MASK	0x00f0
#define	TT_PALETTE_BLUE_MASK	0x000f
#define f030_col ((u_long *)		0xffff9800)
#define f030_xreg ((u_short*)		0xffff8282)
#define f030_yreg ((u_short*)		0xffff82a2)
#define f030_creg ((u_short*)		0xffff82c0)
#define f030_sreg ((u_short*)		0xffff8260)
#define f030_mreg ((u_short*)		0xffff820a)
#define f030_linewidth ((u_short*)      0xffff820e)
#define f030_hscroll ((u_char*)		0xffff8265)
#define VIDEL_BAS (0xffff8260)
struct VIDEL ;
#define	videl	((*(volatile struct VIDEL *)VIDEL_BAS))
#define FWD_BAS (0xffff8604)
struct DMA_WD
;
# define dma_wd ((*(volatile struct DMA_WD *)FWD_BAS))
#define	st_dma dma_wd
#define st_dma_ext_dmahi (*((volatile unsigned short *)0xffff8608))
#define YM_BAS (0xffff8800)
struct SOUND_YM
;
#define sound_ym ((*(volatile struct SOUND_YM *)YM_BAS))
#define	TT_SCSI_DMA_BAS	(0xffff8700)
struct TT_DMA ;
#define	tt_scsi_dma	((*(volatile struct TT_DMA *)TT_SCSI_DMA_BAS))
#define	TT_5380_BAS	(0xffff8781)
struct TT_5380 ;
#define	tt_scsi			((*(volatile struct TT_5380 *)TT_5380_BAS))
#define	tt_scsi_regp	((volatile char *)TT_5380_BAS)
#define MATRIX_BASE (0xffff8930)
struct MATRIX
;
#define falcon_matrix (*(volatile struct MATRIX *)MATRIX_BASE)
#define CODEC_BASE (0xffff8936)
struct CODEC
;
#define falcon_codec (*(volatile struct CODEC *)CODEC_BASE)
#define BLT_BAS (0xffff8a00)
struct BLITTER
;
# define blitter ((*(volatile struct BLITTER *)BLT_BAS))
#define SCC_BAS (0xffff8c81)
struct SCC
;
# define atari_scc ((*(volatile struct SCC*)SCC_BAS))
# define st_escc ((*(volatile struct SCC*)0xfffffa31))
# define st_escc_dsr ((*(volatile char *)0xfffffa39))
#define	TT_SCC_DMA_BAS	(0xffff8c00)
#define	tt_scc_dma	((*(volatile struct TT_DMA *)TT_SCC_DMA_BAS))
#define FPL_BAS (0xffff9800)
struct VIDEL_PALETTE
;
# define videl_palette ((*(volatile struct VIDEL_PALETTE*)FPL_BAS))
#define DSP56K_HOST_INTERFACE_BASE (0xffffa200)
struct DSP56K_HOST_INTERFACE ;
#define dsp56k_host_interface ((*(volatile struct DSP56K_HOST_INTERFACE *)DSP56K_HOST_INTERFACE_BASE))
#define MFP_BAS (0xfffffa01)
struct MFP
;
# define st_mfp ((*(volatile struct MFP*)MFP_BAS))
#define	TT_MFP_BAS	(0xfffffa81)
# define tt_mfp ((*(volatile struct MFP*)TT_MFP_BAS))
#define	TT_SCU_BAS	(0xffff8e01)
struct TT_SCU ;
#define	tt_scu	((*(volatile struct TT_SCU *)TT_SCU_BAS))
#define	TT_RTC_BAS	(0xffff8961)
struct TT_RTC ;
#define	tt_rtc	((*(volatile struct TT_RTC *)TT_RTC_BAS))
#define ACIA_DIV1  0
#define ACIA_DIV16 1
#define ACIA_DIV64 2
#define ACIA_RESET 3
#define ACIA_D7E2S (0<<2)
#define ACIA_D7O2S (1<<2)
#define ACIA_D7E1S (2<<2)
#define ACIA_D7O1S (3<<2)
#define ACIA_D8N2S (4<<2)
#define ACIA_D8N1S (5<<2)
#define ACIA_D8E1S (6<<2)
#define ACIA_D8O1S (7<<2)
#define ACIA_RLTID (0<<5)
#define ACIA_RLTIE (1<<5)
#define ACIA_RHTID (2<<5)
#define ACIA_RLTIDSB (3<<5)
#define ACIA_RID (0<<7)
#define ACIA_RIE (1<<7)
#define ACIA_RDRF 1
#define ACIA_TDRE (1<<1)
#define ACIA_DCD  (1<<2)
#define ACIA_CTS  (1<<3)
#define ACIA_FE   (1<<4)
#define ACIA_OVRN (1<<5)
#define ACIA_PE   (1<<6)
#define ACIA_IRQ  (1<<7)
#define ACIA_BAS (0xfffffc00)
struct ACIA
;
# define acia ((*(volatile struct ACIA*)ACIA_BAS))
#define	TT_DMASND_BAS (0xffff8900)
struct TT_DMASND ;
# define tt_dmasnd ((*(volatile struct TT_DMASND *)TT_DMASND_BAS))
#define DMASND_MFP_INT_REPLAY     0x01
#define DMASND_MFP_INT_RECORD     0x02
#define DMASND_TIMERA_INT_REPLAY  0x04
#define DMASND_TIMERA_INT_RECORD  0x08
#define	DMASND_CTRL_OFF		  0x00
#define	DMASND_CTRL_ON		  0x01
#define	DMASND_CTRL_REPEAT	  0x02
#define DMASND_CTRL_RECORD_ON     0x10
#define DMASND_CTRL_RECORD_OFF    0x00
#define DMASND_CTRL_RECORD_REPEAT 0x20
#define DMASND_CTRL_SELECT_REPLAY 0x00
#define DMASND_CTRL_SELECT_RECORD 0x80
#define	DMASND_MODE_MONO	  0x80
#define	DMASND_MODE_STEREO	  0x00
#define DMASND_MODE_8BIT	  0x00
#define DMASND_MODE_16BIT	  0x40
#define	DMASND_MODE_6KHZ	  0x00
#define	DMASND_MODE_12KHZ	  0x01
#define	DMASND_MODE_25KHZ	  0x02
#define	DMASND_MODE_50KHZ	  0x03
#define DMASNDSetBase(bufstart)						\
do  while( 0 )
#define DMASNDGetAdr() ((tt_dmasnd.addr_hi << 16) +	\
(tt_dmasnd.addr_mid << 8) +	\
(tt_dmasnd.addr_low))
#define DMASNDSetEnd(bufend)				\
do  while( 0 )
#define	TT_MICROWIRE_BAS	(0xffff8922)
struct TT_MICROWIRE ;
# define tt_microwire ((*(volatile struct TT_MICROWIRE *)TT_MICROWIRE_BAS))
#define	MW_LM1992_ADDR		0x0400
#define	MW_LM1992_VOLUME(dB)	\
(0x0c0 | ((dB) < -80 ? 0 : (dB) > 0 ? 40 : (((dB) + 80) / 2)))
#define	MW_LM1992_BALLEFT(dB)	\
(0x140 | ((dB) < -40 ? 0 : (dB) > 0 ? 20 : (((dB) + 40) / 2)))
#define	MW_LM1992_BALRIGHT(dB)	\
(0x100 | ((dB) < -40 ? 0 : (dB) > 0 ? 20 : (((dB) + 40) / 2)))
#define	MW_LM1992_TREBLE(dB)	\
(0x080 | ((dB) < -12 ? 0 : (dB) > 12 ? 12 : (((dB) / 2) + 6)))
#define	MW_LM1992_BASS(dB)	\
(0x040 | ((dB) < -12 ? 0 : (dB) > 12 ? 12 : (((dB) / 2) + 6)))
#define	MW_LM1992_PSG_LOW	0x000
#define	MW_LM1992_PSG_HIGH	0x001
#define	MW_LM1992_PSG_OFF	0x002
#define MSTE_RTC_BAS	(0xfffffc21)
struct MSTE_RTC ;
#define mste_rtc ((*(volatile struct MSTE_RTC *)MSTE_RTC_BAS))
