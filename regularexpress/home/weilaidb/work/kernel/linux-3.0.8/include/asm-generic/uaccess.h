#define __ASM_GENERIC_UACCESS_H
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(~0UL)
#define USER_DS		MAKE_MM_SEG(TASK_SIZE - 1)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
static inline void set_fs(mm_segment_t fs)
#define segment_eq(a, b) ((a).seg == (b).seg)
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define access_ok(type, addr, size) __access_ok((unsigned long)(addr),(size))
static inline int __access_ok(unsigned long addr, unsigned long size)
struct exception_table_entry
;
extern unsigned long search_exception_table(unsigned long);
static inline __must_check long __copy_from_user(void *to,
const void __user * from, unsigned long n)
static inline __must_check long __copy_to_user(void __user *to,
const void *from, unsigned long n)
#define __put_user(x, ptr) \
()
#define put_user(x, ptr)					\
()
static inline int __put_user_fn(size_t size, void __user *ptr, void *x)
extern int __put_user_bad(void) __attribute__((noreturn));
#define __get_user(x, ptr)					\
()
#define get_user(x, ptr)					\
()
static inline int __get_user_fn(size_t size, const void __user *ptr, void *x)
extern int __get_user_bad(void) __attribute__((noreturn));
#define __copy_from_user_inatomic __copy_from_user
#define __copy_to_user_inatomic __copy_to_user
static inline long copy_from_user(void *to,
const void __user * from, unsigned long n)
static inline long copy_to_user(void __user *to,
const void *from, unsigned long n)
static inline long
__strncpy_from_user(char *dst, const char __user *src, long count)
static inline long
strncpy_from_user(char *dst, const char __user *src, long count)
#define __strnlen_user strnlen
static inline long strnlen_user(const char __user *src, long n)
static inline long strlen_user(const char __user *src)
static inline __must_check unsigned long
__clear_user(void __user *to, unsigned long n)
static inline __must_check unsigned long
clear_user(void __user *to, unsigned long n)
