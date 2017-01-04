#define _ASM_MICROBLAZE_UACCESS_H
#define VERIFY_READ	0
#define VERIFY_WRITE	1
# define MAKE_MM_SEG(s)       ((mm_segment_t) )
#  ifndef CONFIG_MMU
#  define KERNEL_DS	MAKE_MM_SEG(0)
#  define USER_DS	KERNEL_DS
#  else
#  define KERNEL_DS	MAKE_MM_SEG(0xFFFFFFFF)
#  define USER_DS	MAKE_MM_SEG(TASK_SIZE - 1)
#  endif
# define get_ds()	(KERNEL_DS)
# define get_fs()	(current_thread_info()->addr_limit)
# define set_fs(val)	(current_thread_info()->addr_limit = (val))
# define segment_eq(a, b)	((a).seg == (b).seg)
struct exception_table_entry ;
extern unsigned long search_exception_table(unsigned long);
static inline int ___range_ok(unsigned long addr, unsigned long size)
#define __range_ok(addr, size) \
___range_ok((unsigned long)(addr), (unsigned long)(size))
#define access_ok(type, addr, size) (__range_ok((addr), (size)) == 0)
#define access_ok(type, addr, size) \
(get_fs().seg > (((unsigned long)(addr)) | \
(size) | ((unsigned long)(addr) + (size))))
# define __FIXUP_SECTION	".section .fixup,\"ax\"\n"
# define __EX_TABLE_SECTION	".section __ex_table,\"a\"\n"
# define __FIXUP_SECTION	".section .discard,\"ax\"\n"
# define __EX_TABLE_SECTION	".section .discard,\"a\"\n"
extern unsigned long __copy_tofrom_user(void __user *to,
const void __user *from, unsigned long size);
static inline unsigned long __must_check __clear_user(void __user *to,
unsigned long n)
static inline unsigned long __must_check clear_user(void __user *to,
unsigned long n)
extern long __user_bad(void);
#define __get_user_asm(insn, __gu_ptr, __gu_val, __gu_err)	\
()
#define get_user(x, ptr)						\
__get_user_check((x), (ptr), sizeof(*(ptr)))
#define __get_user_check(x, ptr, size)					\
()
#define __get_user(x, ptr)						\
()
#define __put_user_asm(insn, __gu_ptr, __gu_val, __gu_err)	\
()
#define __put_user_asm_8(__gu_ptr, __gu_val, __gu_err)		\
()
#define put_user(x, ptr)						\
__put_user_check((x), (ptr), sizeof(*(ptr)))
#define __put_user_check(x, ptr, size)					\
()
#define __put_user(x, ptr)						\
()
#define __copy_from_user(to, from, n)	\
__copy_tofrom_user((__force void __user *)(to), \
(void __user *)(from), (n))
#define __copy_from_user_inatomic(to, from, n) \
__copy_from_user((to), (from), (n))
static inline long copy_from_user(void *to,
const void __user *from, unsigned long n)
#define __copy_to_user(to, from, n)	\
__copy_tofrom_user((void __user *)(to), \
(__force const void __user *)(from), (n))
#define __copy_to_user_inatomic(to, from, n) __copy_to_user((to), (from), (n))
static inline long copy_to_user(void __user *to,
const void *from, unsigned long n)
extern int __strncpy_user(char *to, const char __user *from, int len);
#define __strncpy_from_user	__strncpy_user
static inline long
strncpy_from_user(char *dst, const char __user *src, long count)
extern int __strnlen_user(const char __user *sstr, int len);
static inline long strnlen_user(const char __user *src, long n)
