#define __HIPZ_FNS_CORE_H__
#define hipz_galpa_store_cq(gal, offset, value) \
hipz_galpa_store(gal, CQTEMM_OFFSET(offset), value)
#define hipz_galpa_load_cq(gal, offset) \
hipz_galpa_load(gal, CQTEMM_OFFSET(offset))
#define hipz_galpa_store_qp(gal, offset, value) \
hipz_galpa_store(gal, QPTEMM_OFFSET(offset), value)
#define hipz_galpa_load_qp(gal, offset) \
hipz_galpa_load(gal, QPTEMM_OFFSET(offset))
static inline void hipz_update_sqa(struct ehca_qp *qp, u16 nr_wqes)
static inline void hipz_update_rqa(struct ehca_qp *qp, u16 nr_wqes)
static inline void hipz_update_feca(struct ehca_cq *cq, u32 nr_cqes)
static inline void hipz_set_cqx_n0(struct ehca_cq *cq, u32 value)
static inline void hipz_set_cqx_n1(struct ehca_cq *cq, u32 value)
