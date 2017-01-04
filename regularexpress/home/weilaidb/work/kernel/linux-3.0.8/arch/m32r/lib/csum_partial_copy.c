__wsum
csum_partial_copy_nocheck (const void *src, void *dst, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy_nocheck);
__wsum
csum_partial_copy_from_user (const void __user *src, void *dst,
int len, __wsum sum, int *err_ptr)
EXPORT_SYMBOL(csum_partial_copy_from_user);
EXPORT_SYMBOL(csum_partial);
