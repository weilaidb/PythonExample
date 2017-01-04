extern const struct cred *dns_resolver_cache;
extern unsigned dns_resolver_debug;
#define	kdebug(FMT, ...)				\
do  while (0)
#define kenter(FMT, ...) kdebug("==> %s("FMT")", __func__, ##__VA_ARGS__)
#define kleave(FMT, ...) kdebug("<== %s()"FMT"", __func__, ##__VA_ARGS__)
