#define _ASM_X86_UACCESS_32_H
unsigned long __must_check __copy_to_user_ll
(void __user *to, const void *from, unsigned long n);
unsigned long __must_check __copy_from_user_ll
(void *to, const void __user *from, unsigned long n);
unsigned long __must_check __copy_from_user_ll_nozero
(void *to, const void __user *from, unsigned long n);
unsigned long __must_check __copy_from_user_ll_nocache
(void *to, const void __user *from, unsigned long n);
unsigned long __must_check __copy_from_user_ll_nocache_nozero
(void *to, const void __user *from, unsigned long n);
static __always_inline unsigned long __must_check
__copy_to_user_inatomic(void __user *to, const void *from, unsigned long n)
static __always_inline unsigned long __must_check
__copy_to_user(void __user *to, const void *from, unsigned long n)
static __always_inline unsigned long
__copy_from_user_inatomic(void *to, const void __user *from, unsigned long n)
static __always_inline unsigned long
__copy_from_user(void *to, const void __user *from, unsigned long n)
static __always_inline unsigned long __copy_from_user_nocache(void *to,
const void __user *from, unsigned long n)
static __always_inline unsigned long
__copy_from_user_inatomic_nocache(void *to, const void __user *from,
unsigned long n)
unsigned long __must_check copy_to_user(void __user *to,
const void *from, unsigned long n);
unsigned long __must_check _copy_from_user(void *to,
const void __user *from,
unsigned long n);
extern void copy_from_user_overflow(void)
__compiletime_error("copy_from_user() buffer size is not provably correct")
__compiletime_warning("copy_from_user() buffer size is not provably correct")
;
static inline unsigned long __must_check copy_from_user(void *to,
const void __user *from,
unsigned long n)
long __must_check strncpy_from_user(char *dst, const char __user *src,
long count);
long __must_check __strncpy_from_user(char *dst,
const char __user *src, long count);
#define strlen_user(str) strnlen_user(str, LONG_MAX)
long strnlen_user(const char __user *str, long n);
unsigned long __must_check clear_user(void __user *mem, unsigned long len);
unsigned long __must_check __clear_user(void __user *mem, unsigned long len);
