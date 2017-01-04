#define _CXGB_CPL5_CMD_H_
#if !defined(__LITTLE_ENDIAN_BITFIELD) && !defined(__BIG_ENDIAN_BITFIELD)
#error "Adjust your <asm/byteorder.h> defines"
enum CPL_opcode ;
#define NUM_CPL_CMDS 256
enum CPL_error ;
enum ;
enum ;
enum ;
enum ;
enum ;
union opcode_tid ;
#define S_OPCODE 24
#define V_OPCODE(x) ((x) << S_OPCODE)
#define G_OPCODE(x) (((x) >> S_OPCODE) & 0xFF)
#define G_TID(x)    ((x) & 0xFFFFFF)
#define MK_OPCODE_TID(opcode, tid) (V_OPCODE(opcode) | (tid))
#define OPCODE_TID(cmd) ((cmd)->ot.opcode_tid)
#define GET_TID(cmd) (G_TID(ntohl(OPCODE_TID(cmd))))
struct tcp_options ;
struct cpl_pass_open_req ;
struct cpl_pass_open_rpl ;
struct cpl_pass_establish ;
struct cpl_pass_accept_req ;
struct cpl_pass_accept_rpl ;
struct cpl_act_open_req ;
struct cpl_act_open_rpl ;
struct cpl_act_establish ;
struct cpl_get_tcb ;
struct cpl_get_tcb_rpl ;
struct cpl_set_tcb ;
struct cpl_set_tcb_field ;
struct cpl_set_tcb_rpl ;
struct cpl_pcmd ;
struct cpl_pcmd_read ;
struct cpl_pcmd_read_rpl ;
struct cpl_close_con_req ;
struct cpl_close_con_rpl ;
struct cpl_close_listserv_req ;
struct cpl_close_listserv_rpl ;
struct cpl_abort_req ;
struct cpl_abort_rpl ;
struct cpl_peer_close ;
struct cpl_tx_data ;
struct cpl_tx_data_ack ;
struct cpl_rx_data ;
struct cpl_rx_data_ack ;
struct cpl_rx_data_ddp ;
struct cpl_tx_pkt ;
struct cpl_tx_pkt_lso ;
struct cpl_rx_pkt ;
struct cpl_l2t_write_req ;
struct cpl_l2t_write_rpl ;
struct cpl_l2t_read_req ;
struct cpl_l2t_read_rpl ;
struct cpl_smt_write_req ;
struct cpl_smt_write_rpl ;
struct cpl_smt_read_req ;
struct cpl_smt_read_rpl ;
struct cpl_rte_delete_req ;
struct cpl_rte_delete_rpl ;
struct cpl_rte_write_req ;
struct cpl_rte_write_rpl ;
struct cpl_rte_read_req ;
struct cpl_rte_read_rpl ;
struct cpl_mss_change ;
