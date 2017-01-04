#define NET_9P_TRANSPORT_H
#define P9_TRANS_PREF_PAYLOAD_MASK 0x1
#define P9_TRANS_PREF_PAYLOAD_DEF  0x0
#define P9_TRANS_PREF_PAYLOAD_SEP  0x1
struct p9_trans_module ;
void v9fs_register_trans(struct p9_trans_module *m);
void v9fs_unregister_trans(struct p9_trans_module *m);
struct p9_trans_module *v9fs_get_trans_by_name(const substring_t *name);
struct p9_trans_module *v9fs_get_default_trans(void);
void v9fs_put_trans(struct p9_trans_module *m);
