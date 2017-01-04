#define __ALPHA_UACCESS_H
#define KERNEL_DS	((mm_segment_t) )
#define USER_DS		((mm_segment_t) )
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define get_fs()  (current_thread_info()->addr_limit)
#define get_ds()  (KERNEL_DS)
#define set_fs(x) (current_thread_info()->addr_limit = (x))
#define segment_eq(a,b)	((a).seg == (b).seg)
#define __access_ok(addr,size,segment) \
(((segment).seg & (addr | size | (addr+size))) == 0)
#define access_ok(type,addr,size)				\
()
#define put_user(x,ptr) \
__put_user_check((__typeof__(*(ptr)))(x),(ptr),sizeof(*(ptr)),get_fs())
#define get_user(x,ptr) \
__get_user_check((x),(ptr),sizeof(*(ptr)),get_fs())
#define __put_user(x,ptr) \
__put_user_nocheck((__typeof__(*(ptr)))(x),(ptr),sizeof(*(ptr)))
#define __get_user(x,ptr) \
__get_user_nocheck((x),(ptr),sizeof(*(ptr)))
extern void __get_user_unknown(void);
#define __get_user_nocheck(x,ptr,size)				\
()
#define __get_user_check(x,ptr,size,segment)				\
()
struct __large_struct ;
#define __m(x) (*(struct __large_struct __user *)(x))
#define __get_user_64(addr)				\
__asm__("1: ldq %0,%2\n"			\
"2:\n"						\
".section __ex_table,\"a\"\n"			\
"	.long 1b - .\n"				\
"	lda %0, 2b-1b(%1)\n"			\
".previous"					\
: "=r"(__gu_val), "=r"(__gu_err)	\
: "m"(__m(addr)), "1"(__gu_err))
#define __get_user_32(addr)				\
__asm__("1: ldl %0,%2\n"			\
"2:\n"						\
".section __ex_table,\"a\"\n"			\
"	.long 1b - .\n"				\
"	lda %0, 2b-1b(%1)\n"			\
".previous"					\
: "=r"(__gu_val), "=r"(__gu_err)	\
: "m"(__m(addr)), "1"(__gu_err))
#define __get_user_16(addr)				\
__asm__("1: ldwu %0,%2\n"			\
"2:\n"						\
".section __ex_table,\"a\"\n"			\
"	.long 1b - .\n"				\
"	lda %0, 2b-1b(%1)\n"			\
".previous"					\
: "=r"(__gu_val), "=r"(__gu_err)	\
: "m"(__m(addr)), "1"(__gu_err))
#define __get_user_8(addr)				\
__asm__("1: ldbu %0,%2\n"			\
"2:\n"						\
".section __ex_table,\"a\"\n"			\
"	.long 1b - .\n"				\
"	lda %0, 2b-1b(%1)\n"			\
".previous"					\
: "=r"(__gu_val), "=r"(__gu_err)	\
: "m"(__m(addr)), "1"(__gu_err))
#define __get_user_16(addr)						\
#define __get_user_8(addr)						\
__asm__("1: ldq_u %0,0(%2)\n"					\
"	extbl %0,%2,%0\n"					\
"2:\n"								\
".section __ex_table,\"a\"\n"					\
"	.long 1b - .\n"						\
"	lda %0, 2b-1b(%1)\n"					\
".previous"							\
: "=&r"(__gu_val), "=r"(__gu_err)			\
: "r"(addr), "1"(__gu_err))
extern void __put_user_unknown(void);
#define __put_user_nocheck(x,ptr,size)				\
()
#define __put_user_check(x,ptr,size,segment)				\
()
#define __put_user_64(x,addr)					\
__asm__ __volatile__("1: stq %r2,%1\n"				\
"2:\n"							\
".section __ex_table,\"a\"\n"				\
"	.long 1b - .\n"					\
"	lda $31,2b-1b(%0)\n"				\
".previous"						\
: "=r"(__pu_err)				\
: "m" (__m(addr)), "rJ" (x), "0"(__pu_err))
#define __put_user_32(x,addr)					\
__asm__ __volatile__("1: stl %r2,%1\n"				\
"2:\n"							\
".section __ex_table,\"a\"\n"				\
"	.long 1b - .\n"					\
"	lda $31,2b-1b(%0)\n"				\
".previous"						\
: "=r"(__pu_err)				\
: "m"(__m(addr)), "rJ"(x), "0"(__pu_err))
#define __put_user_16(x,addr)					\
__asm__ __volatile__("1: stw %r2,%1\n"				\
"2:\n"							\
".section __ex_table,\"a\"\n"				\
"	.long 1b - .\n"					\
"	lda $31,2b-1b(%0)\n"				\
".previous"						\
: "=r"(__pu_err)				\
: "m"(__m(addr)), "rJ"(x), "0"(__pu_err))
#define __put_user_8(x,addr)					\
__asm__ __volatile__("1: stb %r2,%1\n"				\
"2:\n"							\
".section __ex_table,\"a\"\n"				\
"	.long 1b - .\n"					\
"	lda $31,2b-1b(%0)\n"				\
".previous"						\
: "=r"(__pu_err)				\
: "m"(__m(addr)), "rJ"(x), "0"(__pu_err))
#define __put_user_16(x,addr)					\
#define __put_user_8(x,addr)					\
#define __module_address(sym)		"r"(sym),
#define __module_call(ra, arg, sym)	"jsr $" #ra ",(%" #arg ")," #sym
#define __module_address(sym)
#define __module_call(ra, arg, sym)	"bsr $" #ra "," #sym " !samegp"
extern void __copy_user(void);
extern inline long
__copy_tofrom_user_nocheck(void *to, const void *from, long len)
extern inline long
__copy_tofrom_user(void *to, const void *from, long len, const void __user *validate)
#define __copy_to_user(to,from,n)					\
()
#define __copy_from_user(to,from,n)					\
()
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
extern inline long
copy_to_user(void __user *to, const void *from, long n)
extern inline long
copy_from_user(void *to, const void __user *from, long n)
extern void __do_clear_user(void);
extern inline long
__clear_user(void __user *to, long len)
extern inline long
clear_user(void __user *to, long len)
#undef __module_address
#undef __module_call
extern long __strncpy_from_user(char *__to, const char __user *__from, long __to_len);
extern inline long
strncpy_from_user(char *to, const char __user *from, long n)
extern long __strlen_user(const char __user *);
extern inline long strlen_user(const char __user *str)
extern long __strnlen_user(const char __user *, long);
extern inline long strnlen_user(const char __user *str, long n)
struct exception_table_entry
;
#define fixup_exception(map_reg, _fixup, pc)			\
()
#define ARCH_HAS_SORT_EXTABLE
#define ARCH_HAS_SEARCH_EXTABLE
