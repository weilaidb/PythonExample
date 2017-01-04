#define _LINUX_HW_BREAKPOINT_H
enum ;
enum ;
enum bp_type_idx ;
extern int __init init_hw_breakpoint(void);
static inline void hw_breakpoint_init(struct perf_event_attr *attr)
static inline void ptrace_breakpoint_init(struct perf_event_attr *attr)
static inline unsigned long hw_breakpoint_addr(struct perf_event *bp)
static inline int hw_breakpoint_type(struct perf_event *bp)
static inline unsigned long hw_breakpoint_len(struct perf_event *bp)
extern struct perf_event *
register_user_hw_breakpoint(struct perf_event_attr *attr,
perf_overflow_handler_t triggered,
struct task_struct *tsk);
extern int
modify_user_hw_breakpoint(struct perf_event *bp, struct perf_event_attr *attr);
extern struct perf_event *
register_wide_hw_breakpoint_cpu(struct perf_event_attr *attr,
perf_overflow_handler_t	triggered,
int cpu);
extern struct perf_event * __percpu *
register_wide_hw_breakpoint(struct perf_event_attr *attr,
perf_overflow_handler_t triggered);
extern int register_perf_hw_breakpoint(struct perf_event *bp);
extern int __register_perf_hw_breakpoint(struct perf_event *bp);
extern void unregister_hw_breakpoint(struct perf_event *bp);
extern void unregister_wide_hw_breakpoint(struct perf_event * __percpu *cpu_events);
extern int dbg_reserve_bp_slot(struct perf_event *bp);
extern int dbg_release_bp_slot(struct perf_event *bp);
extern int reserve_bp_slot(struct perf_event *bp);
extern void release_bp_slot(struct perf_event *bp);
extern void flush_ptrace_hw_breakpoint(struct task_struct *tsk);
static inline struct arch_hw_breakpoint *counter_arch_bp(struct perf_event *bp)
static inline int __init init_hw_breakpoint(void)
static inline struct perf_event *
register_user_hw_breakpoint(struct perf_event_attr *attr,
perf_overflow_handler_t triggered,
struct task_struct *tsk)
static inline int
modify_user_hw_breakpoint(struct perf_event *bp,
struct perf_event_attr *attr)
static inline struct perf_event *
register_wide_hw_breakpoint_cpu(struct perf_event_attr *attr,
perf_overflow_handler_t	 triggered,
int cpu)
static inline struct perf_event * __percpu *
register_wide_hw_breakpoint(struct perf_event_attr *attr,
perf_overflow_handler_t triggered)
static inline int
register_perf_hw_breakpoint(struct perf_event *bp)
static inline int
__register_perf_hw_breakpoint(struct perf_event *bp)
static inline void unregister_hw_breakpoint(struct perf_event *bp)
static inline void
unregister_wide_hw_breakpoint(struct perf_event * __percpu *cpu_events)
static inline int
reserve_bp_slot(struct perf_event *bp)
static inline void release_bp_slot(struct perf_event *bp)
static inline void flush_ptrace_hw_breakpoint(struct task_struct *tsk)
static inline struct arch_hw_breakpoint *counter_arch_bp(struct perf_event *bp)
