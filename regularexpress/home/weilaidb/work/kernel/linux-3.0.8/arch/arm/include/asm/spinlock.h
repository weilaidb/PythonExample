#define __ASM_SPINLOCK_H
#if __LINUX_ARM_ARCH__ < 6
#error SMP not supported on pre-ARMv6 CPUs
#define ALT_SMP(smp, up)					\
"9998:	" smp "\n"					\
"	.pushsection \".alt.smp.init\", \"a\"\n"	\
"	.long	9998b\n"				\
"	" up "\n"					\
"	.popsection\n"
#define SEV		ALT_SMP("sev.w", "nop.w")
#define WFE(cond)	ALT_SMP(		\
"it " cond "\n\t"			\
"wfe" cond ".n",			\
\
"nop.w"					\
)
#define SEV		ALT_SMP("sev", "nop")
#define WFE(cond)	ALT_SMP("wfe" cond, "nop")
static inline void dsb_sev(void)
#define arch_spin_is_locked(x)		((x)->lock != 0)
#define arch_spin_unlock_wait(lock) \
do  while (0)
#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)
static inline void arch_spin_lock(arch_spinlock_t *lock)
static inline int arch_spin_trylock(arch_spinlock_t *lock)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
static inline void arch_write_lock(arch_rwlock_t *rw)
static inline int arch_write_trylock(arch_rwlock_t *rw)
static inline void arch_write_unlock(arch_rwlock_t *rw)
#define arch_write_can_lock(x)		((x)->lock == 0)
static inline void arch_read_lock(arch_rwlock_t *rw)
static inline void arch_read_unlock(arch_rwlock_t *rw)
static inline int arch_read_trylock(arch_rwlock_t *rw)
#define arch_read_can_lock(x)		((x)->lock < 0x80000000)
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
#define arch_spin_relax(lock)	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
