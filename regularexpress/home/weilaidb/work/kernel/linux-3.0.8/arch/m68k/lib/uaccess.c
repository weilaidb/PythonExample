unsigned long __generic_copy_from_user(void *to, const void __user *from,
unsigned long n)
EXPORT_SYMBOL(__generic_copy_from_user);
unsigned long __generic_copy_to_user(void __user *to, const void *from,
unsigned long n)
EXPORT_SYMBOL(__generic_copy_to_user);
long strncpy_from_user(char *dst, const char __user *src, long count)
EXPORT_SYMBOL(strncpy_from_user);
long strnlen_user(const char __user *src, long n)
EXPORT_SYMBOL(strnlen_user);
unsigned long __clear_user(void __user *to, unsigned long n)
EXPORT_SYMBOL(__clear_user);
