#define _ASM_X86_UACCESS_64_H
__must_check unsigned long
copy_user_generic_string(void *to, const void *from, unsigned len);
__must_check unsigned long
copy_user_generic_unrolled(void *to, const void *from, unsigned len);
static __always_inline __must_check unsigned long
copy_user_generic(void *to, const void *from, unsigned len)
__must_check unsigned long
_copy_to_user(void __user *to, const void *from, unsigned len);
__must_check unsigned long
_copy_from_user(void *to, const void __user *from, unsigned len);
__must_check unsigned long
copy_in_user(void __user *to, const void __user *from, unsigned len);
static inline unsigned long __must_check copy_from_user(void *to,
const void __user *from,
unsigned long n)
static __always_inline __must_check
int copy_to_user(void __user *dst, const void *src, unsigned size)
static __always_inline __must_check
int __copy_from_user(void *dst, const void __user *src, unsigned size)
static __always_inline __must_check
int __copy_to_user(void __user *dst, const void *src, unsigned size)
static __always_inline __must_check
int __copy_in_user(void __user *dst, const void __user *src, unsigned size)
__must_check long
strncpy_from_user(char *dst, const char __user *src, long count);
__must_check long
__strncpy_from_user(char *dst, const char __user *src, long count);
__must_check long strnlen_user(const char __user *str, long n);
__must_check long __strnlen_user(const char __user *str, long n);
__must_check long strlen_user(const char __user *str);
__must_check unsigned long clear_user(void __user *mem, unsigned long len);
__must_check unsigned long __clear_user(void __user *mem, unsigned long len);
static __must_check __always_inline int
__copy_from_user_inatomic(void *dst, const void __user *src, unsigned size)
static __must_check __always_inline int
__copy_to_user_inatomic(void __user *dst, const void *src, unsigned size)
extern long __copy_user_nocache(void *dst, const void __user *src,
unsigned size, int zerorest);
static inline int
__copy_from_user_nocache(void *dst, const void __user *src, unsigned size)
static inline int
__copy_from_user_inatomic_nocache(void *dst, const void __user *src,
unsigned size)
unsigned long
copy_user_handle_tail(char *to, char *from, unsigned len, unsigned zerorest);
