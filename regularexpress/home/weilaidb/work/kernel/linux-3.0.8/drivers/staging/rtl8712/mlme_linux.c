#define _MLME_OSDEP_C_
static void sitesurvey_ctrl_handler(void *FunctionContext)
static void join_timeout_handler (void *FunctionContext)
static void _scan_timeout_handler (void *FunctionContext)
static void dhcp_timeout_handler (void *FunctionContext)
static void wdg_timeout_handler (void *FunctionContext)
void r8712_init_mlme_timer(struct _adapter *padapter)
void r8712_os_indicate_connect(struct _adapter *adapter)
static struct RT_PMKID_LIST   backupPMKIDList[NUM_PMKID_CACHE];
void r8712_os_indicate_disconnect(struct _adapter *adapter)
void r8712_report_sec_ie(struct _adapter *adapter, u8 authmode, u8 *sec_ie)
