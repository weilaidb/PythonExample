#define H_ALL_RES_QP_ENHANCED_OPS       EHCA_BMASK_IBM(9, 11)
#define H_ALL_RES_QP_PTE_PIN            EHCA_BMASK_IBM(12, 12)
#define H_ALL_RES_QP_SERVICE_TYPE       EHCA_BMASK_IBM(13, 15)
#define H_ALL_RES_QP_STORAGE            EHCA_BMASK_IBM(16, 17)
#define H_ALL_RES_QP_LL_RQ_CQE_POSTING  EHCA_BMASK_IBM(18, 18)
#define H_ALL_RES_QP_LL_SQ_CQE_POSTING  EHCA_BMASK_IBM(19, 21)
#define H_ALL_RES_QP_SIGNALING_TYPE     EHCA_BMASK_IBM(22, 23)
#define H_ALL_RES_QP_UD_AV_LKEY_CTRL    EHCA_BMASK_IBM(31, 31)
#define H_ALL_RES_QP_SMALL_SQ_PAGE_SIZE EHCA_BMASK_IBM(32, 35)
#define H_ALL_RES_QP_SMALL_RQ_PAGE_SIZE EHCA_BMASK_IBM(36, 39)
#define H_ALL_RES_QP_RESOURCE_TYPE      EHCA_BMASK_IBM(56, 63)
#define H_ALL_RES_QP_MAX_OUTST_SEND_WR  EHCA_BMASK_IBM(0, 15)
#define H_ALL_RES_QP_MAX_OUTST_RECV_WR  EHCA_BMASK_IBM(16, 31)
#define H_ALL_RES_QP_MAX_SEND_SGE       EHCA_BMASK_IBM(32, 39)
#define H_ALL_RES_QP_MAX_RECV_SGE       EHCA_BMASK_IBM(40, 47)
#define H_ALL_RES_QP_UD_AV_LKEY         EHCA_BMASK_IBM(32, 63)
#define H_ALL_RES_QP_SRQ_QP_TOKEN       EHCA_BMASK_IBM(0, 31)
#define H_ALL_RES_QP_SRQ_QP_HANDLE      EHCA_BMASK_IBM(0, 64)
#define H_ALL_RES_QP_SRQ_LIMIT          EHCA_BMASK_IBM(48, 63)
#define H_ALL_RES_QP_SRQ_QPN            EHCA_BMASK_IBM(40, 63)
#define H_ALL_RES_QP_ACT_OUTST_SEND_WR  EHCA_BMASK_IBM(16, 31)
#define H_ALL_RES_QP_ACT_OUTST_RECV_WR  EHCA_BMASK_IBM(48, 63)
#define H_ALL_RES_QP_ACT_SEND_SGE       EHCA_BMASK_IBM(8, 15)
#define H_ALL_RES_QP_ACT_RECV_SGE       EHCA_BMASK_IBM(24, 31)
#define H_ALL_RES_QP_SQUEUE_SIZE_PAGES  EHCA_BMASK_IBM(0, 31)
#define H_ALL_RES_QP_RQUEUE_SIZE_PAGES  EHCA_BMASK_IBM(32, 63)
#define H_MP_INIT_TYPE                  EHCA_BMASK_IBM(44, 47)
#define H_MP_SHUTDOWN                   EHCA_BMASK_IBM(48, 48)
#define H_MP_RESET_QKEY_CTR             EHCA_BMASK_IBM(49, 49)
#define HCALL4_REGS_FORMAT "r4=%lx r5=%lx r6=%lx r7=%lx"
#define HCALL7_REGS_FORMAT HCALL4_REGS_FORMAT " r8=%lx r9=%lx r10=%lx"
#define HCALL9_REGS_FORMAT HCALL7_REGS_FORMAT " r11=%lx r12=%lx"
static DEFINE_SPINLOCK(hcall_lock);
static u32 get_longbusy_msecs(int longbusy_rc)
static long ehca_plpar_hcall_norets(unsigned long opcode,
unsigned long arg1,
unsigned long arg2,
unsigned long arg3,
unsigned long arg4,
unsigned long arg5,
unsigned long arg6,
unsigned long arg7)
static long ehca_plpar_hcall9(unsigned long opcode,
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
u64 hipz_h_alloc_resource_eq(const struct ipz_adapter_handle adapter_handle,
struct ehca_pfeq *pfeq,
const u32 neq_control,
const u32 number_of_entries,
struct ipz_eq_handle *eq_handle,
u32 *act_nr_of_entries,
u32 *act_pages,
u32 *eq_ist)
u64 hipz_h_reset_event(const struct ipz_adapter_handle adapter_handle,
struct ipz_eq_handle eq_handle,
const u64 event_mask)
u64 hipz_h_alloc_resource_cq(const struct ipz_adapter_handle adapter_handle,
struct ehca_cq *cq,
struct ehca_alloc_cq_parms *param)
u64 hipz_h_alloc_resource_qp(const struct ipz_adapter_handle adapter_handle,
struct ehca_alloc_qp_parms *parms, int is_user)
u64 hipz_h_query_port(const struct ipz_adapter_handle adapter_handle,
const u8 port_id,
struct hipz_query_port *query_port_response_block)
u64 hipz_h_modify_port(const struct ipz_adapter_handle adapter_handle,
const u8 port_id, const u32 port_cap,
const u8 init_type, const int modify_mask)
u64 hipz_h_query_hca(const struct ipz_adapter_handle adapter_handle,
struct hipz_query_hca *query_hca_rblock)
u64 hipz_h_register_rpage(const struct ipz_adapter_handle adapter_handle,
const u8 pagesize,
const u8 queue_type,
const u64 resource_handle,
const u64 logical_address_of_page,
u64 count)
u64 hipz_h_register_rpage_eq(const struct ipz_adapter_handle adapter_handle,
const struct ipz_eq_handle eq_handle,
struct ehca_pfeq *pfeq,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count)
u64 hipz_h_query_int_state(const struct ipz_adapter_handle adapter_handle,
u32 ist)
u64 hipz_h_register_rpage_cq(const struct ipz_adapter_handle adapter_handle,
const struct ipz_cq_handle cq_handle,
struct ehca_pfcq *pfcq,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count,
const struct h_galpa gal)
u64 hipz_h_register_rpage_qp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count,
const struct h_galpa galpa)
u64 hipz_h_disable_and_get_wqe(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
void **log_addr_next_sq_wqe2processed,
void **log_addr_next_rq_wqe2processed,
int dis_and_get_function_code)
u64 hipz_h_modify_qp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
const u64 update_mask,
struct hcp_modify_qp_control_block *mqpcb,
struct h_galpa gal)
u64 hipz_h_query_qp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
struct hcp_modify_qp_control_block *qqpcb,
struct h_galpa gal)
u64 hipz_h_destroy_qp(const struct ipz_adapter_handle adapter_handle,
struct ehca_qp *qp)
u64 hipz_h_define_aqp0(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u32 port)
u64 hipz_h_define_aqp1(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u32 port, u32 * pma_qp_nr,
u32 * bma_qp_nr)
u64 hipz_h_attach_mcqp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u16 mcg_dlid,
u64 subnet_prefix, u64 interface_id)
u64 hipz_h_detach_mcqp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u16 mcg_dlid,
u64 subnet_prefix, u64 interface_id)
u64 hipz_h_destroy_cq(const struct ipz_adapter_handle adapter_handle,
struct ehca_cq *cq,
u8 force_flag)
u64 hipz_h_destroy_eq(const struct ipz_adapter_handle adapter_handle,
struct ehca_eq *eq)
u64 hipz_h_alloc_resource_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const u64 vaddr,
const u64 length,
const u32 access_ctrl,
const struct ipz_pd pd,
struct ehca_mr_hipzout_parms *outparms)
u64 hipz_h_register_rpage_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count)
u64 hipz_h_query_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
struct ehca_mr_hipzout_parms *outparms)
u64 hipz_h_free_resource_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr)
u64 hipz_h_reregister_pmr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const u64 vaddr_in,
const u64 length,
const u32 access_ctrl,
const struct ipz_pd pd,
const u64 mr_addr_cb,
struct ehca_mr_hipzout_parms *outparms)
u64 hipz_h_register_smr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const struct ehca_mr *orig_mr,
const u64 vaddr_in,
const u32 access_ctrl,
const struct ipz_pd pd,
struct ehca_mr_hipzout_parms *outparms)
u64 hipz_h_alloc_resource_mw(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mw *mw,
const struct ipz_pd pd,
struct ehca_mw_hipzout_parms *outparms)
u64 hipz_h_query_mw(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mw *mw,
struct ehca_mw_hipzout_parms *outparms)
u64 hipz_h_free_resource_mw(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mw *mw)
u64 hipz_h_error_data(const struct ipz_adapter_handle adapter_handle,
const u64 ressource_handle,
void *rblock,
unsigned long *byte_count)
u64 hipz_h_eoi(int irq)
