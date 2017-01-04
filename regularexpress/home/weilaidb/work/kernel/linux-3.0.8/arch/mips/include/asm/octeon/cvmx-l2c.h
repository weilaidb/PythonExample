#define __CVMX_L2C_H__
#define CVMX_L2_ASSOC     cvmx_l2c_get_num_assoc()
#define CVMX_L2_SET_BITS  cvmx_l2c_get_set_bits()
#define CVMX_L2_SETS      cvmx_l2c_get_num_sets()
#define CVMX_L2C_IDX_ADDR_SHIFT 7
#define CVMX_L2C_IDX_MASK       (cvmx_l2c_get_num_sets() - 1)
#define CVMX_L2C_TAG_ADDR_ALIAS_SHIFT (CVMX_L2C_IDX_ADDR_SHIFT + cvmx_l2c_get_set_bits())
#define CVMX_L2C_ALIAS_MASK (CVMX_L2C_IDX_MASK << CVMX_L2C_TAG_ADDR_ALIAS_SHIFT)
#define CVMX_L2C_MEMBANK_SELECT_SIZE  4096
#define CVMX_L2C_VRT_MAX_VIRTID_ALLOWED ((OCTEON_IS_MODEL(OCTEON_CN63XX)) ? 64 : 0)
#define CVMX_L2C_VRT_MAX_MEMSZ_ALLOWED ((OCTEON_IS_MODEL(OCTEON_CN63XX)) ? 32 : 0)
union cvmx_l2c_tag ;
#define CVMX_L2C_TADS  1
enum cvmx_l2c_event ;
enum cvmx_l2c_tad_event ;
void cvmx_l2c_config_perf(uint32_t counter, enum cvmx_l2c_event event, uint32_t clear_on_read);
uint64_t cvmx_l2c_read_perf(uint32_t counter);
int cvmx_l2c_get_core_way_partition(uint32_t core);
int cvmx_l2c_set_core_way_partition(uint32_t core, uint32_t mask);
int cvmx_l2c_get_hw_way_partition(void);
int cvmx_l2c_set_hw_way_partition(uint32_t mask);
int cvmx_l2c_lock_line(uint64_t addr);
int cvmx_l2c_lock_mem_region(uint64_t start, uint64_t len);
int cvmx_l2c_unlock_line(uint64_t address);
int cvmx_l2c_unlock_mem_region(uint64_t start, uint64_t len);
union cvmx_l2c_tag cvmx_l2c_get_tag(uint32_t association, uint32_t index);
static inline union cvmx_l2c_tag cvmx_get_l2c_tag(uint32_t association, uint32_t index) __attribute__((deprecated));
static inline union cvmx_l2c_tag cvmx_get_l2c_tag(uint32_t association, uint32_t index)
uint32_t cvmx_l2c_address_to_index(uint64_t addr);
void cvmx_l2c_flush(void);
int cvmx_l2c_get_cache_size_bytes(void);
int cvmx_l2c_get_num_sets(void);
int cvmx_l2c_get_set_bits(void);
int cvmx_l2c_get_num_assoc(void);
void cvmx_l2c_flush_line(uint32_t assoc, uint32_t index);
