#define __AGGR_RECV_API_H__
typedef void (* RX_CALLBACK)(void * dev, void *osbuf);
typedef void (* ALLOC_NETBUFS)(A_NETBUF_QUEUE_T *q, u16 num);
void *
aggr_init(ALLOC_NETBUFS netbuf_allocator);
void
aggr_register_rx_dispatcher(void *cntxt, void * dev,  RX_CALLBACK fn);
void
aggr_process_bar(void *cntxt, u8 tid, u16 seq_no);
void
aggr_recv_addba_req_evt(void * cntxt, u8 tid, u16 seq_no, u8 win_sz);
void
aggr_recv_delba_req_evt(void * cntxt, u8 tid);
void
aggr_process_recv_frm(void *cntxt, u8 tid, u16 seq_no, bool is_amsdu, void **osbuf);
void
aggr_module_destroy(void *cntxt);
void
aggr_dump_stats(void *cntxt, PACKET_LOG **log_buf);
void
aggr_reset_state(void *cntxt);
