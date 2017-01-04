#define __ASM_SH_KGDB_H
struct kgdb_regs ;
enum regnames ;
#define NUMREGBYTES    ((GDB_VBR + 1) * 4)
static inline void arch_kgdb_breakpoint(void)
#define BUFMAX                 2048
#define CACHE_FLUSH_IS_SAFE	1
#define BREAK_INSTR_SIZE	2
#define GDB_ADJUSTS_BREAK_OFFSET
