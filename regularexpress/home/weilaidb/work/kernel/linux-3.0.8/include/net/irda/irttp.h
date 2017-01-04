#define IRTTP_H
#define TTP_MAX_CONNECTIONS    LM_MAX_CONNECTIONS
#define TTP_HEADER             1
#define TTP_MAX_HEADER         (TTP_HEADER + LMP_MAX_HEADER)
#define TTP_SAR_HEADER         5
#define TTP_PARAMETERS         0x80
#define TTP_MORE               0x80
#define TTP_TX_MAX_QUEUE	14
#define TTP_TX_LOW_THRESHOLD	5
#define TTP_TX_HIGH_THRESHOLD	7
#define TTP_RX_MIN_CREDIT	8
#define TTP_RX_DEFAULT_CREDIT	16
#define TTP_RX_MAX_CREDIT	21
#define DEFAULT_INITIAL_CREDIT	TTP_RX_DEFAULT_CREDIT
#define P_NORMAL    0
#define P_HIGH      1
#define TTP_SAR_DISABLE 0
#define TTP_SAR_UNBOUND 0xffffffff
#define TTP_MAX_SDU_SIZE 0x01
struct tsap_cb ;
struct irttp_cb ;
int  irttp_init(void);
void irttp_cleanup(void);
struct tsap_cb *irttp_open_tsap(__u8 stsap_sel, int credit, notify_t *notify);
int irttp_close_tsap(struct tsap_cb *self);
int irttp_data_request(struct tsap_cb *self, struct sk_buff *skb);
int irttp_udata_request(struct tsap_cb *self, struct sk_buff *skb);
int irttp_connect_request(struct tsap_cb *self, __u8 dtsap_sel,
__u32 saddr, __u32 daddr,
struct qos_info *qos, __u32 max_sdu_size,
struct sk_buff *userdata);
int irttp_connect_response(struct tsap_cb *self, __u32 max_sdu_size,
struct sk_buff *userdata);
int irttp_disconnect_request(struct tsap_cb *self, struct sk_buff *skb,
int priority);
void irttp_flow_request(struct tsap_cb *self, LOCAL_FLOW flow);
struct tsap_cb *irttp_dup(struct tsap_cb *self, void *instance);
static inline __u32 irttp_get_saddr(struct tsap_cb *self)
static inline __u32 irttp_get_daddr(struct tsap_cb *self)
static inline __u32 irttp_get_max_seg_size(struct tsap_cb *self)
static inline void irttp_listen(struct tsap_cb *self)
static inline int irttp_is_primary(struct tsap_cb *self)
