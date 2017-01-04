#define _SPARC_CACHE_H
#define ARCH_SLAB_MINALIGN	__alignof__(unsigned long long)
#define L1_CACHE_SHIFT 5
#define L1_CACHE_BYTES 32
#define SMP_CACHE_BYTES_SHIFT 5
#define SMP_CACHE_BYTES_SHIFT 6
#define SMP_CACHE_BYTES (1 << SMP_CACHE_BYTES_SHIFT)
#define __read_mostly __attribute__((__section__(".data..read_mostly")))
static inline unsigned int get_icache_tag(int setnum, int tagnum)
static inline void put_icache_tag(int setnum, int tagnum, unsigned int entry)
static inline void get_icache_data(int setnum, int tagnum, int subblock,
unsigned int *data)
static inline void put_icache_data(int setnum, int tagnum, int subblock,
unsigned int *data)
static inline void flush_ei_page(unsigned int addr)
static inline void flush_ei_seg(unsigned int addr)
static inline void flush_ei_region(unsigned int addr)
static inline void flush_ei_ctx(unsigned int addr)
static inline void flush_ei_user(unsigned int addr)
