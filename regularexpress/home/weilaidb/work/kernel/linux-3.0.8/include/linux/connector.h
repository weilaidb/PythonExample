#define __CONNECTOR_H
#define CN_IDX_PROC			0x1
#define CN_VAL_PROC			0x1
#define CN_IDX_CIFS			0x2
#define CN_VAL_CIFS                     0x1
#define CN_W1_IDX			0x3
#define CN_W1_VAL			0x1
#define CN_IDX_V86D			0x4
#define CN_VAL_V86D_UVESAFB		0x1
#define CN_IDX_BB			0x5
#define CN_DST_IDX			0x6
#define CN_DST_VAL			0x1
#define CN_IDX_DM			0x7
#define CN_VAL_DM_USERSPACE_LOG		0x1
#define CN_IDX_DRBD			0x8
#define CN_VAL_DRBD			0x1
#define CN_KVP_IDX			0x9
#define CN_NETLINK_USERS		10
#define CONNECTOR_MAX_MSG_SIZE		16384
struct cb_id ;
struct cn_msg ;
#define CN_CBQ_NAMELEN		32
struct cn_queue_dev ;
struct cn_callback_id ;
struct cn_callback_entry ;
struct cn_dev ;
int cn_add_callback(struct cb_id *id, const char *name,
void (*callback)(struct cn_msg *, struct netlink_skb_parms *));
void cn_del_callback(struct cb_id *);
int cn_netlink_send(struct cn_msg *, u32, gfp_t);
int cn_queue_add_callback(struct cn_queue_dev *dev, const char *name,
struct cb_id *id,
void (*callback)(struct cn_msg *, struct netlink_skb_parms *));
void cn_queue_del_callback(struct cn_queue_dev *dev, struct cb_id *id);
void cn_queue_release_callback(struct cn_callback_entry *);
struct cn_queue_dev *cn_queue_alloc_dev(const char *name, struct sock *);
void cn_queue_free_dev(struct cn_queue_dev *dev);
int cn_cb_equal(struct cb_id *, struct cb_id *);
