MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("kernel IB MAD API");
MODULE_AUTHOR("Hal Rosenstock");
MODULE_AUTHOR("Sean Hefty");
static int mad_sendq_size = IB_MAD_QP_SEND_SIZE;
static int mad_recvq_size = IB_MAD_QP_RECV_SIZE;
module_param_named(send_queue_size, mad_sendq_size, int, 0444);
MODULE_PARM_DESC(send_queue_size, "Size of send queue in number of work requests");
module_param_named(recv_queue_size, mad_recvq_size, int, 0444);
MODULE_PARM_DESC(recv_queue_size, "Size of receive queue in number of work requests");
static struct kmem_cache *ib_mad_cache;
static struct list_head ib_mad_port_list;
static u32 ib_mad_client_id = 0;
static DEFINE_SPINLOCK(ib_mad_port_list_lock);
static int method_in_use(struct ib_mad_mgmt_method_table **method,
struct ib_mad_reg_req *mad_reg_req);
static void remove_mad_reg_req(struct ib_mad_agent_private *priv);
static struct ib_mad_agent_private *find_mad_agent(
struct ib_mad_port_private *port_priv,
struct ib_mad *mad);
static int ib_mad_post_receive_mads(struct ib_mad_qp_info *qp_info,
struct ib_mad_private *mad);
static void cancel_mads(struct ib_mad_agent_private *mad_agent_priv);
static void timeout_sends(struct work_struct *work);
static void local_completions(struct work_struct *work);
static int add_nonoui_reg_req(struct ib_mad_reg_req *mad_reg_req,
struct ib_mad_agent_private *agent_priv,
u8 mgmt_class);
static int add_oui_reg_req(struct ib_mad_reg_req *mad_reg_req,
struct ib_mad_agent_private *agent_priv);
static inline struct ib_mad_port_private *
__ib_get_mad_port(struct ib_device *device, int port_num)
static inline struct ib_mad_port_private *
ib_get_mad_port(struct ib_device *device, int port_num)
static inline u8 convert_mgmt_class(u8 mgmt_class)
static int get_spl_qp_index(enum ib_qp_type qp_type)
static int vendor_class_index(u8 mgmt_class)
static int is_vendor_class(u8 mgmt_class)
static int is_vendor_oui(char *oui)
static int is_vendor_method_in_use(
struct ib_mad_mgmt_vendor_class *vendor_class,
struct ib_mad_reg_req *mad_reg_req)
int ib_response_mad(struct ib_mad *mad)
EXPORT_SYMBOL(ib_response_mad);
struct ib_mad_agent *ib_register_mad_agent(struct ib_device *device,
u8 port_num,
enum ib_qp_type qp_type,
struct ib_mad_reg_req *mad_reg_req,
u8 rmpp_version,
ib_mad_send_handler send_handler,
ib_mad_recv_handler recv_handler,
void *context)
EXPORT_SYMBOL(ib_register_mad_agent);
static inline int is_snooping_sends(int mad_snoop_flags)
static inline int is_snooping_recvs(int mad_snoop_flags)
static int register_snoop_agent(struct ib_mad_qp_info *qp_info,
struct ib_mad_snoop_private *mad_snoop_priv)
struct ib_mad_agent *ib_register_mad_snoop(struct ib_device *device,
u8 port_num,
enum ib_qp_type qp_type,
int mad_snoop_flags,
ib_mad_snoop_handler snoop_handler,
ib_mad_recv_handler recv_handler,
void *context)
EXPORT_SYMBOL(ib_register_mad_snoop);
static inline void deref_mad_agent(struct ib_mad_agent_private *mad_agent_priv)
static inline void deref_snoop_agent(struct ib_mad_snoop_private *mad_snoop_priv)
static void unregister_mad_agent(struct ib_mad_agent_private *mad_agent_priv)
static void unregister_mad_snoop(struct ib_mad_snoop_private *mad_snoop_priv)
int ib_unregister_mad_agent(struct ib_mad_agent *mad_agent)
EXPORT_SYMBOL(ib_unregister_mad_agent);
static void dequeue_mad(struct ib_mad_list_head *mad_list)
static void snoop_send(struct ib_mad_qp_info *qp_info,
struct ib_mad_send_buf *send_buf,
struct ib_mad_send_wc *mad_send_wc,
int mad_snoop_flags)
static void snoop_recv(struct ib_mad_qp_info *qp_info,
struct ib_mad_recv_wc *mad_recv_wc,
int mad_snoop_flags)
static void build_smp_wc(struct ib_qp *qp,
u64 wr_id, u16 slid, u16 pkey_index, u8 port_num,
struct ib_wc *wc)
static int handle_outgoing_dr_smp(struct ib_mad_agent_private *mad_agent_priv,
struct ib_mad_send_wr_private *mad_send_wr)
static int get_pad_size(int hdr_len, int data_len)
static void free_send_rmpp_list(struct ib_mad_send_wr_private *mad_send_wr)
static int alloc_send_rmpp_list(struct ib_mad_send_wr_private *send_wr,
gfp_t gfp_mask)
struct ib_mad_send_buf * ib_create_send_mad(struct ib_mad_agent *mad_agent,
u32 remote_qpn, u16 pkey_index,
int rmpp_active,
int hdr_len, int data_len,
gfp_t gfp_mask)
EXPORT_SYMBOL(ib_create_send_mad);
int ib_get_mad_data_offset(u8 mgmt_class)
EXPORT_SYMBOL(ib_get_mad_data_offset);
int ib_is_mad_class_rmpp(u8 mgmt_class)
EXPORT_SYMBOL(ib_is_mad_class_rmpp);
void *ib_get_rmpp_segment(struct ib_mad_send_buf *send_buf, int seg_num)
EXPORT_SYMBOL(ib_get_rmpp_segment);
static inline void *ib_get_payload(struct ib_mad_send_wr_private *mad_send_wr)
void ib_free_send_mad(struct ib_mad_send_buf *send_buf)
EXPORT_SYMBOL(ib_free_send_mad);
int ib_send_mad(struct ib_mad_send_wr_private *mad_send_wr)
int ib_post_send_mad(struct ib_mad_send_buf *send_buf,
struct ib_mad_send_buf **bad_send_buf)
EXPORT_SYMBOL(ib_post_send_mad);
void ib_free_recv_mad(struct ib_mad_recv_wc *mad_recv_wc)
EXPORT_SYMBOL(ib_free_recv_mad);
struct ib_mad_agent *ib_redirect_mad_qp(struct ib_qp *qp,
u8 rmpp_version,
ib_mad_send_handler send_handler,
ib_mad_recv_handler recv_handler,
void *context)
EXPORT_SYMBOL(ib_redirect_mad_qp);
int ib_process_mad_wc(struct ib_mad_agent *mad_agent,
struct ib_wc *wc)
EXPORT_SYMBOL(ib_process_mad_wc);
static int method_in_use(struct ib_mad_mgmt_method_table **method,
struct ib_mad_reg_req *mad_reg_req)
static int allocate_method_table(struct ib_mad_mgmt_method_table **method)
static int check_method_table(struct ib_mad_mgmt_method_table *method)
static int check_class_table(struct ib_mad_mgmt_class_table *class)
static int check_vendor_class(struct ib_mad_mgmt_vendor_class *vendor_class)
static int find_vendor_oui(struct ib_mad_mgmt_vendor_class *vendor_class,
char *oui)
static int check_vendor_table(struct ib_mad_mgmt_vendor_class_table *vendor)
static void remove_methods_mad_agent(struct ib_mad_mgmt_method_table *method,
struct ib_mad_agent_private *agent)
static int add_nonoui_reg_req(struct ib_mad_reg_req *mad_reg_req,
struct ib_mad_agent_private *agent_priv,
u8 mgmt_class)
static int add_oui_reg_req(struct ib_mad_reg_req *mad_reg_req,
struct ib_mad_agent_private *agent_priv)
static void remove_mad_reg_req(struct ib_mad_agent_private *agent_priv)
static struct ib_mad_agent_private *
find_mad_agent(struct ib_mad_port_private *port_priv,
struct ib_mad *mad)
static int validate_mad(struct ib_mad *mad, u32 qp_num)
static int is_data_mad(struct ib_mad_agent_private *mad_agent_priv,
struct ib_mad_hdr *mad_hdr)
static inline int rcv_has_same_class(struct ib_mad_send_wr_private *wr,
struct ib_mad_recv_wc *rwc)
static inline int rcv_has_same_gid(struct ib_mad_agent_private *mad_agent_priv,
struct ib_mad_send_wr_private *wr,
struct ib_mad_recv_wc *rwc )
static inline int is_direct(u8 class)
struct ib_mad_send_wr_private*
ib_find_send_mad(struct ib_mad_agent_private *mad_agent_priv,
struct ib_mad_recv_wc *wc)
void ib_mark_mad_done(struct ib_mad_send_wr_private *mad_send_wr)
static void ib_mad_complete_recv(struct ib_mad_agent_private *mad_agent_priv,
struct ib_mad_recv_wc *mad_recv_wc)
static void ib_mad_recv_done_handler(struct ib_mad_port_private *port_priv,
struct ib_wc *wc)
static void adjust_timeout(struct ib_mad_agent_private *mad_agent_priv)
static void wait_for_response(struct ib_mad_send_wr_private *mad_send_wr)
void ib_reset_mad_timeout(struct ib_mad_send_wr_private *mad_send_wr,
int timeout_ms)
void ib_mad_complete_send_wr(struct ib_mad_send_wr_private *mad_send_wr,
struct ib_mad_send_wc *mad_send_wc)
static void ib_mad_send_done_handler(struct ib_mad_port_private *port_priv,
struct ib_wc *wc)
static void mark_sends_for_retry(struct ib_mad_qp_info *qp_info)
static void mad_error_handler(struct ib_mad_port_private *port_priv,
struct ib_wc *wc)
static void ib_mad_completion_handler(struct work_struct *work)
static void cancel_mads(struct ib_mad_agent_private *mad_agent_priv)
static struct ib_mad_send_wr_private*
find_send_wr(struct ib_mad_agent_private *mad_agent_priv,
struct ib_mad_send_buf *send_buf)
int ib_modify_mad(struct ib_mad_agent *mad_agent,
struct ib_mad_send_buf *send_buf, u32 timeout_ms)
EXPORT_SYMBOL(ib_modify_mad);
void ib_cancel_mad(struct ib_mad_agent *mad_agent,
struct ib_mad_send_buf *send_buf)
EXPORT_SYMBOL(ib_cancel_mad);
static void local_completions(struct work_struct *work)
static int retry_send(struct ib_mad_send_wr_private *mad_send_wr)
static void timeout_sends(struct work_struct *work)
static void ib_mad_thread_completion_handler(struct ib_cq *cq, void *arg)
static int ib_mad_post_receive_mads(struct ib_mad_qp_info *qp_info,
struct ib_mad_private *mad)
static void cleanup_recv_queue(struct ib_mad_qp_info *qp_info)
static int ib_mad_port_start(struct ib_mad_port_private *port_priv)
static void qp_event_handler(struct ib_event *event, void *qp_context)
static void init_mad_queue(struct ib_mad_qp_info *qp_info,
struct ib_mad_queue *mad_queue)
static void init_mad_qp(struct ib_mad_port_private *port_priv,
struct ib_mad_qp_info *qp_info)
static int create_mad_qp(struct ib_mad_qp_info *qp_info,
enum ib_qp_type qp_type)
static void destroy_mad_qp(struct ib_mad_qp_info *qp_info)
static int ib_mad_port_open(struct ib_device *device,
int port_num)
static int ib_mad_port_close(struct ib_device *device, int port_num)
static void ib_mad_init_device(struct ib_device *device)
static void ib_mad_remove_device(struct ib_device *device)
static struct ib_client mad_client = ;
static int __init ib_mad_init_module(void)
static void __exit ib_mad_cleanup_module(void)
module_init(ib_mad_init_module);
module_exit(ib_mad_cleanup_module);
