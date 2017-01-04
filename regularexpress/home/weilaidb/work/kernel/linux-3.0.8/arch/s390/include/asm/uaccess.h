#define __S390_UACCESS_H
#define VERIFY_READ     0
#define VERIFY_WRITE    1
#define MAKE_MM_SEG(a)  ((mm_segment_t) )
#define KERNEL_DS       MAKE_MM_SEG(0)
#define USER_DS         MAKE_MM_SEG(1)
#define get_ds()        (KERNEL_DS)
#define get_fs()        (current->thread.mm_segment)
#define set_fs(x) \
()
#define segment_eq(a,b) ((a).ar4 == (b).ar4)
#define __access_ok(addr, size)	\
()
#define access_ok(type, addr, size) __access_ok(addr, size)
struct exception_table_entry
;
struct uaccess_ops ;
extern struct uaccess_ops uaccess;
extern struct uaccess_ops uaccess_std;
extern struct uaccess_ops uaccess_mvcos;
extern struct uaccess_ops uaccess_mvcos_switch;
extern struct uaccess_ops uaccess_pt;
extern int __handle_fault(unsigned long, unsigned long, int);
static inline int __put_user_fn(size_t size, void __user *ptr, void *x)
static inline int __get_user_fn(size_t size, const void __user *ptr, void *x)
#define __put_user(x, ptr) \
()
#define put_user(x, ptr)					\
()
extern int __put_user_bad(void) __attribute__((noreturn));
#define __get_user(x, ptr)					\
()
#define get_user(x, ptr)					\
()
extern int __get_user_bad(void) __attribute__((noreturn));
#define __put_user_unaligned __put_user
#define __get_user_unaligned __get_user
static inline unsigned long __must_check
__copy_to_user(void __user *to, const void *from, unsigned long n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
static inline unsigned long __must_check
copy_to_user(void __user *to, const void *from, unsigned long n)
static inline unsigned long __must_check
__copy_from_user(void *to, const void __user *from, unsigned long n)
extern void copy_from_user_overflow(void)
__compiletime_warning("copy_from_user() buffer size is not provably correct")
;
static inline unsigned long __must_check
copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long __must_check
__copy_in_user(void __user *to, const void __user *from, unsigned long n)
static inline unsigned long __must_check
copy_in_user(void __user *to, const void __user *from, unsigned long n)
static inline long __must_check
strncpy_from_user(char *dst, const char __user *src, long count)
static inline unsigned long
strnlen_user(const char __user * src, unsigned long n)
#define strlen_user(str) strnlen_user(str, ~0UL)
static inline unsigned long __must_check
__clear_user(void __user *to, unsigned long n)
static inline unsigned long __must_check
clear_user(void __user *to, unsigned long n)
