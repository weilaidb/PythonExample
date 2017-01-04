#define __LINUX_COMPILER_H
# define __user		__attribute__((noderef, address_space(1)))
# define __kernel	__attribute__((address_space(0)))
# define __safe		__attribute__((safe))
# define __force	__attribute__((force))
# define __nocast	__attribute__((nocast))
# define __iomem	__attribute__((noderef, address_space(2)))
# define __acquires(x)	__attribute__((context(x,0,1)))
# define __releases(x)	__attribute__((context(x,1,0)))
# define __acquire(x)	__context__(x,1)
# define __release(x)	__context__(x,-1)
# define __cond_lock(x,c)	((c) ? () : 0)
# define __percpu	__attribute__((noderef, address_space(3)))
# define __rcu		__attribute__((noderef, address_space(4)))
# define __rcu
extern void __chk_user_ptr(const volatile void __user *);
extern void __chk_io_ptr(const volatile void __iomem *);
# define __user
# define __kernel
# define __safe
# define __force
# define __nocast
# define __iomem
# define __chk_user_ptr(x) (void)0
# define __chk_io_ptr(x) (void)0
# define __builtin_warning(x, y...) (1)
# define __acquires(x)
# define __releases(x)
# define __acquire(x) (void)0
# define __release(x) (void)0
# define __cond_lock(x,c) (c)
# define __percpu
# define __rcu
#define notrace __attribute__((no_instrument_function))
# include <linux/compiler-intel.h>
struct ftrace_branch_data ;
#if defined(CONFIG_TRACE_BRANCH_PROFILING) \
&& !defined(DISABLE_BRANCH_PROFILING) && !defined(__CHECKER__)
void ftrace_likely_update(struct ftrace_branch_data *f, int val, int expect);
#define likely_notrace(x)	__builtin_expect(!!(x), 1)
#define unlikely_notrace(x)	__builtin_expect(!!(x), 0)
#define __branch_check__(x, expect) ()
# ifndef likely
#  define likely(x)	(__builtin_constant_p(x) ? !!(x) : __branch_check__(x, 1))
# endif
# ifndef unlikely
#  define unlikely(x)	(__builtin_constant_p(x) ? !!(x) : __branch_check__(x, 0))
# endif
#define if(cond, ...) __trace_if( (cond , ## __VA_ARGS__) )
#define __trace_if(cond) \
if (__builtin_constant_p((cond)) ? !!(cond) :			\
())
# define likely(x)	__builtin_expect(!!(x), 1)
# define unlikely(x)	__builtin_expect(!!(x), 0)
# define barrier() __memory_barrier()
# define unreachable() do  while (1)
# define RELOC_HIDE(ptr, off)					\
()
# define __deprecated
#define __deprecated_for_modules __deprecated
#define __deprecated_for_modules
#define __must_check
#undef __must_check
#define __must_check
#undef __deprecated
#undef __deprecated_for_modules
#define __deprecated
#define __deprecated_for_modules
# define __used
# define __maybe_unused
# define __always_unused
#define noinline
#define noinline_for_stack noinline
#define __always_inline inline
# define __attribute_const__
#define __cold
# define __section(S) __attribute__ ((__section__(#S)))
# define __same_type(a, b) __builtin_types_compatible_p(typeof(a), typeof(b))
# define __compiletime_object_size(obj) -1
# define __compiletime_warning(message)
# define __compiletime_error(message)
#define ACCESS_ONCE(x) (*(volatile typeof(x) *)&(x))
