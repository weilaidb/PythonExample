char *op_name_from_perf_id(void)
static int report_trace(struct stackframe *frame, void *d)
struct frame_tail  __attribute__((packed));
static struct frame_tail* user_backtrace(struct frame_tail *tail)
static void arm_backtrace(struct pt_regs * const regs, unsigned int depth)
int __init oprofile_arch_init(struct oprofile_operations *ops)
void __exit oprofile_arch_exit(void)
