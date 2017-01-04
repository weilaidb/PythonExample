#define _ASM_UACCESS_H
#define ARCH_HAS_SORT_EXTABLE
#define ARCH_HAS_SEARCH_EXTABLE
#define KERNEL_DS   ((mm_segment_t) )
#define USER_DS     ((mm_segment_t) )
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current->thread.current_ds)
#define set_fs(val)	((current->thread.current_ds) = (val))
#define segment_eq(a,b)	((a).seg == (b).seg)
#define __user_ok(addr, size) ()
#define __kernel_ok (segment_eq(get_fs(), KERNEL_DS))
#define __access_ok(addr,size) (__user_ok((addr) & get_fs().seg,(size)))
#define access_ok(type, addr, size)					\
()
struct exception_table_entry
;
extern unsigned long search_extables_range(unsigned long addr, unsigned long *g2);
extern void __ret_efault(void);
#define put_user(x,ptr) ()
#define get_user(x,ptr) ()
#define __put_user(x,ptr) __put_user_nocheck((__typeof__(*(ptr)))(x),(ptr),sizeof(*(ptr)))
#define __get_user(x,ptr) __get_user_nocheck((x),(ptr),sizeof(*(ptr)),__typeof__(*(ptr)))
struct __large_struct ;
#define __m(x) ((struct __large_struct __user *)(x))
#define __put_user_check(x,addr,size) ()
#define __put_user_nocheck(x,addr,size) ()
#define __put_user_asm(x,size,addr,ret)					\
__asm__ __volatile__(							\
"\n"					\
"1:\t"	"st"#size " %1, %2\n\t"						\
"clr	%0\n"							\
"2:\n\n\t"								\
".section .fixup,#alloc,#execinstr\n\t"				\
".align	4\n"							\
"3:\n\t"								\
"b	2b\n\t"							\
" mov	%3, %0\n\t"						\
".previous\n\n\t"						\
".section __ex_table,#alloc\n\t"				\
".align	4\n\t"							\
".word	1b, 3b\n\t"						\
".previous\n\n\t"						\
: "=&r" (ret) : "r" (x), "m" (*__m(addr)),			\
"i" (-EFAULT))
extern int __put_user_bad(void);
#define __get_user_check(x,addr,size,type) ()
#define __get_user_check_ret(x,addr,size,type,retval) ()
#define __get_user_nocheck(x,addr,size,type) ()
#define __get_user_nocheck_ret(x,addr,size,type,retval) ()
#define __get_user_asm(x,size,addr,ret)					\
__asm__ __volatile__(							\
"\n"					\
"1:\t"	"ld"#size " %2, %1\n\t"						\
"clr	%0\n"							\
"2:\n\n\t"								\
".section .fixup,#alloc,#execinstr\n\t"				\
".align	4\n"							\
"3:\n\t"								\
"clr	%1\n\t"							\
"b	2b\n\t"							\
" mov	%3, %0\n\n\t"						\
".previous\n\t"							\
".section __ex_table,#alloc\n\t"				\
".align	4\n\t"							\
".word	1b, 3b\n\n\t"						\
".previous\n\t"							\
: "=&r" (ret), "=&r" (x) : "m" (*__m(addr)),			\
"i" (-EFAULT))
#define __get_user_asm_ret(x,size,addr,retval)				\
if (__builtin_constant_p(retval) && retval == -EFAULT)			\
__asm__ __volatile__(							\
"\n"				\
"1:\t"	"ld"#size " %1, %0\n\n\t"					\
".section __ex_table,#alloc\n\t"				\
".align	4\n\t"							\
".word	1b,__ret_efault\n\n\t"					\
".previous\n\t"							\
: "=&r" (x) : "m" (*__m(addr)));					\
else									\
__asm__ __volatile__(							\
"\n"				\
"1:\t"	"ld"#size " %1, %0\n\n\t"					\
".section .fixup,#alloc,#execinstr\n\t"				\
".align	4\n"							\
"3:\n\t"								\
"ret\n\t"							\
" restore %%g0, %2, %%o0\n\n\t"					\
".previous\n\t"							\
".section __ex_table,#alloc\n\t"				\
".align	4\n\t"							\
".word	1b, 3b\n\n\t"						\
".previous\n\t"							\
: "=&r" (x) : "m" (*__m(addr)), "i" (retval))
extern int __get_user_bad(void);
extern unsigned long __copy_user(void __user *to, const void __user *from, unsigned long size);
static inline unsigned long copy_to_user(void __user *to, const void *from, unsigned long n)
static inline unsigned long __copy_to_user(void __user *to, const void *from, unsigned long n)
static inline unsigned long copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long __copy_from_user(void *to, const void __user *from, unsigned long n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
static inline unsigned long __clear_user(void __user *addr, unsigned long size)
static inline unsigned long clear_user(void __user *addr, unsigned long n)
extern long __strncpy_from_user(char *dest, const char __user *src, long count);
static inline long strncpy_from_user(char *dest, const char __user *src, long count)
extern long __strlen_user(const char __user *);
extern long __strnlen_user(const char __user *, long len);
static inline long strlen_user(const char __user *str)
static inline long strnlen_user(const char __user *str, long len)
