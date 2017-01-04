#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static u8 *shut_txf_buf;
static u8 *time_txf_buf;
static u8 *hbeat_txf_buf;
static void shutdown_onchannelcallback(void *context)
static inline void do_adj_guesttime(u64 hosttime)
static inline void adj_guesttime(u64 hosttime, u8 flags)
static void timesync_onchannelcallback(void *context)
static void heartbeat_onchannelcallback(void *context)
static const struct pci_device_id __initconst
hv_utils_pci_table[] __maybe_unused = ;
MODULE_DEVICE_TABLE(pci, hv_utils_pci_table);
static const struct dmi_system_id __initconst
hv_utils_dmi_table[] __maybe_unused  = ;
MODULE_DEVICE_TABLE(dmi, hv_utils_dmi_table);
static int __init init_hyperv_utils(void)
static void exit_hyperv_utils(void)
module_init(init_hyperv_utils);
module_exit(exit_hyperv_utils);
MODULE_DESCRIPTION("Hyper-V Utilities");
MODULE_VERSION(HV_DRV_VERSION);
MODULE_LICENSE("GPL");
