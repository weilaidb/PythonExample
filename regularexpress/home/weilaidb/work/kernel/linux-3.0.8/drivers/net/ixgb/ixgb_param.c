#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define IXGB_MAX_NIC 8
#define OPTION_UNSET	-1
#define OPTION_DISABLED 0
#define OPTION_ENABLED  1
#define IXGB_PARAM_INIT
#define IXGB_PARAM(X, desc)					\
static int __devinitdata X[IXGB_MAX_NIC+1]		\
= IXGB_PARAM_INIT;				\
static unsigned int num_##X = 0;			\
module_param_array_named(X, X, int, &num_##X, 0);	\
MODULE_PARM_DESC(X, desc);
IXGB_PARAM(TxDescriptors, "Number of transmit descriptors");
IXGB_PARAM(RxDescriptors, "Number of receive descriptors");
IXGB_PARAM(FlowControl, "Flow Control setting");
IXGB_PARAM(XsumRX, "Disable or enable Receive Checksum offload");
IXGB_PARAM(TxIntDelay, "Transmit Interrupt Delay");
IXGB_PARAM(RxIntDelay, "Receive Interrupt Delay");
IXGB_PARAM(RxFCHighThresh, "Receive Flow Control High Threshold");
IXGB_PARAM(RxFCLowThresh, "Receive Flow Control Low Threshold");
IXGB_PARAM(FCReqTimeout, "Flow Control Request Timeout");
IXGB_PARAM(IntDelayEnable, "Transmit Interrupt Delay Enable");
#define DEFAULT_TIDV	   		     32
#define MAX_TIDV			 0xFFFF
#define MIN_TIDV			      0
#define DEFAULT_RDTR		   	     72
#define MAX_RDTR			 0xFFFF
#define MIN_RDTR			      0
#define XSUMRX_DEFAULT		 OPTION_ENABLED
#define DEFAULT_FCRTL	  		0x28000
#define DEFAULT_FCRTH			0x30000
#define MIN_FCRTL			      0
#define MAX_FCRTL			0x3FFE8
#define MIN_FCRTH			      8
#define MAX_FCRTH			0x3FFF0
#define MIN_FCPAUSE			      1
#define MAX_FCPAUSE			 0xffff
#define DEFAULT_FCPAUSE		  	 0xFFFF
struct ixgb_option ;
static int __devinit
ixgb_validate_option(unsigned int *value, const struct ixgb_option *opt)
void __devinit
ixgb_check_options(struct ixgb_adapter *adapter)
