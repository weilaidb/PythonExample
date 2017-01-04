#define _ASM_TILE_SYSTEM_H
#define read_barrier_depends()	do  while (0)
#define __sync()	__insn_mf()
#if CHIP_HAS_SPLIT_CYCLE()
#define get_cycles_low() __insn_mfspr(SPR_CYCLE_LOW)
#define get_cycles_low() __insn_mfspr(SPR_CYCLE)
#if !CHIP_HAS_MF_WAITS_FOR_VICTIMS()
static inline void __mb_incoherent(void)
static inline void
mb_incoherent(void)
#define fast_wmb()	__sync()
#define fast_rmb()	__sync()
#define fast_mb()	__sync()
#define fast_iob()	mb_incoherent()
#define wmb()		fast_wmb()
#define rmb()		fast_rmb()
#define mb()		fast_mb()
#define iob()		fast_iob()
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_read_barrier_depends()	read_barrier_depends()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while (0)
#define set_mb(var, value) \
do  while (0)
#define prepare_arch_switch(next) _prepare_arch_switch(next)
void _prepare_arch_switch(struct task_struct *next);
#define CALLEE_SAVED_FIRST_REG 30
#define CALLEE_SAVED_REGS_COUNT 24
struct task_struct;
#define switch_to(prev, next, last) ((last) = _switch_to((prev), (next)))
extern struct task_struct *_switch_to(struct task_struct *prev,
struct task_struct *next);
extern struct task_struct *__switch_to(struct task_struct *prev,
struct task_struct *next,
unsigned long new_system_save_k_0);
extern unsigned long get_switch_to_pc(void);
static inline void sched_cacheflush(void)
#define arch_align_stack(x) (x)
extern int unaligned_fixup;
extern int unaligned_printk;
extern unsigned int unaligned_fixup_count;
void setup_cpu(int boot);
void grant_dma_mpls(void);
void restrict_dma_mpls(void);
void reset_network_state(void);
void grant_network_mpls(void);
void restrict_network_mpls(void);
int hardwall_deactivate(struct task_struct *task);
#define arch_set_cpus_allowed(p, new_mask) do  while (0)
#define finish_arch_switch(prev) do  while (0)
void ret_from_fork(void);
struct task_struct *sim_notify_fork(struct task_struct *prev);
