#define _ARCH_POWERPC_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define MAKE_MM_SEG(s)  ((mm_segment_t) )
#define KERNEL_DS	MAKE_MM_SEG(~0UL)
#define USER_DS		MAKE_MM_SEG(TASK_SIZE_USER64 - 1)
#define USER_DS		MAKE_MM_SEG(TASK_SIZE - 1)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current->thread.fs)
#define set_fs(val)	(current->thread.fs = (val))
#define segment_eq(a, b)	((a).seg == (b).seg)
#define __access_ok(addr, size, segment)	\
(((addr) <= (segment).seg) && ((size) <= (segment).seg))
#define __access_ok(addr, size, segment)	\
(((addr) <= (segment).seg) &&		\
(((size) == 0) || (((size) - 1) <= ((segment).seg - (addr)))))
#define access_ok(type, addr, size)		\
(__chk_user_ptr(addr),			\
__access_ok((__force unsigned long)(addr), (size), get_fs()))
struct exception_table_entry ;
#define get_user(x, ptr) \
__get_user_check((x), (ptr), sizeof(*(ptr)))
#define put_user(x, ptr) \
__put_user_check((__typeof__(*(ptr)))(x), (ptr), sizeof(*(ptr)))
#define __get_user(x, ptr) \
__get_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define __put_user(x, ptr) \
__put_user_nocheck((__typeof__(*(ptr)))(x), (ptr), sizeof(*(ptr)))
#define __get_user64(x, ptr) \
__get_user64_nocheck((x), (ptr), sizeof(*(ptr)))
#define __put_user64(x, ptr) __put_user(x, ptr)
#define __get_user_inatomic(x, ptr) \
__get_user_nosleep((x), (ptr), sizeof(*(ptr)))
#define __put_user_inatomic(x, ptr) \
__put_user_nosleep((__typeof__(*(ptr)))(x), (ptr), sizeof(*(ptr)))
#define __get_user_unaligned __get_user
#define __put_user_unaligned __put_user
extern long __put_user_bad(void);
#define __put_user_asm(x, addr, err, op)			\
__asm__ __volatile__(					\
"1:	" op " %1,0(%2)	# put_user\n"		\
"2:\n"						\
".section .fixup,\"ax\"\n"			\
"3:	li %0,%3\n"				\
"	b 2b\n"					\
".previous\n"					\
".section __ex_table,\"a\"\n"			\
PPC_LONG_ALIGN "\n"			\
PPC_LONG "1b,3b\n"			\
".previous"					\
: "=r" (err)					\
: "r" (x), "b" (addr), "i" (-EFAULT), "0" (err))
#define __put_user_asm2(x, ptr, retval)				\
__put_user_asm(x, ptr, retval, "std")
#define __put_user_asm2(x, addr, err)				\
__asm__ __volatile__(					\
"1:	stw %1,0(%2)\n"				\
"2:	stw %1+1,4(%2)\n"			\
"3:\n"						\
".section .fixup,\"ax\"\n"			\
"4:	li %0,%3\n"				\
"	b 3b\n"					\
".previous\n"					\
".section __ex_table,\"a\"\n"			\
PPC_LONG_ALIGN "\n"			\
PPC_LONG "1b,4b\n"			\
PPC_LONG "2b,4b\n"			\
".previous"					\
: "=r" (err)					\
: "r" (x), "b" (addr), "i" (-EFAULT), "0" (err))
#define __put_user_size(x, ptr, size, retval)			\
do  while (0)
#define __put_user_nocheck(x, ptr, size)			\
()
#define __put_user_check(x, ptr, size)					\
()
#define __put_user_nosleep(x, ptr, size)			\
()
extern long __get_user_bad(void);
#define __get_user_asm(x, addr, err, op)		\
__asm__ __volatile__(				\
"1:	"op" %1,0(%2)	# get_user\n"	\
"2:\n"					\
".section .fixup,\"ax\"\n"		\
"3:	li %0,%3\n"			\
"	li %1,0\n"			\
"	b 2b\n"				\
".previous\n"				\
".section __ex_table,\"a\"\n"		\
PPC_LONG_ALIGN "\n"		\
PPC_LONG "1b,3b\n"		\
".previous"				\
: "=r" (err), "=r" (x)			\
: "b" (addr), "i" (-EFAULT), "0" (err))
#define __get_user_asm2(x, addr, err)			\
__get_user_asm(x, addr, err, "ld")
#define __get_user_asm2(x, addr, err)			\
__asm__ __volatile__(				\
"1:	lwz %1,0(%2)\n"			\
"2:	lwz %1+1,4(%2)\n"		\
"3:\n"					\
".section .fixup,\"ax\"\n"		\
"4:	li %0,%3\n"			\
"	li %1,0\n"			\
"	li %1+1,0\n"			\
"	b 3b\n"				\
".previous\n"				\
".section __ex_table,\"a\"\n"		\
PPC_LONG_ALIGN "\n"		\
PPC_LONG "1b,4b\n"		\
PPC_LONG "2b,4b\n"		\
".previous"				\
: "=r" (err), "=&r" (x)			\
: "b" (addr), "i" (-EFAULT), "0" (err))
#define __get_user_size(x, ptr, size, retval)			\
do  while (0)
#define __get_user_nocheck(x, ptr, size)			\
()
#define __get_user64_nocheck(x, ptr, size)			\
()
#define __get_user_check(x, ptr, size)					\
()
#define __get_user_nosleep(x, ptr, size)			\
()
extern unsigned long __copy_tofrom_user(void __user *to,
const void __user *from, unsigned long size);
static inline unsigned long copy_from_user(void *to,
const void __user *from, unsigned long n)
static inline unsigned long copy_to_user(void __user *to,
const void *from, unsigned long n)
#define __copy_in_user(to, from, size) \
__copy_tofrom_user((to), (from), (size))
extern unsigned long copy_from_user(void *to, const void __user *from,
unsigned long n);
extern unsigned long copy_to_user(void __user *to, const void *from,
unsigned long n);
extern unsigned long copy_in_user(void __user *to, const void __user *from,
unsigned long n);
static inline unsigned long __copy_from_user_inatomic(void *to,
const void __user *from, unsigned long n)
static inline unsigned long __copy_to_user_inatomic(void __user *to,
const void *from, unsigned long n)
static inline unsigned long __copy_from_user(void *to,
const void __user *from, unsigned long size)
static inline unsigned long __copy_to_user(void __user *to,
const void *from, unsigned long size)
extern unsigned long __clear_user(void __user *addr, unsigned long size);
static inline unsigned long clear_user(void __user *addr, unsigned long size)
extern int __strncpy_from_user(char *dst, const char __user *src, long count);
static inline long strncpy_from_user(char *dst, const char __user *src,
long count)
extern int __strnlen_user(const char __user *str, long len, unsigned long top);
static inline int strnlen_user(const char __user *str, long len)
#define strlen_user(str)	strnlen_user((str), 0x7ffffffe)
