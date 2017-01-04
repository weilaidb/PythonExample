#define _LINUX_BUG_H
enum bug_trap_type ;
struct pt_regs;
static inline int is_warning_bug(const struct bug_entry *bug)
const struct bug_entry *find_bug(unsigned long bugaddr);
enum bug_trap_type report_bug(unsigned long bug_addr, struct pt_regs *regs);
int is_valid_bugaddr(unsigned long addr);
static inline enum bug_trap_type report_bug(unsigned long bug_addr,
struct pt_regs *regs)
