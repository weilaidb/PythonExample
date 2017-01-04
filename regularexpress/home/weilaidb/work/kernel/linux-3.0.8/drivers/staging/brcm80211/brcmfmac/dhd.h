#define _dhd_h_
struct dhd_bus;
struct dhd_prot;
struct dhd_info;
enum dhd_bus_state ;
typedef struct dhd_pub  dhd_pub_t;
#if defined(CONFIG_PM_SLEEP)
extern atomic_t dhd_mmc_suspend;
#define DHD_PM_RESUME_WAIT_INIT(a) DECLARE_WAIT_QUEUE_HEAD(a);
#define _DHD_PM_RESUME_WAIT(a, b) do 	while (0)
#define DHD_PM_RESUME_WAIT(a)	_DHD_PM_RESUME_WAIT(a, 30)
#define DHD_PM_RESUME_WAIT_FOREVER(a)	_DHD_PM_RESUME_WAIT(a, ~0)
#define DHD_PM_RESUME_RETURN_ERROR(a)	\
do  while (0)
#define DHD_PM_RESUME_RETURN	do  while (0)
#define DHD_SPINWAIT_SLEEP_INIT(a) DECLARE_WAIT_QUEUE_HEAD(a);
#define SPINWAIT_SLEEP(a, exp, us) do  while (0)
#define DHD_PM_RESUME_WAIT_INIT(a)
#define DHD_PM_RESUME_WAIT(a)
#define DHD_PM_RESUME_WAIT_FOREVER(a)
#define DHD_PM_RESUME_RETURN_ERROR(a)
#define DHD_PM_RESUME_RETURN
#define DHD_SPINWAIT_SLEEP_INIT(a)
#define SPINWAIT_SLEEP(a, exp, us)  do  while (0)
#define DHD_IF_VIF	0x01
static inline void MUTEX_LOCK_INIT(dhd_pub_t *dhdp)
static inline void MUTEX_LOCK(dhd_pub_t *dhdp)
static inline void MUTEX_UNLOCK(dhd_pub_t *dhdp)
static inline void MUTEX_LOCK_SOFTAP_SET_INIT(dhd_pub_t *dhdp)
static inline void MUTEX_LOCK_SOFTAP_SET(dhd_pub_t *dhdp)
static inline void MUTEX_UNLOCK_SOFTAP_SET(dhd_pub_t *dhdp)
static inline void MUTEX_LOCK_WL_SCAN_SET_INIT(void)
static inline void MUTEX_LOCK_WL_SCAN_SET(void)
static inline void MUTEX_UNLOCK_WL_SCAN_SET(void)
typedef struct dhd_if_event  dhd_if_event_t;
extern dhd_pub_t *dhd_attach(struct dhd_bus *bus,
uint bus_hdrlen);
extern int dhd_net_attach(dhd_pub_t *dhdp, int idx);
extern void dhd_detach(dhd_pub_t *dhdp);
extern void dhd_txflowcontrol(dhd_pub_t *dhdp, int ifidx, bool on);
extern bool dhd_prec_enq(dhd_pub_t *dhdp, struct pktq *q,
struct sk_buff *pkt, int prec);
extern void dhd_rx_frame(dhd_pub_t *dhdp, int ifidx,
struct sk_buff *rxp, int numpkt);
extern char *dhd_ifname(dhd_pub_t *dhdp, int idx);
extern void dhd_sched_dpc(dhd_pub_t *dhdp);
extern void dhd_txcomplete(dhd_pub_t *dhdp, struct sk_buff *txp, bool success);
extern int dhdcdc_query_ioctl(dhd_pub_t *dhd, int ifidx, uint cmd, void *buf,
uint len);
extern int dhd_os_proto_block(dhd_pub_t *pub);
extern int dhd_os_proto_unblock(dhd_pub_t *pub);
extern int dhd_os_ioctl_resp_wait(dhd_pub_t *pub, uint *condition,
bool *pending);
extern int dhd_os_ioctl_resp_wake(dhd_pub_t *pub);
extern unsigned int dhd_os_get_ioctl_resp_timeout(void);
extern void dhd_os_set_ioctl_resp_timeout(unsigned int timeout_msec);
extern void *dhd_os_open_image(char *filename);
extern int dhd_os_get_image_block(char *buf, int len, void *image);
extern void dhd_os_close_image(void *image);
extern void dhd_os_wd_timer(void *bus, uint wdtick);
extern void dhd_os_sdlock(dhd_pub_t *pub);
extern void dhd_os_sdunlock(dhd_pub_t *pub);
extern void dhd_os_sdlock_txq(dhd_pub_t *pub);
extern void dhd_os_sdunlock_txq(dhd_pub_t *pub);
extern void dhd_os_sdlock_rxq(dhd_pub_t *pub);
extern void dhd_os_sdunlock_rxq(dhd_pub_t *pub);
extern void dhd_os_sdlock_sndup_rxq(dhd_pub_t *pub);
extern void dhd_customer_gpio_wlan_ctrl(int onoff);
extern int dhd_custom_get_mac_address(unsigned char *buf);
extern void dhd_os_sdunlock_sndup_rxq(dhd_pub_t *pub);
extern void dhd_os_sdlock_eventq(dhd_pub_t *pub);
extern void dhd_os_sdunlock_eventq(dhd_pub_t *pub);
extern int write_to_file(dhd_pub_t *dhd, u8 *buf, int size);
#if defined(OOB_INTR_ONLY)
extern int dhd_customer_oob_irq_map(unsigned long *irq_flags_ptr);
extern void dhd_os_sdtxlock(dhd_pub_t *pub);
extern void dhd_os_sdtxunlock(dhd_pub_t *pub);
int setScheduler(struct task_struct *p, int policy, struct sched_param *param);
typedef struct  dhd_timeout_t;
extern void dhd_timeout_start(dhd_timeout_t *tmo, uint usec);
extern int dhd_timeout_expired(dhd_timeout_t *tmo);
extern int dhd_ifname2idx(struct dhd_info *dhd, char *name);
extern u8 *dhd_bssidx2bssid(dhd_pub_t *dhd, int idx);
extern int wl_host_event(struct dhd_info *dhd, int *idx, void *pktdata,
wl_event_msg_t *, void **data_ptr);
extern void dhd_common_init(void);
extern int dhd_add_if(struct dhd_info *dhd, int ifidx, void *handle,
char *name, u8 *mac_addr, u32 flags, u8 bssidx);
extern void dhd_del_if(struct dhd_info *dhd, int ifidx);
extern void dhd_vif_add(struct dhd_info *dhd, int ifidx, char *name);
extern void dhd_vif_del(struct dhd_info *dhd, int ifidx);
extern void dhd_event(struct dhd_info *dhd, char *evpkt, int evlen, int ifidx);
extern void dhd_vif_sendup(struct dhd_info *dhd, int ifidx, unsigned char * cp,
int len);
extern int dhd_sendpkt(dhd_pub_t *dhdp, int ifidx, struct sk_buff *pkt);
extern void dhd_sendup_event(dhd_pub_t *dhdp, wl_event_msg_t *event,
void *data);
extern int dhd_bus_devreset(dhd_pub_t *dhdp, u8 flag);
extern uint dhd_bus_status(dhd_pub_t *dhdp);
extern int dhd_bus_start(dhd_pub_t *dhdp);
enum cust_gpio_modes ;
extern uint dhd_watchdog_ms;
#if defined(DHD_DEBUG)
extern uint dhd_console_ms;
extern uint dhd_intr;
extern uint dhd_poll;
extern uint dhd_arp_mode;
extern uint dhd_arp_enable;
extern uint dhd_pkt_filter_enable;
extern uint dhd_pkt_filter_init;
extern uint dhd_master_mode;
extern uint dhd_roam;
extern uint dhd_radio_up;
extern int dhd_idletime;
#define DHD_IDLETIME_TICKS 1
extern uint dhd_sdiod_drive_strength;
extern uint dhd_force_tx_queueing;
extern uint dhd_pktgen;
extern uint dhd_pktgen_len;
#define MAX_PKTGEN_LEN 1800
#define MOD_PARAM_PATHLEN	2048
extern char fw_path[MOD_PARAM_PATHLEN];
extern char nv_path[MOD_PARAM_PATHLEN];
#define DHD_MAX_IFS	16
#define DHD_DEL_IF	-0xe
#define DHD_BAD_IF	-0xf
extern void dhd_wait_for_event(dhd_pub_t *dhd, bool * lockvar);
extern void dhd_wait_event_wakeup(dhd_pub_t *dhd);
extern u32 g_assert_type;
#define ASSERT(exp) \
do  while (0)
extern void osl_assert(char *exp, char *file, int line);
#define ASSERT(exp)	do  while (0)
