#define IRLMP_H
#define LSAP_MASK     0x7f
#define LSAP_IAS      0x00
#define LSAP_ANY      0xff
#define LSAP_MAX      0x6f
#define LSAP_CONNLESS 0x70
#define DEV_ADDR_ANY  0xffffffff
#define LMP_HEADER          2
#define LMP_CONTROL_HEADER  4
#define LMP_PID_HEADER      1
#define LMP_MAX_HEADER      (LMP_CONTROL_HEADER+LAP_MAX_HEADER)
#define LM_MAX_CONNECTIONS  10
#define LM_IDLE_TIMEOUT     2*HZ
typedef enum  SERVICE;
typedef void (*DISCOVERY_CALLBACK1) (discinfo_t *, DISCOVERY_MODE, void *);
typedef void (*DISCOVERY_CALLBACK2) (discinfo_t *, DISCOVERY_MODE, void *);
typedef struct  irlmp_service_t;
typedef struct  irlmp_client_t;
struct lsap_cb ;
typedef struct  CACHE_ENTRY;
struct lap_cb ;
struct irlmp_cb ;
int  irlmp_init(void);
void irlmp_cleanup(void);
struct lsap_cb *irlmp_open_lsap(__u8 slsap, notify_t *notify, __u8 pid);
void irlmp_close_lsap( struct lsap_cb *self);
__u16 irlmp_service_to_hint(int service);
void *irlmp_register_service(__u16 hints);
int irlmp_unregister_service(void *handle);
void *irlmp_register_client(__u16 hint_mask, DISCOVERY_CALLBACK1 disco_clb,
DISCOVERY_CALLBACK2 expir_clb, void *priv);
int irlmp_unregister_client(void *handle);
int irlmp_update_client(void *handle, __u16 hint_mask,
DISCOVERY_CALLBACK1 disco_clb,
DISCOVERY_CALLBACK2 expir_clb, void *priv);
void irlmp_register_link(struct irlap_cb *, __u32 saddr, notify_t *);
void irlmp_unregister_link(__u32 saddr);
int  irlmp_connect_request(struct lsap_cb *, __u8 dlsap_sel,
__u32 saddr, __u32 daddr,
struct qos_info *, struct sk_buff *);
void irlmp_connect_indication(struct lsap_cb *self, struct sk_buff *skb);
int  irlmp_connect_response(struct lsap_cb *, struct sk_buff *);
void irlmp_connect_confirm(struct lsap_cb *, struct sk_buff *);
struct lsap_cb *irlmp_dup(struct lsap_cb *self, void *instance);
void irlmp_disconnect_indication(struct lsap_cb *self, LM_REASON reason,
struct sk_buff *userdata);
int  irlmp_disconnect_request(struct lsap_cb *, struct sk_buff *userdata);
void irlmp_discovery_confirm(hashbin_t *discovery_log, DISCOVERY_MODE mode);
void irlmp_discovery_request(int nslots);
discinfo_t *irlmp_get_discoveries(int *pn, __u16 mask, int nslots);
void irlmp_do_expiry(void);
void irlmp_do_discovery(int nslots);
discovery_t *irlmp_get_discovery_response(void);
void irlmp_discovery_expiry(discinfo_t *expiry, int number);
int  irlmp_data_request(struct lsap_cb *, struct sk_buff *);
void irlmp_data_indication(struct lsap_cb *, struct sk_buff *);
int  irlmp_udata_request(struct lsap_cb *, struct sk_buff *);
void irlmp_udata_indication(struct lsap_cb *, struct sk_buff *);
int  irlmp_connless_data_request(struct lsap_cb *, struct sk_buff *, __u8);
void irlmp_connless_data_indication(struct lsap_cb *, struct sk_buff *);
void irlmp_status_indication(struct lap_cb *, LINK_STATUS link, LOCK_STATUS lock);
void irlmp_flow_indication(struct lap_cb *self, LOCAL_FLOW flow);
LM_REASON irlmp_convert_lap_reason(LAP_REASON);
static inline __u32 irlmp_get_saddr(const struct lsap_cb *self)
static inline __u32 irlmp_get_daddr(const struct lsap_cb *self)
extern const char *irlmp_reasons[];
extern int sysctl_discovery_timeout;
extern int sysctl_discovery_slots;
extern int sysctl_discovery;
extern int sysctl_lap_keepalive_time;
extern struct irlmp_cb *irlmp;
static inline int irlmp_lap_tx_queue_full(struct lsap_cb *self)
static inline void irlmp_listen(struct lsap_cb *self)
