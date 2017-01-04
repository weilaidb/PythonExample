#define __CVMX_FPA_H__
#define CVMX_FPA_NUM_POOLS      8
#define CVMX_FPA_MIN_BLOCK_SIZE 128
#define CVMX_FPA_ALIGNMENT      128
typedef union  cvmx_fpa_iobdma_data_t;
typedef struct  cvmx_fpa_pool_info_t;
extern cvmx_fpa_pool_info_t cvmx_fpa_pool_info[CVMX_FPA_NUM_POOLS];
static inline const char *cvmx_fpa_get_name(uint64_t pool)
static inline void *cvmx_fpa_get_base(uint64_t pool)
static inline int cvmx_fpa_is_member(uint64_t pool, void *ptr)
static inline void cvmx_fpa_enable(void)
static inline void *cvmx_fpa_alloc(uint64_t pool)
static inline void cvmx_fpa_async_alloc(uint64_t scr_addr, uint64_t pool)
static inline void cvmx_fpa_free_nosync(void *ptr, uint64_t pool,
uint64_t num_cache_lines)
static inline void cvmx_fpa_free(void *ptr, uint64_t pool,
uint64_t num_cache_lines)
extern int cvmx_fpa_setup_pool(uint64_t pool, const char *name, void *buffer,
uint64_t block_size, uint64_t num_blocks);
extern uint64_t cvmx_fpa_shutdown_pool(uint64_t pool);
uint64_t cvmx_fpa_get_block_size(uint64_t pool);
