#define __CVMX_IPD_H__
enum cvmx_ipd_mode ;
#define CVMX_ENABLE_LEN_M8_FIX 0
typedef union cvmx_ipd_1st_mbuff_skip cvmx_ipd_mbuff_first_skip_t;
typedef union cvmx_ipd_1st_next_ptr_back cvmx_ipd_first_next_ptr_back_t;
typedef cvmx_ipd_mbuff_first_skip_t cvmx_ipd_mbuff_not_first_skip_t;
typedef cvmx_ipd_first_next_ptr_back_t cvmx_ipd_second_next_ptr_back_t;
static inline void cvmx_ipd_config(uint64_t mbuff_size,
uint64_t first_mbuff_skip,
uint64_t not_first_mbuff_skip,
uint64_t first_back,
uint64_t second_back,
uint64_t wqe_fpa_pool,
enum cvmx_ipd_mode cache_mode,
uint64_t back_pres_enable_flag)
static inline void cvmx_ipd_enable(void)
static inline void cvmx_ipd_disable(void)
static inline void cvmx_ipd_free_ptr(void)
