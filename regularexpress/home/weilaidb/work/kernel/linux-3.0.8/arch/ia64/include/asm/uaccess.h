#define _ASM_IA64_UACCESS_H
#define KERNEL_DS	((mm_segment_t) )
#define USER_DS		((mm_segment_t) )
#define VERIFY_READ	0
#define VERIFY_WRITE	1
#define get_ds()  (KERNEL_DS)
#define get_fs()  (current_thread_info()->addr_limit)
#define set_fs(x) (current_thread_info()->addr_limit = (x))
#define segment_eq(a, b)	((a).seg == (b).seg)
#define __access_ok(addr, size, segment)						\
()
#define access_ok(type, addr, size)	__access_ok((addr), (size), get_fs())
#define put_user(x, ptr)	__put_user_check((__typeof__(*(ptr))) (x), (ptr), sizeof(*(ptr)), get_fs())
#define get_user(x, ptr)	__get_user_check((x), (ptr), sizeof(*(ptr)), get_fs())
#define __put_user(x, ptr)	__put_user_nocheck((__typeof__(*(ptr))) (x), (ptr), sizeof(*(ptr)))
#define __get_user(x, ptr)	__get_user_nocheck((x), (ptr), sizeof(*(ptr)))
extern long __put_user_unaligned_unknown (void);
#define __put_user_unaligned(x, ptr)								\
()
extern long __get_user_unaligned_unknown (void);
#define __get_user_unaligned(x, ptr)								\
()
struct __large_struct ;
# define __m(x) (*(struct __large_struct __user *)(x))
asm (".section \"__ex_table\", \"a\"\n\t.previous");
# define __get_user_size(val, addr, n, err)							\
do  while (0)
# define __put_user_size(val, addr, n, err)							\
do  while (0)
# define RELOC_TYPE	2
# define __get_user_size(val, addr, n, err)				\
do  while (0)
# define __put_user_size(val, addr, n, err)							\
do  while (0)
extern void __get_user_unknown (void);
#define __do_get_user(check, x, ptr, size, segment)					\
()
#define __get_user_nocheck(x, ptr, size)	__do_get_user(0, x, ptr, size, KERNEL_DS)
#define __get_user_check(x, ptr, size, segment)	__do_get_user(1, x, ptr, size, segment)
extern void __put_user_unknown (void);
#define __do_put_user(check, x, ptr, size, segment)					\
()
#define __put_user_nocheck(x, ptr, size)	__do_put_user(0, x, ptr, size, KERNEL_DS)
#define __put_user_check(x, ptr, size, segment)	__do_put_user(1, x, ptr, size, segment)
extern unsigned long __must_check __copy_user (void __user *to, const void __user *from,
unsigned long count);
static inline unsigned long
__copy_to_user (void __user *to, const void *from, unsigned long count)
static inline unsigned long
__copy_from_user (void *to, const void __user *from, unsigned long count)
#define __copy_to_user_inatomic		__copy_to_user
#define __copy_from_user_inatomic	__copy_from_user
#define copy_to_user(to, from, n)							\
()
#define copy_from_user(to, from, n)							\
()
#define __copy_in_user(to, from, size)	__copy_user((to), (from), (size))
static inline unsigned long
copy_in_user (void __user *to, const void __user *from, unsigned long n)
extern unsigned long __do_clear_user (void __user *, unsigned long);
#define __clear_user(to, n)		__do_clear_user(to, n)
#define clear_user(to, n)					\
()
extern long __must_check __strncpy_from_user (char *to, const char __user *from, long to_len);
#define strncpy_from_user(to, from, n)					\
()
extern unsigned long __strlen_user (const char __user *);
#define strlen_user(str)				\
()
extern unsigned long __strnlen_user (const char __user *, long);
#define strnlen_user(str, len)					\
()
#define ARCH_HAS_SORT_EXTABLE
#define ARCH_HAS_SEARCH_EXTABLE
struct exception_table_entry ;
extern void ia64_handle_exception (struct pt_regs *regs, const struct exception_table_entry *e);
extern const struct exception_table_entry *search_exception_tables (unsigned long addr);
static inline int
ia64_done_with_exception (struct pt_regs *regs)
#define ARCH_HAS_TRANSLATE_MEM_PTR	1
static __inline__ char *
xlate_dev_mem_ptr (unsigned long p)
static __inline__ char *
xlate_dev_kmem_ptr (char * p)
