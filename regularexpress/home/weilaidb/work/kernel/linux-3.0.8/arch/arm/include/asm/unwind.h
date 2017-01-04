#define __ASM_UNWIND_H
enum unwind_reason_code ;
struct unwind_idx ;
struct unwind_table ;
extern struct unwind_table *unwind_table_add(unsigned long start,
unsigned long size,
unsigned long text_addr,
unsigned long text_size);
extern void unwind_table_del(struct unwind_table *tab);
extern void unwind_backtrace(struct pt_regs *regs, struct task_struct *tsk);
extern int __init unwind_init(void);
static inline int __init unwind_init(void)
#define UNWIND(code...)		code
#define UNWIND(code...)
