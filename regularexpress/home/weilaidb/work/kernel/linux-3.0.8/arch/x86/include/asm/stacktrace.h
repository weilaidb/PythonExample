#define _ASM_X86_STACKTRACE_H
extern int kstack_depth_to_print;
struct thread_info;
struct stacktrace_ops;
typedef unsigned long (*walk_stack_t)(struct thread_info *tinfo,
unsigned long *stack,
unsigned long bp,
const struct stacktrace_ops *ops,
void *data,
unsigned long *end,
int *graph);
extern unsigned long
print_context_stack(struct thread_info *tinfo,
unsigned long *stack, unsigned long bp,
const struct stacktrace_ops *ops, void *data,
unsigned long *end, int *graph);
extern unsigned long
print_context_stack_bp(struct thread_info *tinfo,
unsigned long *stack, unsigned long bp,
const struct stacktrace_ops *ops, void *data,
unsigned long *end, int *graph);
struct stacktrace_ops ;
void dump_trace(struct task_struct *tsk, struct pt_regs *regs,
unsigned long *stack, unsigned long bp,
const struct stacktrace_ops *ops, void *data);
#define STACKSLOTS_PER_LINE 8
#define get_bp(bp) asm("movl %%ebp, %0" : "=r" (bp) :)
#define STACKSLOTS_PER_LINE 4
#define get_bp(bp) asm("movq %%rbp, %0" : "=r" (bp) :)
static inline unsigned long
stack_frame(struct task_struct *task, struct pt_regs *regs)
static inline unsigned long
stack_frame(struct task_struct *task, struct pt_regs *regs)
extern void
show_trace_log_lvl(struct task_struct *task, struct pt_regs *regs,
unsigned long *stack, unsigned long bp, char *log_lvl);
extern void
show_stack_log_lvl(struct task_struct *task, struct pt_regs *regs,
unsigned long *sp, unsigned long bp, char *log_lvl);
extern unsigned int code_bytes;
struct stack_frame ;
struct stack_frame_ia32 ;
static inline unsigned long caller_frame_pointer(void)
