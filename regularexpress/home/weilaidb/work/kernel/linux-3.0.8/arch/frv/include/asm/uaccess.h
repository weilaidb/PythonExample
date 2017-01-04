#define _ASM_UACCESS_H
#define HAVE_ARCH_UNMAPPED_AREA
#define __ptr(x) ((unsigned long __force *)(x))
#define VERIFY_READ	0
#define VERIFY_WRITE	1
static inline int ___range_ok(unsigned long addr, unsigned long size)
#define __range_ok(addr,size) ___range_ok((unsigned long) (addr), (unsigned long) (size))
#define access_ok(type,addr,size) (__range_ok((void __user *)(addr), (size)) == 0)
#define __access_ok(addr,size) (__range_ok((addr), (size)) == 0)
struct exception_table_entry
;
extern unsigned long search_exception_table(unsigned long);
#define __put_user(x, ptr)						\
()
#define put_user(x, ptr)			\
()
extern int __put_user_bad(void);
#define __put_user_asm(err,x,ptr,dsize,constraint)					\
do  while (0)
#define __put_user_asm(err,x,ptr,bwl,con)	\
do  while (0)
#define __get_user(x, ptr)						\
()
#define get_user(x, ptr)			\
()
extern int __get_user_bad(void);
#define __get_user_asm(err,x,ptr,dtype,constraint)	\
do  while(0)
#define __get_user_asm(err,x,ptr,bwl,con)	\
asm("	ld"bwl"%I1	%M1,%0	\n"	\
"	membar			\n"	\
: con(x)				\
: "m" (*__ptr(ptr)))
#define ____force(x) (__force void *)(void __user *)(x)
extern long __memset_user(void *dst, unsigned long count);
extern long __memcpy_user(void *dst, const void *src, unsigned long count);
#define clear_user(dst,count)			__memset_user(____force(dst), (count))
#define __copy_from_user_inatomic(to, from, n)	__memcpy_user((to), ____force(from), (n))
#define __copy_to_user_inatomic(to, from, n)	__memcpy_user(____force(to), (from), (n))
#define clear_user(dst,count)			(memset(____force(dst), 0, (count)), 0)
#define __copy_from_user_inatomic(to, from, n)	(memcpy((to), ____force(from), (n)), 0)
#define __copy_to_user_inatomic(to, from, n)	(memcpy(____force(to), (from), (n)), 0)
#define __clear_user clear_user
static inline unsigned long __must_check
__copy_to_user(void __user *to, const void *from, unsigned long n)
static inline unsigned long
__copy_from_user(void *to, const void __user *from, unsigned long n)
static inline long copy_from_user(void *to, const void __user *from, unsigned long n)
static inline long copy_to_user(void __user *to, const void *from, unsigned long n)
extern long strncpy_from_user(char *dst, const char __user *src, long count);
extern long strnlen_user(const char __user *src, long count);
#define strlen_user(str) strnlen_user(str, 32767)
extern unsigned long search_exception_table(unsigned long addr);
