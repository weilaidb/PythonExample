#define PFX "IPMI poweroff: "
static void ipmi_po_smi_gone(int if_num);
static void ipmi_po_new_smi(int if_num, struct device *device);
#define IPMI_CHASSIS_POWER_DOWN		0
#define IPMI_CHASSIS_POWER_CYCLE	0x02
static int poweroff_powercycle;
static int ifnum_to_use = -1;
static int ready;
static ipmi_user_t ipmi_user;
static int ipmi_ifnum;
static void (*specific_poweroff_func)(ipmi_user_t user);
static void (*old_poweroff_func)(void);
static int set_param_ifnum(const char *val, struct kernel_param *kp)
module_param_call(ifnum_to_use, set_param_ifnum, param_get_int,
&ifnum_to_use, 0644);
MODULE_PARM_DESC(ifnum_to_use, "The interface number to use for the watchdog "
"timer.  Setting to -1 defaults to the first registered "
"interface");
module_param(poweroff_powercycle, int, 0644);
MODULE_PARM_DESC(poweroff_powercycle,
" Set to non-zero to enable power cycle instead of power"
" down. Power cycle is contingent on hardware support,"
" otherwise it defaults back to power down.");
static unsigned int mfg_id;
static unsigned int prod_id;
static unsigned char capabilities;
static unsigned char ipmi_version;
static atomic_t dummy_count = ATOMIC_INIT(0);
static void dummy_smi_free(struct ipmi_smi_msg *msg)
static void dummy_recv_free(struct ipmi_recv_msg *msg)
static struct ipmi_smi_msg halt_smi_msg = ;
static struct ipmi_recv_msg halt_recv_msg = ;
static void receive_handler(struct ipmi_recv_msg *recv_msg, void *handler_data)
static struct ipmi_user_hndl ipmi_poweroff_handler = ;
static int ipmi_request_wait_for_response(ipmi_user_t            user,
struct ipmi_addr       *addr,
struct kernel_ipmi_msg *send_msg)
static int ipmi_request_in_rc_mode(ipmi_user_t            user,
struct ipmi_addr       *addr,
struct kernel_ipmi_msg *send_msg)
#define IPMI_NETFN_ATCA			0x2c
#define IPMI_ATCA_SET_POWER_CMD		0x11
#define IPMI_ATCA_GET_ADDR_INFO_CMD	0x01
#define IPMI_PICMG_ID			0
#define IPMI_NETFN_OEM				0x2e
#define IPMI_ATCA_PPS_GRACEFUL_RESTART		0x11
#define IPMI_ATCA_PPS_IANA			"\x00\x40\x0A"
#define IPMI_MOTOROLA_MANUFACTURER_ID		0x0000A1
#define IPMI_MOTOROLA_PPS_IPMC_PRODUCT_ID	0x0051
static void (*atca_oem_poweroff_hook)(ipmi_user_t user);
static void pps_poweroff_atca(ipmi_user_t user)
static int ipmi_atca_detect(ipmi_user_t user)
static void ipmi_poweroff_atca(ipmi_user_t user)
#define IPMI_NETFN_OEM_1				0xf8
#define OEM_GRP_CMD_SET_RESET_STATE		0x84
#define OEM_GRP_CMD_SET_POWER_STATE		0x82
#define IPMI_NETFN_OEM_8				0xf8
#define OEM_GRP_CMD_REQUEST_HOTSWAP_CTRL	0x80
#define OEM_GRP_CMD_GET_SLOT_GA			0xa3
#define IPMI_NETFN_SENSOR_EVT			0x10
#define IPMI_CMD_GET_EVENT_RECEIVER		0x01
#define IPMI_CPI1_PRODUCT_ID		0x000157
#define IPMI_CPI1_MANUFACTURER_ID	0x0108
static int ipmi_cpi1_detect(ipmi_user_t user)
static void ipmi_poweroff_cpi1(ipmi_user_t user)
#define DELL_IANA_MFR_ID
static int ipmi_dell_chassis_detect(ipmi_user_t user)
#define IPMI_NETFN_CHASSIS_REQUEST	0
#define IPMI_CHASSIS_CONTROL_CMD	0x02
static int ipmi_chassis_detect(ipmi_user_t user)
static void ipmi_poweroff_chassis(ipmi_user_t user)
struct poweroff_function ;
static struct poweroff_function poweroff_functions[] = ;
#define NUM_PO_FUNCS (sizeof(poweroff_functions) \
/ sizeof(struct poweroff_function))
static void ipmi_poweroff_function(void)
static void ipmi_po_new_smi(int if_num, struct device *device)
static void ipmi_po_smi_gone(int if_num)
static struct ipmi_smi_watcher smi_watcher = ;
static ctl_table ipmi_table[] = ;
static ctl_table ipmi_dir_table[] = ;
static ctl_table ipmi_root_table[] = ;
static struct ctl_table_header *ipmi_table_header;
static int __init ipmi_poweroff_init(void)
static void __exit ipmi_poweroff_cleanup(void)
module_exit(ipmi_poweroff_cleanup);
module_init(ipmi_poweroff_init);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Corey Minyard <minyard@mvista.com>");
MODULE_DESCRIPTION("IPMI Poweroff extension to sys_reboot");
