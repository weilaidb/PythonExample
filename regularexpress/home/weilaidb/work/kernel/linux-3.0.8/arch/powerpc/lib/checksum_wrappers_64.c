__wsum csum_and_copy_from_user(const void __user *src, void *dst,
int len, __wsum sum, int *err_ptr)
EXPORT_SYMBOL(csum_and_copy_from_user);
__wsum csum_and_copy_to_user(const void *src, void __user *dst, int len,
__wsum sum, int *err_ptr)
EXPORT_SYMBOL(csum_and_copy_to_user);
