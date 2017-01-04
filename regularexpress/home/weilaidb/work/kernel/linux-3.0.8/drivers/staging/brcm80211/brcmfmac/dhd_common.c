int dhd_msg_level;
char fw_path[MOD_PARAM_PATHLEN];
char nv_path[MOD_PARAM_PATHLEN];
u32 dhd_conn_event;
u32 dhd_conn_status;
u32 dhd_conn_reason;
extern int dhdcdc_set_ioctl(dhd_pub_t *dhd, int ifidx, uint cmd, void *buf,
uint len);
extern void dhd_ind_scan_confirm(void *h, bool status);
extern int dhd_wl_ioctl(dhd_pub_t *dhd, uint cmd, char *buf, uint buflen);
void dhd_iscan_lock(void);
void dhd_iscan_unlock(void);
#define DHD_SDALIGN	32
#if !ISPOWEROF2(DHD_SDALIGN)
#error DHD_SDALIGN is not a power of 2!
#define EPI_VERSION_STR         "4.218.248.5"
const char dhd_version[] =
"Dongle Host Driver, version " EPI_VERSION_STR "\nCompiled on " __DATE__
" at " __TIME__;
const char dhd_version[] = "Dongle Host Driver, version " EPI_VERSION_STR;
void dhd_set_timer(void *bus, uint wdtick);
enum ;
const bcm_iovar_t dhd_iovars[] = ;
void dhd_common_init(void)
static int dhd_dump(dhd_pub_t *dhdp, char *buf, int buflen)
static int
dhd_doiovar(dhd_pub_t *dhd_pub, const bcm_iovar_t *vi, u32 actionid,
const char *name, void *params, int plen, void *arg, int len,
int val_size)
bool dhd_prec_enq(dhd_pub_t *dhdp, struct pktq *q, struct sk_buff *pkt,
int prec)
static int
dhd_iovar_op(dhd_pub_t *dhd_pub, const char *name,
void *params, int plen, void *arg, int len, bool set)
int dhd_ioctl(dhd_pub_t *dhd_pub, dhd_ioctl_t *ioc, void *buf, uint buflen)
static void wl_show_host_event(wl_event_msg_t *event, void *event_data)
int
wl_host_event(struct dhd_info *dhd, int *ifidx, void *pktdata,
wl_event_msg_t *event, void **data_ptr)
static int wl_pattern_atoh(char *src, char *dst)
void
dhd_pktfilter_offload_enable(dhd_pub_t *dhd, char *arg, int enable,
int master_mode)
void dhd_pktfilter_offload_set(dhd_pub_t *dhd, char *arg)
void dhd_arp_offload_set(dhd_pub_t *dhd, int arp_mode)
void dhd_arp_offload_enable(dhd_pub_t *dhd, int arp_enable)
int dhd_preinit_ioctls(dhd_pub_t *dhd)
uint iscan_thread_id;
iscan_buf_t *iscan_chain;
iscan_buf_t *dhd_iscan_allocate_buf(dhd_pub_t *dhd, iscan_buf_t **iscanbuf)
void dhd_iscan_free_buf(void *dhdp, iscan_buf_t *iscan_delete)
iscan_buf_t *dhd_iscan_result_buf(void)
int dhd_iscan_print_cache(iscan_buf_t *iscan_skip)
int dhd_iscan_delete_bss(void *dhdp, void *addr, iscan_buf_t *iscan_skip)
int dhd_iscan_remove_duplicates(void *dhdp, iscan_buf_t *iscan_cur)
void dhd_iscan_ind_scan_confirm(void *dhdp, bool status)
int dhd_iscan_request(void *dhdp, u16 action)
static int dhd_iscan_get_partial_result(void *dhdp, uint *scan_count)
int dhd_pno_clean(dhd_pub_t *dhd)
int dhd_pno_enable(dhd_pub_t *dhd, int pfn_enabled)
int
dhd_pno_set(dhd_pub_t *dhd, wlc_ssid_t *ssids_local, int nssid, unsigned char scan_fr)
int dhd_pno_get_status(dhd_pub_t *dhd)
