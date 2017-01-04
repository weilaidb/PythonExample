#define __EHEA_HW_H__
#define QPX_SQA_VALUE   EHEA_BMASK_IBM(48, 63)
#define QPX_RQ1A_VALUE  EHEA_BMASK_IBM(48, 63)
#define QPX_RQ2A_VALUE  EHEA_BMASK_IBM(48, 63)
#define QPX_RQ3A_VALUE  EHEA_BMASK_IBM(48, 63)
#define QPTEMM_OFFSET(x) offsetof(struct ehea_qptemm, x)
struct ehea_qptemm ;
#define MRx_HCR_LPARID_VALID EHEA_BMASK_IBM(0, 0)
#define MRMWMM_OFFSET(x) offsetof(struct ehea_mrmwmm, x)
struct ehea_mrmwmm ;
#define QPEDMM_OFFSET(x) offsetof(struct ehea_qpedmm, x)
struct ehea_qpedmm ;
#define CQX_FECADDER EHEA_BMASK_IBM(32, 63)
#define CQX_FEC_CQE_CNT EHEA_BMASK_IBM(32, 63)
#define CQX_N1_GENERATE_COMP_EVENT EHEA_BMASK_IBM(0, 0)
#define CQX_EP_EVENT_PENDING EHEA_BMASK_IBM(0, 0)
#define CQTEMM_OFFSET(x) offsetof(struct ehea_cqtemm, x)
struct ehea_cqtemm ;
#define EQTEMM_OFFSET(x) offsetof(struct ehea_eqtemm, x)
struct ehea_eqtemm ;
static inline u64 epa_load(struct h_epa epa, u32 offset)
static inline void epa_store(struct h_epa epa, u32 offset, u64 value)
static inline void epa_store_acc(struct h_epa epa, u32 offset, u64 value)
#define epa_store_eq(epa, offset, value)\
epa_store(epa, EQTEMM_OFFSET(offset), value)
#define epa_load_eq(epa, offset)\
epa_load(epa, EQTEMM_OFFSET(offset))
#define epa_store_cq(epa, offset, value)\
epa_store(epa, CQTEMM_OFFSET(offset), value)
#define epa_load_cq(epa, offset)\
epa_load(epa, CQTEMM_OFFSET(offset))
#define epa_store_qp(epa, offset, value)\
epa_store(epa, QPTEMM_OFFSET(offset), value)
#define epa_load_qp(epa, offset)\
epa_load(epa, QPTEMM_OFFSET(offset))
#define epa_store_qped(epa, offset, value)\
epa_store(epa, QPEDMM_OFFSET(offset), value)
#define epa_load_qped(epa, offset)\
epa_load(epa, QPEDMM_OFFSET(offset))
#define epa_store_mrmw(epa, offset, value)\
epa_store(epa, MRMWMM_OFFSET(offset), value)
#define epa_load_mrmw(epa, offset)\
epa_load(epa, MRMWMM_OFFSET(offset))
#define epa_store_base(epa, offset, value)\
epa_store(epa, HCAGR_OFFSET(offset), value)
#define epa_load_base(epa, offset)\
epa_load(epa, HCAGR_OFFSET(offset))
static inline void ehea_update_sqa(struct ehea_qp *qp, u16 nr_wqes)
static inline void ehea_update_rq3a(struct ehea_qp *qp, u16 nr_wqes)
static inline void ehea_update_rq2a(struct ehea_qp *qp, u16 nr_wqes)
static inline void ehea_update_rq1a(struct ehea_qp *qp, u16 nr_wqes)
static inline void ehea_update_feca(struct ehea_cq *cq, u32 nr_cqes)
static inline void ehea_reset_cq_n1(struct ehea_cq *cq)
static inline void ehea_reset_cq_ep(struct ehea_cq *my_cq)
