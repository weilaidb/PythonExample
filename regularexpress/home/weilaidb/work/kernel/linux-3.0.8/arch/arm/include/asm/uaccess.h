#define _ASMARM_UACCESS_H
#define VERIFY_READ 0
#define VERIFY_WRITE 1
struct exception_table_entry
;
extern int fixup_exception(struct pt_regs *regs);
extern int __get_user_bad(void);
extern int __put_user_bad(void);
#define KERNEL_DS	0x00000000
#define get_ds()	(KERNEL_DS)
#define USER_DS		TASK_SIZE
#define get_fs()	(current_thread_info()->addr_limit)
static inline void set_fs(mm_segment_t fs)
#define segment_eq(a,b)	((a) == (b))
#define __addr_ok(addr) ()
#define __range_ok(addr,size) ()
extern int __get_user_1(void *);
extern int __get_user_2(void *);
extern int __get_user_4(void *);
#define __get_user_x(__r2,__p,__e,__s,__i...)				\
__asm__ __volatile__ (					\
__asmeq("%0", "r0") __asmeq("%1", "r2")			\
"bl	__get_user_" #__s				\
: "=&r" (__e), "=r" (__r2)				\
: "0" (__p)						\
: __i, "cc")
#define get_user(x,p)							\
()
extern int __put_user_1(void *, unsigned int);
extern int __put_user_2(void *, unsigned int);
extern int __put_user_4(void *, unsigned int);
extern int __put_user_8(void *, unsigned long long);
#define __put_user_x(__r2,__p,__e,__s)					\
__asm__ __volatile__ (					\
__asmeq("%0", "r0") __asmeq("%2", "r2")			\
"bl	__put_user_" #__s				\
: "=&r" (__e)						\
: "0" (__p), "r" (__r2)					\
: "ip", "lr", "cc")
#define put_user(x,p)							\
()
#define USER_DS			KERNEL_DS
#define segment_eq(a,b)		(1)
#define __addr_ok(addr)		(1)
#define __range_ok(addr,size)	(0)
#define get_fs()		(KERNEL_DS)
static inline void set_fs(mm_segment_t fs)
#define get_user(x,p)	__get_user(x,p)
#define put_user(x,p)	__put_user(x,p)
#define access_ok(type,addr,size)	(__range_ok(addr,size) == 0)
#define __get_user(x,ptr)						\
()
#define __get_user_error(x,ptr,err)					\
()
#define __get_user_err(x,ptr,err)					\
do  while (0)
#define __get_user_asm_byte(x,addr,err)				\
__asm__ __volatile__(					\
"1:	" T(ldrb) "	%1,[%2],#0\n"			\
"2:\n"							\
"	.pushsection .fixup,\"ax\"\n"			\
"	.align	2\n"					\
"3:	mov	%0, %3\n"				\
"	mov	%1, #0\n"				\
"	b	2b\n"					\
"	.popsection\n"					\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"					\
"	.long	1b, 3b\n"				\
"	.popsection"					\
: "+r" (err), "=&r" (x)					\
: "r" (addr), "i" (-EFAULT)				\
: "cc")
#define __get_user_asm_half(x,__gu_addr,err)			\
()
#define __get_user_asm_half(x,__gu_addr,err)			\
()
#define __get_user_asm_word(x,addr,err)				\
__asm__ __volatile__(					\
"1:	" T(ldr) "	%1,[%2],#0\n"			\
"2:\n"							\
"	.pushsection .fixup,\"ax\"\n"			\
"	.align	2\n"					\
"3:	mov	%0, %3\n"				\
"	mov	%1, #0\n"				\
"	b	2b\n"					\
"	.popsection\n"					\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"					\
"	.long	1b, 3b\n"				\
"	.popsection"					\
: "+r" (err), "=&r" (x)					\
: "r" (addr), "i" (-EFAULT)				\
: "cc")
#define __put_user(x,ptr)						\
()
#define __put_user_error(x,ptr,err)					\
()
#define __put_user_err(x,ptr,err)					\
do  while (0)
#define __put_user_asm_byte(x,__pu_addr,err)			\
__asm__ __volatile__(					\
"1:	" T(strb) "	%1,[%2],#0\n"			\
"2:\n"							\
"	.pushsection .fixup,\"ax\"\n"			\
"	.align	2\n"					\
"3:	mov	%0, %3\n"				\
"	b	2b\n"					\
"	.popsection\n"					\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"					\
"	.long	1b, 3b\n"				\
"	.popsection"					\
: "+r" (err)						\
: "r" (x), "r" (__pu_addr), "i" (-EFAULT)		\
: "cc")
#define __put_user_asm_half(x,__pu_addr,err)			\
()
#define __put_user_asm_half(x,__pu_addr,err)			\
()
#define __put_user_asm_word(x,__pu_addr,err)			\
__asm__ __volatile__(					\
"1:	" T(str) "	%1,[%2],#0\n"			\
"2:\n"							\
"	.pushsection .fixup,\"ax\"\n"			\
"	.align	2\n"					\
"3:	mov	%0, %3\n"				\
"	b	2b\n"					\
"	.popsection\n"					\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"					\
"	.long	1b, 3b\n"				\
"	.popsection"					\
: "+r" (err)						\
: "r" (x), "r" (__pu_addr), "i" (-EFAULT)		\
: "cc")
#define	__reg_oper0	"%R2"
#define	__reg_oper1	"%Q2"
#define	__reg_oper0	"%Q2"
#define	__reg_oper1	"%R2"
#define __put_user_asm_dword(x,__pu_addr,err)			\
__asm__ __volatile__(					\
ARM(	"1:	" T(str) "	" __reg_oper1 ", [%1], #4\n"	)	\
ARM(	"2:	" T(str) "	" __reg_oper0 ", [%1]\n"	)	\
THUMB(	"1:	" T(str) "	" __reg_oper1 ", [%1]\n"	)	\
THUMB(	"2:	" T(str) "	" __reg_oper0 ", [%1, #4]\n"	)	\
"3:\n"							\
"	.pushsection .fixup,\"ax\"\n"			\
"	.align	2\n"					\
"4:	mov	%0, %3\n"				\
"	b	3b\n"					\
"	.popsection\n"					\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"					\
"	.long	1b, 4b\n"				\
"	.long	2b, 4b\n"				\
"	.popsection"					\
: "+r" (err), "+r" (__pu_addr)				\
: "r" (x), "i" (-EFAULT)				\
: "cc")
extern unsigned long __must_check __copy_from_user(void *to, const void __user *from, unsigned long n);
extern unsigned long __must_check __copy_to_user(void __user *to, const void *from, unsigned long n);
extern unsigned long __must_check __copy_to_user_std(void __user *to, const void *from, unsigned long n);
extern unsigned long __must_check __clear_user(void __user *addr, unsigned long n);
extern unsigned long __must_check __clear_user_std(void __user *addr, unsigned long n);
#define __copy_from_user(to,from,n)	(memcpy(to, (void __force *)from, n), 0)
#define __copy_to_user(to,from,n)	(memcpy((void __force *)to, from, n), 0)
#define __clear_user(addr,n)		(memset((void __force *)addr, 0, n), 0)
extern unsigned long __must_check __strncpy_from_user(char *to, const char __user *from, unsigned long count);
extern unsigned long __must_check __strnlen_user(const char __user *s, long n);
static inline unsigned long __must_check copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long __must_check copy_to_user(void __user *to, const void *from, unsigned long n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
static inline unsigned long __must_check clear_user(void __user *to, unsigned long n)
static inline long __must_check strncpy_from_user(char *dst, const char __user *src, long count)
#define strlen_user(s)	strnlen_user(s, ~0UL >> 1)
static inline long __must_check strnlen_user(const char __user *s, long n)
