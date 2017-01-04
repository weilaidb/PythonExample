#define _ASM_UACCESS_H
#define KERNEL_DS   ((mm_segment_t) )
#define USER_DS     ((mm_segment_t) )
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define get_fs() ((mm_segment_t) )
#define get_ds() (KERNEL_DS)
#define segment_eq(a,b)  ((a).seg == (b).seg)
#define set_fs(val)								\
do  while(0)
static inline int __access_ok(const void __user * addr, unsigned long size)
static inline int access_ok(int type, const void __user * addr, unsigned long size)
struct exception_table_entry ;
extern void __ret_efault(void);
extern void __retl_efault(void);
#define put_user(x,ptr) ()
#define get_user(x,ptr) ()
#define __put_user(x,ptr) put_user(x,ptr)
#define __get_user(x,ptr) get_user(x,ptr)
struct __large_struct ;
#define __m(x) ((struct __large_struct *)(x))
#define __put_user_nocheck(data,addr,size) ()
#define __put_user_asm(x,size,addr,ret)					\
__asm__ __volatile__(							\
"\n"					\
"1:\t"	"st"#size "a %1, [%2] %%asi\n\t"				\
"clr	%0\n"							\
"2:\n\n\t"								\
".section .fixup,#alloc,#execinstr\n\t"				\
".align	4\n"							\
"3:\n\t"								\
"sethi	%%hi(2b), %0\n\t"					\
"jmpl	%0 + %%lo(2b), %%g0\n\t"				\
" mov	%3, %0\n\n\t"						\
".previous\n\t"							\
".section __ex_table,\"a\"\n\t"					\
".align	4\n\t"							\
".word	1b, 3b\n\t"						\
".previous\n\n\t"						\
: "=r" (ret) : "r" (x), "r" (__m(addr)),				\
"i" (-EFAULT))
extern int __put_user_bad(void);
#define __get_user_nocheck(data,addr,size,type) ()
#define __get_user_nocheck_ret(data,addr,size,type,retval) ()
#define __get_user_asm(x,size,addr,ret)					\
__asm__ __volatile__(							\
"\n"					\
"1:\t"	"ld"#size "a [%2] %%asi, %1\n\t"				\
"clr	%0\n"							\
"2:\n\n\t"								\
".section .fixup,#alloc,#execinstr\n\t"				\
".align	4\n"							\
"3:\n\t"								\
"sethi	%%hi(2b), %0\n\t"					\
"clr	%1\n\t"							\
"jmpl	%0 + %%lo(2b), %%g0\n\t"				\
" mov	%3, %0\n\n\t"						\
".previous\n\t"							\
".section __ex_table,\"a\"\n\t"					\
".align	4\n\t"							\
".word	1b, 3b\n\n\t"						\
".previous\n\t"							\
: "=r" (ret), "=r" (x) : "r" (__m(addr)),			\
"i" (-EFAULT))
#define __get_user_asm_ret(x,size,addr,retval)				\
if (__builtin_constant_p(retval) && retval == -EFAULT)			\
__asm__ __volatile__(							\
"\n"				\
"1:\t"	"ld"#size "a [%1] %%asi, %0\n\n\t"				\
".section __ex_table,\"a\"\n\t"					\
".align	4\n\t"							\
".word	1b,__ret_efault\n\n\t"					\
".previous\n\t"							\
: "=r" (x) : "r" (__m(addr)));					\
else									\
__asm__ __volatile__(							\
"\n"				\
"1:\t"	"ld"#size "a [%1] %%asi, %0\n\n\t"				\
".section .fixup,#alloc,#execinstr\n\t"				\
".align	4\n"							\
"3:\n\t"								\
"ret\n\t"							\
" restore %%g0, %2, %%o0\n\n\t"					\
".previous\n\t"							\
".section __ex_table,\"a\"\n\t"					\
".align	4\n\t"							\
".word	1b, 3b\n\n\t"						\
".previous\n\t"							\
: "=r" (x) : "r" (__m(addr)), "i" (retval))
extern int __get_user_bad(void);
extern unsigned long __must_check ___copy_from_user(void *to,
const void __user *from,
unsigned long size);
extern unsigned long copy_from_user_fixup(void *to, const void __user *from,
unsigned long size);
static inline unsigned long __must_check
copy_from_user(void *to, const void __user *from, unsigned long size)
#define __copy_from_user copy_from_user
extern unsigned long __must_check ___copy_to_user(void __user *to,
const void *from,
unsigned long size);
extern unsigned long copy_to_user_fixup(void __user *to, const void *from,
unsigned long size);
static inline unsigned long __must_check
copy_to_user(void __user *to, const void *from, unsigned long size)
#define __copy_to_user copy_to_user
extern unsigned long __must_check ___copy_in_user(void __user *to,
const void __user *from,
unsigned long size);
extern unsigned long copy_in_user_fixup(void __user *to, void __user *from,
unsigned long size);
static inline unsigned long __must_check
copy_in_user(void __user *to, void __user *from, unsigned long size)
#define __copy_in_user copy_in_user
extern unsigned long __must_check __clear_user(void __user *, unsigned long);
#define clear_user __clear_user
extern long __must_check __strncpy_from_user(char *dest, const char __user *src, long count);
#define strncpy_from_user __strncpy_from_user
extern long __strlen_user(const char __user *);
extern long __strnlen_user(const char __user *, long len);
#define strlen_user __strlen_user
#define strnlen_user __strnlen_user
#define __copy_to_user_inatomic ___copy_to_user
#define __copy_from_user_inatomic ___copy_from_user
