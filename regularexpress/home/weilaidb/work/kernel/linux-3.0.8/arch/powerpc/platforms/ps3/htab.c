enum ps3_lpar_vas_id ;
static DEFINE_SPINLOCK(ps3_htab_lock);
static long ps3_hpte_insert(unsigned long hpte_group, unsigned long va,
unsigned long pa, unsigned long rflags, unsigned long vflags,
int psize, int ssize)
static long ps3_hpte_remove(unsigned long hpte_group)
static long ps3_hpte_updatepp(unsigned long slot, unsigned long newpp,
unsigned long va, int psize, int ssize, int local)
static void ps3_hpte_updateboltedpp(unsigned long newpp, unsigned long ea,
int psize, int ssize)
static void ps3_hpte_invalidate(unsigned long slot, unsigned long va,
int psize, int ssize, int local)
static void ps3_hpte_clear(void)
void __init ps3_hpte_init(unsigned long htab_size)
