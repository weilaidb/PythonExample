#define __HIPZ_FNS_H__
#define hipz_galpa_store_eq(gal, offset, value) \
hipz_galpa_store(gal, EQTEMM_OFFSET(offset), value)
#define hipz_galpa_load_eq(gal, offset) \
hipz_galpa_load(gal, EQTEMM_OFFSET(offset))
#define hipz_galpa_store_qped(gal, offset, value) \
hipz_galpa_store(gal, QPEDMM_OFFSET(offset), value)
#define hipz_galpa_load_qped(gal, offset) \
hipz_galpa_load(gal, QPEDMM_OFFSET(offset))
#define hipz_galpa_store_mrmw(gal, offset, value) \
hipz_galpa_store(gal, MRMWMM_OFFSET(offset), value)
#define hipz_galpa_load_mrmw(gal, offset) \
hipz_galpa_load(gal, MRMWMM_OFFSET(offset))
