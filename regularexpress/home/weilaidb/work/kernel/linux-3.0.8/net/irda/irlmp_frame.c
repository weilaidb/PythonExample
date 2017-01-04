static struct lsap_cb *irlmp_find_lsap(struct lap_cb *self, __u8 dlsap,
__u8 slsap, int status, hashbin_t *);
inline void irlmp_send_data_pdu(struct lap_cb *self, __u8 dlsap, __u8 slsap,
int expedited, struct sk_buff *skb)
void irlmp_send_lcf_pdu(struct lap_cb *self, __u8 dlsap, __u8 slsap,
__u8 opcode, struct sk_buff *skb)
void irlmp_link_data_indication(struct lap_cb *self, struct sk_buff *skb,
int unreliable)
void irlmp_link_unitdata_indication(struct lap_cb *self, struct sk_buff *skb)
void irlmp_link_disconnect_indication(struct lap_cb *lap,
struct irlap_cb *irlap,
LAP_REASON reason,
struct sk_buff *skb)
void irlmp_link_connect_indication(struct lap_cb *self, __u32 saddr,
__u32 daddr, struct qos_info *qos,
struct sk_buff *skb)
void irlmp_link_connect_confirm(struct lap_cb *self, struct qos_info *qos,
struct sk_buff *skb)
void irlmp_link_discovery_indication(struct lap_cb *self,
discovery_t *discovery)
void irlmp_link_discovery_confirm(struct lap_cb *self, hashbin_t *log)
static inline void irlmp_update_cache(struct lap_cb *lap,
struct lsap_cb *lsap)
static struct lsap_cb *irlmp_find_lsap(struct lap_cb *self, __u8 dlsap_sel,
__u8 slsap_sel, int status,
hashbin_t *queue)
