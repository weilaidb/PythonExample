unsigned long
__generic_copy_to_user(void __user *to, const void *from, unsigned long n)
unsigned long
__generic_copy_from_user(void *to, const void __user *from, unsigned long n)
#define __do_strncpy_from_user(dst,src,count,res)			\
do  while (0)
#define __do_strncpy_from_user(dst,src,count,res)			\
do  while (0)
long
__strncpy_from_user(char *dst, const char __user *src, long count)
long
strncpy_from_user(char *dst, const char __user *src, long count)
#define __do_clear_user(addr,size)					\
do  while (0)
#define __do_clear_user(addr,size)					\
do  while (0)
unsigned long
clear_user(void __user *to, unsigned long n)
unsigned long
__clear_user(void __user *to, unsigned long n)
long strnlen_user(const char __user *s, long n)
long strnlen_user(const char __user *s, long n)
