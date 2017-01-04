#define TCPOPT_TIMESTAMP 8
u32 cm_packets_sent;
u32 cm_packets_bounced;
u32 cm_packets_dropped;
u32 cm_packets_retrans;
u32 cm_packets_created;
u32 cm_packets_received;
atomic_t cm_listens_created;
atomic_t cm_listens_destroyed;
u32 cm_backlog_drops;
atomic_t cm_loopbacks;
atomic_t cm_nodes_created;
atomic_t cm_nodes_destroyed;
atomic_t cm_accel_dropped_pkts;
atomic_t cm_resets_recvd;
static inline int mini_cm_accelerated(struct nes_cm_core *,
struct nes_cm_node *);
static struct nes_cm_listener *mini_cm_listen(struct nes_cm_core *,
struct nes_vnic *, struct nes_cm_info *);
static int mini_cm_del_listen(struct nes_cm_core *, struct nes_cm_listener *);
static struct nes_cm_node *mini_cm_connect(struct nes_cm_core *,
struct nes_vnic *, u16, void *, struct nes_cm_info *);
static int mini_cm_close(struct nes_cm_core *, struct nes_cm_node *);
static int mini_cm_accept(struct nes_cm_core *, struct ietf_mpa_frame *,
struct nes_cm_node *);
static int mini_cm_reject(struct nes_cm_core *, struct ietf_mpa_frame *,
struct nes_cm_node *);
static int mini_cm_recv_pkt(struct nes_cm_core *, struct nes_vnic *,
struct sk_buff *);
static int mini_cm_dealloc_core(struct nes_cm_core *);
static int mini_cm_get(struct nes_cm_core *);
static int mini_cm_set(struct nes_cm_core *, u32, u32);
static void form_cm_frame(struct sk_buff *, struct nes_cm_node *,
void *, u32, void *, u32, u8);
static int add_ref_cm_node(struct nes_cm_node *);
static int rem_ref_cm_node(struct nes_cm_core *, struct nes_cm_node *);
static int nes_cm_disconn_true(struct nes_qp *);
static int nes_cm_post_event(struct nes_cm_event *event);
static int nes_disconnect(struct nes_qp *nesqp, int abrupt);
static void nes_disconnect_worker(struct work_struct *work);
static int send_mpa_request(struct nes_cm_node *, struct sk_buff *);
static int send_mpa_reject(struct nes_cm_node *);
static int send_syn(struct nes_cm_node *, u32, struct sk_buff *);
static int send_reset(struct nes_cm_node *, struct sk_buff *);
static int send_ack(struct nes_cm_node *cm_node, struct sk_buff *skb);
static int send_fin(struct nes_cm_node *cm_node, struct sk_buff *skb);
static void process_packet(struct nes_cm_node *, struct sk_buff *,
struct nes_cm_core *);
static void active_open_err(struct nes_cm_node *, struct sk_buff *, int);
static void passive_open_err(struct nes_cm_node *, struct sk_buff *, int);
static void cleanup_retrans_entry(struct nes_cm_node *);
static void handle_rcv_mpa(struct nes_cm_node *, struct sk_buff *);
static void free_retrans_entry(struct nes_cm_node *cm_node);
static int handle_tcp_options(struct nes_cm_node *cm_node, struct tcphdr *tcph,
struct sk_buff *skb, int optionsize, int passive);
static void cm_event_connected(struct nes_cm_event *);
static void cm_event_connect_error(struct nes_cm_event *);
static void cm_event_reset(struct nes_cm_event *);
static void cm_event_mpa_req(struct nes_cm_event *);
static void cm_event_mpa_reject(struct nes_cm_event *);
static void handle_recv_entry(struct nes_cm_node *cm_node, u32 rem_node);
static void print_core(struct nes_cm_core *core);
static struct nes_cm_ops nes_cm_api = ;
static struct nes_cm_core *g_cm_core;
atomic_t cm_connects;
atomic_t cm_accepts;
atomic_t cm_disconnects;
atomic_t cm_closes;
atomic_t cm_connecteds;
atomic_t cm_connect_reqs;
atomic_t cm_rejects;
static struct nes_cm_event *create_event(struct nes_cm_node *cm_node,
enum nes_cm_event_type type)
static int send_mpa_request(struct nes_cm_node *cm_node, struct sk_buff *skb)
static int send_mpa_reject(struct nes_cm_node *cm_node)
static int parse_mpa(struct nes_cm_node *cm_node, u8 *buffer, u32 *type,
u32 len)
static void form_cm_frame(struct sk_buff *skb,
struct nes_cm_node *cm_node, void *options, u32 optionsize,
void *data, u32 datasize, u8 flags)
static void print_core(struct nes_cm_core *core)
int schedule_nes_timer(struct nes_cm_node *cm_node, struct sk_buff *skb,
enum nes_timer_type type, int send_retrans,
int close_when_complete)
static void nes_retrans_expired(struct nes_cm_node *cm_node)
static void handle_recv_entry(struct nes_cm_node *cm_node, u32 rem_node)
static void nes_cm_timer_tick(unsigned long pass)
static int send_syn(struct nes_cm_node *cm_node, u32 sendack,
struct sk_buff *skb)
static int send_reset(struct nes_cm_node *cm_node, struct sk_buff *skb)
static int send_ack(struct nes_cm_node *cm_node, struct sk_buff *skb)
static int send_fin(struct nes_cm_node *cm_node, struct sk_buff *skb)
static struct nes_cm_node *find_node(struct nes_cm_core *cm_core,
u16 rem_port, nes_addr_t rem_addr, u16 loc_port, nes_addr_t loc_addr)
static struct nes_cm_listener *find_listener(struct nes_cm_core *cm_core,
nes_addr_t dst_addr, u16 dst_port, enum nes_cm_listener_state listener_state)
static int add_hte_node(struct nes_cm_core *cm_core, struct nes_cm_node *cm_node)
static int mini_cm_dec_refcnt_listen(struct nes_cm_core *cm_core,
struct nes_cm_listener *listener, int free_hanging_nodes)
static int mini_cm_del_listen(struct nes_cm_core *cm_core,
struct nes_cm_listener *listener)
static inline int mini_cm_accelerated(struct nes_cm_core *cm_core,
struct nes_cm_node *cm_node)
static int nes_addr_resolve_neigh(struct nes_vnic *nesvnic, u32 dst_ip, int arpindex)
static struct nes_cm_node *make_cm_node(struct nes_cm_core *cm_core,
struct nes_vnic *nesvnic, struct nes_cm_info *cm_info,
struct nes_cm_listener *listener)
static int add_ref_cm_node(struct nes_cm_node *cm_node)
static int rem_ref_cm_node(struct nes_cm_core *cm_core,
struct nes_cm_node *cm_node)
static int process_options(struct nes_cm_node *cm_node, u8 *optionsloc,
u32 optionsize, u32 syn_packet)
static void drop_packet(struct sk_buff *skb)
static void handle_fin_pkt(struct nes_cm_node *cm_node)
static void handle_rst_pkt(struct nes_cm_node *cm_node, struct sk_buff *skb,
struct tcphdr *tcph)
static void handle_rcv_mpa(struct nes_cm_node *cm_node, struct sk_buff *skb)
static void indicate_pkt_err(struct nes_cm_node *cm_node, struct sk_buff *skb)
static int check_syn(struct nes_cm_node *cm_node, struct tcphdr *tcph,
struct sk_buff *skb)
static int check_seq(struct nes_cm_node *cm_node, struct tcphdr *tcph,
struct sk_buff *skb)
static void handle_syn_pkt(struct nes_cm_node *cm_node, struct sk_buff *skb,
struct tcphdr *tcph)
static void handle_synack_pkt(struct nes_cm_node *cm_node, struct sk_buff *skb,
struct tcphdr *tcph)
static int handle_ack_pkt(struct nes_cm_node *cm_node, struct sk_buff *skb,
struct tcphdr *tcph)
static int handle_tcp_options(struct nes_cm_node *cm_node, struct tcphdr *tcph,
struct sk_buff *skb, int optionsize, int passive)
static void active_open_err(struct nes_cm_node *cm_node, struct sk_buff *skb,
int reset)
static void passive_open_err(struct nes_cm_node *cm_node, struct sk_buff *skb,
int reset)
static void free_retrans_entry(struct nes_cm_node *cm_node)
static void cleanup_retrans_entry(struct nes_cm_node *cm_node)
static void process_packet(struct nes_cm_node *cm_node, struct sk_buff *skb,
struct nes_cm_core *cm_core)
static struct nes_cm_listener *mini_cm_listen(struct nes_cm_core *cm_core,
struct nes_vnic *nesvnic, struct nes_cm_info *cm_info)
static struct nes_cm_node *mini_cm_connect(struct nes_cm_core *cm_core,
struct nes_vnic *nesvnic, u16 private_data_len,
void *private_data, struct nes_cm_info *cm_info)
static int mini_cm_accept(struct nes_cm_core *cm_core,
struct ietf_mpa_frame *mpa_frame, struct nes_cm_node *cm_node)
static int mini_cm_reject(struct nes_cm_core *cm_core,
struct ietf_mpa_frame *mpa_frame, struct nes_cm_node *cm_node)
static int mini_cm_close(struct nes_cm_core *cm_core, struct nes_cm_node *cm_node)
static int mini_cm_recv_pkt(struct nes_cm_core *cm_core,
struct nes_vnic *nesvnic, struct sk_buff *skb)
static struct nes_cm_core *nes_cm_alloc_core(void)
static int mini_cm_dealloc_core(struct nes_cm_core *cm_core)
static int mini_cm_get(struct nes_cm_core *cm_core)
static int mini_cm_set(struct nes_cm_core *cm_core, u32 type, u32 value)
static int nes_cm_init_tsa_conn(struct nes_qp *nesqp, struct nes_cm_node *cm_node)
int nes_cm_disconn(struct nes_qp *nesqp)
static void nes_disconnect_worker(struct work_struct *work)
static int nes_cm_disconn_true(struct nes_qp *nesqp)
static int nes_disconnect(struct nes_qp *nesqp, int abrupt)
int nes_accept(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param)
int nes_reject(struct iw_cm_id *cm_id, const void *pdata, u8 pdata_len)
int nes_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param)
int nes_create_listen(struct iw_cm_id *cm_id, int backlog)
int nes_destroy_listen(struct iw_cm_id *cm_id)
int nes_cm_recv(struct sk_buff *skb, struct net_device *netdevice)
int nes_cm_start(void)
int nes_cm_stop(void)
static void cm_event_connected(struct nes_cm_event *event)
static void cm_event_connect_error(struct nes_cm_event *event)
static void cm_event_reset(struct nes_cm_event *event)
static void cm_event_mpa_req(struct nes_cm_event *event)
static void cm_event_mpa_reject(struct nes_cm_event *event)
static void nes_cm_event_handler(struct work_struct *);
static int nes_cm_post_event(struct nes_cm_event *event)
static void nes_cm_event_handler(struct work_struct *work)
