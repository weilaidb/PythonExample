#define __ASM_SH_UACCESS_H
#define VERIFY_READ    0
#define VERIFY_WRITE   1
#define __addr_ok(addr) \
((unsigned long __force)(addr) < current_thread_info()->addr_limit.seg)
#define __access_ok(addr, size)		\
(__addr_ok((addr) + (size)))
#define access_ok(type, addr, size)	\
(__chk_user_ptr(addr),		\
__access_ok((unsigned long __force)(addr), (size)))
#define put_user(x,ptr)		__put_user_check((x), (ptr), sizeof(*(ptr)))
#define get_user(x,ptr)		__get_user_check((x), (ptr), sizeof(*(ptr)))
#define __put_user(x,ptr)	__put_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define __get_user(x,ptr)	__get_user_nocheck((x), (ptr), sizeof(*(ptr)))
struct __large_struct ;
#define __m(x) (*(struct __large_struct __user *)(x))
#define __get_user_nocheck(x,ptr,size)				\
()
#define __get_user_check(x,ptr,size)					\
()
#define __put_user_nocheck(x,ptr,size)				\
()
#define __put_user_check(x,ptr,size)				\
()
# include "uaccess_32.h"
# include "uaccess_64.h"
__kernel_size_t __copy_user(void *to, const void *from, __kernel_size_t n);
static __always_inline unsigned long
__copy_from_user(void *to, const void __user *from, unsigned long n)
static __always_inline unsigned long __must_check
__copy_to_user(void __user *to, const void *from, unsigned long n)
#define __copy_to_user_inatomic __copy_to_user
#define __copy_from_user_inatomic __copy_from_user
__kernel_size_t __clear_user(void *addr, __kernel_size_t size);
#define clear_user(addr,n)						\
()
#define strncpy_from_user(dest,src,count)				\
()
static inline unsigned long
copy_from_user(void *to, const void __user *from, unsigned long n)
static inline unsigned long
copy_to_user(void __user *to, const void *from, unsigned long n)
static inline long strnlen_user(const char __user *s, long n)
#define strlen_user(str)	strnlen_user(str, ~0UL >> 1)
struct exception_table_entry ;
#if defined(CONFIG_SUPERH64) && defined(CONFIG_MMU)
#define ARCH_HAS_SEARCH_EXTABLE
int fixup_exception(struct pt_regs *regs);
unsigned long search_exception_table(unsigned long addr);
const struct exception_table_entry *search_exception_tables(unsigned long addr);
