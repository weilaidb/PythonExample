#define ATOMIC_HASH_SIZE	4
#define ATOMIC_HASH(a)	(&__atomic_hash[(((unsigned long)a)>>8) & (ATOMIC_HASH_SIZE-1)])
spinlock_t __atomic_hash[ATOMIC_HASH_SIZE] = ;
static DEFINE_SPINLOCK(dummy);
#define ATOMIC_HASH_SIZE	1
#define ATOMIC_HASH(a)		(&dummy)
int __atomic_add_return(int i, atomic_t *v)
EXPORT_SYMBOL(__atomic_add_return);
int atomic_cmpxchg(atomic_t *v, int old, int new)
EXPORT_SYMBOL(atomic_cmpxchg);
int atomic_add_unless(atomic_t *v, int a, int u)
EXPORT_SYMBOL(atomic_add_unless);
void atomic_set(atomic_t *v, int i)
EXPORT_SYMBOL(atomic_set);
unsigned long ___set_bit(unsigned long *addr, unsigned long mask)
EXPORT_SYMBOL(___set_bit);
unsigned long ___clear_bit(unsigned long *addr, unsigned long mask)
EXPORT_SYMBOL(___clear_bit);
unsigned long ___change_bit(unsigned long *addr, unsigned long mask)
EXPORT_SYMBOL(___change_bit);
unsigned long __cmpxchg_u32(volatile u32 *ptr, u32 old, u32 new)
EXPORT_SYMBOL(__cmpxchg_u32);
