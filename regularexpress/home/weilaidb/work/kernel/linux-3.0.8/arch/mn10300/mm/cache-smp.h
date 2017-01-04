enum smp_icache_ops ;
#define SMP_ICACHE_OP_MASK		0x0003
enum smp_dcache_ops ;
#define SMP_DCACHE_OP_MASK		0x001c
#define	SMP_IDCACHE_INV_FLUSH		(SMP_ICACHE_INV | SMP_DCACHE_FLUSH)
#define SMP_IDCACHE_INV_FLUSH_RANGE	(SMP_ICACHE_INV_RANGE | SMP_DCACHE_FLUSH_RANGE)
extern spinlock_t smp_cache_lock;
extern void smp_cache_call(unsigned long opr_mask,
unsigned long addr, unsigned long end);
static inline unsigned long smp_lock_cache(void)
__acquires(&smp_cache_lock)
static inline void smp_unlock_cache(unsigned long flags)
__releases(&smp_cache_lock)
static inline unsigned long smp_lock_cache(void)
static inline void smp_unlock_cache(unsigned long flags)
static inline void smp_cache_call(unsigned long opr_mask,
unsigned long addr, unsigned long end)
