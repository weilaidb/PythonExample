extern int gdb_enter;
extern int return_from_debug_flag;
extern void kernel_exception(void);
extern void user_exception(void);
extern void fast_syscall_kernel(void);
extern void fast_syscall_user(void);
extern void fast_alloca(void);
extern void fast_unaligned(void);
extern void fast_second_level_miss(void);
extern void fast_store_prohibited(void);
extern void fast_coprocessor(void);
extern void do_illegal_instruction (struct pt_regs*);
extern void do_interrupt (struct pt_regs*);
extern void do_unaligned_user (struct pt_regs*);
extern void do_multihit (struct pt_regs*, unsigned long);
extern void do_page_fault (struct pt_regs*, unsigned long);
extern void do_debug (struct pt_regs*);
extern void system_call (struct pt_regs*);
#define KRNL		0x01
#define USER		0x02
#define COPROCESSOR(x)							\
typedef struct  dispatch_init_table_t;
static dispatch_init_table_t __initdata dispatch_init_table[] = ;
unsigned long exc_table[EXC_TABLE_SIZE/4];
void die(const char*, struct pt_regs*, long);
static inline void
__die_if_kernel(const char *str, struct pt_regs *regs, long err)
void do_unhandled(struct pt_regs *regs, unsigned long exccause)
void do_multihit(struct pt_regs *regs, unsigned long exccause)
unsigned long ignored_level1_interrupts;
extern void do_IRQ(int, struct pt_regs *);
void do_interrupt (struct pt_regs *regs)
void
do_illegal_instruction(struct pt_regs *regs)
#if XCHAL_UNALIGNED_LOAD_EXCEPTION || XCHAL_UNALIGNED_STORE_EXCEPTION
void
do_unaligned_user (struct pt_regs *regs)
void
do_debug(struct pt_regs *regs)
#define set_handler(idx,handler) (exc_table[idx] = (unsigned long) (handler))
void __init trap_init(void)
void show_regs(struct pt_regs * regs)
static __always_inline unsigned long *stack_pointer(struct task_struct *task)
void show_trace(struct task_struct *task, unsigned long *sp)
static int kstack_depth_to_print = 24;
void show_stack(struct task_struct *task, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void show_code(unsigned int *pc)
DEFINE_SPINLOCK(die_lock);
void die(const char * str, struct pt_regs * regs, long err)
