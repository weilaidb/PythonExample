#define __H8300_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define access_ok(type, addr, size) __access_ok((unsigned long)addr,size)
static inline int __access_ok(unsigned long addr, unsigned long size)
struct exception_table_entry
;
extern unsigned long search_exception_table(unsigned long);
#define put_user(x, ptr)				\
()
#define __put_user(x, ptr) put_user(x, ptr)
extern int __put_user_bad(void);
#define __ptr(x) ((unsigned long *)(x))
#define get_user(x, ptr)					\
()
#define __get_user(x, ptr) get_user(x, ptr)
extern int __get_user_bad(void);
#define copy_from_user(to, from, n)		(memcpy(to, from, n), 0)
#define copy_to_user(to, from, n)		(memcpy(to, from, n), 0)
#define __copy_from_user(to, from, n) copy_from_user(to, from, n)
#define __copy_to_user(to, from, n) copy_to_user(to, from, n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
#define copy_to_user_ret(to,from,n,retval) ()
#define copy_from_user_ret(to,from,n,retval) ()
static inline long
strncpy_from_user(char *dst, const char *src, long count)
static inline long strnlen_user(const char *src, long n)
#define strlen_user(str) strnlen_user(str, 32767)
static inline unsigned long
clear_user(void *to, unsigned long n)
