#define __ASM_ARCH_OMAP_CPU_H
#define OMAP2_DEVICE_TYPE_TEST		0
#define OMAP2_DEVICE_TYPE_EMU		1
#define OMAP2_DEVICE_TYPE_SEC		2
#define OMAP2_DEVICE_TYPE_GP		3
#define OMAP2_DEVICE_TYPE_BAD		4
int omap_type(void);
struct omap_chip_id ;
#define OMAP_CHIP_INIT(x)
unsigned int omap_rev(void);
#define OMAP_REVBITS_00		0x00
#define OMAP_REVBITS_01		0x01
#define OMAP_REVBITS_02		0x02
#define OMAP_REVBITS_03		0x03
#define OMAP_REVBITS_04		0x04
#define OMAP_REVBITS_05		0x05
#define GET_OMAP_REVISION()	((omap_rev() >> 8) & 0xff)
#define GET_OMAP_CLASS	(omap_rev() & 0xff)
#define IS_OMAP_CLASS(class, id)			\
static inline int is_omap ##class (void)		\
#define GET_OMAP_SUBCLASS	((omap_rev() >> 20) & 0x0fff)
#define IS_OMAP_SUBCLASS(subclass, id)			\
static inline int is_omap ##subclass (void)		\
#define IS_TI_SUBCLASS(subclass, id)			\
static inline int is_ti ##subclass (void)		\
IS_OMAP_CLASS(7xx, 0x07)
IS_OMAP_CLASS(15xx, 0x15)
IS_OMAP_CLASS(16xx, 0x16)
IS_OMAP_CLASS(24xx, 0x24)
IS_OMAP_CLASS(34xx, 0x34)
IS_OMAP_CLASS(44xx, 0x44)
IS_OMAP_SUBCLASS(242x, 0x242)
IS_OMAP_SUBCLASS(243x, 0x243)
IS_OMAP_SUBCLASS(343x, 0x343)
IS_OMAP_SUBCLASS(363x, 0x363)
IS_OMAP_SUBCLASS(443x, 0x443)
IS_TI_SUBCLASS(816x, 0x816)
#define cpu_is_omap7xx()		0
#define cpu_is_omap15xx()		0
#define cpu_is_omap16xx()		0
#define cpu_is_omap24xx()		0
#define cpu_is_omap242x()		0
#define cpu_is_omap243x()		0
#define cpu_is_omap34xx()		0
#define cpu_is_omap343x()		0
#define cpu_is_ti816x()			0
#define cpu_is_omap44xx()		0
#define cpu_is_omap443x()		0
#if defined(MULTI_OMAP1)
# if defined(CONFIG_ARCH_OMAP730)
#  undef  cpu_is_omap7xx
#  define cpu_is_omap7xx()		is_omap7xx()
# endif
# if defined(CONFIG_ARCH_OMAP850)
#  undef  cpu_is_omap7xx
#  define cpu_is_omap7xx()		is_omap7xx()
# endif
# if defined(CONFIG_ARCH_OMAP15XX)
#  undef  cpu_is_omap15xx
#  define cpu_is_omap15xx()		is_omap15xx()
# endif
# if defined(CONFIG_ARCH_OMAP16XX)
#  undef  cpu_is_omap16xx
#  define cpu_is_omap16xx()		is_omap16xx()
# endif
# if defined(CONFIG_ARCH_OMAP730)
#  undef  cpu_is_omap7xx
#  define cpu_is_omap7xx()		1
# endif
# if defined(CONFIG_ARCH_OMAP850)
#  undef  cpu_is_omap7xx
#  define cpu_is_omap7xx()		1
# endif
# if defined(CONFIG_ARCH_OMAP15XX)
#  undef  cpu_is_omap15xx
#  define cpu_is_omap15xx()		1
# endif
# if defined(CONFIG_ARCH_OMAP16XX)
#  undef  cpu_is_omap16xx
#  define cpu_is_omap16xx()		1
# endif
#if defined(MULTI_OMAP2)
# if defined(CONFIG_ARCH_OMAP2)
#  undef  cpu_is_omap24xx
#  define cpu_is_omap24xx()		is_omap24xx()
# endif
# if defined (CONFIG_SOC_OMAP2420)
#  undef  cpu_is_omap242x
#  define cpu_is_omap242x()		is_omap242x()
# endif
# if defined (CONFIG_SOC_OMAP2430)
#  undef  cpu_is_omap243x
#  define cpu_is_omap243x()		is_omap243x()
# endif
# if defined(CONFIG_ARCH_OMAP3)
#  undef  cpu_is_omap34xx
#  undef  cpu_is_omap343x
#  define cpu_is_omap34xx()		is_omap34xx()
#  define cpu_is_omap343x()		is_omap343x()
# endif
# if defined(CONFIG_ARCH_OMAP2)
#  undef  cpu_is_omap24xx
#  define cpu_is_omap24xx()		1
# endif
# if defined(CONFIG_SOC_OMAP2420)
#  undef  cpu_is_omap242x
#  define cpu_is_omap242x()		1
# endif
# if defined(CONFIG_SOC_OMAP2430)
#  undef  cpu_is_omap243x
#  define cpu_is_omap243x()		1
# endif
# if defined(CONFIG_ARCH_OMAP3)
#  undef  cpu_is_omap34xx
#  define cpu_is_omap34xx()		1
# endif
# if defined(CONFIG_SOC_OMAP3430)
#  undef  cpu_is_omap343x
#  define cpu_is_omap343x()		1
# endif
#define GET_OMAP_TYPE	((omap_rev() >> 16) & 0xffff)
#define IS_OMAP_TYPE(type, id)				\
static inline int is_omap ##type (void)			\
IS_OMAP_TYPE(310, 0x0310)
IS_OMAP_TYPE(730, 0x0730)
IS_OMAP_TYPE(850, 0x0850)
IS_OMAP_TYPE(1510, 0x1510)
IS_OMAP_TYPE(1610, 0x1610)
IS_OMAP_TYPE(1611, 0x1611)
IS_OMAP_TYPE(5912, 0x1611)
IS_OMAP_TYPE(1621, 0x1621)
IS_OMAP_TYPE(1710, 0x1710)
IS_OMAP_TYPE(2420, 0x2420)
IS_OMAP_TYPE(2422, 0x2422)
IS_OMAP_TYPE(2423, 0x2423)
IS_OMAP_TYPE(2430, 0x2430)
IS_OMAP_TYPE(3430, 0x3430)
IS_OMAP_TYPE(3505, 0x3505)
IS_OMAP_TYPE(3517, 0x3517)
#define cpu_is_omap310()		0
#define cpu_is_omap730()		0
#define cpu_is_omap850()		0
#define cpu_is_omap1510()		0
#define cpu_is_omap1610()		0
#define cpu_is_omap5912()		0
#define cpu_is_omap1611()		0
#define cpu_is_omap1621()		0
#define cpu_is_omap1710()		0
#define cpu_is_omap2420()		0
#define cpu_is_omap2422()		0
#define cpu_is_omap2423()		0
#define cpu_is_omap2430()		0
#define cpu_is_omap3503()		0
#define cpu_is_omap3515()		0
#define cpu_is_omap3525()		0
#define cpu_is_omap3530()		0
#define cpu_is_omap3505()		0
#define cpu_is_omap3517()		0
#define cpu_is_omap3430()		0
#define cpu_is_omap4430()		0
#define cpu_is_omap3630()		0
#if defined(CONFIG_ARCH_OMAP730)
# undef  cpu_is_omap730
# define cpu_is_omap730()		is_omap730()
#if defined(CONFIG_ARCH_OMAP850)
# undef  cpu_is_omap850
# define cpu_is_omap850()		is_omap850()
#if defined(CONFIG_ARCH_OMAP15XX)
# undef  cpu_is_omap310
# undef  cpu_is_omap1510
# define cpu_is_omap310()		is_omap310()
# define cpu_is_omap1510()		is_omap1510()
#if defined(CONFIG_ARCH_OMAP16XX)
# undef  cpu_is_omap1610
# undef  cpu_is_omap1611
# undef  cpu_is_omap5912
# undef  cpu_is_omap1621
# undef  cpu_is_omap1710
# define cpu_is_omap1610()		is_omap1610()
# define cpu_is_omap1611()		is_omap1611()
# define cpu_is_omap5912()		is_omap5912()
# define cpu_is_omap1621()		is_omap1621()
# define cpu_is_omap1710()		is_omap1710()
#if defined(CONFIG_ARCH_OMAP2)
# undef  cpu_is_omap2420
# undef  cpu_is_omap2422
# undef  cpu_is_omap2423
# undef  cpu_is_omap2430
# define cpu_is_omap2420()		is_omap2420()
# define cpu_is_omap2422()		is_omap2422()
# define cpu_is_omap2423()		is_omap2423()
# define cpu_is_omap2430()		is_omap2430()
#if defined(CONFIG_ARCH_OMAP3)
# undef cpu_is_omap3430
# undef cpu_is_omap3503
# undef cpu_is_omap3515
# undef cpu_is_omap3525
# undef cpu_is_omap3530
# undef cpu_is_omap3505
# undef cpu_is_omap3517
# undef cpu_is_ti816x
# define cpu_is_omap3430()		is_omap3430()
# define cpu_is_omap3503()		(cpu_is_omap3430() &&		\
(!omap3_has_iva()) &&	\
(!omap3_has_sgx()))
# define cpu_is_omap3515()		(cpu_is_omap3430() &&		\
(!omap3_has_iva()) &&	\
(omap3_has_sgx()))
# define cpu_is_omap3525()		(cpu_is_omap3430() &&		\
(!omap3_has_sgx()) &&	\
(omap3_has_iva()))
# define cpu_is_omap3530()		(cpu_is_omap3430())
# define cpu_is_omap3505()		is_omap3505()
# define cpu_is_omap3517()		is_omap3517()
# undef cpu_is_omap3630
# define cpu_is_omap3630()		is_omap363x()
# define cpu_is_ti816x()		is_ti816x()
# if defined(CONFIG_ARCH_OMAP4)
# undef cpu_is_omap44xx
# undef cpu_is_omap443x
# define cpu_is_omap44xx()		is_omap44xx()
# define cpu_is_omap443x()		is_omap443x()
# endif
#define cpu_class_is_omap1()	(cpu_is_omap7xx() || cpu_is_omap15xx() || \
cpu_is_omap16xx())
#define cpu_class_is_omap2()	(cpu_is_omap24xx() || cpu_is_omap34xx() || \
cpu_is_omap44xx())
#define OMAP242X_CLASS		0x24200024
#define OMAP2420_REV_ES1_0	OMAP242X_CLASS
#define OMAP2420_REV_ES2_0	(OMAP242X_CLASS | (OMAP_REVBITS_01 << 8))
#define OMAP243X_CLASS		0x24300024
#define OMAP2430_REV_ES1_0	OMAP243X_CLASS
#define OMAP343X_CLASS		0x34300034
#define OMAP3430_REV_ES1_0	OMAP343X_CLASS
#define OMAP3430_REV_ES2_0	(OMAP343X_CLASS | (OMAP_REVBITS_01 << 8))
#define OMAP3430_REV_ES2_1	(OMAP343X_CLASS | (OMAP_REVBITS_02 << 8))
#define OMAP3430_REV_ES3_0	(OMAP343X_CLASS | (OMAP_REVBITS_03 << 8))
#define OMAP3430_REV_ES3_1	(OMAP343X_CLASS | (OMAP_REVBITS_04 << 8))
#define OMAP3430_REV_ES3_1_2	(OMAP343X_CLASS | (OMAP_REVBITS_05 << 8))
#define OMAP363X_CLASS		0x36300034
#define OMAP3630_REV_ES1_0	OMAP363X_CLASS
#define OMAP3630_REV_ES1_1	(OMAP363X_CLASS | (OMAP_REVBITS_01 << 8))
#define OMAP3630_REV_ES1_2	(OMAP363X_CLASS | (OMAP_REVBITS_02 << 8))
#define OMAP35XX_CLASS		0x35000034
#define OMAP3503_REV(v)		(OMAP35XX_CLASS | (0x3503 << 16) | (v << 8))
#define OMAP3515_REV(v)		(OMAP35XX_CLASS | (0x3515 << 16) | (v << 8))
#define OMAP3525_REV(v)		(OMAP35XX_CLASS | (0x3525 << 16) | (v << 8))
#define OMAP3530_REV(v)		(OMAP35XX_CLASS | (0x3530 << 16) | (v << 8))
#define OMAP3505_REV(v)		(OMAP35XX_CLASS | (0x3505 << 16) | (v << 8))
#define OMAP3517_REV(v)		(OMAP35XX_CLASS | (0x3517 << 16) | (v << 8))
#define TI816X_CLASS		0x81600034
#define TI8168_REV_ES1_0	TI816X_CLASS
#define TI8168_REV_ES1_1	(TI816X_CLASS | (OMAP_REVBITS_01 << 8))
#define OMAP443X_CLASS		0x44300044
#define OMAP4430_REV_ES1_0	(OMAP443X_CLASS | (0x10 << 8))
#define OMAP4430_REV_ES2_0	(OMAP443X_CLASS | (0x20 << 8))
#define OMAP4430_REV_ES2_1	(OMAP443X_CLASS | (0x21 << 8))
#define OMAP4430_REV_ES2_2	(OMAP443X_CLASS | (0x22 << 8))
#define CHIP_IS_OMAP2420		(1 << 0)
#define CHIP_IS_OMAP2430		(1 << 1)
#define CHIP_IS_OMAP3430		(1 << 2)
#define CHIP_IS_OMAP3430ES1		(1 << 3)
#define CHIP_IS_OMAP3430ES2		(1 << 4)
#define CHIP_IS_OMAP3430ES3_0		(1 << 5)
#define CHIP_IS_OMAP3430ES3_1		(1 << 6)
#define CHIP_IS_OMAP3630ES1		(1 << 7)
#define CHIP_IS_OMAP4430ES1		(1 << 8)
#define CHIP_IS_OMAP3630ES1_1           (1 << 9)
#define CHIP_IS_OMAP3630ES1_2           (1 << 10)
#define CHIP_IS_OMAP4430ES2		(1 << 11)
#define CHIP_IS_OMAP4430ES2_1		(1 << 12)
#define CHIP_IS_OMAP4430ES2_2		(1 << 13)
#define CHIP_IS_TI816X			(1 << 14)
#define CHIP_IS_OMAP24XX		(CHIP_IS_OMAP2420 | CHIP_IS_OMAP2430)
#define CHIP_IS_OMAP4430		(CHIP_IS_OMAP4430ES1 |		\
CHIP_IS_OMAP4430ES2 |		\
CHIP_IS_OMAP4430ES2_1 |	\
CHIP_IS_OMAP4430ES2_2)
#define CHIP_GE_OMAP3430ES2		(CHIP_IS_OMAP3430ES2 | \
CHIP_IS_OMAP3430ES3_0 | \
CHIP_GE_OMAP3430ES3_1)
#define CHIP_GE_OMAP3430ES3_1		(CHIP_IS_OMAP3430ES3_1 | \
CHIP_IS_OMAP3630ES1 | \
CHIP_GE_OMAP3630ES1_1)
#define CHIP_GE_OMAP3630ES1_1		(CHIP_IS_OMAP3630ES1_1 | \
CHIP_IS_OMAP3630ES1_2)
int omap_chip_is(struct omap_chip_id oci);
void omap2_check_revision(void);
extern u32 omap3_features;
#define OMAP3_HAS_L2CACHE		BIT(0)
#define OMAP3_HAS_IVA			BIT(1)
#define OMAP3_HAS_SGX			BIT(2)
#define OMAP3_HAS_NEON			BIT(3)
#define OMAP3_HAS_ISP			BIT(4)
#define OMAP3_HAS_192MHZ_CLK		BIT(5)
#define OMAP3_HAS_IO_WAKEUP		BIT(6)
#define OMAP3_HAS_SDRC			BIT(7)
#define OMAP3_HAS_FEATURE(feat,flag)			\
static inline unsigned int omap3_has_ ##feat(void)	\
\
OMAP3_HAS_FEATURE(l2cache, L2CACHE)
OMAP3_HAS_FEATURE(sgx, SGX)
OMAP3_HAS_FEATURE(iva, IVA)
OMAP3_HAS_FEATURE(neon, NEON)
OMAP3_HAS_FEATURE(isp, ISP)
OMAP3_HAS_FEATURE(192mhz_clk, 192MHZ_CLK)
OMAP3_HAS_FEATURE(io_wakeup, IO_WAKEUP)
OMAP3_HAS_FEATURE(sdrc, SDRC)
