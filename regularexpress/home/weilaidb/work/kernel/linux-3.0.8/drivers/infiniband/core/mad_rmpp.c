enum rmpp_state ;
struct mad_rmpp_recv ;
static inline void deref_rmpp_recv(struct mad_rmpp_recv *rmpp_recv)
static void destroy_rmpp_recv(struct mad_rmpp_recv *rmpp_recv)
void ib_cancel_rmpp_recvs(struct ib_mad_agent_private *agent)
static void format_ack(struct ib_mad_send_buf *msg,
struct ib_rmpp_mad *data,
struct mad_rmpp_recv *rmpp_recv)
static void ack_recv(struct mad_rmpp_recv *rmpp_recv,
struct ib_mad_recv_wc *recv_wc)
static struct ib_mad_send_buf *alloc_response_msg(struct ib_mad_agent *agent,
struct ib_mad_recv_wc *recv_wc)
static void ack_ds_ack(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *recv_wc)
void ib_rmpp_send_handler(struct ib_mad_send_wc *mad_send_wc)
static void nack_recv(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *recv_wc, u8 rmpp_status)
static void recv_timeout_handler(struct work_struct *work)
static void recv_cleanup_handler(struct work_struct *work)
static struct mad_rmpp_recv *
create_rmpp_recv(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static struct mad_rmpp_recv *
find_rmpp_recv(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static struct mad_rmpp_recv *
acquire_rmpp_recv(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static struct mad_rmpp_recv *
insert_rmpp_recv(struct ib_mad_agent_private *agent,
struct mad_rmpp_recv *rmpp_recv)
static inline int get_last_flag(struct ib_mad_recv_buf *seg)
static inline int get_seg_num(struct ib_mad_recv_buf *seg)
static inline struct ib_mad_recv_buf * get_next_seg(struct list_head *rmpp_list,
struct ib_mad_recv_buf *seg)
static inline int window_size(struct ib_mad_agent_private *agent)
static struct ib_mad_recv_buf * find_seg_location(struct list_head *rmpp_list,
int seg_num)
static void update_seg_num(struct mad_rmpp_recv *rmpp_recv,
struct ib_mad_recv_buf *new_buf)
static inline int get_mad_len(struct mad_rmpp_recv *rmpp_recv)
static struct ib_mad_recv_wc * complete_rmpp(struct mad_rmpp_recv *rmpp_recv)
static struct ib_mad_recv_wc *
continue_rmpp(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static struct ib_mad_recv_wc *
start_rmpp(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static int send_next_seg(struct ib_mad_send_wr_private *mad_send_wr)
static void abort_send(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc, u8 rmpp_status)
static inline void adjust_last_ack(struct ib_mad_send_wr_private *wr,
int seg_num)
static void process_ds_ack(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc, int newwin)
static void process_rmpp_ack(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static struct ib_mad_recv_wc *
process_rmpp_data(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static void process_rmpp_stop(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static void process_rmpp_abort(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
struct ib_mad_recv_wc *
ib_process_rmpp_recv_wc(struct ib_mad_agent_private *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static int init_newwin(struct ib_mad_send_wr_private *mad_send_wr)
int ib_send_rmpp_mad(struct ib_mad_send_wr_private *mad_send_wr)
int ib_process_rmpp_send_wc(struct ib_mad_send_wr_private *mad_send_wr,
struct ib_mad_send_wc *mad_send_wc)
int ib_retry_rmpp(struct ib_mad_send_wr_private *mad_send_wr)
