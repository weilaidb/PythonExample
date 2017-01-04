#define MPOA_CACHES_H
struct mpoa_client;
void atm_mpoa_init_cache(struct mpoa_client *mpc);
typedef struct in_cache_entry  in_cache_entry;
struct in_cache_ops;
typedef struct eg_cache_entry eg_cache_entry;
struct eg_cache_ops;
#define INGRESS_REFRESHING 3
#define INGRESS_RESOLVED   2
#define INGRESS_RESOLVING  1
#define INGRESS_INVALID    0
#define OPEN   1
#define CLOSED 0
#define EGRESS_RESOLVED 2
#define EGRESS_PURGE    1
#define EGRESS_INVALID  0
