#define __CVMX_H__
#define CVMX_ENABLE_DEBUG_PRINTS 1
#if CVMX_ENABLE_DEBUG_PRINTS
#define cvmx_dprintf        printk
#define cvmx_dprintf(...)
#define CVMX_MAX_CORES          (16)
#define CVMX_CACHE_LINE_SIZE    (128)
#define CVMX_CACHE_LINE_MASK    (CVMX_CACHE_LINE_SIZE - 1)
#define CVMX_CACHE_LINE_ALIGNED __attribute__ ((aligned(CVMX_CACHE_LINE_SIZE)))
#define CAST64(v) ((long long)(long)(v))
#define CASTPTR(type, v) ((type *)(long)(v))
static inline uint32_t cvmx_get_proc_id(void) __attribute__ ((pure));
static inline uint32_t cvmx_get_proc_id(void)
#define CVMX_TMP_STR(x) CVMX_TMP_STR2(x)
#define CVMX_TMP_STR2(x) #x static inline uint64_t cvmx_build_mask(uint64_t bits)
static inline uint64_t cvmx_build_io_address(uint64_t major_did,
uint64_t sub_did)
static inline uint64_t cvmx_build_bits(uint64_t high_bit,
uint64_t low_bit, uint64_t value)
enum cvmx_mips_space ;
#define CVMX_MIPS32_SPACE_KSEG0 1l
#define CVMX_ADD_SEG32(segment, add) \
(((int32_t)segment << 31) | (int32_t)(add))
#define CVMX_IO_SEG CVMX_MIPS_SPACE_XKPHYS
#define CVMX_ADD_SEG(segment, add) \
((((uint64_t)segment) << 62) | (add))
#define CVMX_ADD_IO_SEG(add) CVMX_ADD_SEG(CVMX_IO_SEG, (add))
static inline uint64_t cvmx_ptr_to_phys(void *ptr)
static inline void *cvmx_phys_to_ptr(uint64_t physical_address)
#define CVMX_BUILD_WRITE64(TYPE, ST)                                    \
static inline void cvmx_write64_##TYPE(uint64_t addr, TYPE##_t val)     \
#define CVMX_BUILD_READ64(TYPE, LT)                                     \
static inline TYPE##_t cvmx_read64_##TYPE(uint64_t addr)                \
CVMX_BUILD_WRITE64(int64, "sd");
CVMX_BUILD_WRITE64(int32, "sw");
CVMX_BUILD_WRITE64(int16, "sh");
CVMX_BUILD_WRITE64(int8, "sb");
CVMX_BUILD_WRITE64(uint64, "sd");
CVMX_BUILD_WRITE64(uint32, "sw");
CVMX_BUILD_WRITE64(uint16, "sh");
CVMX_BUILD_WRITE64(uint8, "sb");
#define cvmx_write64 cvmx_write64_uint64
CVMX_BUILD_READ64(int64, "ld");
CVMX_BUILD_READ64(int32, "lw");
CVMX_BUILD_READ64(int16, "lh");
CVMX_BUILD_READ64(int8, "lb");
CVMX_BUILD_READ64(uint64, "ld");
CVMX_BUILD_READ64(uint32, "lw");
CVMX_BUILD_READ64(uint16, "lhu");
CVMX_BUILD_READ64(uint8, "lbu");
#define cvmx_read64 cvmx_read64_uint64
static inline void cvmx_write_csr(uint64_t csr_addr, uint64_t val)
static inline void cvmx_write_io(uint64_t io_addr, uint64_t val)
static inline uint64_t cvmx_read_csr(uint64_t csr_addr)
static inline void cvmx_send_single(uint64_t data)
static inline void cvmx_read_csr_async(uint64_t scraddr, uint64_t csr_addr)
static inline int cvmx_octeon_is_pass1(void)
static inline unsigned int cvmx_get_core_num(void)
static inline uint32_t cvmx_pop(uint32_t val)
static inline int cvmx_dpop(uint64_t val)
static inline uint64_t cvmx_get_cycle(void)
static inline void cvmx_wait(uint64_t cycles)
static inline uint64_t cvmx_get_cycle_global(void)
#define CVMX_WAIT_FOR_FIELD64(address, type, field, op, value, timeout_usec)\
(									\
)
static inline void cvmx_reset_octeon(void)
static inline uint32_t cvmx_octeon_num_cores(void)
static uint8_t cvmx_fuse_read_byte(int byte_addr)
static inline int cvmx_fuse_read(int fuse)
static inline int cvmx_octeon_model_CN36XX(void)
static inline int cvmx_octeon_zip_present(void)
static inline int cvmx_octeon_dfa_present(void)
static inline int cvmx_octeon_crypto_present(void)
