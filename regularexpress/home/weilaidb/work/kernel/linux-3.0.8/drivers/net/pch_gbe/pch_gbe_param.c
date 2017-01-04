#define OPTION_UNSET   -1
#define OPTION_DISABLED 0
#define OPTION_ENABLED  1
static int TxDescriptors = OPTION_UNSET;
module_param(TxDescriptors, int, 0);
MODULE_PARM_DESC(TxDescriptors, "Number of transmit descriptors");
static int RxDescriptors = OPTION_UNSET;
module_param(RxDescriptors, int, 0);
MODULE_PARM_DESC(RxDescriptors, "Number of receive descriptors");
static int Speed = OPTION_UNSET;
module_param(Speed, int, 0);
MODULE_PARM_DESC(Speed, "Speed setting");
static int Duplex = OPTION_UNSET;
module_param(Duplex, int, 0);
MODULE_PARM_DESC(Duplex, "Duplex setting");
#define HALF_DUPLEX 1
#define FULL_DUPLEX 2
static int AutoNeg = OPTION_UNSET;
module_param(AutoNeg, int, 0);
MODULE_PARM_DESC(AutoNeg, "Advertised auto-negotiation setting");
#define PHY_ADVERTISE_10_HALF      0x0001
#define PHY_ADVERTISE_10_FULL      0x0002
#define PHY_ADVERTISE_100_HALF     0x0004
#define PHY_ADVERTISE_100_FULL     0x0008
#define PHY_ADVERTISE_1000_HALF    0x0010
#define PHY_ADVERTISE_1000_FULL    0x0020
#define PCH_AUTONEG_ADVERTISE_DEFAULT   0x2F
static int FlowControl = OPTION_UNSET;
module_param(FlowControl, int, 0);
MODULE_PARM_DESC(FlowControl, "Flow Control setting");
static int XsumRX = OPTION_UNSET;
module_param(XsumRX, int, 0);
MODULE_PARM_DESC(XsumRX, "Disable or enable Receive Checksum offload");
#define PCH_GBE_DEFAULT_RX_CSUM             true
static int XsumTX = OPTION_UNSET;
module_param(XsumTX, int, 0);
MODULE_PARM_DESC(XsumTX, "Disable or enable Transmit Checksum offload");
#define PCH_GBE_DEFAULT_TX_CSUM             true
struct pch_gbe_option ;
static const struct pch_gbe_opt_list speed_list[] = ;
static const struct pch_gbe_opt_list dplx_list[] = ;
static const struct pch_gbe_opt_list an_list[] =
#define AA "AutoNeg advertising "
;
static const struct pch_gbe_opt_list fc_list[] = ;
static int pch_gbe_validate_option(int *value,
const struct pch_gbe_option *opt,
struct pch_gbe_adapter *adapter)
static void pch_gbe_check_copper_options(struct pch_gbe_adapter *adapter)
void pch_gbe_check_options(struct pch_gbe_adapter *adapter)
