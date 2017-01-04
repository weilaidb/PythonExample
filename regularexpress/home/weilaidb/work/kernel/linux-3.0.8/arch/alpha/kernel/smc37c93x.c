#define SMC_DEBUG 0
#if SMC_DEBUG
# define DBG_DEVS(args)         printk args
# define DBG_DEVS(args)
#define KB              1024
#define MB              (1024*KB)
#define GB              (1024*MB)
#define DEVICE_ON		1
#define DEVICE_OFF		0
#define CONFIG_ON_KEY		0x55
#define CONFIG_OFF_KEY		0xaa
#define FDC			0
#define IDE1			1
#define IDE2			2
#define PARP			3
#define SER1			4
#define SER2			5
#define RTCL			6
#define KYBD			7
#define AUXIO			8
#define CONFIG_CONTROL		0x02
#define INDEX_ADDRESS		0x03
#define LOGICAL_DEVICE_NUMBER	0x07
#define DEVICE_ID		0x20
#define DEVICE_REV		0x21
#define POWER_CONTROL		0x22
#define POWER_MGMT		0x23
#define OSC			0x24
#define ACTIVATE		0x30
#define ADDR_HI			0x60
#define ADDR_LO			0x61
#define INTERRUPT_SEL		0x70
#define INTERRUPT_SEL_2		0x72
#define DMA_CHANNEL_SEL		0x74
#define FDD_MODE_REGISTER	0x90
#define FDD_OPTION_REGISTER	0x91
#define VALID_DEVICE_ID		2
#define KYBD_INTERRUPT		1
#define MOUS_INTERRUPT		12
#define COM2_BASE		0x2f8
#define COM2_INTERRUPT		3
#define COM1_BASE		0x3f8
#define COM1_INTERRUPT		4
#define PARP_BASE		0x3bc
#define PARP_INTERRUPT		7
static unsigned long __init SMCConfigState(unsigned long baseAddr)
static void __init SMCRunState(unsigned long baseAddr)
static unsigned long __init SMCDetectUltraIO(void)
static void __init SMCEnableDevice(unsigned long baseAddr,
unsigned long device,
unsigned long portaddr,
unsigned long interrupt)
static void __init SMCEnableKYBD(unsigned long baseAddr)
static void __init SMCEnableFDC(unsigned long baseAddr)
#if SMC_DEBUG
static void __init SMCReportDeviceStatus(unsigned long baseAddr)
int __init SMC93x_Init(void)
