#define _KSTACK_H
static inline bool kstack_valid(struct thread_info *tp, unsigned long sp)
static inline bool kstack_is_trap_frame(struct thread_info *tp, struct pt_regs *regs)
static inline __attribute__((always_inline)) void *set_hardirq_stack(void)
static inline __attribute__((always_inline)) void restore_hardirq_stack(void *orig_sp)
