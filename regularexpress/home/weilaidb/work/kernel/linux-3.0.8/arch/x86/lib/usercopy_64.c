#define __do_strncpy_from_user(dst,src,count,res)			   \
do  while (0)
long
__strncpy_from_user(char *dst, const char __user *src, long count)
EXPORT_SYMBOL(__strncpy_from_user);
long
strncpy_from_user(char *dst, const char __user *src, long count)
EXPORT_SYMBOL(strncpy_from_user);
unsigned long __clear_user(void __user *addr, unsigned long size)
EXPORT_SYMBOL(__clear_user);
unsigned long clear_user(void __user *to, unsigned long n)
EXPORT_SYMBOL(clear_user);
long __strnlen_user(const char __user *s, long n)
EXPORT_SYMBOL(__strnlen_user);
long strnlen_user(const char __user *s, long n)
EXPORT_SYMBOL(strnlen_user);
long strlen_user(const char __user *s)
EXPORT_SYMBOL(strlen_user);
unsigned long copy_in_user(void __user *to, const void __user *from, unsigned len)
EXPORT_SYMBOL(copy_in_user);
unsigned long
copy_user_handle_tail(char *to, char *from, unsigned len, unsigned zerorest)
