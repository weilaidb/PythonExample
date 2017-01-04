#define __POWERPC_KGDB_H__
#define BREAK_INSTR_SIZE	4
#define BUFMAX			((NUMREGBYTES * 2) + 512)
#define OUTBUFMAX		((NUMREGBYTES * 2) + 512)
static inline void arch_kgdb_breakpoint(void)
#define CACHE_FLUSH_IS_SAFE	1
#define DBG_MAX_REG_NUM     70
#define NUMREGBYTES		((68 * 8) + (3 * 4))
#define NUMCRITREGBYTES		184
#define MAXREG			(PT_FPSCR+1)
#define MAXREG                 ((32*2)+6+2+1)
#define NUMREGBYTES		(MAXREG * sizeof(int))
#define NUMCRITREGBYTES		(23 * sizeof(int))
