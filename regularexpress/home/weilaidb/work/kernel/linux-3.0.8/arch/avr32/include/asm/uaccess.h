#define __ASM_AVR32_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
typedef struct  mm_segment_t;
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define segment_eq(a,b)	((a).is_user_space == (b).is_user_space)
#define USER_ADDR_LIMIT 0x80000000
#define KERNEL_DS	MAKE_MM_SEG(0)
#define USER_DS		MAKE_MM_SEG(1)
#define get_ds()	(KERNEL_DS)
static inline mm_segment_t get_fs(void)
static inline void set_fs(mm_segment_t s)
#define __range_ok(addr, size)						\
(test_thread_flag(TIF_USERSPACE)				\
&& (((unsigned long)(addr) >= 0x80000000)			\
|| ((unsigned long)(size) > 0x80000000)			\
|| (((unsigned long)(addr) + (unsigned long)(size)) > 0x80000000)))
#define access_ok(type, addr, size) (likely(__range_ok(addr, size) == 0))
extern __kernel_size_t __copy_user(void *to, const void *from,
__kernel_size_t n);
extern __kernel_size_t copy_to_user(void __user *to, const void *from,
__kernel_size_t n);
extern __kernel_size_t copy_from_user(void *to, const void __user *from,
__kernel_size_t n);
static inline __kernel_size_t __copy_to_user(void __user *to, const void *from,
__kernel_size_t n)
static inline __kernel_size_t __copy_from_user(void *to,
const void __user *from,
__kernel_size_t n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
#define put_user(x,ptr)	\
__put_user_check((x),(ptr),sizeof(*(ptr)))
#define get_user(x,ptr) \
__get_user_check((x),(ptr),sizeof(*(ptr)))
#define __put_user(x,ptr) \
__put_user_nocheck((x),(ptr),sizeof(*(ptr)))
#define __get_user(x,ptr) \
__get_user_nocheck((x),(ptr),sizeof(*(ptr)))
extern int __get_user_bad(void);
extern int __put_user_bad(void);
#define __get_user_nocheck(x, ptr, size)				\
()
#define __get_user_check(x, ptr, size)					\
()
#define __get_user_asm(suffix, __gu_val, ptr, __gu_err)			\
asm volatile(							\
"1:	ld." suffix "	%1, %3			\n"	\
"2:						\n"	\
"	.subsection 1				\n"	\
"3:	mov	%0, %4				\n"	\
"	rjmp	2b				\n"	\
"	.subsection 0				\n"	\
"	.section __ex_table, \"a\"		\n"	\
"	.long	1b, 3b				\n"	\
"	.previous				\n"	\
: "=r"(__gu_err), "=r"(__gu_val)			\
: "0"(__gu_err), "m"(*(ptr)), "i"(-EFAULT))
#define __put_user_nocheck(x, ptr, size)				\
()
#define __put_user_check(x, ptr, size)					\
()
#define __put_user_asm(suffix, ptr, __pu_val, __gu_err)			\
asm volatile(							\
"1:	st." suffix "	%1, %3			\n"	\
"2:						\n"	\
"	.subsection 1				\n"	\
"3:	mov	%0, %4				\n"	\
"	rjmp	2b				\n"	\
"	.subsection 0				\n"	\
"	.section __ex_table, \"a\"		\n"	\
"	.long	1b, 3b				\n"	\
"	.previous				\n"	\
: "=r"(__gu_err), "=m"(*(ptr))				\
: "0"(__gu_err), "r"(__pu_val), "i"(-EFAULT))
extern __kernel_size_t clear_user(void __user *addr, __kernel_size_t size);
extern __kernel_size_t __clear_user(void __user *addr, __kernel_size_t size);
extern long strncpy_from_user(char *dst, const char __user *src, long count);
extern long __strncpy_from_user(char *dst, const char __user *src, long count);
extern long strnlen_user(const char __user *__s, long __n);
extern long __strnlen_user(const char __user *__s, long __n);
#define strlen_user(s) strnlen_user(s, ~0UL >> 1)
struct exception_table_entry
;
