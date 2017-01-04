static inline unsigned short from32to16(__wsum sum)
__sum16 ip_fast_csum(const void *iph, unsigned int ihl)
EXPORT_SYMBOL(ip_fast_csum);
__wsum csum_partial(const void *buff, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial);
__sum16 ip_compute_csum(const void *buff, int len)
EXPORT_SYMBOL(ip_compute_csum);
__wsum csum_partial_copy(const void *src, void *dst, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy);
__wsum csum_partial_copy_nocheck(const void *src, void *dst,
int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy_nocheck);
__wsum csum_partial_copy_from_user(const void *src, void *dst,
int len, __wsum sum,
int *err_ptr)
EXPORT_SYMBOL(csum_partial_copy_from_user);
__wsum csum_and_copy_to_user(const void *src, void *dst,
int len, __wsum sum,
int *err_ptr)
EXPORT_SYMBOL(csum_and_copy_to_user);
