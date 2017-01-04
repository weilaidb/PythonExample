__wsum csum_partial(const void *buff, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial);
__wsum
csum_partial_copy_from_user(const void __user *src, void *dst,
int len, __wsum sum, int *csum_err)
EXPORT_SYMBOL(csum_partial_copy_from_user);
__wsum
csum_partial_copy_nocheck(const void *src, void *dst, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy_nocheck);
