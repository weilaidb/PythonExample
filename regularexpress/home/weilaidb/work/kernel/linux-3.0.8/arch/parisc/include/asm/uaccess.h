#define __PARISC_UACCESS_H
#define VERIFY_READ 0
#define VERIFY_WRITE 1
#define KERNEL_DS	((mm_segment_t))
#define USER_DS 	((mm_segment_t))
#define segment_eq(a,b)	((a).seg == (b).seg)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
extern int __get_kernel_bad(void);
extern int __get_user_bad(void);
extern int __put_kernel_bad(void);
extern int __put_user_bad(void);
static inline long access_ok(int type, const void __user * addr,
unsigned long size)
#define put_user __put_user
#define get_user __get_user
#if !defined(CONFIG_64BIT)
#define LDD_KERNEL(ptr)		__get_kernel_bad();
#define LDD_USER(ptr)		__get_user_bad();
#define STD_KERNEL(x, ptr)	__put_kernel_asm64(x,ptr)
#define STD_USER(x, ptr)	__put_user_asm64(x,ptr)
#define ASM_WORD_INSN		".word\t"
#define LDD_KERNEL(ptr)		__get_kernel_asm("ldd",ptr)
#define LDD_USER(ptr)		__get_user_asm("ldd",ptr)
#define STD_KERNEL(x, ptr)	__put_kernel_asm("std",x,ptr)
#define STD_USER(x, ptr)	__put_user_asm("std",x,ptr)
#define ASM_WORD_INSN		".dword\t"
struct exception_table_entry ;
#define ASM_EXCEPTIONTABLE_ENTRY( fault_addr, except_addr )\
".section __ex_table,\"aw\"\n"			   \
ASM_WORD_INSN #fault_addr ", " #except_addr "\n\t" \
".previous\n"
struct exception_data ;
#define __get_user(x,ptr)                               \
()
#define __get_kernel_asm(ldx,ptr)                       \
__asm__("\n1:\t" ldx "\t0(%2),%0\n\t"		\
ASM_EXCEPTIONTABLE_ENTRY(1b, fixup_get_user_skip_1)\
: "=r"(__gu_val), "=r"(__gu_err)        \
: "r"(ptr), "1"(__gu_err)		\
: "r1");
#define __get_user_asm(ldx,ptr)                         \
__asm__("\n1:\t" ldx "\t0(%%sr3,%2),%0\n\t"	\
ASM_EXCEPTIONTABLE_ENTRY(1b,fixup_get_user_skip_1)\
: "=r"(__gu_val), "=r"(__gu_err)        \
: "r"(ptr), "1"(__gu_err)		\
: "r1");
#define __put_user(x,ptr)                                       \
()
#define __put_kernel_asm(stx,x,ptr)                         \
__asm__ __volatile__ (                              \
"\n1:\t" stx "\t%2,0(%1)\n\t"		    \
ASM_EXCEPTIONTABLE_ENTRY(1b,fixup_put_user_skip_1)\
: "=r"(__pu_err)                            \
: "r"(ptr), "r"(x), "0"(__pu_err)	    \
: "r1")
#define __put_user_asm(stx,x,ptr)                           \
__asm__ __volatile__ (                              \
"\n1:\t" stx "\t%2,0(%%sr3,%1)\n\t"	    \
ASM_EXCEPTIONTABLE_ENTRY(1b,fixup_put_user_skip_1)\
: "=r"(__pu_err)                            \
: "r"(ptr), "r"(x), "0"(__pu_err)	    \
: "r1")
#if !defined(CONFIG_64BIT)
#define __put_kernel_asm64(__val,ptr) do  while (0)
#define __put_user_asm64(__val,ptr) do  while (0)
extern unsigned long lcopy_to_user(void __user *, const void *, unsigned long);
extern unsigned long lcopy_from_user(void *, const void __user *, unsigned long);
extern unsigned long lcopy_in_user(void __user *, const void __user *, unsigned long);
extern long lstrncpy_from_user(char *, const char __user *, long);
extern unsigned lclear_user(void __user *,unsigned long);
extern long lstrnlen_user(const char __user *,long);
#define strncpy_from_user lstrncpy_from_user
#define strnlen_user lstrnlen_user
#define strlen_user(str) lstrnlen_user(str, 0x7fffffffL)
#define clear_user lclear_user
#define __clear_user lclear_user
unsigned long copy_to_user(void __user *dst, const void *src, unsigned long len);
#define __copy_to_user copy_to_user
unsigned long __copy_from_user(void *dst, const void __user *src, unsigned long len);
unsigned long copy_in_user(void __user *dst, const void __user *src, unsigned long len);
#define __copy_in_user copy_in_user
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
extern void copy_from_user_overflow(void)
__compiletime_error("copy_from_user() buffer size is not provably correct")
__compiletime_warning("copy_from_user() buffer size is not provably correct")
;
static inline unsigned long __must_check copy_from_user(void *to,
const void __user *from,
unsigned long n)
struct pt_regs;
int fixup_exception(struct pt_regs *regs);
