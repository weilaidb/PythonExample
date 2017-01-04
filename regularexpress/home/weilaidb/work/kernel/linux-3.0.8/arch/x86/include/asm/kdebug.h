#define _ASM_X86_KDEBUG_H
struct pt_regs;
enum die_val ;
extern void printk_address(unsigned long address, int reliable);
extern void die(const char *, struct pt_regs *,long);
extern int __must_check __die(const char *, struct pt_regs *, long);
extern void show_registers(struct pt_regs *regs);
extern void show_trace(struct task_struct *t, struct pt_regs *regs,
unsigned long *sp, unsigned long bp);
extern void __show_regs(struct pt_regs *regs, int all);
extern void show_regs(struct pt_regs *regs);
extern unsigned long oops_begin(void);
extern void oops_end(unsigned long, struct pt_regs *, int signr);
extern int in_crash_kexec;
#define in_crash_kexec 0
