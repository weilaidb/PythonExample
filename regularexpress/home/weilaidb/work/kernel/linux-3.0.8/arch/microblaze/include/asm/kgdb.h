#define __MICROBLAZE_KGDB_H__
#define CACHE_FLUSH_IS_SAFE	1
#define BUFMAX			2048
#define NUMREGBYTES	(57 * 4)
#define BREAK_INSTR_SIZE	4
static inline void arch_kgdb_breakpoint(void)
