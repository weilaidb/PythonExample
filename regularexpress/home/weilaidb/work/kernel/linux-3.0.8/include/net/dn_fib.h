#define _NET_DN_FIB_H
struct dn_kern_rta ;
struct dn_fib_res ;
struct dn_fib_nh ;
struct dn_fib_info ;
#define DN_FIB_RES_RESET(res)	((res).nh_sel = 0)
#define DN_FIB_RES_NH(res)	((res).fi->fib_nh[(res).nh_sel])
#define DN_FIB_RES_PREFSRC(res)	((res).fi->fib_prefsrc ? : __dn_fib_res_prefsrc(&res))
#define DN_FIB_RES_GW(res)	(DN_FIB_RES_NH(res).nh_gw)
#define DN_FIB_RES_DEV(res)	(DN_FIB_RES_NH(res).nh_dev)
#define DN_FIB_RES_OIF(res)	(DN_FIB_RES_NH(res).nh_oif)
typedef struct  dn_fib_key_t;
typedef struct  dn_fib_hash_t;
typedef struct  dn_fib_idx_t;
struct dn_fib_node ;
struct dn_fib_table ;
extern void dn_fib_init(void);
extern void dn_fib_cleanup(void);
extern int dn_fib_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg);
extern struct dn_fib_info *dn_fib_create_info(const struct rtmsg *r,
struct dn_kern_rta *rta,
const struct nlmsghdr *nlh, int *errp);
extern int dn_fib_semantic_match(int type, struct dn_fib_info *fi,
const struct flowidn *fld,
struct dn_fib_res *res);
extern void dn_fib_release_info(struct dn_fib_info *fi);
extern __le16 dn_fib_get_attr16(struct rtattr *attr, int attrlen, int type);
extern void dn_fib_flush(void);
extern void dn_fib_select_multipath(const struct flowidn *fld,
struct dn_fib_res *res);
extern struct dn_fib_table *dn_fib_get_table(u32 n, int creat);
extern struct dn_fib_table *dn_fib_empty_table(void);
extern void dn_fib_table_init(void);
extern void dn_fib_table_cleanup(void);
extern void dn_fib_rules_init(void);
extern void dn_fib_rules_cleanup(void);
extern unsigned dnet_addr_type(__le16 addr);
extern int dn_fib_lookup(struct flowidn *fld, struct dn_fib_res *res);
extern int dn_fib_dump(struct sk_buff *skb, struct netlink_callback *cb);
extern void dn_fib_free_info(struct dn_fib_info *fi);
static inline void dn_fib_info_put(struct dn_fib_info *fi)
static inline void dn_fib_res_put(struct dn_fib_res *res)
#define dn_fib_init()  do  while(0)
#define dn_fib_cleanup() do  while(0)
#define dn_fib_lookup(fl, res) (-ESRCH)
#define dn_fib_info_put(fi) do  while(0)
#define dn_fib_select_multipath(fl, res) do  while(0)
#define dn_fib_rules_policy(saddr,res,flags) (0)
#define dn_fib_res_put(res) do  while(0)
static inline __le16 dnet_make_mask(int n)
