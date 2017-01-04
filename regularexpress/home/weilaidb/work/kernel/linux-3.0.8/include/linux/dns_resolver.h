#define _LINUX_DNS_RESOLVER_H
extern int dns_query(const char *type, const char *name, size_t namelen,
const char *options, char **_result, time_t *_expiry);
