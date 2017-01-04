#define NS_INADDRSZ	4
#define NS_IN6ADDRSZ	16
#define NS_INT16SZ	2
static const char *
inet_ntop4(const u_char *src, char *dst, size_t size)
static const char *
inet_ntop6(const u_char *src, char *dst, size_t size)
const char *
inet_ntop(int af, const void *src, char *dst, size_t size)
