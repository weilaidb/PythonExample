#define __LANGWELL_OTG_H
#define CI_USBCMD		0x30
#	define USBCMD_RST		BIT(1)
#	define USBCMD_RS		BIT(0)
#define CI_USBSTS		0x34
#	define USBSTS_SLI		BIT(8)
#	define USBSTS_URI		BIT(6)
#	define USBSTS_PCI		BIT(2)
#define CI_PORTSC1		0x74
#	define PORTSC_PP		BIT(12)
#	define PORTSC_LS		(BIT(11) | BIT(10))
#	define PORTSC_SUSP		BIT(7)
#	define PORTSC_CCS		BIT(0)
#define CI_HOSTPC1		0xb4
#	define HOSTPC1_PHCD		BIT(22)
#define CI_OTGSC		0xf4
#	define OTGSC_DPIE		BIT(30)
#	define OTGSC_1MSE		BIT(29)
#	define OTGSC_BSEIE		BIT(28)
#	define OTGSC_BSVIE		BIT(27)
#	define OTGSC_ASVIE		BIT(26)
#	define OTGSC_AVVIE		BIT(25)
#	define OTGSC_IDIE		BIT(24)
#	define OTGSC_DPIS		BIT(22)
#	define OTGSC_1MSS		BIT(21)
#	define OTGSC_BSEIS		BIT(20)
#	define OTGSC_BSVIS		BIT(19)
#	define OTGSC_ASVIS		BIT(18)
#	define OTGSC_AVVIS		BIT(17)
#	define OTGSC_IDIS		BIT(16)
#	define OTGSC_DPS		BIT(14)
#	define OTGSC_1MST		BIT(13)
#	define OTGSC_BSE		BIT(12)
#	define OTGSC_BSV		BIT(11)
#	define OTGSC_ASV		BIT(10)
#	define OTGSC_AVV		BIT(9)
#	define OTGSC_ID			BIT(8)
#	define OTGSC_HABA		BIT(7)
#	define OTGSC_HADP		BIT(6)
#	define OTGSC_IDPU		BIT(5)
#	define OTGSC_DP			BIT(4)
#	define OTGSC_OT			BIT(3)
#	define OTGSC_HAAR		BIT(2)
#	define OTGSC_VC			BIT(1)
#	define OTGSC_VD			BIT(0)
#	define OTGSC_INTEN_MASK		(0x7f << 24)
#	define OTGSC_INT_MASK		(0x5f << 24)
#	define OTGSC_INTSTS_MASK	(0x7f << 16)
#define CI_USBMODE		0xf8
#	define USBMODE_CM		(BIT(1) | BIT(0))
#	define USBMODE_IDLE		0
#	define USBMODE_DEVICE		0x2
#	define USBMODE_HOST		0x3
#define USBCFG_ADDR			0xff10801c
#define USBCFG_LEN			4
#	define USBCFG_VBUSVAL		BIT(14)
#	define USBCFG_AVALID		BIT(13)
#	define USBCFG_BVALID		BIT(12)
#	define USBCFG_SESEND		BIT(11)
#define INTR_DUMMY_MASK (USBSTS_SLI | USBSTS_URI | USBSTS_PCI)
enum langwell_otg_timer_type ;
#define TA_WAIT_VRISE	100
#define TA_WAIT_BCON	30000
#define TA_AIDL_BDIS	15000
#define TB_ASE0_BRST	5000
#define TB_SE0_SRP	2
#define TB_SRP_INIT	100
#define TB_SRP_FAIL	5500
#define TB_BUS_SUSPEND	500
struct langwell_otg_timer ;
struct langwell_otg ;
static inline
struct langwell_otg *mid_xceiv_to_lnw(struct intel_mid_otg_xceiv *iotg)
