struct stack_trace;
inline long get_frame_size(unsigned long instr)
static unsigned long *find_frame_creation(unsigned long *pc)
static int lookup_prev_stack_frame(unsigned long fp, unsigned long pc,
unsigned long leaf_return,
unsigned long *pprev_fp,
unsigned long *pprev_pc)
static void microblaze_unwind_inner(struct task_struct *task,
unsigned long pc, unsigned long fp,
unsigned long leaf_return,
struct stack_trace *trace);
static inline void unwind_trap(struct task_struct *task, unsigned long pc,
unsigned long fp, struct stack_trace *trace)
static inline void unwind_trap(struct task_struct *task, unsigned long pc,
unsigned long fp, struct stack_trace *trace)
static void microblaze_unwind_inner(struct task_struct *task,
unsigned long pc, unsigned long fp,
unsigned long leaf_return,
struct stack_trace *trace)
void microblaze_unwind(struct task_struct *task, struct stack_trace *trace)
