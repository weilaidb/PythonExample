#define _ASM_ARM_FTRACE
#define MCOUNT_ADDR		((unsigned long)(__gnu_mcount_nc))
#define MCOUNT_INSN_SIZE	4
extern void mcount(void);
extern void __gnu_mcount_nc(void);
struct dyn_arch_ftrace ;
static inline unsigned long ftrace_call_adjust(unsigned long addr)
extern void ftrace_caller_old(void);
extern void ftrace_call_old(void);
#if defined(CONFIG_FRAME_POINTER) && !defined(CONFIG_ARM_UNWIND)
void *return_address(unsigned int);
extern inline void *return_address(unsigned int level)
#define HAVE_ARCH_CALLER_ADDR
#define CALLER_ADDR0 ((unsigned long)__builtin_return_address(0))
#define CALLER_ADDR1 ((unsigned long)return_address(1))
#define CALLER_ADDR2 ((unsigned long)return_address(2))
#define CALLER_ADDR3 ((unsigned long)return_address(3))
#define CALLER_ADDR4 ((unsigned long)return_address(4))
#define CALLER_ADDR5 ((unsigned long)return_address(5))
#define CALLER_ADDR6 ((unsigned long)return_address(6))
