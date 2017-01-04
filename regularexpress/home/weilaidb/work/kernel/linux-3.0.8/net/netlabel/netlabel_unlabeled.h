#define _NETLABEL_UNLABELED_H
enum ;
enum ;
#define NLBL_UNLABEL_A_MAX (__NLBL_UNLABEL_A_MAX - 1)
int netlbl_unlabel_genl_init(void);
#define NETLBL_UNLHSH_BITSIZE       7
int netlbl_unlabel_init(u32 size);
int netlbl_unlhsh_add(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u32 addr_len,
u32 secid,
struct netlbl_audit *audit_info);
int netlbl_unlhsh_remove(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u32 addr_len,
struct netlbl_audit *audit_info);
int netlbl_unlabel_getattr(const struct sk_buff *skb,
u16 family,
struct netlbl_lsm_secattr *secattr);
int netlbl_unlabel_defconf(void);
