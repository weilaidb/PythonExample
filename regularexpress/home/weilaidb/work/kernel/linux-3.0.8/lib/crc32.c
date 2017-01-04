#if CRC_LE_BITS == 8
# define tole(x) __constant_cpu_to_le32(x)
# define tole(x) (x)
#if CRC_BE_BITS == 8
# define tobe(x) __constant_cpu_to_be32(x)
# define tobe(x) (x)
MODULE_AUTHOR("Matt Domsch <Matt_Domsch@dell.com>");
MODULE_DESCRIPTION("Ethernet CRC32 calculations");
MODULE_LICENSE("GPL");
#if CRC_LE_BITS == 8 || CRC_BE_BITS == 8
static inline u32
crc32_body(u32 crc, unsigned char const *buf, size_t len, const u32 (*tab)[256])
u32 __pure crc32_le(u32 crc, unsigned char const *p, size_t len);
#if CRC_LE_BITS == 1
u32 __pure crc32_le(u32 crc, unsigned char const *p, size_t len)
u32 __pure crc32_le(u32 crc, unsigned char const *p, size_t len)
u32 __pure crc32_be(u32 crc, unsigned char const *p, size_t len);
#if CRC_BE_BITS == 1
u32 __pure crc32_be(u32 crc, unsigned char const *p, size_t len)
u32 __pure crc32_be(u32 crc, unsigned char const *p, size_t len)
EXPORT_SYMBOL(crc32_le);
EXPORT_SYMBOL(crc32_be);
static void bytereverse(unsigned char *buf, size_t len)
static void random_garbage(unsigned char *buf, size_t len)
static void store_be(u32 x, unsigned char *buf)
static u32 test_step(u32 init, unsigned char *buf, size_t len)
#define SIZE 64
#define INIT1 0
#define INIT2 0
int main(void)
