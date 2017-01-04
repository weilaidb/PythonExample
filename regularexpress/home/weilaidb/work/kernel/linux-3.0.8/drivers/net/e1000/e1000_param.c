#define E1000_MAX_NIC 32
#define OPTION_UNSET   -1
#define OPTION_DISABLED 0
#define OPTION_ENABLED  1
#define E1000_PARAM_INIT
#define E1000_PARAM(X, desc) \
static int __devinitdata X[E1000_MAX_NIC+1] = E1000_PARAM_INIT; \
static unsigned int num_##X; \
module_param_array_named(X, X, int, &num_##X, 0); \
MODULE_PARM_DESC(X, desc);
E1000_PARAM(TxDescriptors, "Number of transmit descriptors");
E1000_PARAM(RxDescriptors, "Number of receive descriptors");
E1000_PARAM(Speed, "Speed setting");
E1000_PARAM(Duplex, "Duplex setting");
E1000_PARAM(AutoNeg, "Advertised auto-negotiation setting");
#define AUTONEG_ADV_DEFAULT  0x2F
#define AUTONEG_ADV_MASK     0x2F
E1000_PARAM(FlowControl, "Flow Control setting");
#define FLOW_CONTROL_DEFAULT FLOW_CONTROL_FULL
E1000_PARAM(XsumRX, "Disable or enable Receive Checksum offload");
E1000_PARAM(TxIntDelay, "Transmit Interrupt Delay");
#define DEFAULT_TIDV                   8
#define MAX_TXDELAY               0xFFFF
#define MIN_TXDELAY                    0
E1000_PARAM(TxAbsIntDelay, "Transmit Absolute Interrupt Delay");
#define DEFAULT_TADV                  32
#define MAX_TXABSDELAY            0xFFFF
#define MIN_TXABSDELAY                 0
E1000_PARAM(RxIntDelay, "Receive Interrupt Delay");
#define DEFAULT_RDTR                   0
#define MAX_RXDELAY               0xFFFF
#define MIN_RXDELAY                    0
E1000_PARAM(RxAbsIntDelay, "Receive Absolute Interrupt Delay");
#define DEFAULT_RADV                   8
#define MAX_RXABSDELAY            0xFFFF
#define MIN_RXABSDELAY                 0
E1000_PARAM(InterruptThrottleRate, "Interrupt Throttling Rate");
#define DEFAULT_ITR                    3
#define MAX_ITR                   100000
#define MIN_ITR                      100
E1000_PARAM(SmartPowerDownEnable, "Enable PHY smart power down");
struct e1000_option ;
static int __devinit e1000_validate_option(unsigned int *value,
const struct e1000_option *opt,
struct e1000_adapter *adapter)
static void e1000_check_fiber_options(struct e1000_adapter *adapter);
static void e1000_check_copper_options(struct e1000_adapter *adapter);
void __devinit e1000_check_options(struct e1000_adapter *adapter)
static void __devinit e1000_check_fiber_options(struct e1000_adapter *adapter)
static void __devinit e1000_check_copper_options(struct e1000_adapter *adapter)
