#define __SCORE_UACCESS_H
#define VERIFY_READ		0
#define VERIFY_WRITE		1
#define get_ds()		(KERNEL_DS)
#define get_fs()		(current_thread_info()->addr_limit)
#define segment_eq(a, b)	((a).seg == (b).seg)
#define __ua_size(size)							\
((__builtin_constant_p(size) && (signed long) (size) > 0) ? 0 : (size))
#define __access_ok(addr, size)					\
(((long)((get_fs().seg) &				\
((addr) | ((addr) + (size)) |			\
__ua_size(size)))) == 0)
#define access_ok(type, addr, size)				\
likely(__access_ok((unsigned long)(addr), (size)))
#define put_user(x, ptr) __put_user_check((x), (ptr), sizeof(*(ptr)))
#define get_user(x, ptr) __get_user_check((x), (ptr), sizeof(*(ptr)))
#define __put_user(x, ptr) __put_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define __get_user(x, ptr) __get_user_nocheck((x), (ptr), sizeof(*(ptr)))
struct __large_struct ;
#define __m(x) (*(struct __large_struct __user *)(x))
extern void __get_user_unknown(void);
#define __get_user_common(val, size, ptr)				\
do  while (0)
#define __get_user_nocheck(x, ptr, size)				\
()
#define __get_user_check(x, ptr, size)					\
()
#define __get_user_asm(val, insn, addr)					\
#define __put_user_nocheck(val, ptr, size)				\
()
#define __put_user_check(val, ptr, size)				\
()
#define __put_user_asm(insn, ptr)					\
__asm__ __volatile__(						\
"1:" insn " %2, %3\n"					\
"2:\n"							\
".section .fixup,\"ax\"\n"				\
"3:li %0, %4\n"						\
"j 2b\n"						\
".previous\n"						\
".section __ex_table,\"a\"\n"				\
".word 1b, 3b\n"					\
".previous\n"						\
: "=r" (__pu_err)					\
: "0" (0), "r" (__pu_val), "o" (__m(ptr)),		\
"i" (-EFAULT));
extern void __put_user_unknown(void);
extern int __copy_tofrom_user(void *to, const void *from, unsigned long len);
static inline unsigned long
copy_from_user(void *to, const void *from, unsigned long len)
static inline unsigned long
copy_to_user(void *to, const void *from, unsigned long len)
#define __copy_from_user(to, from, len)	\
__copy_tofrom_user((to), (from), (len))
#define __copy_to_user(to, from, len)		\
__copy_tofrom_user((to), (from), (len))
static inline unsigned long
__copy_to_user_inatomic(void *to, const void *from, unsigned long len)
static inline unsigned long
__copy_from_user_inatomic(void *to, const void *from, unsigned long len)
#define __copy_in_user(to, from, len)	__copy_from_user(to, from, len)
static inline unsigned long
copy_in_user(void *to, const void *from, unsigned long len)
extern unsigned long __clear_user(void __user *src, unsigned long size);
static inline unsigned long clear_user(char *src, unsigned long size)
extern int __strncpy_from_user(char *dst, const char *src, long len);
static inline int strncpy_from_user(char *dst, const char *src, long len)
extern int __strlen_user(const char *src);
static inline long strlen_user(const char __user *src)
extern int __strnlen_user(const char *str, long len);
static inline long strnlen_user(const char __user *str, long len)
struct exception_table_entry ;
extern int fixup_exception(struct pt_regs *regs);
