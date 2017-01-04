#define _ASM_UACCESS_H
#define VERIFY_READ 0
#define VERIFY_WRITE 1
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define KERNEL_XDS	MAKE_MM_SEG(0xBFFFFFFF)
#define KERNEL_DS	MAKE_MM_SEG(0x9FFFFFFF)
#define USER_DS		MAKE_MM_SEG(TASK_SIZE)
#define get_ds()	(KERNEL_DS)
#define get_fs()	(current_thread_info()->addr_limit)
#define set_fs(x)	(current_thread_info()->addr_limit = (x))
#define __kernel_ds_p() (current_thread_info()->addr_limit.seg == 0x9FFFFFFF)
#define segment_eq(a, b) ((a).seg == (b).seg)
#define __addr_ok(addr) \
((unsigned long)(addr) < (current_thread_info()->addr_limit.seg))
static inline int ___range_ok(unsigned long addr, unsigned int size)
#define __range_ok(addr, size) ___range_ok((unsigned long)(addr), (u32)(size))
#define access_ok(type, addr, size) (__range_ok((addr), (size)) == 0)
#define __access_ok(addr, size)     (__range_ok((addr), (size)) == 0)
static inline int verify_area(int type, const void *addr, unsigned long size)
struct exception_table_entry
;
extern int fixup_exception(struct pt_regs *regs);
#define put_user(x, ptr) __put_user_check((x), (ptr), sizeof(*(ptr)))
#define get_user(x, ptr) __get_user_check((x), (ptr), sizeof(*(ptr)))
#define __put_user(x, ptr) __put_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define __get_user(x, ptr) __get_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define put_user_ret(x, ptr, ret) \
()
#define get_user_ret(x, ptr, ret) \
()
#define __put_user_ret(x, ptr, ret) \
()
#define __get_user_ret(x, ptr, ret) \
()
struct __large_struct ;
#define __m(x) (*(struct __large_struct *)(x))
#define __get_user_nocheck(x, ptr, size)				\
()
#define __get_user_check(x, ptr, size)					\
()
#define __get_user_asm(INSN)					\
()
extern int __get_user_unknown(void);
#define __put_user_nocheck(x, ptr, size)			\
()
#define __put_user_check(x, ptr, size)					\
()
#define __put_user_asm(INSN)					\
()
#define __put_user_asm8()						\
()
extern int __put_user_unknown(void);
#define __copy_user(to, from, size)					\
do  while (0)
#define __copy_user_zeroing(to, from, size)				\
do  while (0)
static inline
unsigned long __generic_copy_from_user_nocheck(void *to, const void *from,
unsigned long n)
static inline
unsigned long __generic_copy_to_user_nocheck(void *to, const void *from,
unsigned long n)
extern unsigned long __generic_copy_to_user(void __user *, const void *,
unsigned long);
extern unsigned long __generic_copy_from_user(void *, const void __user *,
unsigned long);
#define __copy_to_user_inatomic(to, from, n) \
__generic_copy_to_user_nocheck((to), (from), (n))
#define __copy_from_user_inatomic(to, from, n) \
__generic_copy_from_user_nocheck((to), (from), (n))
#define __copy_to_user(to, from, n)			\
()
#define __copy_from_user(to, from, n)			\
()
#define copy_to_user(to, from, n)   __generic_copy_to_user((to), (from), (n))
#define copy_from_user(to, from, n) __generic_copy_from_user((to), (from), (n))
extern long strncpy_from_user(char *dst, const char __user *src, long count);
extern long __strncpy_from_user(char *dst, const char __user *src, long count);
extern long strnlen_user(const char __user *str, long n);
#define strlen_user(str) strnlen_user(str, ~0UL >> 1)
extern unsigned long clear_user(void __user *mem, unsigned long len);
extern unsigned long __clear_user(void __user *mem, unsigned long len);
