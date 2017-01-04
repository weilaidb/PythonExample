#define LINUX_HACK_FUDGE_FACTOR 16
#define BDATA_BDADDR_OFFSET     28
u8 bcast_mac[] = ;
u8 null_mac[] = ;
#define  ATH_DEBUG_DBG_LOG       ATH_DEBUG_MAKE_MODULE_MASK(0)
#define  ATH_DEBUG_WLAN_CONNECT  ATH_DEBUG_MAKE_MODULE_MASK(1)
#define  ATH_DEBUG_WLAN_SCAN     ATH_DEBUG_MAKE_MODULE_MASK(2)
#define  ATH_DEBUG_WLAN_TX       ATH_DEBUG_MAKE_MODULE_MASK(3)
#define  ATH_DEBUG_WLAN_RX       ATH_DEBUG_MAKE_MODULE_MASK(4)
#define  ATH_DEBUG_HTC_RAW       ATH_DEBUG_MAKE_MODULE_MASK(5)
#define  ATH_DEBUG_HCI_BRIDGE    ATH_DEBUG_MAKE_MODULE_MASK(6)
static struct ath_debug_mask_description driver_debug_desc[] = ;
ATH_DEBUG_INSTANTIATE_MODULE_VAR(driver,
"driver",
"Linux Driver Interface",
ATH_DEBUG_MASK_DEFAULTS | ATH_DEBUG_WLAN_SCAN |
ATH_DEBUG_HCI_BRIDGE,
ATH_DEBUG_DESCRIPTION_COUNT(driver_debug_desc),
driver_debug_desc);
#define IS_MAC_NULL(mac) (mac[0]==0 && mac[1]==0 && mac[2]==0 && mac[3]==0 && mac[4]==0 && mac[5]==0)
#define IS_MAC_BCAST(mac) (*mac==0xff)
#define DESCRIPTION "Driver to access the Atheros AR600x Device, version " __stringify(__VER_MAJOR_) "." __stringify(__VER_MINOR_) "." __stringify(__VER_PATCH_) "." __stringify(__BUILD_NUMBER_)
MODULE_AUTHOR("Atheros Communications, Inc.");
MODULE_DESCRIPTION(DESCRIPTION);
MODULE_LICENSE("Dual BSD/GPL");
#undef ADAPTIVE_POWER_THROUGHPUT_CONTROL
#define APTC_TRAFFIC_SAMPLING_INTERVAL     100
#define APTC_UPPER_THROUGHPUT_THRESHOLD    3000
#define APTC_LOWER_THROUGHPUT_THRESHOLD    2000
typedef struct aptc_traffic_record  APTC_TRAFFIC_RECORD;
A_TIMER aptcTimer;
APTC_TRAFFIC_RECORD aptcTR;
struct hci_transport_callbacks ar6kHciTransCallbacks = ;
unsigned int processDot11Hdr = 0;
char ifname[IFNAMSIZ] = ;
int wlaninitmode = WLAN_INIT_MODE_DEFAULT;
static bool bypasswmi;
unsigned int debuglevel = 0;
int tspecCompliance = ATHEROS_COMPLIANCE;
unsigned int busspeedlow = 0;
unsigned int onebitmode = 0;
unsigned int skipflash = 0;
unsigned int wmitimeout = 2;
unsigned int wlanNodeCaching = 1;
unsigned int enableuartprint = ENABLEUARTPRINT_DEFAULT;
unsigned int logWmiRawMsgs = 0;
unsigned int enabletimerwar = 0;
unsigned int num_device = 1;
unsigned int regscanmode;
unsigned int fwmode = 1;
unsigned int mbox_yield_limit = 99;
unsigned int enablerssicompensation = 0;
int reduce_credit_dribble = 1 + HTC_CONNECT_FLAGS_THRESHOLD_LEVEL_ONE_HALF;
int allow_trace_signal = 0;
unsigned int testmode =0;
unsigned int irqprocmode = HIF_DEVICE_IRQ_SYNC_ONLY;
unsigned int panic_on_assert = 1;
unsigned int nohifscattersupport = NOHIFSCATTERSUPPORT_DEFAULT;
unsigned int setuphci = SETUPHCI_DEFAULT;
unsigned int loghci = 0;
unsigned int setupbtdev = SETUPBTDEV_DEFAULT;
unsigned int ar3khcibaud = AR3KHCIBAUD_DEFAULT;
unsigned int hciuartscale = HCIUARTSCALE_DEFAULT;
unsigned int hciuartstep = HCIUARTSTEP_DEFAULT;
unsigned int csumOffload=0;
unsigned int csumOffloadTest=0;
unsigned int eppingtest=0;
unsigned int mac_addr_method;
unsigned int firmware_bridge;
module_param_string(ifname, ifname, sizeof(ifname), 0644);
module_param(wlaninitmode, int, 0644);
module_param(bypasswmi, bool, 0644);
module_param(debuglevel, uint, 0644);
module_param(tspecCompliance, int, 0644);
module_param(onebitmode, uint, 0644);
module_param(busspeedlow, uint, 0644);
module_param(skipflash, uint, 0644);
module_param(wmitimeout, uint, 0644);
module_param(wlanNodeCaching, uint, 0644);
module_param(logWmiRawMsgs, uint, 0644);
module_param(enableuartprint, uint, 0644);
module_param(enabletimerwar, uint, 0644);
module_param(fwmode, uint, 0644);
module_param(mbox_yield_limit, uint, 0644);
module_param(reduce_credit_dribble, int, 0644);
module_param(allow_trace_signal, int, 0644);
module_param(enablerssicompensation, uint, 0644);
module_param(processDot11Hdr, uint, 0644);
module_param(csumOffload, uint, 0644);
module_param(testmode, uint, 0644);
module_param(irqprocmode, uint, 0644);
module_param(nohifscattersupport, uint, 0644);
module_param(panic_on_assert, uint, 0644);
module_param(setuphci, uint, 0644);
module_param(loghci, uint, 0644);
module_param(setupbtdev, uint, 0644);
module_param(ar3khcibaud, uint, 0644);
module_param(hciuartscale, uint, 0644);
module_param(hciuartstep, uint, 0644);
module_param(eppingtest, uint, 0644);
unsigned int _mboxnum = HTC_MAILBOX_NUM_MAX;
#define mboxnum &_mboxnum
u32 g_dbg_flags = DBG_DEFAULTS;
unsigned int debugflags = 0;
int debugdriver = 0;
unsigned int debughtc = 0;
unsigned int debugbmi = 0;
unsigned int debughif = 0;
unsigned int txcreditsavailable[HTC_MAILBOX_NUM_MAX] = ;
unsigned int txcreditsconsumed[HTC_MAILBOX_NUM_MAX] = ;
unsigned int txcreditintrenable[HTC_MAILBOX_NUM_MAX] = ;
unsigned int txcreditintrenableaggregate[HTC_MAILBOX_NUM_MAX] = ;
module_param(debugflags, uint, 0644);
module_param(debugdriver, int, 0644);
module_param(debughtc, uint, 0644);
module_param(debugbmi, uint, 0644);
module_param(debughif, uint, 0644);
module_param_array(txcreditsavailable, uint, mboxnum, 0644);
module_param_array(txcreditsconsumed, uint, mboxnum, 0644);
module_param_array(txcreditintrenable, uint, mboxnum, 0644);
module_param_array(txcreditintrenableaggregate, uint, mboxnum, 0644);
unsigned int resetok = 1;
unsigned int tx_attempt[HTC_MAILBOX_NUM_MAX] = ;
unsigned int tx_post[HTC_MAILBOX_NUM_MAX] = ;
unsigned int tx_complete[HTC_MAILBOX_NUM_MAX] = ;
unsigned int hifBusRequestNumMax = 40;
unsigned int war23838_disabled = 0;
unsigned int enableAPTCHeuristics = 1;
module_param_array(tx_attempt, uint, mboxnum, 0644);
module_param_array(tx_post, uint, mboxnum, 0644);
module_param_array(tx_complete, uint, mboxnum, 0644);
module_param(hifBusRequestNumMax, uint, 0644);
module_param(war23838_disabled, uint, 0644);
module_param(resetok, uint, 0644);
module_param(enableAPTCHeuristics, uint, 0644);
int blocktx = 0;
module_param(blocktx, int, 0644);
typedef struct user_rssi_compensation_t  USER_RSSI_CPENSATION;
static USER_RSSI_CPENSATION rssi_compensation_param;
static s16 rssi_compensation_table[96];
int reconnect_flag = 0;
static ar6k_pal_config_t ar6k_pal_config_g;
static int ar6000_init_module(void);
static void ar6000_cleanup_module(void);
int ar6000_init(struct net_device *dev);
static int ar6000_open(struct net_device *dev);
static int ar6000_close(struct net_device *dev);
static void ar6000_init_control_info(struct ar6_softc *ar);
static int ar6000_data_tx(struct sk_buff *skb, struct net_device *dev);
void ar6000_destroy(struct net_device *dev, unsigned int unregister);
static void ar6000_detect_error(unsigned long ptr);
static void	ar6000_set_multicast_list(struct net_device *dev);
static struct net_device_stats *ar6000_get_stats(struct net_device *dev);
static void disconnect_timer_handler(unsigned long ptr);
void read_rssi_compensation_param(struct ar6_softc *ar);
static int ar6000_avail_ev(void *context, void *hif_handle);
static int ar6000_unavail_ev(void *context, void *hif_handle);
int ar6000_configure_target(struct ar6_softc *ar);
static void ar6000_target_failure(void *Instance, int Status);
static void ar6000_rx(void *Context, struct htc_packet *pPacket);
static void ar6000_rx_refill(void *Context,HTC_ENDPOINT_ID Endpoint);
static void ar6000_tx_complete(void *Context, struct htc_packet_queue *pPackets);
static HTC_SEND_FULL_ACTION ar6000_tx_queue_full(void *Context, struct htc_packet *pPacket);
static void ar6000_alloc_netbufs(A_NETBUF_QUEUE_T *q, u16 num);
static void ar6000_deliver_frames_to_nw_stack(void * dev, void *osbuf);
static struct htc_packet *ar6000_alloc_amsdu_rxbuf(void *Context, HTC_ENDPOINT_ID Endpoint, int Length);
static void ar6000_refill_amsdu_rxbufs(struct ar6_softc *ar, int Count);
static void ar6000_cleanup_amsdu_rxbufs(struct ar6_softc *ar);
static ssize_t
ar6000_sysfs_bmi_read(struct file *fp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count);
static ssize_t
ar6000_sysfs_bmi_write(struct file *fp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count);
static int
ar6000_sysfs_bmi_init(struct ar6_softc *ar);
void  ar6k_cleanup_hci_pal(struct ar6_softc *ar);
static void
ar6000_sysfs_bmi_deinit(struct ar6_softc *ar);
int
ar6000_sysfs_bmi_get_config(struct ar6_softc *ar, u32 mode);
struct net_device *ar6000_devices[MAX_AR6000];
static int is_netdev_registered;
DECLARE_WAIT_QUEUE_HEAD(arEvent);
static void ar6000_cookie_init(struct ar6_softc *ar);
static void ar6000_cookie_cleanup(struct ar6_softc *ar);
static void ar6000_free_cookie(struct ar6_softc *ar, struct ar_cookie * cookie);
static struct ar_cookie *ar6000_alloc_cookie(struct ar6_softc *ar);
static int ar6000_reinstall_keys(struct ar6_softc *ar,u8 key_op_ctrl);
struct net_device *arApNetDev;
static struct ar_cookie s_ar_cookie_mem[MAX_COOKIE_NUM];
#define HOST_INTEREST_ITEM_ADDRESS(ar, item) \
(((ar)->arTargetType == TARGET_TYPE_AR6002) ? AR6002_HOST_INTEREST_ITEM_ADDRESS(item) : \
(((ar)->arTargetType == TARGET_TYPE_AR6003) ? AR6003_HOST_INTEREST_ITEM_ADDRESS(item) : 0))
static struct net_device_ops ar6000_netdev_ops = ;
#define REPORT_DEBUG_LOGS_TO_APP
int
ar6000_set_host_app_area(struct ar6_softc *ar)
u32 dbglog_get_debug_hdr_ptr(struct ar6_softc *ar)
void
ar6000_dbglog_init_done(struct ar6_softc *ar)
u32 dbglog_get_debug_fragment(s8 *datap, u32 len, u32 limit)
void
dbglog_parse_debug_logs(s8 *datap, u32 len)
int
ar6000_dbglog_get_debug_logs(struct ar6_softc *ar)
void
ar6000_dbglog_event(struct ar6_softc *ar, u32 dropped,
s8 *buffer, u32 length)
static int __init
ar6000_init_module(void)
static void __exit
ar6000_cleanup_module(void)
void
aptcTimerHandler(unsigned long arg)
static void
ar6000_alloc_netbufs(A_NETBUF_QUEUE_T *q, u16 num)
static struct bin_attribute bmi_attr = ;
static ssize_t
ar6000_sysfs_bmi_read(struct file *fp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static ssize_t
ar6000_sysfs_bmi_write(struct file *fp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static int
ar6000_sysfs_bmi_init(struct ar6_softc *ar)
static void
ar6000_sysfs_bmi_deinit(struct ar6_softc *ar)
#define bmifn(fn) do  while(0)
#define AR6002_MAC_ADDRESS_OFFSET     0x0A
#define AR6003_MAC_ADDRESS_OFFSET     0x16
static
void calculate_crc(u32 TargetType, u8 *eeprom_data)
static void
ar6000_softmac_update(struct ar6_softc *ar, u8 *eeprom_data, size_t size)
static int
ar6000_transfer_bin_file(struct ar6_softc *ar, AR6K_BIN_FILE file, u32 address, bool compressed)
int
ar6000_update_bdaddr(struct ar6_softc *ar)
int
ar6000_sysfs_bmi_get_config(struct ar6_softc *ar, u32 mode)
int
ar6000_configure_target(struct ar6_softc *ar)
static void
init_netdev(struct net_device *dev, char *name)
static int __ath6kl_init_netdev(struct net_device *dev)
static int ath6kl_init_netdev_wmi(struct net_device *dev)
static int ath6kl_init_netdev_wmi(struct net_device *dev)
static int ath6kl_init_netdev(struct ar6_softc *ar)
static int
ar6000_avail_ev(void *context, void *hif_handle)
static void ar6000_target_failure(void *Instance, int Status)
static int
ar6000_unavail_ev(void *context, void *hif_handle)
void
ar6000_restart_endpoint(struct net_device *dev)
void
ar6000_stop_endpoint(struct net_device *dev, bool keepprofile, bool getdbglogs)
void
ar6000_destroy(struct net_device *dev, unsigned int unregister)
static void disconnect_timer_handler(unsigned long ptr)
static void ar6000_detect_error(unsigned long ptr)
void ar6000_init_profile_info(struct ar6_softc *ar)
static void
ar6000_init_control_info(struct ar6_softc *ar)
static int
ar6000_open(struct net_device *dev)
static int
ar6000_close(struct net_device *dev)
static int ar6000_connectservice(struct ar6_softc               *ar,
struct htc_service_connect_req  *pConnect,
char *pDesc)
void ar6000_TxDataCleanup(struct ar6_softc *ar)
HTC_ENDPOINT_ID
ar6000_ac2_endpoint_id ( void * devt, u8 ac)
u8 ar6000_endpoint_id2_ac(void * devt, HTC_ENDPOINT_ID ep )
#if defined(CONFIG_ATH6KL_ENABLE_COEXISTENCE)
static int ath6kl_config_btcoex_params(struct ar6_softc *ar)
static int ath6kl_config_btcoex_params(struct ar6_softc *ar)
int ar6000_target_config_wlan_params(struct ar6_softc *ar)
int ar6000_init(struct net_device *dev)
void
ar6000_bitrate_rx(void *devt, s32 rateKbps)
void
ar6000_ratemask_rx(void *devt, u32 ratemask)
void
ar6000_txPwr_rx(void *devt, u8 txPwr)
void
ar6000_channelList_rx(void *devt, s8 numChan, u16 *chanList)
u8 ar6000_ibss_map_epid(struct sk_buff *skb, struct net_device *dev, u32 *mapNo)
static void ar6000_dump_skb(struct sk_buff *skb)
static void DoHTCSendPktsTest(struct ar6_softc *ar, int MapNo, HTC_ENDPOINT_ID eid, struct sk_buff *skb);
static int
ar6000_data_tx(struct sk_buff *skb, struct net_device *dev)
int
ar6000_acl_data_tx(struct sk_buff *skb, struct net_device *dev)
static void
tvsub(register struct timeval *out, register struct timeval *in)
void
applyAPTCHeuristics(struct ar6_softc *ar)
static HTC_SEND_FULL_ACTION ar6000_tx_queue_full(void *Context, struct htc_packet *pPacket)
static void
ar6000_tx_complete(void *Context, struct htc_packet_queue *pPacketQueue)
sta_t *
ieee80211_find_conn(struct ar6_softc *ar, u8 *node_addr)
sta_t *ieee80211_find_conn_for_aid(struct ar6_softc *ar, u8 aid)
int pktcount;
static void
ar6000_rx(void *Context, struct htc_packet *pPacket)
static void
ar6000_deliver_frames_to_nw_stack(void *dev, void *osbuf)
static void
ar6000_rx_refill(void *Context, HTC_ENDPOINT_ID Endpoint)
static void ar6000_cleanup_amsdu_rxbufs(struct ar6_softc *ar)
static void ar6000_refill_amsdu_rxbufs(struct ar6_softc *ar, int Count)
static struct htc_packet *ar6000_alloc_amsdu_rxbuf(void *Context, HTC_ENDPOINT_ID Endpoint, int Length)
static void
ar6000_set_multicast_list(struct net_device *dev)
static struct net_device_stats *
ar6000_get_stats(struct net_device *dev)
void
ar6000_ready_event(void *devt, u8 *datap, u8 phyCap, u32 sw_ver, u32 abi_ver)
void ar6000_install_static_wep_keys(struct ar6_softc *ar)
void
add_new_sta(struct ar6_softc *ar, u8 *mac, u16 aid, u8 *wpaie,
u8 ielen, u8 keymgmt, u8 ucipher, u8 auth)
void
ar6000_connect_event(struct ar6_softc *ar, u16 channel, u8 *bssid,
u16 listenInterval, u16 beaconInterval,
NETWORK_TYPE networkType, u8 beaconIeLen,
u8 assocReqLen, u8 assocRespLen,
u8 *assocInfo)
void ar6000_set_numdataendpts(struct ar6_softc *ar, u32 num)
void
sta_cleanup(struct ar6_softc *ar, u8 i)
u8 remove_sta(struct ar6_softc *ar, u8 *mac, u16 reason)
void
ar6000_disconnect_event(struct ar6_softc *ar, u8 reason, u8 *bssid,
u8 assocRespLen, u8 *assocInfo, u16 protocolReasonStatus)
void
ar6000_regDomain_event(struct ar6_softc *ar, u32 regCode)
void
ar6000_aggr_rcv_addba_req_evt(struct ar6_softc *ar, WMI_ADDBA_REQ_EVENT *evt)
void
ar6000_aggr_rcv_addba_resp_evt(struct ar6_softc *ar, WMI_ADDBA_RESP_EVENT *evt)
void
ar6000_aggr_rcv_delba_req_evt(struct ar6_softc *ar, WMI_DELBA_EVENT *evt)
void register_pal_cb(ar6k_pal_config_t *palConfig_p)
void
ar6000_hci_event_rcv_evt(struct ar6_softc *ar, WMI_HCI_EVENT *cmd)
void
ar6000_neighborReport_event(struct ar6_softc *ar, int numAps, WMI_NEIGHBOR_INFO *info)
void
ar6000_tkip_micerr_event(struct ar6_softc *ar, u8 keyid, bool ismcast)
void
ar6000_scanComplete_event(struct ar6_softc *ar, int status)
void
ar6000_targetStats_event(struct ar6_softc *ar,  u8 *ptr, u32 len)
void
ar6000_rssiThreshold_event(struct ar6_softc *ar,  WMI_RSSI_THRESHOLD_VAL newThreshold, s16 rssi)
void
ar6000_hbChallengeResp_event(struct ar6_softc *ar, u32 cookie, u32 source)
void
ar6000_reportError_event(struct ar6_softc *ar, WMI_TARGET_ERROR_VAL errorVal)
void
ar6000_cac_event(struct ar6_softc *ar, u8 ac, u8 cacIndication,
u8 statusCode, u8 *tspecSuggestion)
void
ar6000_channel_change_event(struct ar6_softc *ar, u16 oldChannel,
u16 newChannel)
#define AR6000_PRINT_BSSID(_pBss)  do  while(0)
void
ar6000_roam_tbl_event(struct ar6_softc *ar, WMI_TARGET_ROAM_TBL *pTbl)
void
ar6000_wow_list_event(struct ar6_softc *ar, u8 num_filters, WMI_GET_WOW_LIST_REPLY *wow_reply)
void
ar6000_display_roam_time(WMI_TARGET_ROAM_TIME *p)
void
ar6000_roam_data_event(struct ar6_softc *ar, WMI_TARGET_ROAM_DATA *p)
void
ar6000_bssInfo_event_rx(struct ar6_softc *ar, u8 *datap, int len)
u32 wmiSendCmdNum;
int
ar6000_control_tx(void *devt, void *osbuf, HTC_ENDPOINT_ID eid)
void ar6000_indicate_tx_activity(void *devt, u8 TrafficClass, bool Active)
void
ar6000_btcoex_config_event(struct ar6_softc *ar,  u8 *ptr, u32 len)
void
ar6000_btcoex_stats_event(struct ar6_softc *ar,  u8 *ptr, u32 len)
module_init(ar6000_init_module);
module_exit(ar6000_cleanup_module);
static void
ar6000_cookie_init(struct ar6_softc *ar)
static void
ar6000_cookie_cleanup(struct ar6_softc *ar)
static void
ar6000_free_cookie(struct ar6_softc *ar, struct ar_cookie * cookie)
static struct ar_cookie *
ar6000_alloc_cookie(struct ar6_softc  *ar)
void
ar6000_tx_retry_err_event(void *devt)
void
ar6000_snrThresholdEvent_rx(void *devt, WMI_SNR_THRESHOLD_VAL newThreshold, u8 snr)
void
ar6000_lqThresholdEvent_rx(void *devt, WMI_LQ_THRESHOLD_VAL newThreshold, u8 lq)
u32 a_copy_to_user(void *to, const void *from, u32 n)
u32 a_copy_from_user(void *to, const void *from, u32 n)
int
ar6000_get_driver_cfg(struct net_device *dev,
u16 cfgParam,
void *result)
void
ar6000_keepalive_rx(void *devt, u8 configured)
void
ar6000_pmkid_list_event(void *devt, u8 numPMKID, WMI_PMKID *pmkidList,
u8 *bssidList)
void ar6000_pspoll_event(struct ar6_softc *ar,u8 aid)
void ar6000_dtimexpiry_event(struct ar6_softc *ar)
void
read_rssi_compensation_param(struct ar6_softc *ar)
s32 rssi_compensation_calc_tcmd(u32 freq, s32 rssi, u32 totalPkt)
s16 rssi_compensation_calc(struct ar6_softc *ar, s16 rssi)
s16 rssi_compensation_reverse_calc(struct ar6_softc *ar, s16 rssi, bool Above)
void ap_wapi_rekey_event(struct ar6_softc *ar, u8 type, u8 *mac)
static int
ar6000_reinstall_keys(struct ar6_softc *ar, u8 key_op_ctrl)
void
ar6000_dset_open_req(
void *context,
u32 id,
u32 targHandle,
u32 targReplyFn,
u32 targReplyArg)
void
ar6000_dset_close(
void *context,
u32 access_cookie)
void
ar6000_dset_data_req(
void *context,
u32 accessCookie,
u32 offset,
u32 length,
u32 targBuf,
u32 targReplyFn,
u32 targReplyArg)
int
ar6000_ap_mode_profile_commit(struct ar6_softc *ar)
int
ar6000_connect_to_ap(struct ar6_softc *ar)
int
ar6000_disconnect(struct ar6_softc *ar)
int
ar6000_ap_mode_get_wpa_ie(struct ar6_softc *ar, struct ieee80211req_wpaie *wpaie)
int
is_iwioctl_allowed(u8 mode, u16 cmd)
int
is_xioctl_allowed(u8 mode, int cmd)
int
ap_set_wapi_key(struct ar6_softc *ar, void *ikey)
void ar6000_peer_event(
void *context,
u8 eventCode,
u8 *macAddr)
#define HTC_TEST_DUPLICATE 8
static void DoHTCSendPktsTest(struct ar6_softc *ar, int MapNo, HTC_ENDPOINT_ID eid, struct sk_buff *dupskb)
int ar6000_start_ap_interface(struct ar6_softc *ar)
int ar6000_stop_ap_interface(struct ar6_softc *ar)
int ar6000_create_ap_interface(struct ar6_softc *ar, char *ap_ifname)
int ar6000_add_ap_interface(struct ar6_softc *ar, char *ap_ifname)
int ar6000_remove_ap_interface(struct ar6_softc *ar)
EXPORT_SYMBOL(setupbtdev);
