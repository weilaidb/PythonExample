#define __M68KNOMMU_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define access_ok(type,addr,size)	_access_ok((unsigned long)(addr),(size))
static inline int _access_ok(unsigned long addr, unsigned long size)
struct exception_table_entry
;
extern unsigned long search_exception_table(unsigned long);
#define put_user(x, ptr)				\
()
#define __put_user(x, ptr) put_user(x, ptr)
extern int __put_user_bad(void);
#define __ptr(x) ((unsigned long *)(x))
#define __put_user_asm(err,x,ptr,bwl)				\
__asm__ ("move" #bwl " %0,%1"				\
:						\
:"d" (x),"m" (*__ptr(ptr)) : "memory")
#define get_user(x, ptr)					\
()
#define __get_user(x, ptr) get_user(x, ptr)
extern int __get_user_bad(void);
#define __get_user_asm(err,x,ptr,bwl,reg)			\
__asm__ ("move" #bwl " %1,%0"				\
: "=d" (x)					\
: "m" (*__ptr(ptr)))
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
__clear_user(void *to, unsigned long n)
#define	clear_user(to,n)	__clear_user(to,n)
