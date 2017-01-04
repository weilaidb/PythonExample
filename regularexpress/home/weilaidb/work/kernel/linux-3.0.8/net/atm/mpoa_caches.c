static in_cache_entry *in_cache_get(__be32 dst_ip,
struct mpoa_client *client)
static in_cache_entry *in_cache_get_with_mask(__be32 dst_ip,
struct mpoa_client *client,
__be32 mask)
static in_cache_entry *in_cache_get_by_vcc(struct atm_vcc *vcc,
struct mpoa_client *client)
static in_cache_entry *in_cache_add_entry(__be32 dst_ip,
struct mpoa_client *client)
static int cache_hit(in_cache_entry *entry, struct mpoa_client *mpc)
static void in_cache_put(in_cache_entry *entry)
static void in_cache_remove_entry(in_cache_entry *entry,
struct mpoa_client *client)
static void clear_count_and_expired(struct mpoa_client *client)
static void check_resolving_entries(struct mpoa_client *client)
static void refresh_entries(struct mpoa_client *client)
static void in_destroy_cache(struct mpoa_client *mpc)
static eg_cache_entry *eg_cache_get_by_cache_id(__be32 cache_id,
struct mpoa_client *mpc)
static eg_cache_entry *eg_cache_get_by_tag(__be32 tag, struct mpoa_client *mpc)
static eg_cache_entry *eg_cache_get_by_vcc(struct atm_vcc *vcc,
struct mpoa_client *mpc)
static eg_cache_entry *eg_cache_get_by_src_ip(__be32 ipaddr,
struct mpoa_client *mpc)
static void eg_cache_put(eg_cache_entry *entry)
static void eg_cache_remove_entry(eg_cache_entry *entry,
struct mpoa_client *client)
static eg_cache_entry *eg_cache_add_entry(struct k_message *msg,
struct mpoa_client *client)
static void update_eg_cache_entry(eg_cache_entry *entry, uint16_t holding_time)
static void clear_expired(struct mpoa_client *client)
static void eg_destroy_cache(struct mpoa_client *mpc)
static struct in_cache_ops ingress_ops = ;
static struct eg_cache_ops egress_ops = ;
void atm_mpoa_init_cache(struct mpoa_client *mpc)
