#define MCC1_30MHZ_POWERUP_SELECT	(1 << 14)
#define MCC1_DIV9			(1 << 13)
#define MCC1_ETHMIPS_POWERUP_SELECT	(1 << 11)
#define MCC1_USB_POWERUP_SELECT		(1 << 1)
#define MCC1_CLOCK108_POWERUP_SELECT	(1 << 0)
#define MCC1_USB_CLOCK_HIGH_Z		(0 << 4)
#define MCC1_USB_CLOCK_48MHZ		(1 << 4)
#define MCC1_USB_CLOCK_24MHZ		(2 << 4)
#define MCC1_USB_CLOCK_6MHZ		(3 << 4)
#define MCC1_CONFIG	(MCC1_30MHZ_POWERUP_SELECT |		\
MCC1_DIV9 |				\
MCC1_ETHMIPS_POWERUP_SELECT |		\
MCC1_USB_POWERUP_SELECT |		\
MCC1_CLOCK108_POWERUP_SELECT)
#define MCC2_GMII_GCLK_TO_PAD		(1 << 31)
#define MCC2_ETHER125_0_CLOCK_SELECT	(1 << 29)
#define MCC2_RMII_0_CLOCK_SELECT	(1 << 28)
#define MCC2_GMII_TX0_CLOCK_SELECT	(1 << 27)
#define MCC2_GMII_RX0_CLOCK_SELECT	(1 << 26)
#define MCC2_ETHER125_1_CLOCK_SELECT	(1 << 24)
#define MCC2_RMII_1_CLOCK_SELECT	(1 << 23)
#define MCC2_GMII_TX1_CLOCK_SELECT	(1 << 22)
#define MCC2_GMII_RX1_CLOCK_SELECT	(1 << 21)
#define MCC2_ETHER125_2_CLOCK_SELECT	(1 << 19)
#define MCC2_RMII_2_CLOCK_SELECT	(1 << 18)
#define MCC2_GMII_TX2_CLOCK_SELECT	(1 << 17)
#define MCC2_GMII_RX2_CLOCK_SELECT	(1 << 16)
#define ETHER_CLK_CONFIG	(MCC2_GMII_GCLK_TO_PAD |	\
MCC2_ETHER125_0_CLOCK_SELECT |	\
MCC2_RMII_0_CLOCK_SELECT |	\
MCC2_GMII_TX0_CLOCK_SELECT |	\
MCC2_GMII_RX0_CLOCK_SELECT |	\
MCC2_ETHER125_1_CLOCK_SELECT |	\
MCC2_RMII_1_CLOCK_SELECT |	\
MCC2_GMII_TX1_CLOCK_SELECT |	\
MCC2_GMII_RX1_CLOCK_SELECT |	\
MCC2_ETHER125_2_CLOCK_SELECT |	\
MCC2_RMII_2_CLOCK_SELECT |	\
MCC2_GMII_TX2_CLOCK_SELECT |	\
MCC2_GMII_RX2_CLOCK_SELECT)
#define FSX4A_REF_SELECT		(1 << 16)
#define FSX4B_REF_SELECT		(1 << 17)
#define FSX4C_REF_SELECT		(1 << 18)
#define DDR_PLL_REF_SELECT		(1 << 19)
#define MIPS_PLL_REF_SELECT		(1 << 20)
#define QAM_FS_SDIV_SHIFT		29
#define QAM_FS_MD_SHIFT			24
#define QAM_FS_MD_MASK			0x1f
#define QAM_FS_PE_SHIFT			8
#define QAM_FS_DISABLE_DIVIDE_BY_3		(1 << 5)
#define QAM_FS_ENABLE_PROGRAM			(1 << 4)
#define	QAM_FS_ENABLE_OUTPUT			(1 << 3)
#define	QAM_FS_SELECT_TEST_BYPASS		(1 << 2)
#define	QAM_FS_DISABLE_DIGITAL_STANDBY		(1 << 1)
#define QAM_FS_CHOOSE_FS			(1 << 0)
#define QAM_FS_NSDIV_54MHZ			(1 << 2)
#define BCM1_USB2_CTL_BISTOK				(1 << 11)
#define BCM1_USB2_CTL_PORT2_SHIFT_JK			(1 << 7)
#define BCM1_USB2_CTL_PORT1_SHIFT_JK			(1 << 6)
#define BCM1_USB2_CTL_PORT2_FAST_EDGE			(1 << 5)
#define BCM1_USB2_CTL_PORT1_FAST_EDGE			(1 << 4)
#define BCM1_USB2_CTL_EHCI_PRT_PWR_ACTIVE_HIGH		(1 << 1)
#define BCM1_USB2_CTL_APP_PRT_OVRCUR_IN_ACTIVE_HIGH	(1 << 0)
#define CRT_SPARE_PORT2_SHIFT_JK			(1 << 21)
#define CRT_SPARE_PORT1_SHIFT_JK			(1 << 20)
#define CRT_SPARE_PORT2_FAST_EDGE			(1 << 19)
#define CRT_SPARE_PORT1_FAST_EDGE			(1 << 18)
#define CRT_SPARE_DIVIDE_BY_9_FROM_432			(1 << 17)
#define CRT_SPARE_USB_DIVIDE_BY_9			(1 << 16)
#define USB_STBUS_OBC_STORE32_LOAD32			0x3
#define USB2_STBUS_MESS_SIZE_2				0x1
#define USB2_STBUS_CHUNK_SIZE_2				0x1
#define USB2_STRAP_HFREQ_SELECT				0x1
static struct resource ehci_resources[] = ;
static u64 ehci_dmamask = 0xffffffffULL;
static struct platform_device ehci_device = ;
static struct resource ohci_resources[] = ;
static u64 ohci_dmamask = 0xffffffffULL;
static struct platform_device ohci_device = ;
static unsigned usb_users;
static DEFINE_SPINLOCK(usb_regs_lock);
static void fs_update(u32 pe_bits, int md_bits, u32 sdiv_bits,
u32 disable_div_by_3, u32 standby)
static void usb_eye_configure(u32 set, u32 clear)
static void platform_configure_usb(void)
static void platform_unconfigure_usb(void)
void platform_configure_usb_ehci()
EXPORT_SYMBOL(platform_configure_usb_ehci);
void platform_configure_usb_ohci()
EXPORT_SYMBOL(platform_configure_usb_ohci);
void platform_unconfigure_usb_ehci()
EXPORT_SYMBOL(platform_unconfigure_usb_ehci);
void platform_unconfigure_usb_ohci()
EXPORT_SYMBOL(platform_unconfigure_usb_ohci);
int __init platform_usb_devices_init(struct platform_device **ehci_dev,
struct platform_device **ohci_dev)
