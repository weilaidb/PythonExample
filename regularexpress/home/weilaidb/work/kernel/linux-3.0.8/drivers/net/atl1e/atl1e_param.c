#define ATL1E_MAX_NIC 32
#define OPTION_UNSET    -1
#define OPTION_DISABLED 0
#define OPTION_ENABLED  1
#define ATL1E_PARAM_INIT
#define ATL1E_PARAM(x, desc) \
static int __devinitdata x[ATL1E_MAX_NIC + 1] = ATL1E_PARAM_INIT; \
static unsigned int num_##x; \
module_param_array_named(x, x, int, &num_##x, 0); \
MODULE_PARM_DESC(x, desc);
#define ATL1E_MIN_TX_DESC_CNT		32
#define ATL1E_MAX_TX_DESC_CNT		1020
#define ATL1E_DEFAULT_TX_DESC_CNT	128
ATL1E_PARAM(tx_desc_cnt, "Transmit description count");
#define ATL1E_MIN_RX_MEM_SIZE		8
#define ATL1E_MAX_RX_MEM_SIZE		1024
#define ATL1E_DEFAULT_RX_MEM_SIZE	256
ATL1E_PARAM(rx_mem_size, "memory size of rx buffer(KB)");
ATL1E_PARAM(media_type, "MediaType Select");
#define INT_MOD_DEFAULT_CNT             100
#define INT_MOD_MAX_CNT                 65000
#define INT_MOD_MIN_CNT                 50
ATL1E_PARAM(int_mod_timer, "Interrupt Moderator Timer");
#define AUTONEG_ADV_DEFAULT  0x2F
#define AUTONEG_ADV_MASK     0x2F
#define FLOW_CONTROL_DEFAULT FLOW_CONTROL_FULL
#define FLASH_VENDOR_DEFAULT    0
#define FLASH_VENDOR_MIN        0
#define FLASH_VENDOR_MAX        2
struct atl1e_option ;
static int __devinit atl1e_validate_option(int *value, struct atl1e_option *opt, struct atl1e_adapter *adapter)
void __devinit atl1e_check_options(struct atl1e_adapter *adapter)
