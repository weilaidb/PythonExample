#define _ASM_X86_UACCESS_H
#define VERIFY_READ 0
#define VERIFY_WRITE 1
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(-1UL)
#define USER_DS 	MAKE_MM_SEG(TASK_SIZE_MAX)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
#define segment_eq(a, b)	((a).seg == (b).seg)
#define __addr_ok(addr)					\
((unsigned long __force)(addr) <		\
(current_thread_info()->addr_limit.seg))
#define __range_not_ok(addr, size)					\
()
#define access_ok(type, addr, size) (likely(__range_not_ok(addr, size) == 0))
struct exception_table_entry ;
extern int fixup_exception(struct pt_regs *regs);
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
#define __get_user_x(size, ret, x, ptr)		      \
asm volatile("call __get_user_" #size	      \
: "=a" (ret), "=d" (x)	      \
: "0" (ptr))		      \
#define __get_user_8(__ret_gu, __val_gu, ptr)				\
__get_user_x(X, __ret_gu, __val_gu, ptr)
#define __get_user_8(__ret_gu, __val_gu, ptr)				\
__get_user_x(8, __ret_gu, __val_gu, ptr)
#define get_user(x, ptr)						\
()
#define __put_user_x(size, x, ptr, __ret_pu)			\
asm volatile("call __put_user_" #size : "=a" (__ret_pu)	\
: "0" ((typeof(*(ptr)))(x)), "c" (ptr) : "ebx")
#define __put_user_asm_u64(x, addr, err, errret)			\
asm volatile("1:	movl %%eax,0(%2)\n"			\
"2:	movl %%edx,4(%2)\n"			\
"3:\n"						\
".section .fixup,\"ax\"\n"				\
"4:	movl %3,%0\n"				\
"	jmp 3b\n"					\
".previous\n"					\
_ASM_EXTABLE(1b, 4b)				\
_ASM_EXTABLE(2b, 4b)				\
: "=r" (err)					\
: "A" (x), "r" (addr), "i" (errret), "0" (err))
#define __put_user_asm_ex_u64(x, addr)					\
asm volatile("1:	movl %%eax,0(%1)\n"			\
"2:	movl %%edx,4(%1)\n"			\
"3:\n"						\
_ASM_EXTABLE(1b, 2b - 1b)				\
_ASM_EXTABLE(2b, 3b - 2b)				\
: : "A" (x), "r" (addr))
#define __put_user_x8(x, ptr, __ret_pu)				\
asm volatile("call __put_user_8" : "=a" (__ret_pu)	\
: "A" ((typeof(*(ptr)))(x)), "c" (ptr) : "ebx")
#define __put_user_asm_u64(x, ptr, retval, errret) \
__put_user_asm(x, ptr, retval, "q", "", "er", errret)
#define __put_user_asm_ex_u64(x, addr)	\
__put_user_asm_ex(x, addr, "q", "", "er")
#define __put_user_x8(x, ptr, __ret_pu) __put_user_x(8, x, ptr, __ret_pu)
extern void __put_user_bad(void);
extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
#define put_user(x, ptr)					\
()
#define __put_user_size(x, ptr, size, retval, errret)			\
do  while (0)
#define __put_user_size_ex(x, ptr, size)				\
do  while (0)
#define __put_user_size(x, ptr, size, retval, errret)			\
do  while (0)
#define put_user(x, ptr)					\
()
#define __get_user_asm_u64(x, ptr, retval, errret)	(x) = __get_user_bad()
#define __get_user_asm_ex_u64(x, ptr)			(x) = __get_user_bad()
#define __get_user_asm_u64(x, ptr, retval, errret) \
__get_user_asm(x, ptr, retval, "q", "", "=r", errret)
#define __get_user_asm_ex_u64(x, ptr) \
__get_user_asm_ex(x, ptr, "q", "", "=r")
#define __get_user_size(x, ptr, size, retval, errret)			\
do  while (0)
#define __get_user_asm(x, addr, err, itype, rtype, ltype, errret)	\
asm volatile("1:	mov"itype" %2,%"rtype"1\n"		\
"2:\n"						\
".section .fixup,\"ax\"\n"				\
"3:	mov %3,%0\n"				\
"	xor"itype" %"rtype"1,%"rtype"1\n"		\
"	jmp 2b\n"					\
".previous\n"					\
_ASM_EXTABLE(1b, 3b)				\
: "=r" (err), ltype(x)				\
: "m" (__m(addr)), "i" (errret), "0" (err))
#define __get_user_size_ex(x, ptr, size)				\
do  while (0)
#define __get_user_asm_ex(x, addr, itype, rtype, ltype)			\
asm volatile("1:	mov"itype" %1,%"rtype"0\n"		\
"2:\n"						\
_ASM_EXTABLE(1b, 2b - 1b)				\
: ltype(x) : "m" (__m(addr)))
#define __put_user_nocheck(x, ptr, size)			\
()
#define __get_user_nocheck(x, ptr, size)				\
()
struct __large_struct ;
#define __m(x) (*(struct __large_struct __user *)(x))
#define __put_user_asm(x, addr, err, itype, rtype, ltype, errret)	\
asm volatile("1:	mov"itype" %"rtype"1,%2\n"		\
"2:\n"						\
".section .fixup,\"ax\"\n"				\
"3:	mov %3,%0\n"				\
"	jmp 2b\n"					\
".previous\n"					\
_ASM_EXTABLE(1b, 3b)				\
: "=r"(err)					\
: ltype(x), "m" (__m(addr)), "i" (errret), "0" (err))
#define __put_user_asm_ex(x, addr, itype, rtype, ltype)			\
asm volatile("1:	mov"itype" %"rtype"0,%1\n"		\
"2:\n"						\
_ASM_EXTABLE(1b, 2b - 1b)				\
: : ltype(x), "m" (__m(addr)))
#define uaccess_try	do  while (0)
#define __get_user(x, ptr)						\
__get_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define __put_user(x, ptr)						\
__put_user_nocheck((__typeof__(*(ptr)))(x), (ptr), sizeof(*(ptr)))
#define __get_user_unaligned __get_user
#define __put_user_unaligned __put_user
#define get_user_try		uaccess_try
#define get_user_catch(err)	uaccess_catch(err)
#define get_user_ex(x, ptr)	do  while (0)
#define put_user_try		uaccess_try
#define put_user_catch(err)	uaccess_catch(err)
#define put_user_ex(x, ptr)						\
__put_user_size_ex((__typeof__(*(ptr)))(x), (ptr), sizeof(*(ptr)))
#define put_user_try		do  while (0)
#define put_user_ex(x, ptr)	do  while (0)
extern struct movsl_mask  ____cacheline_aligned_in_smp movsl_mask;
#define ARCH_HAS_NOCACHE_UACCESS 1
# include "uaccess_32.h"
# include "uaccess_64.h"
