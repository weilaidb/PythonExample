#define __ASM_BARRIER_H
#define read_barrier_depends()		do  while(0)
#define smp_read_barrier_depends()	do  while(0)
#define __sync()				\
__asm__ __volatile__(			\
".set	push\n\t"		\
".set	noreorder\n\t"		\
".set	mips2\n\t"		\
"sync\n\t"			\
".set	pop"			\
:		\
:		\
: "memory")
#define __sync()	do  while(0)
#define __fast_iob()				\
__asm__ __volatile__(			\
".set	push\n\t"		\
".set	noreorder\n\t"		\
"lw	$0,%0\n\t"		\
"nop\n\t"			\
".set	pop"			\
:		\
: "m" (*(int *)CKSEG1)		\
: "memory")
# define OCTEON_SYNCW_STR	".set push\n.set arch=octeon\nsyncw\nsyncw\n.set pop\n"
# define __syncw() 	__asm__ __volatile__(OCTEON_SYNCW_STR : : : "memory")
# define fast_wmb()	__syncw()
# define fast_rmb()	barrier()
# define fast_mb()	__sync()
# define fast_iob()	do  while (0)
# define fast_wmb()	__sync()
# define fast_rmb()	__sync()
# define fast_mb()	__sync()
# ifdef CONFIG_SGI_IP28
#  define fast_iob()				\
__asm__ __volatile__(			\
".set	push\n\t"		\
".set	noreorder\n\t"		\
"lw	$0,%0\n\t"		\
"sync\n\t"			\
"lw	$0,%0\n\t"		\
".set	pop"			\
:		\
: "m" (*(int *)CKSEG1ADDR(0x1fa00004)) \
: "memory")
# else
#  define fast_iob()				\
do  while (0)
# endif
#define wmb()		fast_wmb()
#define rmb()		fast_rmb()
#define mb()		wbflush()
#define iob()		wbflush()
#define wmb()		fast_wmb()
#define rmb()		fast_rmb()
#define mb()		fast_mb()
#define iob()		fast_iob()
#if defined(CONFIG_WEAK_ORDERING) && defined(CONFIG_SMP)
# ifdef CONFIG_CPU_CAVIUM_OCTEON
#  define smp_mb()	__sync()
#  define smp_rmb()	barrier()
#  define smp_wmb()	__syncw()
# else
#  define smp_mb()	__asm__ __volatile__("sync" : : :"memory")
#  define smp_rmb()	__asm__ __volatile__("sync" : : :"memory")
#  define smp_wmb()	__asm__ __volatile__("sync" : : :"memory")
# endif
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#if defined(CONFIG_WEAK_REORDERING_BEYOND_LLSC) && defined(CONFIG_SMP)
#define __WEAK_LLSC_MB		"       sync	\n"
#define __WEAK_LLSC_MB		"		\n"
#define set_mb(var, value) \
do  while (0)
#define smp_llsc_mb()	__asm__ __volatile__(__WEAK_LLSC_MB : : :"memory")
#define smp_mb__before_llsc() smp_wmb()
#define nudge_writes() __asm__ __volatile__(".set push\n\t"		\
".set arch=octeon\n\t"	\
"syncw\n\t"			\
".set pop" : : : "memory")
#define smp_mb__before_llsc() smp_llsc_mb()
#define nudge_writes() mb()
