#define __LINUX_RCUTREE_H
extern void rcu_init(void);
extern void rcu_note_context_switch(int cpu);
extern int rcu_needs_cpu(int cpu);
extern void rcu_cpu_stall_reset(void);
static inline void rcu_virt_note_context_switch(int cpu)
extern void exit_rcu(void);
static inline void exit_rcu(void)
extern void synchronize_rcu_bh(void);
extern void synchronize_sched_expedited(void);
extern void synchronize_rcu_expedited(void);
static inline void synchronize_rcu_bh_expedited(void)
extern void rcu_barrier(void);
extern unsigned long rcutorture_testseq;
extern unsigned long rcutorture_vernum;
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);
extern long rcu_batches_completed_sched(void);
extern void rcu_force_quiescent_state(void);
extern void rcu_bh_force_quiescent_state(void);
extern void rcu_sched_force_quiescent_state(void);
static inline int rcu_blocking_is_gp(void)
extern void rcu_scheduler_starting(void);
extern int rcu_scheduler_active __read_mostly;
