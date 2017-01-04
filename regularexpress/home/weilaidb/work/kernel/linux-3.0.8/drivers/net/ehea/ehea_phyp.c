#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static inline u16 get_order_of_qentries(u16 queue_entries)
#define H_ALL_RES_TYPE_QP	 1
#define H_ALL_RES_TYPE_CQ	 2
#define H_ALL_RES_TYPE_EQ	 3
#define H_ALL_RES_TYPE_MR	 5
#define H_ALL_RES_TYPE_MW	 6
static long ehea_plpar_hcall_norets(unsigned long opcode,
unsigned long arg1,
unsigned long arg2,
unsigned long arg3,
unsigned long arg4,
unsigned long arg5,
unsigned long arg6,
unsigned long arg7)
static long ehea_plpar_hcall9(unsigned long opcode,
unsigned long *outs,
unsigned long arg1,
unsigned long arg2,
unsigned long arg3,
unsigned long arg4,
unsigned long arg5,
unsigned long arg6,
unsigned long arg7,
unsigned long arg8,
unsigned long arg9)
u64 ehea_h_query_ehea_qp(const u64 adapter_handle, const u8 qp_category,
const u64 qp_handle, const u64 sel_mask, void *cb_addr)
#define H_ALL_RES_QP_EQPO	  EHEA_BMASK_IBM(9, 11)
#define H_ALL_RES_QP_QPP	  EHEA_BMASK_IBM(12, 12)
#define H_ALL_RES_QP_RQR	  EHEA_BMASK_IBM(13, 15)
#define H_ALL_RES_QP_EQEG	  EHEA_BMASK_IBM(16, 16)
#define H_ALL_RES_QP_LL_QP	  EHEA_BMASK_IBM(17, 17)
#define H_ALL_RES_QP_DMA128	  EHEA_BMASK_IBM(19, 19)
#define H_ALL_RES_QP_HSM	  EHEA_BMASK_IBM(20, 21)
#define H_ALL_RES_QP_SIGT	  EHEA_BMASK_IBM(22, 23)
#define H_ALL_RES_QP_TENURE	  EHEA_BMASK_IBM(48, 55)
#define H_ALL_RES_QP_RES_TYP	  EHEA_BMASK_IBM(56, 63)
#define H_ALL_RES_QP_TOKEN	  EHEA_BMASK_IBM(0, 31)
#define H_ALL_RES_QP_PD		  EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_QP_MAX_SWQE	  EHEA_BMASK_IBM(4, 7)
#define H_ALL_RES_QP_MAX_R1WQE	  EHEA_BMASK_IBM(12, 15)
#define H_ALL_RES_QP_MAX_R2WQE	  EHEA_BMASK_IBM(20, 23)
#define H_ALL_RES_QP_MAX_R3WQE	  EHEA_BMASK_IBM(28, 31)
#define H_ALL_RES_QP_MAX_SSGE	  EHEA_BMASK_IBM(37, 39)
#define H_ALL_RES_QP_MAX_R1SGE	  EHEA_BMASK_IBM(45, 47)
#define H_ALL_RES_QP_MAX_R2SGE	  EHEA_BMASK_IBM(53, 55)
#define H_ALL_RES_QP_MAX_R3SGE	  EHEA_BMASK_IBM(61, 63)
#define H_ALL_RES_QP_SWQE_IDL	  EHEA_BMASK_IBM(0, 7)
#define H_ALL_RES_QP_PORT_NUM	  EHEA_BMASK_IBM(48, 63)
#define H_ALL_RES_QP_TH_RQ2	  EHEA_BMASK_IBM(0, 15)
#define H_ALL_RES_QP_TH_RQ3	  EHEA_BMASK_IBM(16, 31)
#define H_ALL_RES_QP_ACT_SWQE	  EHEA_BMASK_IBM(0, 15)
#define H_ALL_RES_QP_ACT_R1WQE	  EHEA_BMASK_IBM(16, 31)
#define H_ALL_RES_QP_ACT_R2WQE	  EHEA_BMASK_IBM(32, 47)
#define H_ALL_RES_QP_ACT_R3WQE	  EHEA_BMASK_IBM(48, 63)
#define H_ALL_RES_QP_ACT_SSGE	  EHEA_BMASK_IBM(0, 7)
#define H_ALL_RES_QP_ACT_R1SGE	  EHEA_BMASK_IBM(8, 15)
#define H_ALL_RES_QP_ACT_R2SGE	  EHEA_BMASK_IBM(16, 23)
#define H_ALL_RES_QP_ACT_R3SGE	  EHEA_BMASK_IBM(24, 31)
#define H_ALL_RES_QP_ACT_SWQE_IDL EHEA_BMASK_IBM(32, 39)
#define H_ALL_RES_QP_SIZE_SQ	  EHEA_BMASK_IBM(0, 31)
#define H_ALL_RES_QP_SIZE_RQ1	  EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_QP_SIZE_RQ2	  EHEA_BMASK_IBM(0, 31)
#define H_ALL_RES_QP_SIZE_RQ3	  EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_QP_LIOBN_SQ	  EHEA_BMASK_IBM(0, 31)
#define H_ALL_RES_QP_LIOBN_RQ1	  EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_QP_LIOBN_RQ2	  EHEA_BMASK_IBM(0, 31)
#define H_ALL_RES_QP_LIOBN_RQ3	  EHEA_BMASK_IBM(32, 63)
u64 ehea_h_alloc_resource_qp(const u64 adapter_handle,
struct ehea_qp_init_attr *init_attr, const u32 pd,
u64 *qp_handle, struct h_epas *h_epas)
u64 ehea_h_alloc_resource_cq(const u64 adapter_handle,
struct ehea_cq_attr *cq_attr,
u64 *cq_handle, struct h_epas *epas)
#define H_ALL_RES_TYPE_QP	 1
#define H_ALL_RES_TYPE_CQ	 2
#define H_ALL_RES_TYPE_EQ	 3
#define H_ALL_RES_TYPE_MR	 5
#define H_ALL_RES_TYPE_MW	 6
#define H_ALL_RES_EQ_NEQ	     EHEA_BMASK_IBM(0, 0)
#define H_ALL_RES_EQ_NON_NEQ_ISN     EHEA_BMASK_IBM(6, 7)
#define H_ALL_RES_EQ_INH_EQE_GEN     EHEA_BMASK_IBM(16, 16)
#define H_ALL_RES_EQ_RES_TYPE	     EHEA_BMASK_IBM(56, 63)
#define H_ALL_RES_EQ_MAX_EQE	     EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_EQ_LIOBN	     EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_EQ_ACT_EQE	     EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_EQ_ACT_PS	     EHEA_BMASK_IBM(32, 63)
#define H_ALL_RES_EQ_ACT_EQ_IST_C    EHEA_BMASK_IBM(30, 31)
#define H_ALL_RES_EQ_ACT_EQ_IST_1    EHEA_BMASK_IBM(40, 63)
#define H_ALL_RES_EQ_ACT_EQ_IST_2    EHEA_BMASK_IBM(40, 63)
#define H_ALL_RES_EQ_ACT_EQ_IST_3    EHEA_BMASK_IBM(40, 63)
#define H_ALL_RES_EQ_ACT_EQ_IST_4    EHEA_BMASK_IBM(40, 63)
u64 ehea_h_alloc_resource_eq(const u64 adapter_handle,
struct ehea_eq_attr *eq_attr, u64 *eq_handle)
u64 ehea_h_modify_ehea_qp(const u64 adapter_handle, const u8 cat,
const u64 qp_handle, const u64 sel_mask,
void *cb_addr, u64 *inv_attr_id, u64 *proc_mask,
u16 *out_swr, u16 *out_rwr)
u64 ehea_h_register_rpage(const u64 adapter_handle, const u8 pagesize,
const u8 queue_type, const u64 resource_handle,
const u64 log_pageaddr, u64 count)
u64 ehea_h_register_smr(const u64 adapter_handle, const u64 orig_mr_handle,
const u64 vaddr_in, const u32 access_ctrl, const u32 pd,
struct ehea_mr *mr)
u64 ehea_h_disable_and_get_hea(const u64 adapter_handle, const u64 qp_handle)
u64 ehea_h_free_resource(const u64 adapter_handle, const u64 res_handle,
u64 force_bit)
u64 ehea_h_alloc_resource_mr(const u64 adapter_handle, const u64 vaddr,
const u64 length, const u32 access_ctrl,
const u32 pd, u64 *mr_handle, u32 *lkey)
u64 ehea_h_register_rpage_mr(const u64 adapter_handle, const u64 mr_handle,
const u8 pagesize, const u8 queue_type,
const u64 log_pageaddr, const u64 count)
u64 ehea_h_query_ehea(const u64 adapter_handle, void *cb_addr)
u64 ehea_h_query_ehea_port(const u64 adapter_handle, const u16 port_num,
const u8 cb_cat, const u64 select_mask,
void *cb_addr)
u64 ehea_h_modify_ehea_port(const u64 adapter_handle, const u16 port_num,
const u8 cb_cat, const u64 select_mask,
void *cb_addr)
u64 ehea_h_reg_dereg_bcmc(const u64 adapter_handle, const u16 port_num,
const u8 reg_type, const u64 mc_mac_addr,
const u16 vlan_id, const u32 hcall_id)
u64 ehea_h_reset_events(const u64 adapter_handle, const u64 neq_handle,
const u64 event_mask)
u64 ehea_h_error_data(const u64 adapter_handle, const u64 ressource_handle,
void *rblock)
