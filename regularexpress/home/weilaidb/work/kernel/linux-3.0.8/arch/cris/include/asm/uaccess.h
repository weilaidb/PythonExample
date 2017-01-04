#define _CRIS_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(0xFFFFFFFF)
#define USER_DS		MAKE_MM_SEG(TASK_SIZE)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
#define segment_eq(a,b)	((a).seg == (b).seg)
#define __kernel_ok (segment_eq(get_fs(), KERNEL_DS))
#define __user_ok(addr,size) (((size) <= TASK_SIZE)&&((addr) <= TASK_SIZE-(size)))
#define __access_ok(addr,size) (__kernel_ok || __user_ok((addr),(size)))
#define access_ok(type,addr,size) __access_ok((unsigned long)(addr),(size))
struct exception_table_entry
;
#define get_user(x,ptr) \
__get_user_check((x),(ptr),sizeof(*(ptr)))
#define put_user(x,ptr) \
__put_user_check((__typeof__(*(ptr)))(x),(ptr),sizeof(*(ptr)))
#define __get_user(x,ptr) \
__get_user_nocheck((x),(ptr),sizeof(*(ptr)))
#define __put_user(x,ptr) \
__put_user_nocheck((__typeof__(*(ptr)))(x),(ptr),sizeof(*(ptr)))
extern long __put_user_bad(void);
#define __put_user_size(x,ptr,size,retval)			\
do  while (0)
#define __get_user_size(x,ptr,size,retval)			\
do  while (0)
#define __put_user_nocheck(x,ptr,size)			\
()
#define __put_user_check(x,ptr,size)				\
()
struct __large_struct ;
#define __m(x) (*(struct __large_struct *)(x))
#define __get_user_nocheck(x,ptr,size)				\
()
#define __get_user_check(x,ptr,size)					\
()
extern long __get_user_bad(void);
extern unsigned long __copy_user(void __user *to, const void *from, unsigned long n);
extern unsigned long __copy_user_zeroing(void *to, const void __user *from, unsigned long n);
extern unsigned long __do_clear_user(void __user *to, unsigned long n);
static inline unsigned long
__generic_copy_to_user(void __user *to, const void *from, unsigned long n)
static inline unsigned long
__generic_copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long
__generic_clear_user(void __user *to, unsigned long n)
static inline long
__strncpy_from_user(char *dst, const char __user *src, long count)
static inline long
strncpy_from_user(char *dst, const char __user *src, long count)
static inline unsigned long
__constant_copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long
__constant_copy_to_user(void __user *to, const void *from, unsigned long n)
static inline unsigned long
__constant_clear_user(void __user *to, unsigned long n)
#define clear_user(to, n)			\
(__builtin_constant_p(n) ?			\
__constant_clear_user(to, n) :			\
__generic_clear_user(to, n))
#define copy_from_user(to, from, n)		\
(__builtin_constant_p(n) ?			\
__constant_copy_from_user(to, from, n) :	\
__generic_copy_from_user(to, from, n))
#define copy_to_user(to, from, n)		\
(__builtin_constant_p(n) ?			\
__constant_copy_to_user(to, from, n) :		\
__generic_copy_to_user(to, from, n))
static inline unsigned long
__generic_copy_from_user_nocheck(void *to, const void __user *from,
unsigned long n)
static inline unsigned long
__generic_copy_to_user_nocheck(void __user *to, const void *from,
unsigned long n)
static inline unsigned long
__generic_clear_user_nocheck(void __user *to, unsigned long n)
#define __copy_to_user(to,from,n)   __generic_copy_to_user_nocheck((to),(from),(n))
#define __copy_from_user(to,from,n) __generic_copy_from_user_nocheck((to),(from),(n))
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
#define __clear_user(to,n) __generic_clear_user_nocheck((to),(n))
#define strlen_user(str)	strnlen_user((str), 0x7ffffffe)
