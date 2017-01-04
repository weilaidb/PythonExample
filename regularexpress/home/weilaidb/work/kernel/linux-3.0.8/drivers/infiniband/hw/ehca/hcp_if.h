#define __HCP_IF_H__
u64 hipz_h_alloc_resource_eq(const struct ipz_adapter_handle adapter_handle,
struct ehca_pfeq *pfeq,
const u32 neq_control,
const u32 number_of_entries,
struct ipz_eq_handle *eq_handle,
u32 * act_nr_of_entries,
u32 * act_pages,
u32 * eq_ist);
u64 hipz_h_reset_event(const struct ipz_adapter_handle adapter_handle,
struct ipz_eq_handle eq_handle,
const u64 event_mask);
u64 hipz_h_alloc_resource_cq(const struct ipz_adapter_handle adapter_handle,
struct ehca_cq *cq,
struct ehca_alloc_cq_parms *param);
u64 hipz_h_alloc_resource_qp(const struct ipz_adapter_handle adapter_handle,
struct ehca_alloc_qp_parms *parms, int is_user);
u64 hipz_h_query_port(const struct ipz_adapter_handle adapter_handle,
const u8 port_id,
struct hipz_query_port *query_port_response_block);
u64 hipz_h_modify_port(const struct ipz_adapter_handle adapter_handle,
const u8 port_id, const u32 port_cap,
const u8 init_type, const int modify_mask);
u64 hipz_h_query_hca(const struct ipz_adapter_handle adapter_handle,
struct hipz_query_hca *query_hca_rblock);
u64 hipz_h_register_rpage(const struct ipz_adapter_handle adapter_handle,
const u8 pagesize,
const u8 queue_type,
const u64 resource_handle,
const u64 logical_address_of_page,
u64 count);
u64 hipz_h_register_rpage_eq(const struct ipz_adapter_handle adapter_handle,
const struct ipz_eq_handle eq_handle,
struct ehca_pfeq *pfeq,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count);
u64 hipz_h_query_int_state(const struct ipz_adapter_handle
hcp_adapter_handle,
u32 ist);
u64 hipz_h_register_rpage_cq(const struct ipz_adapter_handle adapter_handle,
const struct ipz_cq_handle cq_handle,
struct ehca_pfcq *pfcq,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count,
const struct h_galpa gal);
u64 hipz_h_register_rpage_qp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count,
const struct h_galpa galpa);
u64 hipz_h_disable_and_get_wqe(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
void **log_addr_next_sq_wqe_tb_processed,
void **log_addr_next_rq_wqe_tb_processed,
int dis_and_get_function_code);
enum hcall_sigt ;
u64 hipz_h_modify_qp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
const u64 update_mask,
struct hcp_modify_qp_control_block *mqpcb,
struct h_galpa gal);
u64 hipz_h_query_qp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct ehca_pfqp *pfqp,
struct hcp_modify_qp_control_block *qqpcb,
struct h_galpa gal);
u64 hipz_h_destroy_qp(const struct ipz_adapter_handle adapter_handle,
struct ehca_qp *qp);
u64 hipz_h_define_aqp0(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u32 port);
u64 hipz_h_define_aqp1(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u32 port, u32 * pma_qp_nr,
u32 * bma_qp_nr);
u64 hipz_h_attach_mcqp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u16 mcg_dlid,
u64 subnet_prefix, u64 interface_id);
u64 hipz_h_detach_mcqp(const struct ipz_adapter_handle adapter_handle,
const struct ipz_qp_handle qp_handle,
struct h_galpa gal,
u16 mcg_dlid,
u64 subnet_prefix, u64 interface_id);
u64 hipz_h_destroy_cq(const struct ipz_adapter_handle adapter_handle,
struct ehca_cq *cq,
u8 force_flag);
u64 hipz_h_destroy_eq(const struct ipz_adapter_handle adapter_handle,
struct ehca_eq *eq);
u64 hipz_h_alloc_resource_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const u64 vaddr,
const u64 length,
const u32 access_ctrl,
const struct ipz_pd pd,
struct ehca_mr_hipzout_parms *outparms);
u64 hipz_h_register_rpage_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const u8 pagesize,
const u8 queue_type,
const u64 logical_address_of_page,
const u64 count);
u64 hipz_h_query_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
struct ehca_mr_hipzout_parms *outparms);
u64 hipz_h_free_resource_mr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr);
u64 hipz_h_reregister_pmr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const u64 vaddr_in,
const u64 length,
const u32 access_ctrl,
const struct ipz_pd pd,
const u64 mr_addr_cb,
struct ehca_mr_hipzout_parms *outparms);
u64 hipz_h_register_smr(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mr *mr,
const struct ehca_mr *orig_mr,
const u64 vaddr_in,
const u32 access_ctrl,
const struct ipz_pd pd,
struct ehca_mr_hipzout_parms *outparms);
u64 hipz_h_alloc_resource_mw(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mw *mw,
const struct ipz_pd pd,
struct ehca_mw_hipzout_parms *outparms);
u64 hipz_h_query_mw(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mw *mw,
struct ehca_mw_hipzout_parms *outparms);
u64 hipz_h_free_resource_mw(const struct ipz_adapter_handle adapter_handle,
const struct ehca_mw *mw);
u64 hipz_h_error_data(const struct ipz_adapter_handle adapter_handle,
const u64 ressource_handle,
void *rblock,
unsigned long *byte_count);
u64 hipz_h_eoi(int irq);
