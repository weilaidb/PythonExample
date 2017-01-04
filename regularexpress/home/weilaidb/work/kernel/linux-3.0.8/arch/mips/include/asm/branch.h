#define _ASM_BRANCH_H
static inline int delay_slot(struct pt_regs *regs)
static inline unsigned long exception_epc(struct pt_regs *regs)
extern int __compute_return_epc(struct pt_regs *regs);
static inline int compute_return_epc(struct pt_regs *regs)
