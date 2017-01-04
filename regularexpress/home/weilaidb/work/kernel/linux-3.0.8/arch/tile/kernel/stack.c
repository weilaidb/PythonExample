#define KBT_ONGOING	0
#define KBT_DONE	1
#define KBT_RUNNING	2
#define KBT_LOOP	3
static int in_kernel_stack(struct KBacktraceIterator *kbt, unsigned long sp)
static int valid_address(struct KBacktraceIterator *kbt, unsigned long address)
static bool read_memory_func(void *result, unsigned long address,
unsigned int size, void *vkbt)
static struct pt_regs *valid_fault_handler(struct KBacktraceIterator* kbt)
static int is_sigreturn(unsigned long pc)
static struct pt_regs *valid_sigframe(struct KBacktraceIterator* kbt)
static int KBacktraceIterator_is_sigreturn(struct KBacktraceIterator *kbt)
static int KBacktraceIterator_restart(struct KBacktraceIterator *kbt)
static int KBacktraceIterator_next_item_inclusive(
struct KBacktraceIterator *kbt)
static void validate_stack(struct pt_regs *regs)
void KBacktraceIterator_init(struct KBacktraceIterator *kbt,
struct task_struct *t, struct pt_regs *regs)
EXPORT_SYMBOL(KBacktraceIterator_init);
int KBacktraceIterator_end(struct KBacktraceIterator *kbt)
EXPORT_SYMBOL(KBacktraceIterator_end);
void KBacktraceIterator_next(struct KBacktraceIterator *kbt)
EXPORT_SYMBOL(KBacktraceIterator_next);
void tile_show_stack(struct KBacktraceIterator *kbt, int headers)
EXPORT_SYMBOL(tile_show_stack);
void dump_stack_regs(struct pt_regs *regs)
EXPORT_SYMBOL(dump_stack_regs);
static struct pt_regs *regs_to_pt_regs(struct pt_regs *regs,
ulong pc, ulong lr, ulong sp, ulong r52)
void _dump_stack(int dummy, ulong pc, ulong lr, ulong sp, ulong r52)
void _KBacktraceIterator_init_current(struct KBacktraceIterator *kbt, ulong pc,
ulong lr, ulong sp, ulong r52)
void show_stack(struct task_struct *task, unsigned long *esp)
void save_stack_trace_tsk(struct task_struct *task, struct stack_trace *trace)
EXPORT_SYMBOL(save_stack_trace_tsk);
void save_stack_trace(struct stack_trace *trace)
EXPORT_SYMBOL(KBacktraceIterator_init_current);
