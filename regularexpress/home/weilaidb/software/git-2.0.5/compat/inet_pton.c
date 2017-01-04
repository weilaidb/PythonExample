#define NS_INT16SZ       2
#define NS_INADDRSZ      4
#define NS_IN6ADDRSZ    16
static int inet_pton4(const char *src, unsigned char *dst);
static int inet_pton6(const char *src, unsigned char *dst);
static int
inet_pton4(const char *src, unsigned char *dst)
static int
inet_pton6(const char *src, unsigned char *dst)
int
inet_pton(int af, const char *src, void *dst)
