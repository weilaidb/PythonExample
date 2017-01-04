#define __HCI_CORE_H
#define HCI_PROTO_L2CAP	0
#define HCI_PROTO_SCO	1
struct inquiry_data ;
struct inquiry_entry ;
struct inquiry_cache ;
struct hci_conn_hash ;
struct bdaddr_list ;
struct bt_uuid ;
struct link_key ;
struct oob_data ;
#define NUM_REASSEMBLY 4
struct hci_dev ;
struct hci_conn ;
extern struct hci_proto *hci_proto[];
extern struct list_head hci_dev_list;
extern struct list_head hci_cb_list;
extern rwlock_t hci_dev_list_lock;
extern rwlock_t hci_cb_list_lock;
#define INQUIRY_CACHE_AGE_MAX   (HZ*30)
#define INQUIRY_ENTRY_AGE_MAX   (HZ*60)
#define inquiry_cache_lock(c)		spin_lock(&c->lock)
#define inquiry_cache_unlock(c)		spin_unlock(&c->lock)
#define inquiry_cache_lock_bh(c)	spin_lock_bh(&c->lock)
#define inquiry_cache_unlock_bh(c)	spin_unlock_bh(&c->lock)
static inline void inquiry_cache_init(struct hci_dev *hdev)
static inline int inquiry_cache_empty(struct hci_dev *hdev)
static inline long inquiry_cache_age(struct hci_dev *hdev)
static inline long inquiry_entry_age(struct inquiry_entry *e)
struct inquiry_entry *hci_inquiry_cache_lookup(struct hci_dev *hdev, bdaddr_t *bdaddr);
void hci_inquiry_cache_update(struct hci_dev *hdev, struct inquiry_data *data);
enum ;
static inline void hci_conn_hash_init(struct hci_dev *hdev)
static inline void hci_conn_hash_add(struct hci_dev *hdev, struct hci_conn *c)
static inline void hci_conn_hash_del(struct hci_dev *hdev, struct hci_conn *c)
static inline struct hci_conn *hci_conn_hash_lookup_handle(struct hci_dev *hdev,
__u16 handle)
static inline struct hci_conn *hci_conn_hash_lookup_ba(struct hci_dev *hdev,
__u8 type, bdaddr_t *ba)
static inline struct hci_conn *hci_conn_hash_lookup_state(struct hci_dev *hdev,
__u8 type, __u16 state)
void hci_acl_connect(struct hci_conn *conn);
void hci_acl_disconn(struct hci_conn *conn, __u8 reason);
void hci_add_sco(struct hci_conn *conn, __u16 handle);
void hci_setup_sync(struct hci_conn *conn, __u16 handle);
void hci_sco_setup(struct hci_conn *conn, __u8 status);
struct hci_conn *hci_conn_add(struct hci_dev *hdev, int type, bdaddr_t *dst);
int hci_conn_del(struct hci_conn *conn);
void hci_conn_hash_flush(struct hci_dev *hdev);
void hci_conn_check_pending(struct hci_dev *hdev);
struct hci_conn *hci_connect(struct hci_dev *hdev, int type, bdaddr_t *dst, __u8 sec_level, __u8 auth_type);
int hci_conn_check_link_mode(struct hci_conn *conn);
int hci_conn_check_secure(struct hci_conn *conn, __u8 sec_level);
int hci_conn_security(struct hci_conn *conn, __u8 sec_level, __u8 auth_type);
int hci_conn_change_link_key(struct hci_conn *conn);
int hci_conn_switch_role(struct hci_conn *conn, __u8 role);
void hci_conn_enter_active_mode(struct hci_conn *conn);
void hci_conn_enter_sniff_mode(struct hci_conn *conn);
void hci_conn_hold_device(struct hci_conn *conn);
void hci_conn_put_device(struct hci_conn *conn);
static inline void hci_conn_hold(struct hci_conn *conn)
static inline void hci_conn_put(struct hci_conn *conn)
static inline void __hci_dev_put(struct hci_dev *d)
static inline void hci_dev_put(struct hci_dev *d)
static inline struct hci_dev *__hci_dev_hold(struct hci_dev *d)
static inline struct hci_dev *hci_dev_hold(struct hci_dev *d)
#define hci_dev_lock(d)		spin_lock(&d->lock)
#define hci_dev_unlock(d)	spin_unlock(&d->lock)
#define hci_dev_lock_bh(d)	spin_lock_bh(&d->lock)
#define hci_dev_unlock_bh(d)	spin_unlock_bh(&d->lock)
struct hci_dev *hci_dev_get(int index);
struct hci_dev *hci_get_route(bdaddr_t *src, bdaddr_t *dst);
struct hci_dev *hci_alloc_dev(void);
void hci_free_dev(struct hci_dev *hdev);
int hci_register_dev(struct hci_dev *hdev);
int hci_unregister_dev(struct hci_dev *hdev);
int hci_suspend_dev(struct hci_dev *hdev);
int hci_resume_dev(struct hci_dev *hdev);
int hci_dev_open(__u16 dev);
int hci_dev_close(__u16 dev);
int hci_dev_reset(__u16 dev);
int hci_dev_reset_stat(__u16 dev);
int hci_dev_cmd(unsigned int cmd, void __user *arg);
int hci_get_dev_list(void __user *arg);
int hci_get_dev_info(void __user *arg);
int hci_get_conn_list(void __user *arg);
int hci_get_conn_info(struct hci_dev *hdev, void __user *arg);
int hci_get_auth_info(struct hci_dev *hdev, void __user *arg);
int hci_inquiry(void __user *arg);
struct bdaddr_list *hci_blacklist_lookup(struct hci_dev *hdev, bdaddr_t *bdaddr);
int hci_blacklist_clear(struct hci_dev *hdev);
int hci_uuids_clear(struct hci_dev *hdev);
int hci_link_keys_clear(struct hci_dev *hdev);
struct link_key *hci_find_link_key(struct hci_dev *hdev, bdaddr_t *bdaddr);
int hci_add_link_key(struct hci_dev *hdev, struct hci_conn *conn, int new_key,
bdaddr_t *bdaddr, u8 *val, u8 type, u8 pin_len);
int hci_remove_link_key(struct hci_dev *hdev, bdaddr_t *bdaddr);
int hci_remote_oob_data_clear(struct hci_dev *hdev);
struct oob_data *hci_find_remote_oob_data(struct hci_dev *hdev,
bdaddr_t *bdaddr);
int hci_add_remote_oob_data(struct hci_dev *hdev, bdaddr_t *bdaddr, u8 *hash,
u8 *randomizer);
int hci_remove_remote_oob_data(struct hci_dev *hdev, bdaddr_t *bdaddr);
void hci_del_off_timer(struct hci_dev *hdev);
void hci_event_packet(struct hci_dev *hdev, struct sk_buff *skb);
int hci_recv_frame(struct sk_buff *skb);
int hci_recv_fragment(struct hci_dev *hdev, int type, void *data, int count);
int hci_recv_stream_fragment(struct hci_dev *hdev, void *data, int count);
int hci_register_sysfs(struct hci_dev *hdev);
void hci_unregister_sysfs(struct hci_dev *hdev);
void hci_conn_init_sysfs(struct hci_conn *conn);
void hci_conn_add_sysfs(struct hci_conn *conn);
void hci_conn_del_sysfs(struct hci_conn *conn);
#define SET_HCIDEV_DEV(hdev, pdev) ((hdev)->parent = (pdev))
#define lmp_rswitch_capable(dev)   ((dev)->features[0] & LMP_RSWITCH)
#define lmp_encrypt_capable(dev)   ((dev)->features[0] & LMP_ENCRYPT)
#define lmp_sniff_capable(dev)     ((dev)->features[0] & LMP_SNIFF)
#define lmp_sniffsubr_capable(dev) ((dev)->features[5] & LMP_SNIFF_SUBR)
#define lmp_esco_capable(dev)      ((dev)->features[3] & LMP_ESCO)
#define lmp_ssp_capable(dev)       ((dev)->features[6] & LMP_SIMPLE_PAIR)
#define lmp_no_flush_capable(dev)  ((dev)->features[6] & LMP_NO_FLUSH)
#define lmp_le_capable(dev)        ((dev)->features[4] & LMP_LE)
struct hci_proto ;
static inline int hci_proto_connect_ind(struct hci_dev *hdev, bdaddr_t *bdaddr, __u8 type)
static inline void hci_proto_connect_cfm(struct hci_conn *conn, __u8 status)
static inline int hci_proto_disconn_ind(struct hci_conn *conn)
static inline void hci_proto_disconn_cfm(struct hci_conn *conn, __u8 reason)
static inline void hci_proto_auth_cfm(struct hci_conn *conn, __u8 status)
static inline void hci_proto_encrypt_cfm(struct hci_conn *conn, __u8 status, __u8 encrypt)
int hci_register_proto(struct hci_proto *hproto);
int hci_unregister_proto(struct hci_proto *hproto);
struct hci_cb ;
static inline void hci_auth_cfm(struct hci_conn *conn, __u8 status)
static inline void hci_encrypt_cfm(struct hci_conn *conn, __u8 status, __u8 encrypt)
static inline void hci_key_change_cfm(struct hci_conn *conn, __u8 status)
static inline void hci_role_switch_cfm(struct hci_conn *conn, __u8 status, __u8 role)
int hci_register_cb(struct hci_cb *hcb);
int hci_unregister_cb(struct hci_cb *hcb);
int hci_register_notifier(struct notifier_block *nb);
int hci_unregister_notifier(struct notifier_block *nb);
int hci_send_cmd(struct hci_dev *hdev, __u16 opcode, __u32 plen, void *param);
void hci_send_acl(struct hci_conn *conn, struct sk_buff *skb, __u16 flags);
void hci_send_sco(struct hci_conn *conn, struct sk_buff *skb);
void *hci_sent_cmd_data(struct hci_dev *hdev, __u16 opcode);
void hci_si_event(struct hci_dev *hdev, int type, int dlen, void *data);
void hci_send_to_sock(struct hci_dev *hdev, struct sk_buff *skb,
struct sock *skip_sk);
int mgmt_control(struct sock *sk, struct msghdr *msg, size_t len);
int mgmt_index_added(u16 index);
int mgmt_index_removed(u16 index);
int mgmt_powered(u16 index, u8 powered);
int mgmt_discoverable(u16 index, u8 discoverable);
int mgmt_connectable(u16 index, u8 connectable);
int mgmt_new_key(u16 index, struct link_key *key, u8 persistent);
int mgmt_connected(u16 index, bdaddr_t *bdaddr);
int mgmt_disconnected(u16 index, bdaddr_t *bdaddr);
int mgmt_disconnect_failed(u16 index);
int mgmt_connect_failed(u16 index, bdaddr_t *bdaddr, u8 status);
int mgmt_pin_code_request(u16 index, bdaddr_t *bdaddr, u8 secure);
int mgmt_pin_code_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status);
int mgmt_pin_code_neg_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status);
int mgmt_user_confirm_request(u16 index, bdaddr_t *bdaddr, __le32 value,
u8 confirm_hint);
int mgmt_user_confirm_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status);
int mgmt_user_confirm_neg_reply_complete(u16 index, bdaddr_t *bdaddr,
u8 status);
int mgmt_auth_failed(u16 index, bdaddr_t *bdaddr, u8 status);
int mgmt_set_local_name_complete(u16 index, u8 *name, u8 status);
int mgmt_read_local_oob_data_reply_complete(u16 index, u8 *hash, u8 *randomizer,
u8 status);
int mgmt_device_found(u16 index, bdaddr_t *bdaddr, u8 *dev_class, s8 rssi,
u8 *eir);
int mgmt_remote_name(u16 index, bdaddr_t *bdaddr, u8 *name);
int mgmt_discovering(u16 index, u8 discovering);
#define hci_pi(sk) ((struct hci_pinfo *) sk)
struct hci_pinfo ;
#define HCI_SFLT_MAX_OGF  5
struct hci_sec_filter ;
#define HCI_REQ_DONE	  0
#define HCI_REQ_PEND	  1
#define HCI_REQ_CANCELED  2
#define hci_req_lock(d)		mutex_lock(&d->req_lock)
#define hci_req_unlock(d)	mutex_unlock(&d->req_lock)
void hci_req_complete(struct hci_dev *hdev, __u16 cmd, int result);
void hci_le_conn_update(struct hci_conn *conn, u16 min, u16 max,
u16 latency, u16 to_multiplier);
