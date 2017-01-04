#define __T4_MSG_H
enum ;
enum CPL_error ;
enum ;
enum ;
enum ;
enum ;
union opcode_tid ;
#define CPL_OPCODE(x) ((x) << 24)
#define MK_OPCODE_TID(opcode, tid) (CPL_OPCODE(opcode) | (tid))
#define OPCODE_TID(cmd) ((cmd)->ot.opcode_tid)
#define GET_TID(cmd) (ntohl(OPCODE_TID(cmd)) & 0xFFFFFF)
#define GET_TID_TID(x) ((x) & 0x3fff)
#define GET_TID_QID(x) (((x) >> 14) & 0x3ff)
#define TID_QID(x)     ((x) << 14)
struct rss_header ;
struct work_request_hdr ;
#define WR_HDR struct work_request_hdr wr
struct cpl_pass_open_req ;
struct cpl_pass_open_req6 ;
struct cpl_pass_open_rpl ;
struct cpl_pass_accept_rpl ;
struct cpl_act_open_req ;
struct cpl_act_open_req6 ;
struct cpl_act_open_rpl ;
struct cpl_pass_establish ;
struct cpl_act_establish ;
struct cpl_get_tcb ;
struct cpl_set_tcb_field ;
struct cpl_set_tcb_rpl ;
struct cpl_close_con_req ;
struct cpl_close_con_rpl ;
struct cpl_close_listsvr_req ;
struct cpl_close_listsvr_rpl ;
struct cpl_abort_req_rss ;
struct cpl_abort_req ;
struct cpl_abort_rpl_rss ;
struct cpl_abort_rpl ;
struct cpl_peer_close ;
struct cpl_tid_release ;
struct cpl_tx_pkt_core ;
struct cpl_tx_pkt ;
#define cpl_tx_pkt_xt cpl_tx_pkt
struct cpl_tx_pkt_lso_core ;
struct cpl_tx_pkt_lso ;
struct cpl_iscsi_hdr ;
struct cpl_rx_data ;
struct cpl_rx_data_ack ;
struct cpl_rx_pkt ;
struct cpl_trace_pkt ;
struct cpl_l2t_write_req ;
struct cpl_l2t_write_rpl ;
struct cpl_rdma_terminate ;
struct cpl_sge_egr_update ;
struct cpl_fw4_pld ;
struct cpl_fw6_pld ;
struct cpl_fw4_msg ;
struct cpl_fw4_ack ;
struct cpl_fw6_msg ;
enum ;
enum ;
enum ;
struct ulptx_sge_pair ;
struct ulptx_sgl ;
struct ulp_mem_io ;
