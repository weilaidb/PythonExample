#undef DEBUG_LOW
#define DBG_LOW(fmt...) udbg_printf(fmt)
#define DBG_LOW(fmt...)
#define HPTE_LOCK_BIT 3
static DEFINE_RAW_SPINLOCK(native_tlbie_lock);
static inline void __tlbie(unsigned long va, int psize, int ssize)
static inline void __tlbiel(unsigned long va, int psize, int ssize)
static inline void tlbie(unsigned long va, int psize, int ssize, int local)
static inline void native_lock_hpte(struct hash_pte *hptep)
static inline void native_unlock_hpte(struct hash_pte *hptep)
static long native_hpte_insert(unsigned long hpte_group, unsigned long va,
unsigned long pa, unsigned long rflags,
unsigned long vflags, int psize, int ssize)
static long native_hpte_remove(unsigned long hpte_group)
static long native_hpte_updatepp(unsigned long slot, unsigned long newpp,
unsigned long va, int psize, int ssize,
int local)
static long native_hpte_find(unsigned long va, int psize, int ssize)
static void native_hpte_updateboltedpp(unsigned long newpp, unsigned long ea,
int psize, int ssize)
static void native_hpte_invalidate(unsigned long slot, unsigned long va,
int psize, int ssize, int local)
#define LP_SHIFT	12
#define LP_BITS		8
#define LP_MASK(i)	((0xFF >> (i)) << LP_SHIFT)
static void hpte_decode(struct hash_pte *hpte, unsigned long slot,
int *psize, int *ssize, unsigned long *va)
static void native_hpte_clear(void)
static void native_flush_hash_range(unsigned long number, int local)
static inline int tlb_batching_enabled(void)
static inline int tlb_batching_enabled(void)
void __init hpte_init_native(void)
