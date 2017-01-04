#undef DEBUG_LOW
#define DBG_LOW(fmt...) do  while (0)
#define DBG_LOW(fmt...) do  while (0)
static DEFINE_RAW_SPINLOCK(beat_htab_lock);
static inline unsigned int beat_read_mask(unsigned hpte_group)
static long beat_lpar_hpte_insert(unsigned long hpte_group,
unsigned long va, unsigned long pa,
unsigned long rflags, unsigned long vflags,
int psize, int ssize)
static long beat_lpar_hpte_remove(unsigned long hpte_group)
static unsigned long beat_lpar_hpte_getword0(unsigned long slot)
static void beat_lpar_hptab_clear(void)
static long beat_lpar_hpte_updatepp(unsigned long slot,
unsigned long newpp,
unsigned long va,
int psize, int ssize, int local)
static long beat_lpar_hpte_find(unsigned long va, int psize)
static void beat_lpar_hpte_updateboltedpp(unsigned long newpp,
unsigned long ea,
int psize, int ssize)
static void beat_lpar_hpte_invalidate(unsigned long slot, unsigned long va,
int psize, int ssize, int local)
void __init hpte_init_beat(void)
static long beat_lpar_hpte_insert_v3(unsigned long hpte_group,
unsigned long va, unsigned long pa,
unsigned long rflags, unsigned long vflags,
int psize, int ssize)
static long beat_lpar_hpte_updatepp_v3(unsigned long slot,
unsigned long newpp,
unsigned long va,
int psize, int ssize, int local)
static void beat_lpar_hpte_invalidate_v3(unsigned long slot, unsigned long va,
int psize, int ssize, int local)
static int64_t _beat_lpar_hptab_clear_v3(void)
static void beat_lpar_hptab_clear_v3(void)
void __init hpte_init_beat_v3(void)
