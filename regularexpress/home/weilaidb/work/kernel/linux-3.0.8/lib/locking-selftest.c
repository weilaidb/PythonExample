static unsigned int debug_locks_verbose;
static int __init setup_debug_locks_verbose(char *str)
__setup("debug_locks_verbose=", setup_debug_locks_verbose);
#define FAILURE		0
#define SUCCESS		1
#define LOCKTYPE_SPIN	0x1
#define LOCKTYPE_RWLOCK	0x2
#define LOCKTYPE_MUTEX	0x4
#define LOCKTYPE_RWSEM	0x8
static DEFINE_SPINLOCK(lock_A);
static DEFINE_SPINLOCK(lock_B);
static DEFINE_SPINLOCK(lock_C);
static DEFINE_SPINLOCK(lock_D);
static DEFINE_RWLOCK(rwlock_A);
static DEFINE_RWLOCK(rwlock_B);
static DEFINE_RWLOCK(rwlock_C);
static DEFINE_RWLOCK(rwlock_D);
static DEFINE_MUTEX(mutex_A);
static DEFINE_MUTEX(mutex_B);
static DEFINE_MUTEX(mutex_C);
static DEFINE_MUTEX(mutex_D);
static DECLARE_RWSEM(rwsem_A);
static DECLARE_RWSEM(rwsem_B);
static DECLARE_RWSEM(rwsem_C);
static DECLARE_RWSEM(rwsem_D);
static DEFINE_SPINLOCK(lock_X1);
static DEFINE_SPINLOCK(lock_X2);
static DEFINE_SPINLOCK(lock_Y1);
static DEFINE_SPINLOCK(lock_Y2);
static DEFINE_SPINLOCK(lock_Z1);
static DEFINE_SPINLOCK(lock_Z2);
static DEFINE_RWLOCK(rwlock_X1);
static DEFINE_RWLOCK(rwlock_X2);
static DEFINE_RWLOCK(rwlock_Y1);
static DEFINE_RWLOCK(rwlock_Y2);
static DEFINE_RWLOCK(rwlock_Z1);
static DEFINE_RWLOCK(rwlock_Z2);
static DEFINE_MUTEX(mutex_X1);
static DEFINE_MUTEX(mutex_X2);
static DEFINE_MUTEX(mutex_Y1);
static DEFINE_MUTEX(mutex_Y2);
static DEFINE_MUTEX(mutex_Z1);
static DEFINE_MUTEX(mutex_Z2);
static DECLARE_RWSEM(rwsem_X1);
static DECLARE_RWSEM(rwsem_X2);
static DECLARE_RWSEM(rwsem_Y1);
static DECLARE_RWSEM(rwsem_Y2);
static DECLARE_RWSEM(rwsem_Z1);
static DECLARE_RWSEM(rwsem_Z2);
#define INIT_CLASS_FUNC(class) 				\
static noinline void					\
init_class_##class(spinlock_t *lock, rwlock_t *rwlock, struct mutex *mutex, \
struct rw_semaphore *rwsem)		\
INIT_CLASS_FUNC(X)
INIT_CLASS_FUNC(Y)
INIT_CLASS_FUNC(Z)
static void init_shared_classes(void)
#define HARDIRQ_DISABLE		local_irq_disable
#define HARDIRQ_ENABLE		local_irq_enable
#define HARDIRQ_ENTER()				\
local_irq_disable();			\
__irq_enter();				\
WARN_ON(!in_irq());
#define HARDIRQ_EXIT()				\
__irq_exit();				\
local_irq_enable();
#define SOFTIRQ_DISABLE		local_bh_disable
#define SOFTIRQ_ENABLE		local_bh_enable
#define SOFTIRQ_ENTER()				\
local_bh_disable();		\
local_irq_disable();		\
lockdep_softirq_enter();	\
WARN_ON(!in_softirq());
#define SOFTIRQ_EXIT()				\
lockdep_softirq_exit();		\
local_irq_enable();		\
local_bh_enable();
#define L(x)			spin_lock(&lock_##x)
#define U(x)			spin_unlock(&lock_##x)
#define LU(x)			L(x); U(x)
#define SI(x)			spin_lock_init(&lock_##x)
#define WL(x)			write_lock(&rwlock_##x)
#define WU(x)			write_unlock(&rwlock_##x)
#define WLU(x)			WL(x); WU(x)
#define RL(x)			read_lock(&rwlock_##x)
#define RU(x)			read_unlock(&rwlock_##x)
#define RLU(x)			RL(x); RU(x)
#define RWI(x)			rwlock_init(&rwlock_##x)
#define ML(x)			mutex_lock(&mutex_##x)
#define MU(x)			mutex_unlock(&mutex_##x)
#define MI(x)			mutex_init(&mutex_##x)
#define WSL(x)			down_write(&rwsem_##x)
#define WSU(x)			up_write(&rwsem_##x)
#define RSL(x)			down_read(&rwsem_##x)
#define RSU(x)			up_read(&rwsem_##x)
#define RWSI(x)			init_rwsem(&rwsem_##x)
#define LOCK_UNLOCK_2(x,y)	LOCK(x); LOCK(y); UNLOCK(y); UNLOCK(x)
#define GENERATE_TESTCASE(name)			\
\
static void name(void)
#define GENERATE_PERMUTATIONS_2_EVENTS(name)	\
\
static void name##_12(void) 	\
static void name##_21(void)
#define GENERATE_PERMUTATIONS_3_EVENTS(name)		\
\
static void name##_123(void) 	\
static void name##_132(void) 	\
static void name##_213(void) 	\
static void name##_231(void) 	\
static void name##_312(void) 	\
static void name##_321(void)
#define E()					\
\
LOCK(X1);				\
LOCK(X2);
GENERATE_TESTCASE(AA_spin)
GENERATE_TESTCASE(AA_wlock)
GENERATE_TESTCASE(AA_rlock)
GENERATE_TESTCASE(AA_mutex)
GENERATE_TESTCASE(AA_wsem)
GENERATE_TESTCASE(AA_rsem)
#undef E
static void rlock_AA1(void)
static void rlock_AA1B(void)
static void rsem_AA1(void)
static void rsem_AA1B(void)
static void rlock_AA2(void)
static void rsem_AA2(void)
static void rlock_AA3(void)
static void rsem_AA3(void)
#define E()					\
\
LOCK_UNLOCK_2(A, B);			\
LOCK_UNLOCK_2(B, A);
GENERATE_TESTCASE(ABBA_spin)
GENERATE_TESTCASE(ABBA_wlock)
GENERATE_TESTCASE(ABBA_rlock)
GENERATE_TESTCASE(ABBA_mutex)
GENERATE_TESTCASE(ABBA_wsem)
GENERATE_TESTCASE(ABBA_rsem)
#undef E
#define E()					\
\
LOCK_UNLOCK_2(A, B);			\
LOCK_UNLOCK_2(B, C);			\
LOCK_UNLOCK_2(C, A);
GENERATE_TESTCASE(ABBCCA_spin)
GENERATE_TESTCASE(ABBCCA_wlock)
GENERATE_TESTCASE(ABBCCA_rlock)
GENERATE_TESTCASE(ABBCCA_mutex)
GENERATE_TESTCASE(ABBCCA_wsem)
GENERATE_TESTCASE(ABBCCA_rsem)
#undef E
#define E()					\
\
LOCK_UNLOCK_2(A, B);			\
LOCK_UNLOCK_2(C, A);			\
LOCK_UNLOCK_2(B, C);
GENERATE_TESTCASE(ABCABC_spin)
GENERATE_TESTCASE(ABCABC_wlock)
GENERATE_TESTCASE(ABCABC_rlock)
GENERATE_TESTCASE(ABCABC_mutex)
GENERATE_TESTCASE(ABCABC_wsem)
GENERATE_TESTCASE(ABCABC_rsem)
#undef E
#define E()					\
\
LOCK_UNLOCK_2(A, B);			\
LOCK_UNLOCK_2(B, C);			\
LOCK_UNLOCK_2(C, D);			\
LOCK_UNLOCK_2(D, A);
GENERATE_TESTCASE(ABBCCDDA_spin)
GENERATE_TESTCASE(ABBCCDDA_wlock)
GENERATE_TESTCASE(ABBCCDDA_rlock)
GENERATE_TESTCASE(ABBCCDDA_mutex)
GENERATE_TESTCASE(ABBCCDDA_wsem)
GENERATE_TESTCASE(ABBCCDDA_rsem)
#undef E
#define E()					\
\
LOCK_UNLOCK_2(A, B);			\
LOCK_UNLOCK_2(C, D);			\
LOCK_UNLOCK_2(B, D);			\
LOCK_UNLOCK_2(D, A);
GENERATE_TESTCASE(ABCDBDDA_spin)
GENERATE_TESTCASE(ABCDBDDA_wlock)
GENERATE_TESTCASE(ABCDBDDA_rlock)
GENERATE_TESTCASE(ABCDBDDA_mutex)
GENERATE_TESTCASE(ABCDBDDA_wsem)
GENERATE_TESTCASE(ABCDBDDA_rsem)
#undef E
#define E()					\
\
LOCK_UNLOCK_2(A, B);			\
LOCK_UNLOCK_2(C, D);			\
LOCK_UNLOCK_2(B, C);			\
LOCK_UNLOCK_2(D, A);
GENERATE_TESTCASE(ABCDBCDA_spin)
GENERATE_TESTCASE(ABCDBCDA_wlock)
GENERATE_TESTCASE(ABCDBCDA_rlock)
GENERATE_TESTCASE(ABCDBCDA_mutex)
GENERATE_TESTCASE(ABCDBCDA_wsem)
GENERATE_TESTCASE(ABCDBCDA_rsem)
#undef E
#define E()					\
\
LOCK(A);				\
UNLOCK(A);				\
UNLOCK(A);
GENERATE_TESTCASE(double_unlock_spin)
GENERATE_TESTCASE(double_unlock_wlock)
GENERATE_TESTCASE(double_unlock_rlock)
GENERATE_TESTCASE(double_unlock_mutex)
GENERATE_TESTCASE(double_unlock_wsem)
GENERATE_TESTCASE(double_unlock_rsem)
#undef E
#define E()					\
\
LOCK(A);				\
LOCK(B);				\
UNLOCK(A);			\
UNLOCK(B);
GENERATE_TESTCASE(bad_unlock_order_spin)
GENERATE_TESTCASE(bad_unlock_order_wlock)
GENERATE_TESTCASE(bad_unlock_order_rlock)
GENERATE_TESTCASE(bad_unlock_order_mutex)
GENERATE_TESTCASE(bad_unlock_order_wsem)
GENERATE_TESTCASE(bad_unlock_order_rsem)
#undef E
#define E()					\
\
LOCK(A);				\
INIT(A);
GENERATE_TESTCASE(init_held_spin)
GENERATE_TESTCASE(init_held_wlock)
GENERATE_TESTCASE(init_held_rlock)
GENERATE_TESTCASE(init_held_mutex)
GENERATE_TESTCASE(init_held_wsem)
GENERATE_TESTCASE(init_held_rsem)
#undef E
#define E1()				\
\
IRQ_ENTER();			\
LOCK(A);			\
UNLOCK(A);			\
IRQ_EXIT();
#define E2()				\
\
LOCK(A);			\
UNLOCK(A);
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe1_hard_spin)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe1_hard_rlock)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe1_hard_wlock)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe1_soft_spin)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe1_soft_rlock)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe1_soft_wlock)
#undef E1
#undef E2
#define E1()				\
\
SOFTIRQ_ENTER();		\
LOCK(A);			\
UNLOCK(A);			\
SOFTIRQ_EXIT();
#define E2()				\
\
HARDIRQ_DISABLE();		\
LOCK(A);			\
HARDIRQ_ENABLE();		\
UNLOCK(A);
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2A_spin)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2A_wlock)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2A_rlock)
#undef E1
#undef E2
#define E1()				\
\
IRQ_ENTER();			\
LOCK(A);			\
UNLOCK(A);			\
IRQ_EXIT();
#define E2()				\
\
IRQ_DISABLE();			\
LOCK(A);			\
IRQ_ENABLE();			\
UNLOCK(A);
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2B_hard_spin)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2B_hard_rlock)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2B_hard_wlock)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2B_soft_spin)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2B_soft_rlock)
GENERATE_PERMUTATIONS_2_EVENTS(irqsafe2B_soft_wlock)
#undef E1
#undef E2
#define E1()				\
\
LOCK(A);			\
LOCK(B);			\
UNLOCK(B);			\
UNLOCK(A);			\
#define E2()				\
\
LOCK(B);			\
UNLOCK(B);
#define E3()				\
\
IRQ_ENTER();			\
LOCK(A);			\
UNLOCK(A);			\
IRQ_EXIT();
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe3_hard_spin)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe3_hard_rlock)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe3_hard_wlock)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe3_soft_spin)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe3_soft_rlock)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe3_soft_wlock)
#undef E1
#undef E2
#undef E3
#define E1()				\
IRQ_DISABLE();			\
LOCK(A);			\
LOCK(B);			\
UNLOCK(B);			\
UNLOCK(A);			\
IRQ_ENABLE();
#define E2()				\
LOCK(B);			\
UNLOCK(B);
#define E3()				\
IRQ_ENTER();			\
LOCK(A);			\
UNLOCK(A);			\
IRQ_EXIT();
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe4_hard_spin)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe4_hard_rlock)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe4_hard_wlock)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe4_soft_spin)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe4_soft_rlock)
GENERATE_PERMUTATIONS_3_EVENTS(irqsafe4_soft_wlock)
#undef E1
#undef E2
#undef E3
#define E1()				\
\
IRQ_DISABLE();			\
WL(A);				\
LOCK(B);			\
UNLOCK(B);			\
WU(A);				\
IRQ_ENABLE();
#define E2()				\
\
LOCK(B);			\
UNLOCK(B);
#define E3()				\
\
IRQ_ENTER();			\
RL(A);				\
RU(A);				\
IRQ_EXIT();
GENERATE_PERMUTATIONS_3_EVENTS(irq_inversion_hard_spin)
GENERATE_PERMUTATIONS_3_EVENTS(irq_inversion_hard_rlock)
GENERATE_PERMUTATIONS_3_EVENTS(irq_inversion_hard_wlock)
GENERATE_PERMUTATIONS_3_EVENTS(irq_inversion_soft_spin)
GENERATE_PERMUTATIONS_3_EVENTS(irq_inversion_soft_rlock)
GENERATE_PERMUTATIONS_3_EVENTS(irq_inversion_soft_wlock)
#undef E1
#undef E2
#undef E3
#define E1()				\
\
IRQ_DISABLE();			\
WL(A);				\
WU(A);				\
IRQ_ENABLE();
#define E2()				\
\
RL(A);				\
RU(A);				\
#define E3()				\
\
IRQ_ENTER();			\
RL(A);				\
L(B);				\
U(B);				\
RU(A);				\
IRQ_EXIT();
GENERATE_PERMUTATIONS_3_EVENTS(irq_read_recursion_hard)
GENERATE_PERMUTATIONS_3_EVENTS(irq_read_recursion_soft)
#undef E1
#undef E2
#undef E3
#define E1()				\
\
IRQ_DISABLE();			\
L(B);				\
WL(A);				\
WU(A);				\
U(B);				\
IRQ_ENABLE();
#define E2()				\
\
RL(A);				\
RU(A);				\
#define E3()				\
\
IRQ_ENTER();			\
L(B);				\
U(B);				\
IRQ_EXIT();
# define I_SPINLOCK(x)	lockdep_reset_lock(&lock_##x.dep_map)
# define I_RWLOCK(x)	lockdep_reset_lock(&rwlock_##x.dep_map)
# define I_MUTEX(x)	lockdep_reset_lock(&mutex_##x.dep_map)
# define I_RWSEM(x)	lockdep_reset_lock(&rwsem_##x.dep_map)
# define I_SPINLOCK(x)
# define I_RWLOCK(x)
# define I_MUTEX(x)
# define I_RWSEM(x)
#define I1(x)					\
do  while (0)
#define I2(x)					\
do  while (0)
static void reset_locks(void)
#undef I
static int testcase_total;
static int testcase_successes;
static int expected_testcase_failures;
static int unexpected_testcase_failures;
static void dotest(void (*testcase_fn)(void), int expected, int lockclass_mask)
static inline void print_testname(const char *testname)
#define DO_TESTCASE_1(desc, name, nr)				\
print_testname(desc"/"#nr);				\
dotest(name##_##nr, SUCCESS, LOCKTYPE_RWLOCK);		\
printk("\n");
#define DO_TESTCASE_1B(desc, name, nr)				\
print_testname(desc"/"#nr);				\
dotest(name##_##nr, FAILURE, LOCKTYPE_RWLOCK);		\
printk("\n");
#define DO_TESTCASE_3(desc, name, nr)				\
print_testname(desc"/"#nr);				\
dotest(name##_spin_##nr, FAILURE, LOCKTYPE_SPIN);	\
dotest(name##_wlock_##nr, FAILURE, LOCKTYPE_RWLOCK);	\
dotest(name##_rlock_##nr, SUCCESS, LOCKTYPE_RWLOCK);	\
printk("\n");
#define DO_TESTCASE_3RW(desc, name, nr)				\
print_testname(desc"/"#nr);				\
dotest(name##_spin_##nr, FAILURE, LOCKTYPE_SPIN|LOCKTYPE_RWLOCK);\
dotest(name##_wlock_##nr, FAILURE, LOCKTYPE_RWLOCK);	\
dotest(name##_rlock_##nr, SUCCESS, LOCKTYPE_RWLOCK);	\
printk("\n");
#define DO_TESTCASE_6(desc, name)				\
print_testname(desc);					\
dotest(name##_spin, FAILURE, LOCKTYPE_SPIN);		\
dotest(name##_wlock, FAILURE, LOCKTYPE_RWLOCK);		\
dotest(name##_rlock, FAILURE, LOCKTYPE_RWLOCK);		\
dotest(name##_mutex, FAILURE, LOCKTYPE_MUTEX);		\
dotest(name##_wsem, FAILURE, LOCKTYPE_RWSEM);		\
dotest(name##_rsem, FAILURE, LOCKTYPE_RWSEM);		\
printk("\n");
#define DO_TESTCASE_6_SUCCESS(desc, name)			\
print_testname(desc);					\
dotest(name##_spin, SUCCESS, LOCKTYPE_SPIN);		\
dotest(name##_wlock, SUCCESS, LOCKTYPE_RWLOCK);		\
dotest(name##_rlock, SUCCESS, LOCKTYPE_RWLOCK);		\
dotest(name##_mutex, SUCCESS, LOCKTYPE_MUTEX);		\
dotest(name##_wsem, SUCCESS, LOCKTYPE_RWSEM);		\
dotest(name##_rsem, SUCCESS, LOCKTYPE_RWSEM);		\
printk("\n");
#define DO_TESTCASE_6R(desc, name)				\
print_testname(desc);					\
dotest(name##_spin, FAILURE, LOCKTYPE_SPIN);		\
dotest(name##_wlock, FAILURE, LOCKTYPE_RWLOCK);		\
dotest(name##_rlock, SUCCESS, LOCKTYPE_RWLOCK);		\
dotest(name##_mutex, FAILURE, LOCKTYPE_MUTEX);		\
dotest(name##_wsem, FAILURE, LOCKTYPE_RWSEM);		\
dotest(name##_rsem, FAILURE, LOCKTYPE_RWSEM);		\
printk("\n");
#define DO_TESTCASE_2I(desc, name, nr)				\
DO_TESTCASE_1("hard-"desc, name##_hard, nr);		\
DO_TESTCASE_1("soft-"desc, name##_soft, nr);
#define DO_TESTCASE_2IB(desc, name, nr)				\
DO_TESTCASE_1B("hard-"desc, name##_hard, nr);		\
DO_TESTCASE_1B("soft-"desc, name##_soft, nr);
#define DO_TESTCASE_6I(desc, name, nr)				\
DO_TESTCASE_3("hard-"desc, name##_hard, nr);		\
DO_TESTCASE_3("soft-"desc, name##_soft, nr);
#define DO_TESTCASE_6IRW(desc, name, nr)			\
DO_TESTCASE_3RW("hard-"desc, name##_hard, nr);		\
DO_TESTCASE_3RW("soft-"desc, name##_soft, nr);
#define DO_TESTCASE_2x3(desc, name)				\
DO_TESTCASE_3(desc, name, 12);				\
DO_TESTCASE_3(desc, name, 21);
#define DO_TESTCASE_2x6(desc, name)				\
DO_TESTCASE_6I(desc, name, 12);				\
DO_TESTCASE_6I(desc, name, 21);
#define DO_TESTCASE_6x2(desc, name)				\
DO_TESTCASE_2I(desc, name, 123);			\
DO_TESTCASE_2I(desc, name, 132);			\
DO_TESTCASE_2I(desc, name, 213);			\
DO_TESTCASE_2I(desc, name, 231);			\
DO_TESTCASE_2I(desc, name, 312);			\
DO_TESTCASE_2I(desc, name, 321);
#define DO_TESTCASE_6x2B(desc, name)				\
DO_TESTCASE_2IB(desc, name, 123);			\
DO_TESTCASE_2IB(desc, name, 132);			\
DO_TESTCASE_2IB(desc, name, 213);			\
DO_TESTCASE_2IB(desc, name, 231);			\
DO_TESTCASE_2IB(desc, name, 312);			\
DO_TESTCASE_2IB(desc, name, 321);
#define DO_TESTCASE_6x6(desc, name)				\
DO_TESTCASE_6I(desc, name, 123);			\
DO_TESTCASE_6I(desc, name, 132);			\
DO_TESTCASE_6I(desc, name, 213);			\
DO_TESTCASE_6I(desc, name, 231);			\
DO_TESTCASE_6I(desc, name, 312);			\
DO_TESTCASE_6I(desc, name, 321);
#define DO_TESTCASE_6x6RW(desc, name)				\
DO_TESTCASE_6IRW(desc, name, 123);			\
DO_TESTCASE_6IRW(desc, name, 132);			\
DO_TESTCASE_6IRW(desc, name, 213);			\
DO_TESTCASE_6IRW(desc, name, 231);			\
DO_TESTCASE_6IRW(desc, name, 312);			\
DO_TESTCASE_6IRW(desc, name, 321);
void locking_selftest(void)
