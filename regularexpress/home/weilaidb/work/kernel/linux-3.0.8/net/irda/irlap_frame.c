static void irlap_send_i_frame(struct irlap_cb *self, struct sk_buff *skb,
int command);
static inline void irlap_insert_info(struct irlap_cb *self,
struct sk_buff *skb)
void irlap_queue_xmit(struct irlap_cb *self, struct sk_buff *skb)
void irlap_send_snrm_frame(struct irlap_cb *self, struct qos_info *qos)
static void irlap_recv_snrm_cmd(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info)
void irlap_send_ua_response_frame(struct irlap_cb *self, struct qos_info *qos)
void irlap_send_dm_frame( struct irlap_cb *self)
void irlap_send_disc_frame(struct irlap_cb *self)
void irlap_send_discovery_xid_frame(struct irlap_cb *self, int S, __u8 s,
__u8 command, discovery_t *discovery)
static void irlap_recv_discovery_xid_rsp(struct irlap_cb *self,
struct sk_buff *skb,
struct irlap_info *info)
static void irlap_recv_discovery_xid_cmd(struct irlap_cb *self,
struct sk_buff *skb,
struct irlap_info *info)
void irlap_send_rr_frame(struct irlap_cb *self, int command)
void irlap_send_rd_frame(struct irlap_cb *self)
static inline void irlap_recv_rr_frame(struct irlap_cb *self,
struct sk_buff *skb,
struct irlap_info *info, int command)
static void irlap_recv_rnr_frame(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info, int command)
static void irlap_recv_rej_frame(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info, int command)
static void irlap_recv_srej_frame(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info, int command)
static void irlap_recv_disc_frame(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info, int command)
static inline void irlap_recv_ua_frame(struct irlap_cb *self,
struct sk_buff *skb,
struct irlap_info *info)
void irlap_send_data_primary(struct irlap_cb *self, struct sk_buff *skb)
void irlap_send_data_primary_poll(struct irlap_cb *self, struct sk_buff *skb)
void irlap_send_data_secondary_final(struct irlap_cb *self,
struct sk_buff *skb)
void irlap_send_data_secondary(struct irlap_cb *self, struct sk_buff *skb)
void irlap_resend_rejected_frames(struct irlap_cb *self, int command)
void irlap_resend_rejected_frame(struct irlap_cb *self, int command)
void irlap_send_ui_frame(struct irlap_cb *self, struct sk_buff *skb,
__u8 caddr, int command)
static void irlap_send_i_frame(struct irlap_cb *self, struct sk_buff *skb,
int command)
static inline void irlap_recv_i_frame(struct irlap_cb *self,
struct sk_buff *skb,
struct irlap_info *info, int command)
static void irlap_recv_ui_frame(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info)
static void irlap_recv_frmr_frame(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info)
void irlap_send_test_frame(struct irlap_cb *self, __u8 caddr, __u32 daddr,
struct sk_buff *cmd)
static void irlap_recv_test_frame(struct irlap_cb *self, struct sk_buff *skb,
struct irlap_info *info, int command)
int irlap_driver_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *ptype, struct net_device *orig_dev)
