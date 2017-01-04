#define FILTER_CTL_SRCH_FUDGE_WILD 3
#define FILTER_CTL_SRCH_FUDGE_FULL 1
#define FILTER_CTL_SRCH_MAX 200
#define FILTER_CTL_SRCH_HINT_MAX 5
enum efx_filter_table_id ;
struct efx_filter_table ;
struct efx_filter_state ;
static u16 efx_filter_hash(u32 key)
static u16 efx_filter_increment(u32 key)
static enum efx_filter_table_id
efx_filter_spec_table_id(const struct efx_filter_spec *spec)
static struct efx_filter_table *
efx_filter_spec_table(struct efx_filter_state *state,
const struct efx_filter_spec *spec)
static void efx_filter_table_reset_search_depth(struct efx_filter_table *table)
static void efx_filter_push_rx_limits(struct efx_nic *efx)
static inline void __efx_filter_set_ipv4(struct efx_filter_spec *spec,
__be32 host1, __be16 port1,
__be32 host2, __be16 port2)
int efx_filter_set_ipv4_local(struct efx_filter_spec *spec, u8 proto,
__be32 host, __be16 port)
int efx_filter_set_ipv4_full(struct efx_filter_spec *spec, u8 proto,
__be32 host, __be16 port,
__be32 rhost, __be16 rport)
int efx_filter_set_eth_local(struct efx_filter_spec *spec,
u16 vid, const u8 *addr)
static u32 efx_filter_build(efx_oword_t *filter, struct efx_filter_spec *spec)
static bool efx_filter_equal(const struct efx_filter_spec *left,
const struct efx_filter_spec *right)
static int efx_filter_search(struct efx_filter_table *table,
struct efx_filter_spec *spec, u32 key,
bool for_insert, int *depth_required)
static inline int
efx_filter_make_id(enum efx_filter_table_id table_id, unsigned index)
int efx_filter_insert_filter(struct efx_nic *efx, struct efx_filter_spec *spec,
bool replace)
static void efx_filter_table_clear_entry(struct efx_nic *efx,
struct efx_filter_table *table,
int filter_idx)
int efx_filter_remove_filter(struct efx_nic *efx, struct efx_filter_spec *spec)
static void efx_filter_table_clear(struct efx_nic *efx,
enum efx_filter_table_id table_id,
enum efx_filter_priority priority)
void efx_filter_clear_rx(struct efx_nic *efx, enum efx_filter_priority priority)
void efx_restore_filters(struct efx_nic *efx)
int efx_probe_filters(struct efx_nic *efx)
void efx_remove_filters(struct efx_nic *efx)
int efx_filter_rfs(struct net_device *net_dev, const struct sk_buff *skb,
u16 rxq_index, u32 flow_id)
bool __efx_filter_rfs_expire(struct efx_nic *efx, unsigned quota)
