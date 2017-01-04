#define addc(_t,_r)                     \
__asm__ __volatile__ (          \
"       add             %0, %1, %0\n"   \
"       addc            %0, %%r0, %0\n" \
: "=r"(_t)                      \
: "r"(_r), "0"(_t));
static inline unsigned short from32to16(unsigned int x)
static inline unsigned int do_csum(const unsigned char * buff, int len)
__wsum csum_partial(const void *buff, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial);
__wsum csum_partial_copy_nocheck(const void *src, void *dst,
int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy_nocheck);
__wsum csum_partial_copy_from_user(const void __user *src,
void *dst, int len,
__wsum sum, int *err_ptr)
EXPORT_SYMBOL(csum_partial_copy_from_user);
