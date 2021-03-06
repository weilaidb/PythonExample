#define __NES_HW_H
#define NES_PHY_TYPE_CX4       1
#define NES_PHY_TYPE_1G        2
#define NES_PHY_TYPE_ARGUS     4
#define NES_PHY_TYPE_PUMA_1G   5
#define NES_PHY_TYPE_PUMA_10G  6
#define NES_PHY_TYPE_GLADIUS   7
#define NES_PHY_TYPE_SFP_D     8
#define NES_PHY_TYPE_KR	       9
#define NES_MULTICAST_PF_MAX 8
#define NES_A0 3
enum pci_regs ;
enum indexed_regs ;
#define NES_IDX_MAC_TX_CONFIG_ENABLE_PAUSE   1
#define NES_IDX_MPP_DEBUG_PORT_DISABLE_PAUSE (1 << 17)
enum nes_cqp_opcodes ;
enum nes_cqp_wqe_word_idx ;
enum nes_cqp_cq_wqeword_idx ;
enum nes_cqp_stag_wqeword_idx ;
#define NES_CQP_OP_IWARP_STATE_SHIFT 28
#define NES_CQP_OP_TERMLEN_SHIFT     28
enum nes_cqp_qp_bits ;
enum nes_cqp_qp_wqe_word_idx ;
enum nes_nic_ctx_bits ;
enum nes_nic_qp_ctx_word_idx ;
enum nes_cqp_cq_bits ;
enum nes_cqp_stag_bits ;
enum nes_cqp_ceq_wqeword_idx ;
enum nes_cqp_ceq_bits ;
enum nes_cqp_aeq_wqeword_idx ;
enum nes_cqp_aeq_bits ;
enum nes_cqp_lmi_wqeword_idx ;
enum nes_cqp_arp_wqeword_idx ;
enum nes_cqp_upload_wqeword_idx ;
enum nes_cqp_arp_bits ;
enum nes_cqp_flush_bits ;
enum nes_cqe_opcode_bits ;
enum nes_cqe_word_idx ;
enum nes_ceqe_word_idx ;
enum nes_ceqe_status_bit ;
enum nes_int_bits ;
enum nes_intf_int_bits ;
enum nes_mac_int_bits ;
enum nes_cqe_allocate_bits ;
enum nes_nic_rq_wqe_word_idx ;
enum nes_nic_sq_wqe_word_idx ;
enum nes_iwarp_sq_wqe_word_idx ;
enum nes_iwarp_sq_bind_wqe_word_idx ;
enum nes_iwarp_sq_fmr_wqe_word_idx ;
enum nes_iwarp_sq_fmr_opcodes ;
#define NES_IWARP_SQ_FMR_WQE_MR_LENGTH_HIGH_MASK	0xFF;
enum nes_iwarp_sq_locinv_wqe_word_idx ;
enum nes_iwarp_rq_wqe_word_idx ;
enum nes_nic_sq_wqe_bits ;
enum nes_nic_cqe_word_idx ;
#define NES_PKT_TYPE_APBVT_BITS 0xC112
#define NES_PKT_TYPE_APBVT_MASK 0xff3e
#define NES_PKT_TYPE_PVALID_BITS 0x10000000
#define NES_PKT_TYPE_PVALID_MASK 0x30000000
#define NES_PKT_TYPE_TCPV4_BITS 0x0110
#define NES_PKT_TYPE_TCPV4_MASK 0x3f30
#define NES_PKT_TYPE_UDPV4_BITS 0x0210
#define NES_PKT_TYPE_UDPV4_MASK 0x3f30
#define NES_PKT_TYPE_IPV4_BITS  0x0010
#define NES_PKT_TYPE_IPV4_MASK  0x3f30
#define NES_PKT_TYPE_OTHER_BITS 0x0000
#define NES_PKT_TYPE_OTHER_MASK 0x0030
#define NES_NIC_CQE_ERRV_SHIFT 16
enum nes_nic_ev_bits ;
enum nes_nic_cqe_bits ;
enum nes_aeqe_word_idx ;
enum nes_aeqe_bits ;
#define NES_AEQE_IWARP_STATE_SHIFT	20
#define NES_AEQE_TCP_STATE_SHIFT	24
#define NES_AEQE_Q2_DATA_ETHERNET       (1<<28)
#define NES_AEQE_Q2_DATA_MPA            (1<<29)
enum nes_aeqe_iwarp_state ;
enum nes_aeqe_tcp_state ;
enum nes_aeqe_aeid ;
enum nes_iwarp_sq_opcodes ;
enum nes_iwarp_sq_wqe_bits ;
enum nes_iwarp_cqe_major_code ;
enum nes_iwarp_cqe_minor_code ;
#define NES_EEPROM_READ_REQUEST (1<<16)
#define NES_MAC_ADDR_VALID      (1<<20)
struct nes_init_values ;
struct nes_pci_regs ;
#define NES_CQP_SQ_SIZE    128
#define NES_CCQ_SIZE       128
#define NES_NIC_WQ_SIZE    512
#define NES_NIC_CTX_SIZE   ((NES_NIC_CTX_RQ_SIZE_512) | (NES_NIC_CTX_SQ_SIZE_512))
#define NES_NIC_BACK_STORE 0x00038000
struct nes_device;
struct nes_hw_nic_qp_context ;
struct nes_hw_nic_sq_wqe ;
struct nes_hw_nic_rq_wqe ;
struct nes_hw_nic_cqe ;
struct nes_hw_cqp_qp_context ;
struct nes_hw_cqp_wqe ;
struct nes_hw_qp_wqe ;
struct nes_hw_cqe ;
struct nes_hw_ceqe ;
struct nes_hw_aeqe ;
struct nes_cqp_request ;
struct nes_hw_cqp ;
#define NES_FIRST_FRAG_SIZE 128
struct nes_first_frag ;
struct nes_hw_nic ;
struct nes_hw_nic_cq ;
struct nes_hw_qp ;
struct nes_hw_cq ;
struct nes_hw_ceq ;
struct nes_hw_aeq ;
struct nic_qp_map ;
#define	NES_CQP_ARP_AEQ_INDEX_MASK  0x000f0000
#define	NES_CQP_ARP_AEQ_INDEX_SHIFT 16
#define NES_CQP_APBVT_ADD			0x00008000
#define NES_CQP_APBVT_NIC_SHIFT		16
#define NES_ARP_ADD     1
#define NES_ARP_DELETE  2
#define NES_ARP_RESOLVE 3
#define NES_MAC_SW_IDLE      0
#define NES_MAC_SW_INTERRUPT 1
#define NES_MAC_SW_MH        2
struct nes_arp_entry ;
#define NES_NIC_FAST_TIMER          96
#define NES_NIC_FAST_TIMER_LOW      40
#define NES_NIC_FAST_TIMER_HIGH     1000
#define DEFAULT_NES_QL_HIGH         256
#define DEFAULT_NES_QL_LOW          16
#define DEFAULT_NES_QL_TARGET       64
#define DEFAULT_JUMBO_NES_QL_LOW    12
#define DEFAULT_JUMBO_NES_QL_TARGET 40
#define DEFAULT_JUMBO_NES_QL_HIGH   128
#define NES_NIC_CQ_DOWNWARD_TREND   16
#define NES_PFT_SIZE		    48
struct nes_hw_tune_timer ;
#define NES_TIMER_INT_LIMIT         2
#define NES_TIMER_INT_LIMIT_DYNAMIC 10
#define NES_TIMER_ENABLE_LIMIT      4
#define NES_MAX_LINK_INTERRUPTS     128
#define NES_MAX_LINK_CHECK          200
#define NES_MAX_LRO_DESCRIPTORS     32
#define NES_LRO_MAX_AGGR            64
struct nes_adapter ;
struct nes_pbl ;
#define NES_4K_PBL_CHUNK_SIZE	4096
struct nes_fast_mr_wqe_pbl ;
struct nes_ib_fast_reg_page_list ;
struct nes_listener ;
struct nes_ib_device;
#define NES_EVENT_DELAY msecs_to_jiffies(100)
struct nes_vnic ;
struct nes_ib_device ;
enum nes_hdrct_flags ;
enum nes_term_layers ;
enum nes_term_error_types ;
enum nes_term_rdma_errors ;
enum nes_term_ddp_errors ;
enum nes_term_mpa_errors ;
struct nes_terminate_hdr ;
#define IWARP_OPCODE_WRITE		0
#define IWARP_OPCODE_READREQ		1
#define IWARP_OPCODE_READRSP		2
#define IWARP_OPCODE_SEND		3
#define IWARP_OPCODE_SEND_INV		4
#define IWARP_OPCODE_SEND_SE		5
#define IWARP_OPCODE_SEND_SE_INV	6
#define IWARP_OPCODE_TERM		7
#define TERM_DDP_LEN_TAGGED	14
#define TERM_DDP_LEN_UNTAGGED	18
#define TERM_RDMA_LEN		28
#define RDMA_OPCODE_MASK	0x0f
#define RDMA_READ_REQ_OPCODE	1
#define BAD_FRAME_OFFSET	64
#define CQE_MAJOR_DRV		0x8000
#define NES_LINK_RECHECK_DELAY	msecs_to_jiffies(50)
#define NES_LINK_RECHECK_MAX	60
#define nes_vlan_rx vlan_hwaccel_receive_skb
#define nes_netif_rx netif_receive_skb
