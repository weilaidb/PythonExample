__wsum
csum_partial_copy_from_user(const void __user *src, void *dst,
int len, __wsum isum, int *errp)
EXPORT_SYMBOL(csum_partial_copy_from_user);
__wsum
csum_partial_copy_to_user(const void *src, void __user *dst,
int len, __wsum isum, int *errp)
EXPORT_SYMBOL(csum_partial_copy_to_user);
__wsum
csum_partial_copy_nocheck(const void *src, void *dst, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy_nocheck);
__sum16 csum_ipv6_magic(const struct in6_addr *saddr,
const struct in6_addr *daddr,
__u32 len, unsigned short proto, __wsum sum)
EXPORT_SYMBOL(csum_ipv6_magic);
