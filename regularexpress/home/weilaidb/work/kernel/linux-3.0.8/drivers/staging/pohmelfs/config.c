static struct cb_id pohmelfs_cn_id = ;
static LIST_HEAD(pohmelfs_config_list);
static DEFINE_MUTEX(pohmelfs_config_lock);
static inline int pohmelfs_config_eql(struct pohmelfs_ctl *sc, struct pohmelfs_ctl *ctl)
static struct pohmelfs_config_group *pohmelfs_find_config_group(unsigned int idx)
static struct pohmelfs_config_group *pohmelfs_find_create_config_group(unsigned int idx)
static inline void pohmelfs_insert_config_entry(struct pohmelfs_sb *psb, struct pohmelfs_config *dst)
static int pohmelfs_move_config_entry(struct pohmelfs_sb *psb,
struct pohmelfs_config *dst, struct pohmelfs_config *new)
int pohmelfs_copy_config(struct pohmelfs_sb *psb)
int pohmelfs_copy_crypto(struct pohmelfs_sb *psb)
static int pohmelfs_send_reply(int err, int msg_num, int action, struct cn_msg *msg, struct pohmelfs_ctl *ctl)
static int pohmelfs_cn_disp(struct cn_msg *msg)
static int pohmelfs_cn_dump(struct cn_msg *msg)
static int pohmelfs_cn_flush(struct cn_msg *msg)
static int pohmelfs_modify_config(struct pohmelfs_ctl *old, struct pohmelfs_ctl *new)
static int pohmelfs_cn_ctl(struct cn_msg *msg, int action)
static int pohmelfs_crypto_hash_init(struct pohmelfs_config_group *g, struct pohmelfs_crypto *c)
static int pohmelfs_crypto_cipher_init(struct pohmelfs_config_group *g, struct pohmelfs_crypto *c)
static int pohmelfs_cn_crypto(struct cn_msg *msg)
static void pohmelfs_cn_callback(struct cn_msg *msg, struct netlink_skb_parms *nsp)
int pohmelfs_config_check(struct pohmelfs_config *config, int idx)
int __init pohmelfs_config_init(void)
void pohmelfs_config_exit(void)
