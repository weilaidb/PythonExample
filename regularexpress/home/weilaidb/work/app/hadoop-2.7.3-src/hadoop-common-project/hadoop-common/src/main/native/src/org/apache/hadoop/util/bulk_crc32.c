#if (!defined(__FreeBSD__) && !defined(WINDOWS))
#define USE_PIPELINED
#define CRC_INITIAL_VAL 0xffffffff
typedef uint32_t (*crc_update_func_t)(uint32_t, const uint8_t *, size_t);
static uint32_t crc_val(uint32_t crc);
static uint32_t crc32_zlib_sb8(uint32_t crc, const uint8_t *buf, size_t length);
static uint32_t crc32c_sb8(uint32_t crc, const uint8_t *buf, size_t length);
static void pipelined_crc32c(uint32_t *crc1, uint32_t *crc2, uint32_t *crc3, const uint8_t *p_buf, size_t block_size, int num_blocks);
static int cached_cpu_supports_crc32;
static uint32_t crc32c_hardware(uint32_t crc, const uint8_t* data, size_t length);
static inline int store_or_verify(uint32_t *sums, uint32_t crc,
int is_verify)
int bulk_crc(const uint8_t *data, size_t data_len,
uint32_t *sums, int checksum_type,
int bytes_per_checksum,
crc32_error_t *error_info)
uint32_t crc_val(uint32_t crc)
static uint32_t crc32c_sb8(uint32_t crc, const uint8_t *buf, size_t length)
static uint32_t crc32_zlib_sb8(
uint32_t crc, const uint8_t *buf, size_t length)
#if (defined(__amd64__) || defined(__i386)) && defined(__GNUC__) && !defined(__FreeBSD__)
#  define SSE42_FEATURE_BIT (1 << 20)
#  define CPUID_FEATURES 1
static uint32_t cpuid(uint32_t eax_in)
void __attribute__ ((constructor)) init_cpu_support_flag(void)
#  ifdef __LP64__
inline uint64_t _mm_crc32_u64(uint64_t crc, uint64_t value)
#  endif
inline uint32_t _mm_crc32_u32(uint32_t crc, uint32_t value)
inline uint32_t _mm_crc32_u16(uint32_t crc, uint16_t value)
inline uint32_t _mm_crc32_u8(uint32_t crc, uint8_t value)
#  ifdef __LP64__
static uint32_t crc32c_hardware(uint32_t crc, const uint8_t* p_buf, size_t length)
static void pipelined_crc32c(uint32_t *crc1, uint32_t *crc2, uint32_t *crc3, const uint8_t *p_buf, size_t block_size, int num_blocks)
# else
static uint32_t crc32c_hardware(uint32_t crc, const uint8_t* p_buf, size_t length)
static void pipelined_crc32c(uint32_t *crc1, uint32_t *crc2, uint32_t *crc3, const uint8_t *p_buf, size_t block_size, int num_blocks)
# endif
static uint32_t crc32c_hardware(uint32_t crc, const uint8_t* data, size_t length)
