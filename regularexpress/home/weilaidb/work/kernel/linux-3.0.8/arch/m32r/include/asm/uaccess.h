#define _ASM_M32R_UACCESS_H
#define VERIFY_READ 0
#define VERIFY_WRITE 1
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(0xFFFFFFFF)
#define USER_DS		MAKE_MM_SEG(PAGE_OFFSET)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
#define KERNEL_DS	MAKE_MM_SEG(0xFFFFFFFF)
#define USER_DS		MAKE_MM_SEG(0xFFFFFFFF)
#define get_ds()	(KERNEL_DS)
static inline mm_segment_t get_fs(void)
static inline void set_fs(mm_segment_t s)
#define segment_eq(a,b)	((a).seg == (b).seg)
#define __addr_ok(addr) \
((unsigned long)(addr) < (current_thread_info()->addr_limit.seg))
#define __range_ok(addr,size) ()
#define access_ok(type,addr,size) (likely(__range_ok(addr,size) == 0))
static inline int access_ok(int type, const void *addr, unsigned long size)
struct exception_table_entry
;
extern int fixup_exception(struct pt_regs *regs);
#define get_user(x,ptr)							\
__get_user_check((x),(ptr),sizeof(*(ptr)))
#define put_user(x,ptr)							\
__put_user_check((__typeof__(*(ptr)))(x),(ptr),sizeof(*(ptr)))
#define __get_user(x,ptr) \
__get_user_nocheck((x),(ptr),sizeof(*(ptr)))
#define __get_user_nocheck(x,ptr,size)					\
()
#define __get_user_check(x,ptr,size)					\
()
extern long __get_user_bad(void);
#define __get_user_size(x,ptr,size,retval)				\
do  while (0)
#define __get_user_asm(x, addr, err, itype)				\
__asm__ __volatile__(						\
"	.fillinsn\n"					\
"1:	ld"itype" %1,@%2\n"				\
"	.fillinsn\n"					\
"2:\n"							\
".section .fixup,\"ax\"\n"				\
"	.balign 4\n"					\
"3:	ldi %0,%3\n"					\
"	seth r14,#high(2b)\n"				\
"	or3 r14,r14,#low(2b)\n"				\
"	jmp r14\n"					\
".previous\n"						\
".section __ex_table,\"a\"\n"				\
"	.balign 4\n"					\
"	.long 1b,3b\n"					\
".previous"						\
: "=&r" (err), "=&r" (x)				\
: "r" (addr), "i" (-EFAULT), "0" (err)			\
: "r14", "memory")
#define __put_user(x,ptr) \
__put_user_nocheck((__typeof__(*(ptr)))(x),(ptr),sizeof(*(ptr)))
#define __put_user_nocheck(x,ptr,size)					\
()
#define __put_user_check(x,ptr,size)					\
()
#if defined(__LITTLE_ENDIAN__)
#define __put_user_u64(x, addr, err)					\
__asm__ __volatile__(						\
"       .fillinsn\n"					\
"1:     st %L1,@%2\n"					\
"       .fillinsn\n"					\
"2:     st %H1,@(4,%2)\n"				\
"       .fillinsn\n"					\
"3:\n"							\
".section .fixup,\"ax\"\n"				\
"       .balign 4\n"					\
"4:     ldi %0,%3\n"					\
"       seth r14,#high(3b)\n"				\
"       or3 r14,r14,#low(3b)\n"				\
"       jmp r14\n"					\
".previous\n"						\
".section __ex_table,\"a\"\n"				\
"       .balign 4\n"					\
"       .long 1b,4b\n"					\
"       .long 2b,4b\n"					\
".previous"						\
: "=&r" (err)						\
: "r" (x), "r" (addr), "i" (-EFAULT), "0" (err)		\
: "r14", "memory")
#elif defined(__BIG_ENDIAN__)
#define __put_user_u64(x, addr, err)					\
__asm__ __volatile__(						\
"	.fillinsn\n"					\
"1:	st %H1,@%2\n"					\
"	.fillinsn\n"					\
"2:	st %L1,@(4,%2)\n"				\
"	.fillinsn\n"					\
"3:\n"							\
".section .fixup,\"ax\"\n"				\
"	.balign 4\n"					\
"4:	ldi %0,%3\n"					\
"	seth r14,#high(3b)\n"				\
"	or3 r14,r14,#low(3b)\n"				\
"	jmp r14\n"					\
".previous\n"						\
".section __ex_table,\"a\"\n"				\
"	.balign 4\n"					\
"	.long 1b,4b\n"					\
"	.long 2b,4b\n"					\
".previous"						\
: "=&r" (err)						\
: "r" (x), "r" (addr), "i" (-EFAULT), "0" (err)		\
: "r14", "memory")
#error no endian defined
extern void __put_user_bad(void);
#define __put_user_size(x,ptr,size,retval)				\
do  while (0)
struct __large_struct ;
#define __m(x) (*(struct __large_struct *)(x))
#define __put_user_asm(x, addr, err, itype)				\
__asm__ __volatile__(						\
"	.fillinsn\n"					\
"1:	st"itype" %1,@%2\n"				\
"	.fillinsn\n"					\
"2:\n"							\
".section .fixup,\"ax\"\n"				\
"	.balign 4\n"					\
"3:	ldi %0,%3\n"					\
"	seth r14,#high(2b)\n"				\
"	or3 r14,r14,#low(2b)\n"				\
"	jmp r14\n"					\
".previous\n"						\
".section __ex_table,\"a\"\n"				\
"	.balign 4\n"					\
"	.long 1b,3b\n"					\
".previous"						\
: "=&r" (err)						\
: "r" (x), "r" (addr), "i" (-EFAULT), "0" (err)		\
: "r14", "memory")
#define __copy_user(to,from,size)					\
do  while (0)
#define __copy_user_zeroing(to,from,size)				\
do  while (0)
static inline unsigned long __generic_copy_from_user_nocheck(void *to,
const void __user *from, unsigned long n)
static inline unsigned long __generic_copy_to_user_nocheck(void __user *to,
const void *from, unsigned long n)
unsigned long __generic_copy_to_user(void __user *, const void *, unsigned long);
unsigned long __generic_copy_from_user(void *, const void __user *, unsigned long);
#define __copy_to_user(to,from,n)			\
__generic_copy_to_user_nocheck((to),(from),(n))
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
#define copy_to_user(to,from,n)				\
()
#define __copy_from_user(to,from,n)			\
__generic_copy_from_user_nocheck((to),(from),(n))
#define copy_from_user(to,from,n)			\
()
long __must_check strncpy_from_user(char *dst, const char __user *src,
long count);
long __must_check __strncpy_from_user(char *dst,
const char __user *src, long count);
unsigned long __clear_user(void __user *mem, unsigned long len);
unsigned long clear_user(void __user *mem, unsigned long len);
#define strlen_user(str) strnlen_user(str, ~0UL >> 1)
long strnlen_user(const char __user *str, long n);
