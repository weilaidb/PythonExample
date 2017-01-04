#define LINUX_RAID_RAID6_H
#define RAID6_USE_EMPTY_ZERO_PAGE 0
#if RAID6_USE_EMPTY_ZERO_PAGE
# define raid6_empty_zero_page empty_zero_page
extern const char raid6_empty_zero_page[PAGE_SIZE];
#define BITS_PER_LONG __WORDSIZE
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
# define PAGE_SIZE 4096
extern const char raid6_empty_zero_page[PAGE_SIZE];
#define __init
#define __exit
#define __attribute_const__ __attribute__((const))
#define noinline __attribute__((noinline))
#define preempt_enable()
#define preempt_disable()
#define cpu_has_feature(x) 1
#define enable_kernel_altivec()
#define disable_kernel_altivec()
#define EXPORT_SYMBOL(sym)
#define EXPORT_SYMBOL_GPL(sym)
#define MODULE_LICENSE(licence)
#define MODULE_DESCRIPTION(desc)
#define subsys_initcall(x)
#define module_exit(x)
struct raid6_calls ;
extern struct raid6_calls raid6_call;
extern const struct raid6_calls raid6_intx1;
extern const struct raid6_calls raid6_intx2;
extern const struct raid6_calls raid6_intx4;
extern const struct raid6_calls raid6_intx8;
extern const struct raid6_calls raid6_intx16;
extern const struct raid6_calls raid6_intx32;
extern const struct raid6_calls raid6_mmxx1;
extern const struct raid6_calls raid6_mmxx2;
extern const struct raid6_calls raid6_sse1x1;
extern const struct raid6_calls raid6_sse1x2;
extern const struct raid6_calls raid6_sse2x1;
extern const struct raid6_calls raid6_sse2x2;
extern const struct raid6_calls raid6_sse2x4;
extern const struct raid6_calls raid6_altivec1;
extern const struct raid6_calls raid6_altivec2;
extern const struct raid6_calls raid6_altivec4;
extern const struct raid6_calls raid6_altivec8;
extern const struct raid6_calls * const raid6_algos[];
int raid6_select_algo(void);
#define RAID6_OK	0
#define RAID6_P_BAD	1
#define RAID6_Q_BAD	2
#define RAID6_PQ_BAD	3
extern const u8 raid6_gfmul[256][256] __attribute__((aligned(256)));
extern const u8 raid6_gfexp[256]      __attribute__((aligned(256)));
extern const u8 raid6_gfinv[256]      __attribute__((aligned(256)));
extern const u8 raid6_gfexi[256]      __attribute__((aligned(256)));
void raid6_2data_recov(int disks, size_t bytes, int faila, int failb,
void **ptrs);
void raid6_datap_recov(int disks, size_t bytes, int faila, void **ptrs);
void raid6_dual_recov(int disks, size_t bytes, int faila, int failb,
void **ptrs);
# define jiffies	raid6_jiffies()
# define printk 	printf
# define GFP_KERNEL	0
# define __get_free_pages(x, y)	((unsigned long)mmap(NULL, PAGE_SIZE << (y), \
PROT_READ|PROT_WRITE,   \
MAP_PRIVATE|MAP_ANONYMOUS,\
0, 0))
# define free_pages(x, y)	munmap((void *)(x), (y)*PAGE_SIZE)
static inline void cpu_relax(void)
#undef  HZ
#define HZ 1000
static inline uint32_t raid6_jiffies(void)
