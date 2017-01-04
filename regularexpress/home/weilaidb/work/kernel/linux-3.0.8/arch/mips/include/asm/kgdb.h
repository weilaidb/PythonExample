#define __ASM_KGDB_H_
#if (_MIPS_ISA == _MIPS_ISA_MIPS1) || (_MIPS_ISA == _MIPS_ISA_MIPS2) || \
(_MIPS_ISA == _MIPS_ISA_MIPS32)
#define KGDB_GDB_REG_SIZE	32
#define GDB_SIZEOF_REG		sizeof(u32)
#elif (_MIPS_ISA == _MIPS_ISA_MIPS3) || (_MIPS_ISA == _MIPS_ISA_MIPS4) || \
(_MIPS_ISA == _MIPS_ISA_MIPS64)
#define KGDB_GDB_REG_SIZE	32
#define GDB_SIZEOF_REG		sizeof(u32)
#define KGDB_GDB_REG_SIZE	64
#define GDB_SIZEOF_REG		sizeof(u64)
#error "Need to set KGDB_GDB_REG_SIZE for MIPS ISA"
#define BUFMAX			2048
#define DBG_MAX_REG_NUM		72
#define NUMREGBYTES		(DBG_MAX_REG_NUM * sizeof(GDB_SIZEOF_REG))
#define NUMCRITREGBYTES		(12 * sizeof(GDB_SIZEOF_REG))
#define BREAK_INSTR_SIZE	4
#define CACHE_FLUSH_IS_SAFE	0
extern void arch_kgdb_breakpoint(void);
extern int kgdb_early_setup;
extern void *saved_vectors[32];
extern void handle_exception(struct pt_regs *regs);
extern void breakinst(void);
extern int kgdb_ll_trap(int cmd, const char *str,
struct pt_regs *regs, long err, int trap, int sig);
