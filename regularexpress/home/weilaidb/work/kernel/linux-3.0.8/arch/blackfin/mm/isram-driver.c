#define pr_fmt(fmt) "isram: " fmt
static DEFINE_SPINLOCK(dtest_lock);
#define IADDR2DTEST(x) \
()
#define ADDR2OFFSET(x) ((((unsigned long)(x)) & 0x7) * 8)
#define ADDR2LAST(x) ((((unsigned long)x) & 0x7) == 0x7)
static void isram_write(const void *addr, uint64_t data)
static uint64_t isram_read(const void *addr)
static bool isram_check_addr(const void *addr, size_t n)
void *isram_memcpy(void *dest, const void *src, size_t n)
EXPORT_SYMBOL(isram_memcpy);
static int test_len = 0x20000;
static __init void hex_dump(unsigned char *buf, int len)
static __init int isram_read_test(char *sdram, void *l1inst)
static __init int isram_write_test(char *sdram, void *l1inst)
static __init int
_isram_memcpy_test(char pattern, void *sdram, void *l1inst, const char *smemcpy,
void *(*fmemcpy)(void *, const void *, size_t))
#define _isram_memcpy_test(a, b, c, d) _isram_memcpy_test(a, b, c, #d, d)
static __init int isram_memcpy_test(char *sdram, void *l1inst)
static __init int isram_test_init(void)
late_initcall(isram_test_init);
static __exit void isram_test_exit(void)
module_exit(isram_test_exit);
