static DEFINE_SPINLOCK(fib_info_lock);
static struct hlist_head *fib_info_hash;
static struct hlist_head *fib_info_laddrhash;
static unsigned int fib_info_hash_size;
static unsigned int fib_info_cnt;
#define DEVINDEX_HASHBITS 8
#define DEVINDEX_HASHSIZE (1U << DEVINDEX_HASHBITS)
static struct hlist_head fib_info_devhash[DEVINDEX_HASHSIZE];
static DEFINE_SPINLOCK(fib_multipath_lock);
#define for_nexthops(fi) {						\
int nhsel; const struct fib_nh *nh;				\
for (nhsel = 0, nh = (fi)->fib_nh;				\
nhsel < (fi)->fib_nhs;					\
nh++, nhsel++)
#define change_nexthops(fi) {						\
int nhsel; struct fib_nh *nexthop_nh;				\
for (nhsel = 0,	nexthop_nh = (struct fib_nh *)((fi)->fib_nh);	\
nhsel < (fi)->fib_nhs;					\
nexthop_nh++, nhsel++)
#define for_nexthops(fi) {						\
int nhsel; const struct fib_nh *nh = (fi)->fib_nh;		\
for (nhsel = 0; nhsel < 1; nhsel++)
#define change_nexthops(fi)
const struct fib_prop fib_props[RTN_MAX + 1] = ;
void free_fib_info(struct fib_info *fi)
void fib_release_info(struct fib_info *fi)
static inline int nh_comp(const struct fib_info *fi, const struct fib_info *ofi)
static inline unsigned int fib_devindex_hashfn(unsigned int val)
static inline unsigned int fib_info_hashfn(const struct fib_info *fi)
static struct fib_info *fib_find_info(const struct fib_info *nfi)
int ip_fib_check_default(__be32 gw, struct net_device *dev)
static inline size_t fib_nlmsg_size(struct fib_info *fi)
void rtmsg_fib(int event, __be32 key, struct fib_alias *fa,
int dst_len, u32 tb_id, struct nl_info *info,
unsigned int nlm_flags)
struct fib_alias *fib_find_alias(struct list_head *fah, u8 tos, u32 prio)
int fib_detect_death(struct fib_info *fi, int order,
struct fib_info **last_resort, int *last_idx, int dflt)
static int fib_count_nexthops(struct rtnexthop *rtnh, int remaining)
static int fib_get_nhs(struct fib_info *fi, struct rtnexthop *rtnh,
int remaining, struct fib_config *cfg)
int fib_nh_match(struct fib_config *cfg, struct fib_info *fi)
static int fib_check_nh(struct fib_config *cfg, struct fib_info *fi,
struct fib_nh *nh)
static inline unsigned int fib_laddr_hashfn(__be32 val)
static struct hlist_head *fib_info_hash_alloc(int bytes)
static void fib_info_hash_free(struct hlist_head *hash, int bytes)
static void fib_info_hash_move(struct hlist_head *new_info_hash,
struct hlist_head *new_laddrhash,
unsigned int new_size)
__be32 fib_info_update_nh_saddr(struct net *net, struct fib_nh *nh)
struct fib_info *fib_create_info(struct fib_config *cfg)
int fib_dump_info(struct sk_buff *skb, u32 pid, u32 seq, int event,
u32 tb_id, u8 type, __be32 dst, int dst_len, u8 tos,
struct fib_info *fi, unsigned int flags)
int fib_sync_down_addr(struct net *net, __be32 local)
int fib_sync_down_dev(struct net_device *dev, int force)
void fib_select_default(struct fib_result *res)
int fib_sync_up(struct net_device *dev)
void fib_select_multipath(struct fib_result *res)
