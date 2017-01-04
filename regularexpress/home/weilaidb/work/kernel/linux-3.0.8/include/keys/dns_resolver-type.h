#define _KEYS_DNS_RESOLVER_TYPE_H
extern struct key_type key_type_dns_resolver;
extern int request_dns_resolver_key(const char *description,
const char *callout_info,
char **data);
