static struct cn_callback_entry *
cn_queue_alloc_callback_entry(struct cn_queue_dev *dev, const char *name,
struct cb_id *id,
void (*callback)(struct cn_msg *, struct netlink_skb_parms *))
void cn_queue_release_callback(struct cn_callback_entry *cbq)
int cn_cb_equal(struct cb_id *i1, struct cb_id *i2)
int cn_queue_add_callback(struct cn_queue_dev *dev, const char *name,
struct cb_id *id,
void (*callback)(struct cn_msg *, struct netlink_skb_parms *))
void cn_queue_del_callback(struct cn_queue_dev *dev, struct cb_id *id)
struct cn_queue_dev *cn_queue_alloc_dev(const char *name, struct sock *nls)
void cn_queue_free_dev(struct cn_queue_dev *dev)
