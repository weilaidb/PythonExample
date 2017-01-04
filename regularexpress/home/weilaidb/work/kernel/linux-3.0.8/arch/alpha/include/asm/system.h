#define __ALPHA_SYSTEM_H
#define BOOT_PCB	0x20000000
#define BOOT_ADDR	0x20000000
#define BOOT_SIZE	(16*1024)
#define KERNEL_START_PHYS	0x300000
#define KERNEL_START_PHYS	0x1000000
#define KERNEL_START	(PAGE_OFFSET+KERNEL_START_PHYS)
#define SWAPPER_PGD	KERNEL_START
#define INIT_STACK	(PAGE_OFFSET+KERNEL_START_PHYS+0x02000)
#define EMPTY_PGT	(PAGE_OFFSET+KERNEL_START_PHYS+0x04000)
#define EMPTY_PGE	(PAGE_OFFSET+KERNEL_START_PHYS+0x08000)
#define ZERO_PGE	(PAGE_OFFSET+KERNEL_START_PHYS+0x0A000)
#define START_ADDR	(PAGE_OFFSET+KERNEL_START_PHYS+0x10000)
#define PARAM			ZERO_PGE
#define COMMAND_LINE		((char*)(PARAM + 0x0000))
#define INITRD_START		(*(unsigned long *) (PARAM+0x100))
#define INITRD_SIZE		(*(unsigned long *) (PARAM+0x108))
#define AT_VECTOR_SIZE_ARCH 4
struct el_common ;
struct el_common_EV5_uncorrectable_mcheck ;
struct el_common_EV6_mcheck ;
extern void halt(void) __attribute__((noreturn));
#define __halt() __asm__ __volatile__ ("call_pal %0 #halt" : : "i" (PAL_halt))
#define switch_to(P,N,L)						 \
do  while (0)
struct task_struct;
extern struct task_struct *alpha_switch_to(unsigned long, struct task_struct*);
#define imb() \
__asm__ __volatile__ ("call_pal %0 #imb" : : "i" (PAL_imb) : "memory")
#define draina() \
__asm__ __volatile__ ("call_pal %0 #draina" : : "i" (PAL_draina) : "memory")
enum implver_enum ;
#define implver()				\
()
#define implver() IMPLVER_EV4
#define implver() IMPLVER_EV5
#if defined(CONFIG_ALPHA_EV6)
#define implver() IMPLVER_EV6
enum amask_enum ;
#define amask(mask)						\
()
#define __CALL_PAL_R0(NAME, TYPE)				\
extern inline TYPE NAME(void)					\
#define __CALL_PAL_W1(NAME, TYPE0)				\
extern inline void NAME(TYPE0 arg0)				\
#define __CALL_PAL_W2(NAME, TYPE0, TYPE1)			\
extern inline void NAME(TYPE0 arg0, TYPE1 arg1)			\
#define __CALL_PAL_RW1(NAME, RTYPE, TYPE0)			\
extern inline RTYPE NAME(TYPE0 arg0)				\
#define __CALL_PAL_RW2(NAME, RTYPE, TYPE0, TYPE1)		\
extern inline RTYPE NAME(TYPE0 arg0, TYPE1 arg1)		\
__CALL_PAL_W1(cflush, unsigned long);
__CALL_PAL_R0(rdmces, unsigned long);
__CALL_PAL_R0(rdps, unsigned long);
__CALL_PAL_R0(rdusp, unsigned long);
__CALL_PAL_RW1(swpipl, unsigned long, unsigned long);
__CALL_PAL_R0(whami, unsigned long);
__CALL_PAL_W2(wrent, void*, unsigned long);
__CALL_PAL_W1(wripir, unsigned long);
__CALL_PAL_W1(wrkgp, unsigned long);
__CALL_PAL_W1(wrmces, unsigned long);
__CALL_PAL_RW2(wrperfmon, unsigned long, unsigned long, unsigned long);
__CALL_PAL_W1(wrusp, unsigned long);
__CALL_PAL_W1(wrvptptr, unsigned long);
#define __tbi(nr,arg,arg1...)					\
()
#define tbi(x,y)	__tbi(x,__r17=(y),"1" (__r17))
#define tbisi(x)	__tbi(1,__r17=(x),"1" (__r17))
#define tbisd(x)	__tbi(2,__r17=(x),"1" (__r17))
#define tbis(x)		__tbi(3,__r17=(x),"1" (__r17))
#define tbiap()		__tbi(-1,)
#define tbia()		__tbi(-2,)
#define __ASM__MB
#define ____xchg(type, args...)		__xchg ## type ## _local(args)
#define ____cmpxchg(type, args...)	__cmpxchg ## type ## _local(args)
#define xchg_local(ptr,x)						\
()
#define cmpxchg_local(ptr, o, n)					\
()
#define cmpxchg64_local(ptr, o, n)					\
()
#undef __ASM__MB
#define __ASM__MB	"\tmb\n"
#undef ____xchg
#undef ____cmpxchg
#define ____xchg(type, args...)		__xchg ##type(args)
#define ____cmpxchg(type, args...)	__cmpxchg ##type(args)
#define xchg(ptr,x)							\
()
#define cmpxchg(ptr, o, n)						\
()
#define cmpxchg64(ptr, o, n)						\
()
#undef __ASM__MB
#undef ____cmpxchg
#define __HAVE_ARCH_CMPXCHG 1
#define arch_align_stack(x) (x)
