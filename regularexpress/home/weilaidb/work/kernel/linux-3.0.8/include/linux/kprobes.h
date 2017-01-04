#define _LINUX_KPROBES_H
#define KPROBE_HIT_ACTIVE	0x00000001
#define KPROBE_HIT_SS		0x00000002
#define KPROBE_REENTER		0x00000004
#define KPROBE_HIT_SSDONE	0x00000008
#define __kprobes	__attribute__((__section__(".kprobes.text")))
typedef int kprobe_opcode_t;
struct arch_specific_insn ;
#define __kprobes
struct kprobe;
struct pt_regs;
struct kretprobe;
struct kretprobe_instance;
typedef int (*kprobe_pre_handler_t) (struct kprobe *, struct pt_regs *);
typedef int (*kprobe_break_handler_t) (struct kprobe *, struct pt_regs *);
typedef void (*kprobe_post_handler_t) (struct kprobe *, struct pt_regs *,
unsigned long flags);
typedef int (*kprobe_fault_handler_t) (struct kprobe *, struct pt_regs *,
int trapnr);
typedef int (*kretprobe_handler_t) (struct kretprobe_instance *,
struct pt_regs *);
struct kprobe ;
#define KPROBE_FLAG_GONE	1
#define KPROBE_FLAG_DISABLED	2
#define KPROBE_FLAG_OPTIMIZED	4
static inline int kprobe_gone(struct kprobe *p)
static inline int kprobe_disabled(struct kprobe *p)
static inline int kprobe_optimized(struct kprobe *p)
struct jprobe ;
#define JPROBE_ENTRY(handler)	(handler)
struct kretprobe ;
struct kretprobe_instance ;
struct kretprobe_blackpoint ;
struct kprobe_blackpoint ;
DECLARE_PER_CPU(struct kprobe *, current_kprobe);
DECLARE_PER_CPU(struct kprobe_ctlblk, kprobe_ctlblk);
static inline int kprobes_built_in(void)
extern void arch_prepare_kretprobe(struct kretprobe_instance *ri,
struct pt_regs *regs);
extern int arch_trampoline_kprobe(struct kprobe *p);
static inline void arch_prepare_kretprobe(struct kretprobe *rp,
struct pt_regs *regs)
static inline int arch_trampoline_kprobe(struct kprobe *p)
extern struct kretprobe_blackpoint kretprobe_blacklist[];
static inline void kretprobe_assert(struct kretprobe_instance *ri,
unsigned long orig_ret_address, unsigned long trampoline_address)
extern int init_test_probes(void);
static inline int init_test_probes(void)
extern int arch_prepare_kprobe(struct kprobe *p);
extern void arch_arm_kprobe(struct kprobe *p);
extern void arch_disarm_kprobe(struct kprobe *p);
extern int arch_init_kprobes(void);
extern void show_registers(struct pt_regs *regs);
extern kprobe_opcode_t *get_insn_slot(void);
extern void free_insn_slot(kprobe_opcode_t *slot, int dirty);
extern void kprobes_inc_nmissed_count(struct kprobe *p);
struct optimized_kprobe ;
extern int arch_prepared_optinsn(struct arch_optimized_insn *optinsn);
extern int arch_check_optimized_kprobe(struct optimized_kprobe *op);
extern int arch_prepare_optimized_kprobe(struct optimized_kprobe *op);
extern void arch_remove_optimized_kprobe(struct optimized_kprobe *op);
extern void arch_optimize_kprobes(struct list_head *oplist);
extern void arch_unoptimize_kprobes(struct list_head *oplist,
struct list_head *done_list);
extern void arch_unoptimize_kprobe(struct optimized_kprobe *op);
extern kprobe_opcode_t *get_optinsn_slot(void);
extern void free_optinsn_slot(kprobe_opcode_t *slot, int dirty);
extern int arch_within_optimized_kprobe(struct optimized_kprobe *op,
unsigned long addr);
extern void opt_pre_handler(struct kprobe *p, struct pt_regs *regs);
extern int sysctl_kprobes_optimization;
extern int proc_kprobes_optimization_handler(struct ctl_table *table,
int write, void __user *buffer,
size_t *length, loff_t *ppos);
struct kprobe *get_kprobe(void *addr);
void kretprobe_hash_lock(struct task_struct *tsk,
struct hlist_head **head, unsigned long *flags);
void kretprobe_hash_unlock(struct task_struct *tsk, unsigned long *flags);
struct hlist_head * kretprobe_inst_table_head(struct task_struct *tsk);
static inline struct kprobe *kprobe_running(void)
static inline void reset_current_kprobe(void)
static inline struct kprobe_ctlblk *get_kprobe_ctlblk(void)
int register_kprobe(struct kprobe *p);
void unregister_kprobe(struct kprobe *p);
int register_kprobes(struct kprobe **kps, int num);
void unregister_kprobes(struct kprobe **kps, int num);
int setjmp_pre_handler(struct kprobe *, struct pt_regs *);
int longjmp_break_handler(struct kprobe *, struct pt_regs *);
int register_jprobe(struct jprobe *p);
void unregister_jprobe(struct jprobe *p);
int register_jprobes(struct jprobe **jps, int num);
void unregister_jprobes(struct jprobe **jps, int num);
void jprobe_return(void);
unsigned long arch_deref_entry_point(void *);
int register_kretprobe(struct kretprobe *rp);
void unregister_kretprobe(struct kretprobe *rp);
int register_kretprobes(struct kretprobe **rps, int num);
void unregister_kretprobes(struct kretprobe **rps, int num);
void kprobe_flush_task(struct task_struct *tk);
void recycle_rp_inst(struct kretprobe_instance *ri, struct hlist_head *head);
int disable_kprobe(struct kprobe *kp);
int enable_kprobe(struct kprobe *kp);
void dump_kprobe(struct kprobe *kp);
static inline int kprobes_built_in(void)
static inline int kprobe_fault_handler(struct pt_regs *regs, int trapnr)
static inline struct kprobe *get_kprobe(void *addr)
static inline struct kprobe *kprobe_running(void)
static inline int register_kprobe(struct kprobe *p)
static inline int register_kprobes(struct kprobe **kps, int num)
static inline void unregister_kprobe(struct kprobe *p)
static inline void unregister_kprobes(struct kprobe **kps, int num)
static inline int register_jprobe(struct jprobe *p)
static inline int register_jprobes(struct jprobe **jps, int num)
static inline void unregister_jprobe(struct jprobe *p)
static inline void unregister_jprobes(struct jprobe **jps, int num)
static inline void jprobe_return(void)
static inline int register_kretprobe(struct kretprobe *rp)
static inline int register_kretprobes(struct kretprobe **rps, int num)
static inline void unregister_kretprobe(struct kretprobe *rp)
static inline void unregister_kretprobes(struct kretprobe **rps, int num)
static inline void kprobe_flush_task(struct task_struct *tk)
static inline int disable_kprobe(struct kprobe *kp)
static inline int enable_kprobe(struct kprobe *kp)
static inline int disable_kretprobe(struct kretprobe *rp)
static inline int enable_kretprobe(struct kretprobe *rp)
static inline int disable_jprobe(struct jprobe *jp)
static inline int enable_jprobe(struct jprobe *jp)
