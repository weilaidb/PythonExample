#define __EHEA_PHYP_H__
static inline u32 get_longbusy_msecs(int long_busy_ret_code)
#define EHEA_MAX_RPAGE 512
#define NEQE_EVENT_CODE		EHEA_BMASK_IBM(2, 7)
#define NEQE_PORTNUM  		EHEA_BMASK_IBM(32, 47)
#define NEQE_PORT_UP		EHEA_BMASK_IBM(16, 16)
#define NEQE_EXTSWITCH_PORT_UP	EHEA_BMASK_IBM(17, 17)
#define NEQE_EXTSWITCH_PRIMARY	EHEA_BMASK_IBM(18, 18)
#define NEQE_PLID		EHEA_BMASK_IBM(16, 47)
#define EHEA_EC_PORTSTATE_CHG	0x30
#define EHEA_EC_ADAPTER_MALFUNC	0x32
#define EHEA_EC_PORT_MALFUNC	0x33
#define NELR_PORT_MALFUNC	EHEA_BMASK_IBM(61, 61)
#define NELR_ADAPTER_MALFUNC	EHEA_BMASK_IBM(62, 62)
#define NELR_PORTSTATE_CHG	EHEA_BMASK_IBM(63, 63)
static inline void hcp_epas_ctor(struct h_epas *epas, u64 paddr_kernel,
u64 paddr_user)
static inline void hcp_epas_dtor(struct h_epas *epas)
struct hcp_modify_qp_cb0 ;
#define H_QPCB0_ALL             EHEA_BMASK_IBM(0, 5)
#define H_QPCB0_QP_CTL_REG      EHEA_BMASK_IBM(0, 0)
#define H_QPCB0_MAX_SWQE        EHEA_BMASK_IBM(1, 1)
#define H_QPCB0_MAX_RWQE        EHEA_BMASK_IBM(2, 2)
#define H_QPCB0_PORT_NB         EHEA_BMASK_IBM(3, 3)
#define H_QPCB0_QP_AER          EHEA_BMASK_IBM(4, 4)
#define H_QPCB0_QP_TENURE       EHEA_BMASK_IBM(5, 5)
#define H_QP_CR_ENABLED		    0x8000000000000000ULL
#define H_QP_CR_STATE_RESET	    0x0000010000000000ULL
#define H_QP_CR_STATE_INITIALIZED   0x0000020000000000ULL
#define H_QP_CR_STATE_RDY2RCV	    0x0000030000000000ULL
#define H_QP_CR_STATE_RDY2SND	    0x0000050000000000ULL
#define H_QP_CR_STATE_ERROR	    0x0000800000000000ULL
#define H_QP_CR_RES_STATE 	    0x0000007F00000000ULL
struct hcp_modify_qp_cb1 ;
#define H_QPCB1_ALL             EHEA_BMASK_IBM(0, 7)
#define H_QPCB1_QPN             EHEA_BMASK_IBM(0, 0)
#define H_QPCB1_ASYN_EV_EQ_NB   EHEA_BMASK_IBM(1, 1)
#define H_QPCB1_SQ_CQ_HANDLE    EHEA_BMASK_IBM(2, 2)
#define H_QPCB1_RQ_CQ_HANDLE    EHEA_BMASK_IBM(3, 3)
#define H_QPCB1_SGEL_NB_SQ      EHEA_BMASK_IBM(4, 4)
#define H_QPCB1_SGEL_NB_RQ1     EHEA_BMASK_IBM(5, 5)
#define H_QPCB1_SGEL_NB_RQ2     EHEA_BMASK_IBM(6, 6)
#define H_QPCB1_SGEL_NB_RQ3     EHEA_BMASK_IBM(7, 7)
struct hcp_query_ehea ;
#define H_PORT_CB0	 0
#define H_PORT_CB1	 1
#define H_PORT_CB2	 2
#define H_PORT_CB3	 3
#define H_PORT_CB4	 4
#define H_PORT_CB5	 5
#define H_PORT_CB6	 6
#define H_PORT_CB7	 7
struct hcp_ehea_port_cb0 ;
#define H_PORT_CB0_ALL		EHEA_BMASK_IBM(0, 7)
#define H_PORT_CB0_MAC		EHEA_BMASK_IBM(0, 0)
#define H_PORT_CB0_PRC		EHEA_BMASK_IBM(1, 1)
#define H_PORT_CB0_DEFQPNARRAY	EHEA_BMASK_IBM(7, 7)
#define H_SPEED_10M_H	1
#define H_SPEED_10M_F	2
#define H_SPEED_100M_H	3
#define H_SPEED_100M_F	4
#define H_SPEED_1G_F	6
#define H_SPEED_10G_F	8
#define PXLY_RC_VALID           EHEA_BMASK_IBM(49, 49)
#define PXLY_RC_VLAN_XTRACT     EHEA_BMASK_IBM(50, 50)
#define PXLY_RC_TCP_6_TUPLE     EHEA_BMASK_IBM(51, 51)
#define PXLY_RC_UDP_6_TUPLE     EHEA_BMASK_IBM(52, 52)
#define PXLY_RC_TCP_3_TUPLE     EHEA_BMASK_IBM(53, 53)
#define PXLY_RC_TCP_2_TUPLE     EHEA_BMASK_IBM(54, 54)
#define PXLY_RC_LLC_SNAP        EHEA_BMASK_IBM(55, 55)
#define PXLY_RC_JUMBO_FRAME     EHEA_BMASK_IBM(56, 56)
#define PXLY_RC_FRAG_IP_PKT     EHEA_BMASK_IBM(57, 57)
#define PXLY_RC_TCP_UDP_CHKSUM  EHEA_BMASK_IBM(58, 58)
#define PXLY_RC_IP_CHKSUM       EHEA_BMASK_IBM(59, 59)
#define PXLY_RC_MAC_FILTER      EHEA_BMASK_IBM(60, 60)
#define PXLY_RC_UNTAG_FILTER    EHEA_BMASK_IBM(61, 61)
#define PXLY_RC_VLAN_TAG_FILTER EHEA_BMASK_IBM(62, 63)
#define PXLY_RC_VLAN_FILTER     2
#define PXLY_RC_VLAN_PERM       0
#define H_PORT_CB1_ALL          0x8000000000000000ULL
struct hcp_ehea_port_cb1 ;
#define H_PORT_CB2_ALL          0xFFE0000000000000ULL
struct hcp_ehea_port_cb2 ;
struct hcp_ehea_port_cb3 ;
#define H_PORT_CB4_ALL          0xF000000000000000ULL
#define H_PORT_CB4_JUMBO        0x1000000000000000ULL
#define H_PORT_CB4_SPEED        0x8000000000000000ULL
struct hcp_ehea_port_cb4 ;
#define H_PORT_CB5_RCU		0x0001000000000000ULL
#define PXS_RCU			EHEA_BMASK_IBM(61, 63)
struct hcp_ehea_port_cb5 ;
#define H_PORT_CB6_ALL  0xFFFFFE7FFFFF8000ULL
struct hcp_ehea_port_cb6 ;
#define H_PORT_CB7_DUCQPN 0x8000000000000000ULL
struct hcp_ehea_port_cb7 ;
u64 ehea_h_query_ehea_qp(const u64 adapter_handle,
const u8 qp_category,
const u64 qp_handle, const u64 sel_mask,
void *cb_addr);
u64 ehea_h_modify_ehea_qp(const u64 adapter_handle,
const u8 cat,
const u64 qp_handle,
const u64 sel_mask,
void *cb_addr,
u64 *inv_attr_id,
u64 *proc_mask, u16 *out_swr, u16 *out_rwr);
u64 ehea_h_alloc_resource_eq(const u64 adapter_handle,
struct ehea_eq_attr *eq_attr, u64 *eq_handle);
u64 ehea_h_alloc_resource_cq(const u64 adapter_handle,
struct ehea_cq_attr *cq_attr,
u64 *cq_handle, struct h_epas *epas);
u64 ehea_h_alloc_resource_qp(const u64 adapter_handle,
struct ehea_qp_init_attr *init_attr,
const u32 pd,
u64 *qp_handle, struct h_epas *h_epas);
#define H_REG_RPAGE_PAGE_SIZE          EHEA_BMASK_IBM(48, 55)
#define H_REG_RPAGE_QT                 EHEA_BMASK_IBM(62, 63)
u64 ehea_h_register_rpage(const u64 adapter_handle,
const u8 pagesize,
const u8 queue_type,
const u64 resource_handle,
const u64 log_pageaddr, u64 count);
#define H_DISABLE_GET_EHEA_WQE_P  1
#define H_DISABLE_GET_SQ_WQE_P    2
#define H_DISABLE_GET_RQC         3
u64 ehea_h_disable_and_get_hea(const u64 adapter_handle, const u64 qp_handle);
#define FORCE_FREE 1
#define NORMAL_FREE 0
u64 ehea_h_free_resource(const u64 adapter_handle, const u64 res_handle,
u64 force_bit);
u64 ehea_h_alloc_resource_mr(const u64 adapter_handle, const u64 vaddr,
const u64 length, const u32 access_ctrl,
const u32 pd, u64 *mr_handle, u32 *lkey);
u64 ehea_h_register_rpage_mr(const u64 adapter_handle, const u64 mr_handle,
const u8 pagesize, const u8 queue_type,
const u64 log_pageaddr, const u64 count);
u64 ehea_h_register_smr(const u64 adapter_handle, const u64 orig_mr_handle,
const u64 vaddr_in, const u32 access_ctrl, const u32 pd,
struct ehea_mr *mr);
u64 ehea_h_query_ehea(const u64 adapter_handle, void *cb_addr);
#define H_MEHEAPORT_CAT		EHEA_BMASK_IBM(40, 47)
#define H_MEHEAPORT_PN		EHEA_BMASK_IBM(48, 63)
u64 ehea_h_query_ehea_port(const u64 adapter_handle, const u16 port_num,
const u8 cb_cat, const u64 select_mask,
void *cb_addr);
u64 ehea_h_modify_ehea_port(const u64 adapter_handle, const u16 port_num,
const u8 cb_cat, const u64 select_mask,
void *cb_addr);
#define H_REGBCMC_PN            EHEA_BMASK_IBM(48, 63)
#define H_REGBCMC_REGTYPE       EHEA_BMASK_IBM(61, 63)
#define H_REGBCMC_MACADDR       EHEA_BMASK_IBM(16, 63)
#define H_REGBCMC_VLANID        EHEA_BMASK_IBM(52, 63)
u64 ehea_h_reg_dereg_bcmc(const u64 adapter_handle, const u16 port_num,
const u8 reg_type, const u64 mc_mac_addr,
const u16 vlan_id, const u32 hcall_id);
u64 ehea_h_reset_events(const u64 adapter_handle, const u64 neq_handle,
const u64 event_mask);
u64 ehea_h_error_data(const u64 adapter_handle, const u64 ressource_handle,
void *rblock);
