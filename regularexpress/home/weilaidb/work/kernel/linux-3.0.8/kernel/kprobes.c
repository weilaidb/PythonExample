#define KPROBE_HASH_BITS 6
#define KPROBE_TABLE_SIZE (1 << KPROBE_HASH_BITS)
#define kprobe_lookup_name(name, addr) \
addr = ((kprobe_opcode_t *)(kallsyms_lookup_name(name)))
static int kprobes_initialized;
static struct hlist_head kprobe_table[KPROBE_TABLE_SIZE];
static struct hlist_head kretprobe_inst_table[KPROBE_TABLE_SIZE];
static bool kprobes_all_disarmed;
static DEFINE_MUTEX(kprobe_mutex);
static DEFINE_PER_CPU(struct kprobe *, kprobe_instance) = NULL;
static struct  kretprobe_table_locks[KPROBE_TABLE_SIZE];
static spinlock_t *kretprobe_table_lock_ptr(unsigned long hash)
static struct kprobe_blackpoint kprobe_blacklist[] = ;
struct kprobe_insn_page ;
#define KPROBE_INSN_PAGE_SIZE(slots)			\
(offsetof(struct kprobe_insn_page, slot_used) +	\
(sizeof(char) * (slots)))
struct kprobe_insn_cache ;
static int slots_per_page(struct kprobe_insn_cache *c)
enum kprobe_slot_state ;
static DEFINE_MUTEX(kprobe_insn_mutex);
static struct kprobe_insn_cache kprobe_insn_slots = ;
static int __kprobes collect_garbage_slots(struct kprobe_insn_cache *c);
static kprobe_opcode_t __kprobes *__get_insn_slot(struct kprobe_insn_cache *c)
kprobe_opcode_t __kprobes *get_insn_slot(void)
static int __kprobes collect_one_slot(struct kprobe_insn_page *kip, int idx)
static int __kprobes collect_garbage_slots(struct kprobe_insn_cache *c)
static void __kprobes __free_insn_slot(struct kprobe_insn_cache *c,
kprobe_opcode_t *slot, int dirty)
void __kprobes free_insn_slot(kprobe_opcode_t * slot, int dirty)
static DEFINE_MUTEX(kprobe_optinsn_mutex);
static struct kprobe_insn_cache kprobe_optinsn_slots = ;
kprobe_opcode_t __kprobes *get_optinsn_slot(void)
void __kprobes free_optinsn_slot(kprobe_opcode_t * slot, int dirty)
static inline void set_kprobe_instance(struct kprobe *kp)
static inline void reset_kprobe_instance(void)
struct kprobe __kprobes *get_kprobe(void *addr)
static int __kprobes aggr_pre_handler(struct kprobe *p, struct pt_regs *regs);
static inline int kprobe_aggrprobe(struct kprobe *p)
static inline int kprobe_unused(struct kprobe *p)
static inline void copy_kprobe(struct kprobe *ap, struct kprobe *p)
static bool kprobes_allow_optimization;
void __kprobes opt_pre_handler(struct kprobe *p, struct pt_regs *regs)
static __kprobes void free_aggr_kprobe(struct kprobe *p)
static inline int kprobe_optready(struct kprobe *p)
static inline int kprobe_disarmed(struct kprobe *p)
static int __kprobes kprobe_queued(struct kprobe *p)
static struct kprobe *__kprobes get_optimized_kprobe(unsigned long addr)
static LIST_HEAD(optimizing_list);
static LIST_HEAD(unoptimizing_list);
static void kprobe_optimizer(struct work_struct *work);
static DECLARE_DELAYED_WORK(optimizing_work, kprobe_optimizer);
static DECLARE_COMPLETION(optimizer_comp);
#define OPTIMIZE_DELAY 5
static __kprobes void do_optimize_kprobes(void)
static __kprobes void do_unoptimize_kprobes(struct list_head *free_list)
static __kprobes void do_free_cleaned_kprobes(struct list_head *free_list)
static __kprobes void kick_kprobe_optimizer(void)
static __kprobes void kprobe_optimizer(struct work_struct *work)
static __kprobes void wait_for_kprobe_optimizer(void)
static __kprobes void optimize_kprobe(struct kprobe *p)
static __kprobes void force_unoptimize_kprobe(struct optimized_kprobe *op)
static __kprobes void unoptimize_kprobe(struct kprobe *p, bool force)
static void reuse_unused_kprobe(struct kprobe *ap)
static void __kprobes kill_optimized_kprobe(struct kprobe *p)
static __kprobes void prepare_optimized_kprobe(struct kprobe *p)
static __kprobes struct kprobe *alloc_aggr_kprobe(struct kprobe *p)
static void __kprobes init_aggr_kprobe(struct kprobe *ap, struct kprobe *p);
static __kprobes void try_to_optimize_kprobe(struct kprobe *p)
static void __kprobes optimize_all_kprobes(void)
static void __kprobes unoptimize_all_kprobes(void)
int sysctl_kprobes_optimization;
int proc_kprobes_optimization_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length,
loff_t *ppos)
static void __kprobes __arm_kprobe(struct kprobe *p)
static void __kprobes __disarm_kprobe(struct kprobe *p, bool reopt)
#define optimize_kprobe(p)			do  while (0)
#define unoptimize_kprobe(p, f)			do  while (0)
#define kill_optimized_kprobe(p)		do  while (0)
#define prepare_optimized_kprobe(p)		do  while (0)
#define try_to_optimize_kprobe(p)		do  while (0)
#define __arm_kprobe(p)				arch_arm_kprobe(p)
#define __disarm_kprobe(p, o)			arch_disarm_kprobe(p)
#define kprobe_disarmed(p)			kprobe_disabled(p)
#define wait_for_kprobe_optimizer()		do  while (0)
static void reuse_unused_kprobe(struct kprobe *ap)
static __kprobes void free_aggr_kprobe(struct kprobe *p)
static __kprobes struct kprobe *alloc_aggr_kprobe(struct kprobe *p)
static void __kprobes arm_kprobe(struct kprobe *kp)
static void __kprobes disarm_kprobe(struct kprobe *kp)
static int __kprobes aggr_pre_handler(struct kprobe *p, struct pt_regs *regs)
static void __kprobes aggr_post_handler(struct kprobe *p, struct pt_regs *regs,
unsigned long flags)
static int __kprobes aggr_fault_handler(struct kprobe *p, struct pt_regs *regs,
int trapnr)
static int __kprobes aggr_break_handler(struct kprobe *p, struct pt_regs *regs)
void __kprobes kprobes_inc_nmissed_count(struct kprobe *p)
void __kprobes recycle_rp_inst(struct kretprobe_instance *ri,
struct hlist_head *head)
void __kprobes kretprobe_hash_lock(struct task_struct *tsk,
struct hlist_head **head, unsigned long *flags)
__acquires(hlist_lock)
static void __kprobes kretprobe_table_lock(unsigned long hash,
unsigned long *flags)
__acquires(hlist_lock)
void __kprobes kretprobe_hash_unlock(struct task_struct *tsk,
unsigned long *flags)
__releases(hlist_lock)
static void __kprobes kretprobe_table_unlock(unsigned long hash,
unsigned long *flags)
__releases(hlist_lock)
void __kprobes kprobe_flush_task(struct task_struct *tk)
static inline void free_rp_inst(struct kretprobe *rp)
static void __kprobes cleanup_rp_inst(struct kretprobe *rp)
static int __kprobes add_new_kprobe(struct kprobe *ap, struct kprobe *p)
static void __kprobes init_aggr_kprobe(struct kprobe *ap, struct kprobe *p)
static int __kprobes register_aggr_kprobe(struct kprobe *orig_p,
struct kprobe *p)
static int __kprobes in_kprobes_functions(unsigned long addr)
static kprobe_opcode_t __kprobes *kprobe_addr(struct kprobe *p)
static struct kprobe * __kprobes __get_valid_kprobe(struct kprobe *p)
static inline int check_kprobe_rereg(struct kprobe *p)
int __kprobes register_kprobe(struct kprobe *p)
EXPORT_SYMBOL_GPL(register_kprobe);
static int __kprobes aggr_kprobe_disabled(struct kprobe *ap)
static struct kprobe *__kprobes __disable_kprobe(struct kprobe *p)
static int __kprobes __unregister_kprobe_top(struct kprobe *p)
static void __kprobes __unregister_kprobe_bottom(struct kprobe *p)
int __kprobes register_kprobes(struct kprobe **kps, int num)
EXPORT_SYMBOL_GPL(register_kprobes);
void __kprobes unregister_kprobe(struct kprobe *p)
EXPORT_SYMBOL_GPL(unregister_kprobe);
void __kprobes unregister_kprobes(struct kprobe **kps, int num)
EXPORT_SYMBOL_GPL(unregister_kprobes);
static struct notifier_block kprobe_exceptions_nb = ;
unsigned long __weak arch_deref_entry_point(void *entry)
int __kprobes register_jprobes(struct jprobe **jps, int num)
EXPORT_SYMBOL_GPL(register_jprobes);
int __kprobes register_jprobe(struct jprobe *jp)
EXPORT_SYMBOL_GPL(register_jprobe);
void __kprobes unregister_jprobe(struct jprobe *jp)
EXPORT_SYMBOL_GPL(unregister_jprobe);
void __kprobes unregister_jprobes(struct jprobe **jps, int num)
EXPORT_SYMBOL_GPL(unregister_jprobes);
static int __kprobes pre_handler_kretprobe(struct kprobe *p,
struct pt_regs *regs)
int __kprobes register_kretprobe(struct kretprobe *rp)
EXPORT_SYMBOL_GPL(register_kretprobe);
int __kprobes register_kretprobes(struct kretprobe **rps, int num)
EXPORT_SYMBOL_GPL(register_kretprobes);
void __kprobes unregister_kretprobe(struct kretprobe *rp)
EXPORT_SYMBOL_GPL(unregister_kretprobe);
void __kprobes unregister_kretprobes(struct kretprobe **rps, int num)
EXPORT_SYMBOL_GPL(unregister_kretprobes);
int __kprobes register_kretprobe(struct kretprobe *rp)
EXPORT_SYMBOL_GPL(register_kretprobe);
int __kprobes register_kretprobes(struct kretprobe **rps, int num)
EXPORT_SYMBOL_GPL(register_kretprobes);
void __kprobes unregister_kretprobe(struct kretprobe *rp)
EXPORT_SYMBOL_GPL(unregister_kretprobe);
void __kprobes unregister_kretprobes(struct kretprobe **rps, int num)
EXPORT_SYMBOL_GPL(unregister_kretprobes);
static int __kprobes pre_handler_kretprobe(struct kprobe *p,
struct pt_regs *regs)
static void __kprobes kill_kprobe(struct kprobe *p)
int __kprobes disable_kprobe(struct kprobe *kp)
EXPORT_SYMBOL_GPL(disable_kprobe);
int __kprobes enable_kprobe(struct kprobe *kp)
EXPORT_SYMBOL_GPL(enable_kprobe);
void __kprobes dump_kprobe(struct kprobe *kp)
static int __kprobes kprobes_module_callback(struct notifier_block *nb,
unsigned long val, void *data)
static struct notifier_block kprobe_module_nb = ;
static int __init init_kprobes(void)
static void __kprobes report_probe(struct seq_file *pi, struct kprobe *p,
const char *sym, int offset, char *modname, struct kprobe *pp)
static void __kprobes *kprobe_seq_start(struct seq_file *f, loff_t *pos)
static void __kprobes *kprobe_seq_next(struct seq_file *f, void *v, loff_t *pos)
static void __kprobes kprobe_seq_stop(struct seq_file *f, void *v)
static int __kprobes show_kprobe_addr(struct seq_file *pi, void *v)
static const struct seq_operations kprobes_seq_ops = ;
static int __kprobes kprobes_open(struct inode *inode, struct file *filp)
static const struct file_operations debugfs_kprobes_operations = ;
static void __kprobes arm_all_kprobes(void)
static void __kprobes disarm_all_kprobes(void)
static ssize_t read_enabled_file_bool(struct file *file,
char __user *user_buf, size_t count, loff_t *ppos)
static ssize_t write_enabled_file_bool(struct file *file,
const char __user *user_buf, size_t count, loff_t *ppos)
static const struct file_operations fops_kp = ;
static int __kprobes debugfs_kprobe_init(void)
late_initcall(debugfs_kprobe_init);
module_init(init_kprobes);
EXPORT_SYMBOL_GPL(jprobe_return);
