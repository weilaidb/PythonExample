struct movsl_mask movsl_mask __read_mostly;
static inline int __movsl_is_ok(unsigned long a1, unsigned long a2, unsigned long n)
#define movsl_is_ok(a1, a2, n) \
__movsl_is_ok((unsigned long)(a1), (unsigned long)(a2), (n))
#define __do_strncpy_from_user(dst, src, count, res)			   \
do  while (0)
long
__strncpy_from_user(char *dst, const char __user *src, long count)
EXPORT_SYMBOL(__strncpy_from_user);
long
strncpy_from_user(char *dst, const char __user *src, long count)
EXPORT_SYMBOL(strncpy_from_user);
#define __do_clear_user(addr,size)					\
do  while (0)
unsigned long
clear_user(void __user *to, unsigned long n)
EXPORT_SYMBOL(clear_user);
unsigned long
__clear_user(void __user *to, unsigned long n)
EXPORT_SYMBOL(__clear_user);
long strnlen_user(const char __user *s, long n)
EXPORT_SYMBOL(strnlen_user);
static unsigned long
__copy_user_intel(void __user *to, const void *from, unsigned long size)
static unsigned long
__copy_user_zeroing_intel(void *to, const void __user *from, unsigned long size)
static unsigned long __copy_user_zeroing_intel_nocache(void *to,
const void __user *from, unsigned long size)
static unsigned long __copy_user_intel_nocache(void *to,
const void __user *from, unsigned long size)
unsigned long __copy_user_zeroing_intel(void *to, const void __user *from,
unsigned long size);
unsigned long __copy_user_intel(void __user *to, const void *from,
unsigned long size);
unsigned long __copy_user_zeroing_intel_nocache(void *to,
const void __user *from, unsigned long size);
#define __copy_user(to, from, size)					\
do  while (0)
#define __copy_user_zeroing(to, from, size)				\
do  while (0)
unsigned long __copy_to_user_ll(void __user *to, const void *from,
unsigned long n)
EXPORT_SYMBOL(__copy_to_user_ll);
unsigned long __copy_from_user_ll(void *to, const void __user *from,
unsigned long n)
EXPORT_SYMBOL(__copy_from_user_ll);
unsigned long __copy_from_user_ll_nozero(void *to, const void __user *from,
unsigned long n)
EXPORT_SYMBOL(__copy_from_user_ll_nozero);
unsigned long __copy_from_user_ll_nocache(void *to, const void __user *from,
unsigned long n)
EXPORT_SYMBOL(__copy_from_user_ll_nocache);
unsigned long __copy_from_user_ll_nocache_nozero(void *to, const void __user *from,
unsigned long n)
EXPORT_SYMBOL(__copy_from_user_ll_nocache_nozero);
unsigned long
copy_to_user(void __user *to, const void *from, unsigned long n)
EXPORT_SYMBOL(copy_to_user);
unsigned long
_copy_from_user(void *to, const void __user *from, unsigned long n)
EXPORT_SYMBOL(_copy_from_user);
void copy_from_user_overflow(void)
EXPORT_SYMBOL(copy_from_user_overflow);
