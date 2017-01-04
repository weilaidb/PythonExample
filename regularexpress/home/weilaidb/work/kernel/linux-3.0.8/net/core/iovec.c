int verify_iovec(struct msghdr *m, struct iovec *iov, struct sockaddr *address, int mode)
int memcpy_toiovec(struct iovec *iov, unsigned char *kdata, int len)
EXPORT_SYMBOL(memcpy_toiovec);
int memcpy_toiovecend(const struct iovec *iov, unsigned char *kdata,
int offset, int len)
EXPORT_SYMBOL(memcpy_toiovecend);
int memcpy_fromiovec(unsigned char *kdata, struct iovec *iov, int len)
EXPORT_SYMBOL(memcpy_fromiovec);
int memcpy_fromiovecend(unsigned char *kdata, const struct iovec *iov,
int offset, int len)
EXPORT_SYMBOL(memcpy_fromiovecend);
int csum_partial_copy_fromiovecend(unsigned char *kdata, struct iovec *iov,
int offset, unsigned int len, __wsum *csump)
EXPORT_SYMBOL(csum_partial_copy_fromiovecend);
