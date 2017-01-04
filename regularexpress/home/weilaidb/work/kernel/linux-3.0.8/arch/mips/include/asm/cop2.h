#define __ASM_COP2_H
enum cu2_ops ;
extern int register_cu2_notifier(struct notifier_block *nb);
extern int cu2_notifier_call_chain(unsigned long val, void *v);
#define cu2_notifier(fn, pri)						\
()
