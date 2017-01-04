#define _ASM_MIPS_FTRACE_H
#define MCOUNT_ADDR ((unsigned long)(_mcount))
#define MCOUNT_INSN_SIZE 4
extern void _mcount(void);
#define mcount _mcount
#define safe_load(load, src, dst, error)		\
do  while (0)
#define safe_store(store, src, dst, error)	\
do  while (0)
#define safe_load_code(dst, src, error) \
safe_load(STR(lw), src, dst, error)
#define safe_store_code(src, dst, error) \
safe_store(STR(sw), src, dst, error)
#define safe_load_stack(dst, src, error) \
safe_load(STR(PTR_L), src, dst, error)
#define safe_store_stack(src, dst, error) \
safe_store(STR(PTR_S), src, dst, error)
static inline unsigned long ftrace_call_adjust(unsigned long addr)
struct dyn_arch_ftrace ;
