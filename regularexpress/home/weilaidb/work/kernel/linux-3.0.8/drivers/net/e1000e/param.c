#define E1000_MAX_NIC 32
#define OPTION_UNSET   -1
#define OPTION_DISABLED 0
#define OPTION_ENABLED  1
#define COPYBREAK_DEFAULT 256
unsigned int copybreak = COPYBREAK_DEFAULT;
module_param(copybreak, uint, 0644);
MODULE_PARM_DESC(copybreak,
"Maximum size of packet that is copied to a new buffer on receive");
#define E1000_PARAM_INIT
#define E1000_PARAM(X, desc)					\
static int __devinitdata X[E1000_MAX_NIC+1]		\
= E1000_PARAM_INIT;				\
static unsigned int num_##X;				\
module_param_array_named(X, X, int, &num_##X, 0);	\
MODULE_PARM_DESC(X, desc);
E1000_PARAM(TxIntDelay, "Transmit Interrupt Delay");
#define DEFAULT_TIDV 8
#define MAX_TXDELAY 0xFFFF
#define MIN_TXDELAY 0
E1000_PARAM(TxAbsIntDelay, "Transmit Absolute Interrupt Delay");
#define DEFAULT_TADV 32
#define MAX_TXABSDELAY 0xFFFF
#define MIN_TXABSDELAY 0
E1000_PARAM(RxIntDelay, "Receive Interrupt Delay");
#define MAX_RXDELAY 0xFFFF
#define MIN_RXDELAY 0
E1000_PARAM(RxAbsIntDelay, "Receive Absolute Interrupt Delay");
#define MAX_RXABSDELAY 0xFFFF
#define MIN_RXABSDELAY 0
E1000_PARAM(InterruptThrottleRate, "Interrupt Throttling Rate");
#define DEFAULT_ITR 3
#define MAX_ITR 100000
#define MIN_ITR 100
E1000_PARAM(IntMode, "Interrupt Mode");
#define MAX_INTMODE	2
#define MIN_INTMODE	0
E1000_PARAM(SmartPowerDownEnable, "Enable PHY smart power down");
E1000_PARAM(KumeranLockLoss, "Enable Kumeran lock loss workaround");
E1000_PARAM(WriteProtectNVM, "Write-protect NVM [WARNING: disabling this can lead to corrupted NVM]");
E1000_PARAM(CrcStripping, "Enable CRC Stripping, disable if your BMC needs " \
"the CRC");
struct e1000_option ;
static int __devinit e1000_validate_option(unsigned int *value,
const struct e1000_option *opt,
struct e1000_adapter *adapter)
void __devinit e1000e_check_options(struct e1000_adapter *adapter)
