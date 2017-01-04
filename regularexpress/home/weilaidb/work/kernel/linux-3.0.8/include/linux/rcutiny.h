#define __LINUX_TINY_H
static inline void rcu_init(void)
static inline void synchronize_rcu_expedited(void)
static inline void rcu_barrier(void)
void rcu_barrier(void);
void synchronize_rcu_expedited(void);
static inline void synchronize_rcu_bh(void)
static inline void synchronize_rcu_bh_expedited(void)
static inline void synchronize_sched_expedited(void)
static inline void rcu_preempt_note_context_switch(void)
static inline void exit_rcu(void)
static inline int rcu_needs_cpu(int cpu)
void rcu_preempt_note_context_switch(void);
extern void exit_rcu(void);
int rcu_preempt_needs_cpu(void);
static inline int rcu_needs_cpu(int cpu)
static inline void rcu_note_context_switch(int cpu)
static inline void rcu_virt_note_context_switch(int cpu)
static inline long rcu_batches_completed(void)
static inline long rcu_batches_completed_bh(void)
static inline void rcu_force_quiescent_state(void)
static inline void rcu_bh_force_quiescent_state(void)
static inline void rcu_sched_force_quiescent_state(void)
static inline void rcu_cpu_stall_reset(void)
extern int rcu_scheduler_active __read_mostly;
extern void rcu_scheduler_starting(void);
static inline void rcu_scheduler_starting(void)
