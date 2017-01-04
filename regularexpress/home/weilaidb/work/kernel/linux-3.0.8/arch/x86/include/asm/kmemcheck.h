#define ASM_X86_KMEMCHECK_H
bool kmemcheck_active(struct pt_regs *regs);
void kmemcheck_show(struct pt_regs *regs);
void kmemcheck_hide(struct pt_regs *regs);
bool kmemcheck_fault(struct pt_regs *regs,
unsigned long address, unsigned long error_code);
bool kmemcheck_trap(struct pt_regs *regs);
static inline bool kmemcheck_active(struct pt_regs *regs)
static inline void kmemcheck_show(struct pt_regs *regs)
static inline void kmemcheck_hide(struct pt_regs *regs)
static inline bool kmemcheck_fault(struct pt_regs *regs,
unsigned long address, unsigned long error_code)
static inline bool kmemcheck_trap(struct pt_regs *regs)
