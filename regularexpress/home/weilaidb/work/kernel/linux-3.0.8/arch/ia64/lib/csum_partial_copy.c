static inline unsigned
short from64to16(unsigned long x)
static inline
unsigned long do_csum_c(const unsigned char * buff, int len, unsigned int psum)
extern unsigned long do_csum(const unsigned char *, long);
__wsum
csum_partial_copy_from_user(const void __user *src, void *dst,
int len, __wsum psum, int *errp)
EXPORT_SYMBOL(csum_partial_copy_from_user);
__wsum
csum_partial_copy_nocheck(const void *src, void *dst, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy_nocheck);
