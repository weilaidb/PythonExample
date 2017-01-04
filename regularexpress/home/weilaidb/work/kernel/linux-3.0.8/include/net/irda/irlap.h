#define IRLAP_H
#define CONFIG_IRDA_DYNAMIC_WINDOW 1
#define LAP_RELIABLE   1
#define LAP_UNRELIABLE 0
#define LAP_ADDR_HEADER 1
#define LAP_CTRL_HEADER 1
#define LAP_MAX_HEADER (LAP_ADDR_HEADER + LAP_CTRL_HEADER)
#define LAP_ALEN 4
#define BROADCAST  0xffffffff
#define CBROADCAST 0xfe
#define XID_FORMAT 0x01
#define LAP_WINDOW_SIZE 8
#define LAP_HIGH_THRESHOLD     2
#define LAP_MAX_QUEUE 10
#define NR_EXPECTED     1
#define NR_UNEXPECTED   0
#define NR_INVALID     -1
#define NS_EXPECTED     1
#define NS_UNEXPECTED   0
#define NS_INVALID     -1
struct irlap_info ;
struct irlap_cb ;
int irlap_init(void);
void irlap_cleanup(void);
struct irlap_cb *irlap_open(struct net_device *dev, struct qos_info *qos,
const char *hw_name);
void irlap_close(struct irlap_cb *self);
void irlap_connect_request(struct irlap_cb *self, __u32 daddr,
struct qos_info *qos, int sniff);
void irlap_connect_response(struct irlap_cb *self, struct sk_buff *skb);
void irlap_connect_indication(struct irlap_cb *self, struct sk_buff *skb);
void irlap_connect_confirm(struct irlap_cb *, struct sk_buff *skb);
void irlap_data_indication(struct irlap_cb *, struct sk_buff *, int unreliable);
void irlap_data_request(struct irlap_cb *, struct sk_buff *, int unreliable);
void irlap_unitdata_request(struct irlap_cb *, struct sk_buff *);
void irlap_unitdata_indication(struct irlap_cb *, struct sk_buff *);
void irlap_disconnect_request(struct irlap_cb *);
void irlap_disconnect_indication(struct irlap_cb *, LAP_REASON reason);
void irlap_status_indication(struct irlap_cb *, int quality_of_link);
void irlap_test_request(__u8 *info, int len);
void irlap_discovery_request(struct irlap_cb *, discovery_t *discovery);
void irlap_discovery_confirm(struct irlap_cb *, hashbin_t *discovery_log);
void irlap_discovery_indication(struct irlap_cb *, discovery_t *discovery);
void irlap_reset_indication(struct irlap_cb *self);
void irlap_reset_confirm(void);
void irlap_update_nr_received(struct irlap_cb *, int nr);
int irlap_validate_nr_received(struct irlap_cb *, int nr);
int irlap_validate_ns_received(struct irlap_cb *, int ns);
int  irlap_generate_rand_time_slot(int S, int s);
void irlap_initiate_connection_state(struct irlap_cb *);
void irlap_flush_all_queues(struct irlap_cb *);
void irlap_wait_min_turn_around(struct irlap_cb *, struct qos_info *);
void irlap_apply_default_connection_parameters(struct irlap_cb *self);
void irlap_apply_connection_parameters(struct irlap_cb *self, int now);
#define IRLAP_GET_HEADER_SIZE(self) (LAP_MAX_HEADER)
#define IRLAP_GET_TX_QUEUE_LEN(self) skb_queue_len(&self->txq)
static inline int irlap_is_primary(struct irlap_cb *self)
static inline void irlap_clear_disconnect(struct irlap_cb *self)
static inline void irlap_next_state(struct irlap_cb *self, IRLAP_STATE state)
