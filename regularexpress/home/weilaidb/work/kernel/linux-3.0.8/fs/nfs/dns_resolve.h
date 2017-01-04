#define __LINUX_FS_NFS_DNS_RESOLVE_H
#define NFS_DNS_HOSTNAME_MAXLEN	(128)
static inline int nfs_dns_resolver_init(void)
static inline void nfs_dns_resolver_destroy(void)
extern int nfs_dns_resolver_init(void);
extern void nfs_dns_resolver_destroy(void);
extern ssize_t nfs_dns_resolve_name(char *name, size_t namelen,
struct sockaddr *sa, size_t salen);
