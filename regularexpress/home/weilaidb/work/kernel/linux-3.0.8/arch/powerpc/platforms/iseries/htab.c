static spinlock_t iSeries_hlocks[64] __cacheline_aligned_in_smp;
static inline void iSeries_hlock(unsigned long slot)
static inline void iSeries_hunlock(unsigned long slot)
static long iSeries_hpte_insert(unsigned long hpte_group, unsigned long va,
unsigned long pa, unsigned long rflags,
unsigned long vflags, int psize, int ssize)
static unsigned long iSeries_hpte_getword0(unsigned long slot)
static long iSeries_hpte_remove(unsigned long hpte_group)
static long iSeries_hpte_updatepp(unsigned long slot, unsigned long newpp,
unsigned long va, int psize, int ssize, int local)
static long iSeries_hpte_find(unsigned long vpn)
static void iSeries_hpte_updateboltedpp(unsigned long newpp, unsigned long ea,
int psize, int ssize)
static void iSeries_hpte_invalidate(unsigned long slot, unsigned long va,
int psize, int ssize, int local)
void __init hpte_init_iSeries(void)
