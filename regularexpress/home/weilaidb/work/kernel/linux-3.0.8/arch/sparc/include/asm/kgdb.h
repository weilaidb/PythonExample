#define _SPARC_KGDB_H
#define BUFMAX			2048
#define BUFMAX			4096
enum regnames ;
#define NUMREGBYTES		((GDB_CSR + 1) * 4)
#define NUMREGBYTES		((GDB_Y + 1) * 8)
extern void arch_kgdb_breakpoint(void);
#define BREAK_INSTR_SIZE	4
#define CACHE_FLUSH_IS_SAFE	1
