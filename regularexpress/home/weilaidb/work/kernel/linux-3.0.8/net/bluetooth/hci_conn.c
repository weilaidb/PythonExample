static void hci_le_connect(struct hci_conn *conn)
static void hci_le_connect_cancel(struct hci_conn *conn)
void hci_acl_connect(struct hci_conn *conn)
static void hci_acl_connect_cancel(struct hci_conn *conn)
void hci_acl_disconn(struct hci_conn *conn, __u8 reason)
void hci_add_sco(struct hci_conn *conn, __u16 handle)
void hci_setup_sync(struct hci_conn *conn, __u16 handle)
void hci_le_conn_update(struct hci_conn *conn, u16 min, u16 max,
u16 latency, u16 to_multiplier)
EXPORT_SYMBOL(hci_le_conn_update);
void hci_sco_setup(struct hci_conn *conn, __u8 status)
static void hci_conn_timeout(unsigned long arg)
static void hci_conn_idle(unsigned long arg)
static void hci_conn_auto_accept(unsigned long arg)
struct hci_conn *hci_conn_add(struct hci_dev *hdev, int type, bdaddr_t *dst)
int hci_conn_del(struct hci_conn *conn)
struct hci_dev *hci_get_route(bdaddr_t *dst, bdaddr_t *src)
EXPORT_SYMBOL(hci_get_route);
struct hci_conn *hci_connect(struct hci_dev *hdev, int type, bdaddr_t *dst, __u8 sec_level, __u8 auth_type)
EXPORT_SYMBOL(hci_connect);
int hci_conn_check_link_mode(struct hci_conn *conn)
EXPORT_SYMBOL(hci_conn_check_link_mode);
static int hci_conn_auth(struct hci_conn *conn, __u8 sec_level, __u8 auth_type)
static void hci_conn_encrypt(struct hci_conn *conn)
int hci_conn_security(struct hci_conn *conn, __u8 sec_level, __u8 auth_type)
EXPORT_SYMBOL(hci_conn_security);
int hci_conn_check_secure(struct hci_conn *conn, __u8 sec_level)
EXPORT_SYMBOL(hci_conn_check_secure);
int hci_conn_change_link_key(struct hci_conn *conn)
EXPORT_SYMBOL(hci_conn_change_link_key);
int hci_conn_switch_role(struct hci_conn *conn, __u8 role)
EXPORT_SYMBOL(hci_conn_switch_role);
void hci_conn_enter_active_mode(struct hci_conn *conn)
void hci_conn_enter_sniff_mode(struct hci_conn *conn)
void hci_conn_hash_flush(struct hci_dev *hdev)
void hci_conn_check_pending(struct hci_dev *hdev)
void hci_conn_hold_device(struct hci_conn *conn)
EXPORT_SYMBOL(hci_conn_hold_device);
void hci_conn_put_device(struct hci_conn *conn)
EXPORT_SYMBOL(hci_conn_put_device);
int hci_get_conn_list(void __user *arg)
int hci_get_conn_info(struct hci_dev *hdev, void __user *arg)
int hci_get_auth_info(struct hci_dev *hdev, void __user *arg)
