#define _ASM_KGDB_H
#define BUFMAX			1024
enum regnames ;
#define GDB_ORIG_D0		41
#define NUMREGBYTES		(GDB_FR_SIZE*4)
static inline void arch_kgdb_breakpoint(void)
extern u8 __arch_kgdb_breakpoint;
#define BREAK_INSTR_SIZE	1
#define CACHE_FLUSH_IS_SAFE	1
