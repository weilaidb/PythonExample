CVMX_SHARED cvmx_fpa_pool_info_t cvmx_fpa_pool_info[CVMX_FPA_NUM_POOLS];
int cvmx_fpa_setup_pool(uint64_t pool, const char *name, void *buffer,
uint64_t block_size, uint64_t num_blocks)
uint64_t cvmx_fpa_shutdown_pool(uint64_t pool)
uint64_t cvmx_fpa_get_block_size(uint64_t pool)
