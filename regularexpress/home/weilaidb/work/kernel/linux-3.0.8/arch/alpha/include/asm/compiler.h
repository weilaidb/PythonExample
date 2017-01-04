#define __ALPHA_COMPILER_H
#if __GNUC__ == 3 && __GNUC_MINOR__ >= 4 || __GNUC__ > 3
# define __kernel_insbl(val, shift)	__builtin_alpha_insbl(val, shift)
# define __kernel_inswl(val, shift)	__builtin_alpha_inswl(val, shift)
# define __kernel_insql(val, shift)	__builtin_alpha_insql(val, shift)
# define __kernel_inslh(val, shift)	__builtin_alpha_inslh(val, shift)
# define __kernel_extbl(val, shift)	__builtin_alpha_extbl(val, shift)
# define __kernel_extwl(val, shift)	__builtin_alpha_extwl(val, shift)
# define __kernel_cmpbge(a, b)		__builtin_alpha_cmpbge(a, b)
# define __kernel_insbl(val, shift)					\
()
# define __kernel_inswl(val, shift)					\
()
# define __kernel_insql(val, shift)					\
()
# define __kernel_inslh(val, shift)					\
()
# define __kernel_extbl(val, shift)					\
()
# define __kernel_extwl(val, shift)					\
()
# define __kernel_cmpbge(a, b)						\
()
# if __GNUC__ == 3 && __GNUC_MINOR__ >= 4 || __GNUC__ > 3
#  define __kernel_cttz(x)		__builtin_ctzl(x)
#  define __kernel_ctlz(x)		__builtin_clzl(x)
#  define __kernel_ctpop(x)		__builtin_popcountl(x)
# else
#  define __kernel_cttz(x)						\
()
#  define __kernel_ctlz(x)						\
()
#  define __kernel_ctpop(x)						\
()
# endif
# define __kernel_cttz(x)						\
()
# define __kernel_ctlz(x)						\
()
# define __kernel_ctpop(x)						\
()
#if defined(__alpha_bwx__)
#define __kernel_ldbu(mem)	(mem)
#define __kernel_ldwu(mem)	(mem)
#define __kernel_stb(val,mem)	((mem) = (val))
#define __kernel_stw(val,mem)	((mem) = (val))
#define __kernel_ldbu(mem)				\
()
#define __kernel_ldwu(mem)				\
()
#define __kernel_stb(val,mem)				\
__asm__(".arch ev56;					\
stb %1,%0" : "=m"(mem) : "r"(val))
#define __kernel_stw(val,mem)				\
__asm__(".arch ev56;					\
stw %1,%0" : "=m"(mem) : "r"(val))
#undef inline
#undef __inline__
#undef __inline
#undef __always_inline
#define __always_inline		inline __attribute__((always_inline))
