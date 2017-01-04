#define _ASM_X86_KGDB_H
#define BUFMAX			1024
enum regnames ;
#define GDB_ORIG_AX		41
#define DBG_MAX_REG_NUM		16
#define NUMREGBYTES		((GDB_GS+1)*4)
enum regnames ;
#define GDB_ORIG_AX		57
#define DBG_MAX_REG_NUM		20
#define NUMREGBYTES		((17 * 8) + (3 * 4))
static inline void arch_kgdb_breakpoint(void)
#define BREAK_INSTR_SIZE	1
#define CACHE_FLUSH_IS_SAFE	1
#define GDB_ADJUSTS_BREAK_OFFSET
extern int kgdb_ll_trap(int cmd, const char *str,
struct pt_regs *regs, long err, int trap, int sig);
