#define AUTO_OFF_TIMEOUT 2000
static void hci_cmd_task(unsigned long arg);
static void hci_rx_task(unsigned long arg);
static void hci_tx_task(unsigned long arg);
static DEFINE_RWLOCK(hci_task_lock);
LIST_HEAD(hci_dev_list);
DEFINE_RWLOCK(hci_dev_list_lock);
LIST_HEAD(hci_cb_list);
DEFINE_RWLOCK(hci_cb_list_lock);
#define HCI_MAX_PROTO	2
struct hci_proto *hci_proto[HCI_MAX_PROTO];
static ATOMIC_NOTIFIER_HEAD(hci_notifier);
int hci_register_notifier(struct notifier_block *nb)
int hci_unregister_notifier(struct notifier_block *nb)
static void hci_notify(struct hci_dev *hdev, int event)
void hci_req_complete(struct hci_dev *hdev, __u16 cmd, int result)
static void hci_req_cancel(struct hci_dev *hdev, int err)
static int __hci_request(struct hci_dev *hdev, void (*req)(struct hci_dev *hdev, unsigned long opt),
unsigned long opt, __u32 timeout)
static inline int hci_request(struct hci_dev *hdev, void (*req)(struct hci_dev *hdev, unsigned long opt),
unsigned long opt, __u32 timeout)
static void hci_reset_req(struct hci_dev *hdev, unsigned long opt)
static void hci_init_req(struct hci_dev *hdev, unsigned long opt)
static void hci_le_init_req(struct hci_dev *hdev, unsigned long opt)
static void hci_scan_req(struct hci_dev *hdev, unsigned long opt)
static void hci_auth_req(struct hci_dev *hdev, unsigned long opt)
static void hci_encrypt_req(struct hci_dev *hdev, unsigned long opt)
static void hci_linkpol_req(struct hci_dev *hdev, unsigned long opt)
struct hci_dev *hci_dev_get(int index)
static void inquiry_cache_flush(struct hci_dev *hdev)
struct inquiry_entry *hci_inquiry_cache_lookup(struct hci_dev *hdev, bdaddr_t *bdaddr)
void hci_inquiry_cache_update(struct hci_dev *hdev, struct inquiry_data *data)
static int inquiry_cache_dump(struct hci_dev *hdev, int num, __u8 *buf)
static void hci_inq_req(struct hci_dev *hdev, unsigned long opt)
int hci_inquiry(void __user *arg)
int hci_dev_open(__u16 dev)
static int hci_dev_do_close(struct hci_dev *hdev)
int hci_dev_close(__u16 dev)
int hci_dev_reset(__u16 dev)
int hci_dev_reset_stat(__u16 dev)
int hci_dev_cmd(unsigned int cmd, void __user *arg)
int hci_get_dev_list(void __user *arg)
int hci_get_dev_info(void __user *arg)
static int hci_rfkill_set_block(void *data, bool blocked)
static const struct rfkill_ops hci_rfkill_ops = ;
struct hci_dev *hci_alloc_dev(void)
EXPORT_SYMBOL(hci_alloc_dev);
void hci_free_dev(struct hci_dev *hdev)
EXPORT_SYMBOL(hci_free_dev);
static void hci_power_on(struct work_struct *work)
static void hci_power_off(struct work_struct *work)
static void hci_auto_off(unsigned long data)
void hci_del_off_timer(struct hci_dev *hdev)
int hci_uuids_clear(struct hci_dev *hdev)
int hci_link_keys_clear(struct hci_dev *hdev)
struct link_key *hci_find_link_key(struct hci_dev *hdev, bdaddr_t *bdaddr)
static int hci_persistent_key(struct hci_dev *hdev, struct hci_conn *conn,
u8 key_type, u8 old_key_type)
int hci_add_link_key(struct hci_dev *hdev, struct hci_conn *conn, int new_key,
bdaddr_t *bdaddr, u8 *val, u8 type, u8 pin_len)
int hci_remove_link_key(struct hci_dev *hdev, bdaddr_t *bdaddr)
static void hci_cmd_timer(unsigned long arg)
struct oob_data *hci_find_remote_oob_data(struct hci_dev *hdev,
bdaddr_t *bdaddr)
int hci_remove_remote_oob_data(struct hci_dev *hdev, bdaddr_t *bdaddr)
int hci_remote_oob_data_clear(struct hci_dev *hdev)
int hci_add_remote_oob_data(struct hci_dev *hdev, bdaddr_t *bdaddr, u8 *hash,
u8 *randomizer)
int hci_register_dev(struct hci_dev *hdev)
EXPORT_SYMBOL(hci_register_dev);
int hci_unregister_dev(struct hci_dev *hdev)
EXPORT_SYMBOL(hci_unregister_dev);
int hci_suspend_dev(struct hci_dev *hdev)
EXPORT_SYMBOL(hci_suspend_dev);
int hci_resume_dev(struct hci_dev *hdev)
EXPORT_SYMBOL(hci_resume_dev);
int hci_recv_frame(struct sk_buff *skb)
EXPORT_SYMBOL(hci_recv_frame);
static int hci_reassembly(struct hci_dev *hdev, int type, void *data,
int count, __u8 index)
int hci_recv_fragment(struct hci_dev *hdev, int type, void *data, int count)
EXPORT_SYMBOL(hci_recv_fragment);
#define STREAM_REASSEMBLY 0
int hci_recv_stream_fragment(struct hci_dev *hdev, void *data, int count)
EXPORT_SYMBOL(hci_recv_stream_fragment);
int hci_register_proto(struct hci_proto *hp)
EXPORT_SYMBOL(hci_register_proto);
int hci_unregister_proto(struct hci_proto *hp)
EXPORT_SYMBOL(hci_unregister_proto);
int hci_register_cb(struct hci_cb *cb)
EXPORT_SYMBOL(hci_register_cb);
int hci_unregister_cb(struct hci_cb *cb)
EXPORT_SYMBOL(hci_unregister_cb);
static int hci_send_frame(struct sk_buff *skb)
int hci_send_cmd(struct hci_dev *hdev, __u16 opcode, __u32 plen, void *param)
void *hci_sent_cmd_data(struct hci_dev *hdev, __u16 opcode)
static void hci_add_acl_hdr(struct sk_buff *skb, __u16 handle, __u16 flags)
void hci_send_acl(struct hci_conn *conn, struct sk_buff *skb, __u16 flags)
EXPORT_SYMBOL(hci_send_acl);
void hci_send_sco(struct hci_conn *conn, struct sk_buff *skb)
EXPORT_SYMBOL(hci_send_sco);
static inline struct hci_conn *hci_low_sent(struct hci_dev *hdev, __u8 type, int *quote)
static inline void hci_link_tx_to(struct hci_dev *hdev, __u8 type)
static inline void hci_sched_acl(struct hci_dev *hdev)
static inline void hci_sched_sco(struct hci_dev *hdev)
static inline void hci_sched_esco(struct hci_dev *hdev)
static inline void hci_sched_le(struct hci_dev *hdev)
static void hci_tx_task(unsigned long arg)
static inline void hci_acldata_packet(struct hci_dev *hdev, struct sk_buff *skb)
static inline void hci_scodata_packet(struct hci_dev *hdev, struct sk_buff *skb)
static void hci_rx_task(unsigned long arg)
static void hci_cmd_task(unsigned long arg)
