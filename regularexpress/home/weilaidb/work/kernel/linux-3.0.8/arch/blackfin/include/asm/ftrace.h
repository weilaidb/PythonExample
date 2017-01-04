#define __ASM_BFIN_FTRACE_H__
#define MCOUNT_INSN_SIZE	6
extern void _mcount(void);
#define MCOUNT_ADDR ((unsigned long)_mcount)
static inline unsigned long ftrace_call_adjust(unsigned long addr)
struct dyn_arch_ftrace ;
extern inline void *return_address(unsigned int level)
extern inline void *return_address(unsigned int level)
#define HAVE_ARCH_CALLER_ADDR
#define CALLER_ADDR0 ((unsigned long)__builtin_return_address(0))
#define CALLER_ADDR1 ((unsigned long)return_address(1))
#define CALLER_ADDR2 ((unsigned long)return_address(2))
#define CALLER_ADDR3 ((unsigned long)return_address(3))
#define CALLER_ADDR4 ((unsigned long)return_address(4))
#define CALLER_ADDR5 ((unsigned long)return_address(5))
#define CALLER_ADDR6 ((unsigned long)return_address(6))
