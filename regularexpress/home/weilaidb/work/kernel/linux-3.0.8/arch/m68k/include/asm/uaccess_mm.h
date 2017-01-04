#define __M68K_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
static inline int access_ok(int type, const void __user *addr,
unsigned long size)
struct exception_table_entry
;
extern int __put_user_bad(void);
extern int __get_user_bad(void);
#define __put_user_asm(res, x, ptr, bwl, reg, err)	\
asm volatile ("\n"					\
"1:	moves."#bwl"	%2,%1\n"		\
"2:\n"						\
"	.section .fixup,\"ax\"\n"		\
"	.even\n"				\
"10:	moveq.l	%3,%0\n"			\
"	jra 2b\n"				\
"	.previous\n"				\
"\n"						\
"	.section __ex_table,\"a\"\n"		\
"	.align	4\n"				\
"	.long	1b,10b\n"			\
"	.long	2b,10b\n"			\
"	.previous"				\
: "+d" (res), "=m" (*(ptr))			\
: #reg (x), "i" (err))
#define __put_user(x, ptr)						\
()
#define put_user(x, ptr)	__put_user(x, ptr)
#define __get_user_asm(res, x, ptr, type, bwl, reg, err) ()
#define __get_user(x, ptr)						\
()
#define get_user(x, ptr) __get_user(x, ptr)
unsigned long __generic_copy_from_user(void *to, const void __user *from, unsigned long n);
unsigned long __generic_copy_to_user(void __user *to, const void *from, unsigned long n);
#define __constant_copy_from_user_asm(res, to, from, tmp, n, s1, s2, s3)\
asm volatile ("\n"						\
"1:	moves."#s1"	(%2)+,%3\n"			\
"	move."#s1"	%3,(%1)+\n"			\
"2:	moves."#s2"	(%2)+,%3\n"			\
"	move."#s2"	%3,(%1)+\n"			\
"	.ifnc	\""#s3"\",\"\"\n"			\
"3:	moves."#s3"	(%2)+,%3\n"			\
"	move."#s3"	%3,(%1)+\n"			\
"	.endif\n"					\
"4:\n"							\
"	.section __ex_table,\"a\"\n"			\
"	.align	4\n"					\
"	.long	1b,10f\n"				\
"	.long	2b,20f\n"				\
"	.ifnc	\""#s3"\",\"\"\n"			\
"	.long	3b,30f\n"				\
"	.endif\n"					\
"	.previous\n"					\
"\n"							\
"	.section .fixup,\"ax\"\n"			\
"	.even\n"					\
"10:	clr."#s1"	(%1)+\n"			\
"20:	clr."#s2"	(%1)+\n"			\
"	.ifnc	\""#s3"\",\"\"\n"			\
"30:	clr."#s3"	(%1)+\n"			\
"	.endif\n"					\
"	moveq.l	#"#n",%0\n"				\
"	jra	4b\n"					\
"	.previous\n"					\
: "+d" (res), "+&a" (to), "+a" (from), "=&d" (tmp)	\
: : "memory")
static __always_inline unsigned long
__constant_copy_from_user(void *to, const void __user *from, unsigned long n)
#define __constant_copy_to_user_asm(res, to, from, tmp, n, s1, s2, s3)	\
asm volatile ("\n"						\
"	move."#s1"	(%2)+,%3\n"			\
"11:	moves."#s1"	%3,(%1)+\n"			\
"12:	move."#s2"	(%2)+,%3\n"			\
"21:	moves."#s2"	%3,(%1)+\n"			\
"22:\n"							\
"	.ifnc	\""#s3"\",\"\"\n"			\
"	move."#s3"	(%2)+,%3\n"			\
"31:	moves."#s3"	%3,(%1)+\n"			\
"32:\n"							\
"	.endif\n"					\
"4:\n"							\
"\n"							\
"	.section __ex_table,\"a\"\n"			\
"	.align	4\n"					\
"	.long	11b,5f\n"				\
"	.long	12b,5f\n"				\
"	.long	21b,5f\n"				\
"	.long	22b,5f\n"				\
"	.ifnc	\""#s3"\",\"\"\n"			\
"	.long	31b,5f\n"				\
"	.long	32b,5f\n"				\
"	.endif\n"					\
"	.previous\n"					\
"\n"							\
"	.section .fixup,\"ax\"\n"			\
"	.even\n"					\
"5:	moveq.l	#"#n",%0\n"				\
"	jra	4b\n"					\
"	.previous\n"					\
: "+d" (res), "+a" (to), "+a" (from), "=&d" (tmp)	\
: : "memory")
static __always_inline unsigned long
__constant_copy_to_user(void __user *to, const void *from, unsigned long n)
#define __copy_from_user(to, from, n)		\
(__builtin_constant_p(n) ?			\
__constant_copy_from_user(to, from, n) :	\
__generic_copy_from_user(to, from, n))
#define __copy_to_user(to, from, n)		\
(__builtin_constant_p(n) ?			\
__constant_copy_to_user(to, from, n) :		\
__generic_copy_to_user(to, from, n))
#define __copy_to_user_inatomic		__copy_to_user
#define __copy_from_user_inatomic	__copy_from_user
#define copy_from_user(to, from, n)	__copy_from_user(to, from, n)
#define copy_to_user(to, from, n)	__copy_to_user(to, from, n)
long strncpy_from_user(char *dst, const char __user *src, long count);
long strnlen_user(const char __user *src, long n);
unsigned long __clear_user(void __user *to, unsigned long n);
#define clear_user	__clear_user
#define strlen_user(str) strnlen_user(str, 32767)
