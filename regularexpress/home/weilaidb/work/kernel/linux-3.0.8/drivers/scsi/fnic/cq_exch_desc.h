#define _CQ_EXCH_DESC_H_
struct cq_exch_wq_desc ;
#define CQ_EXCH_WQ_STATUS_BITS      2
#define CQ_EXCH_WQ_STATUS_MASK      ((1 << CQ_EXCH_WQ_STATUS_BITS) - 1)
enum cq_exch_status_types ;
static inline void cq_exch_wq_desc_dec(struct cq_exch_wq_desc *desc_ptr,
u8  *type,
u8  *color,
u16 *q_number,
u16 *completed_index,
u8  *exch_status)
struct cq_fcp_rq_desc ;
#define CQ_FCP_RQ_DESC_FLAGS_SOP		(1 << 15)
#define CQ_FCP_RQ_DESC_FLAGS_EOP		(1 << 14)
#define CQ_FCP_RQ_DESC_FLAGS_PRT		(1 << 12)
#define CQ_FCP_RQ_DESC_TMPL_MASK		0x1f
#define CQ_FCP_RQ_DESC_BYTES_WRITTEN_MASK	0x3fff
#define CQ_FCP_RQ_DESC_PACKET_ERR_SHIFT		14
#define CQ_FCP_RQ_DESC_PACKET_ERR_MASK (1 << CQ_FCP_RQ_DESC_PACKET_ERR_SHIFT)
#define CQ_FCP_RQ_DESC_VS_STRIPPED_SHIFT	15
#define CQ_FCP_RQ_DESC_VS_STRIPPED_MASK (1 << CQ_FCP_RQ_DESC_VS_STRIPPED_SHIFT)
#define CQ_FCP_RQ_DESC_FC_CRC_OK_MASK		0x1
#define CQ_FCP_RQ_DESC_FCOE_ERR_SHIFT		1
#define CQ_FCP_RQ_DESC_FCOE_ERR_MASK (1 << CQ_FCP_RQ_DESC_FCOE_ERR_SHIFT)
#define CQ_FCP_RQ_DESC_FCS_OK_SHIFT		7
#define CQ_FCP_RQ_DESC_FCS_OK_MASK (1 << CQ_FCP_RQ_DESC_FCS_OK_SHIFT)
static inline void cq_fcp_rq_desc_dec(struct cq_fcp_rq_desc *desc_ptr,
u8  *type,
u8  *color,
u16 *q_number,
u16 *completed_index,
u8  *eop,
u8  *sop,
u8  *fck,
u16 *exchange_id,
u16 *tmpl,
u32 *bytes_written,
u8  *sof,
u8  *eof,
u8  *ingress_port,
u8  *packet_err,
u8  *fcoe_err,
u8  *fcs_ok,
u8  *vlan_stripped,
u16 *vlan)
struct cq_sgl_desc ;
enum cq_sgl_err_types ;
#define CQ_SGL_SGL_ERR_MASK             0x1f
#define CQ_SGL_TMPL_MASK                0x1f
static inline void cq_sgl_desc_dec(struct cq_sgl_desc *desc_ptr,
u8  *type,
u8  *color,
u16 *q_number,
u16 *exchange_id,
u32 *active_burst_offset,
u32 *tot_data_bytes,
u16 *tmpl,
u8  *sgl_err)
