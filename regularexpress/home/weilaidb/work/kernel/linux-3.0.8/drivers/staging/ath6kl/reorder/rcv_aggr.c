extern int
wmi_dot3_2_dix(void *osbuf);
static void
aggr_slice_amsdu(struct aggr_info *p_aggr, struct rxtid *rxtid, void **osbuf);
static void
aggr_timeout(unsigned long arg);
static void
aggr_deque_frms(struct aggr_info *p_aggr, u8 tid, u16 seq_no, u8 order);
static void
aggr_dispatch_frames(struct aggr_info *p_aggr, A_NETBUF_QUEUE_T *q);
static void *
aggr_get_osbuf(struct aggr_info *p_aggr);
void *
aggr_init(ALLOC_NETBUFS netbuf_allocator)
static void
aggr_delete_tid_state(struct aggr_info *p_aggr, u8 tid)
void
aggr_module_destroy(void *cntxt)
void
aggr_register_rx_dispatcher(void *cntxt, void * dev, RX_CALLBACK fn)
void
aggr_process_bar(void *cntxt, u8 tid, u16 seq_no)
void
aggr_recv_addba_req_evt(void *cntxt, u8 tid, u16 seq_no, u8 win_sz)
void
aggr_recv_delba_req_evt(void *cntxt, u8 tid)
static void
aggr_deque_frms(struct aggr_info *p_aggr, u8 tid, u16 seq_no, u8 order)
static void *
aggr_get_osbuf(struct aggr_info *p_aggr)
static void
aggr_slice_amsdu(struct aggr_info *p_aggr, struct rxtid *rxtid, void **osbuf)
void
aggr_process_recv_frm(void *cntxt, u8 tid, u16 seq_no, bool is_amsdu, void **osbuf)
void
aggr_reset_state(void *cntxt)
static void
aggr_timeout(unsigned long arg)
static void
aggr_dispatch_frames(struct aggr_info *p_aggr, A_NETBUF_QUEUE_T *q)
void
aggr_dump_stats(void *cntxt, PACKET_LOG **log_buf)
