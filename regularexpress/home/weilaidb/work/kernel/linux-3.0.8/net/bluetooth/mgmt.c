#define MGMT_VERSION	0
#define MGMT_REVISION	1
struct pending_cmd ;
LIST_HEAD(cmd_list);
static int cmd_status(struct sock *sk, u16 index, u16 cmd, u8 status)
static int cmd_complete(struct sock *sk, u16 index, u16 cmd, void *rp,
size_t rp_len)
static int read_version(struct sock *sk)
static int read_index_list(struct sock *sk)
static int read_controller_info(struct sock *sk, u16 index)
static void mgmt_pending_free(struct pending_cmd *cmd)
static struct pending_cmd *mgmt_pending_add(struct sock *sk, u16 opcode,
u16 index, void *data, u16 len)
static void mgmt_pending_foreach(u16 opcode, int index,
void (*cb)(struct pending_cmd *cmd, void *data),
void *data)
static struct pending_cmd *mgmt_pending_find(u16 opcode, int index)
static void mgmt_pending_remove(struct pending_cmd *cmd)
static int set_powered(struct sock *sk, u16 index, unsigned char *data, u16 len)
static int set_discoverable(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static int set_connectable(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static int mgmt_event(u16 event, u16 index, void *data, u16 data_len,
struct sock *skip_sk)
static int send_mode_rsp(struct sock *sk, u16 opcode, u16 index, u8 val)
static int set_pairable(struct sock *sk, u16 index, unsigned char *data,
u16 len)
#define EIR_FLAGS		0x01
#define EIR_UUID16_SOME		0x02
#define EIR_UUID16_ALL		0x03
#define EIR_UUID32_SOME		0x04
#define EIR_UUID32_ALL		0x05
#define EIR_UUID128_SOME	0x06
#define EIR_UUID128_ALL		0x07
#define EIR_NAME_SHORT		0x08
#define EIR_NAME_COMPLETE	0x09
#define EIR_TX_POWER		0x0A
#define EIR_DEVICE_ID		0x10
#define PNP_INFO_SVCLASS_ID		0x1200
static u8 bluetooth_base_uuid[] = ;
static u16 get_uuid16(u8 *uuid128)
static void create_eir(struct hci_dev *hdev, u8 *data)
static int update_eir(struct hci_dev *hdev)
static u8 get_service_classes(struct hci_dev *hdev)
static int update_class(struct hci_dev *hdev)
static int add_uuid(struct sock *sk, u16 index, unsigned char *data, u16 len)
static int remove_uuid(struct sock *sk, u16 index, unsigned char *data, u16 len)
static int set_dev_class(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static int set_service_cache(struct sock *sk, u16 index,  unsigned char *data,
u16 len)
static int load_keys(struct sock *sk, u16 index, unsigned char *data, u16 len)
static int remove_key(struct sock *sk, u16 index, unsigned char *data, u16 len)
static int disconnect(struct sock *sk, u16 index, unsigned char *data, u16 len)
static int get_connections(struct sock *sk, u16 index)
static int pin_code_reply(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static int pin_code_neg_reply(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static int set_io_capability(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static inline struct pending_cmd *find_pairing(struct hci_conn *conn)
static void pairing_complete(struct pending_cmd *cmd, u8 status)
static void pairing_complete_cb(struct hci_conn *conn, u8 status)
static int pair_device(struct sock *sk, u16 index, unsigned char *data, u16 len)
static int user_confirm_reply(struct sock *sk, u16 index, unsigned char *data,
u16 len, int success)
static int set_local_name(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static int read_local_oob_data(struct sock *sk, u16 index)
static int add_remote_oob_data(struct sock *sk, u16 index, unsigned char *data,
u16 len)
static int remove_remote_oob_data(struct sock *sk, u16 index,
unsigned char *data, u16 len)
static int start_discovery(struct sock *sk, u16 index)
static int stop_discovery(struct sock *sk, u16 index)
int mgmt_control(struct sock *sk, struct msghdr *msg, size_t msglen)
int mgmt_index_added(u16 index)
int mgmt_index_removed(u16 index)
struct cmd_lookup ;
static void mode_rsp(struct pending_cmd *cmd, void *data)
int mgmt_powered(u16 index, u8 powered)
int mgmt_discoverable(u16 index, u8 discoverable)
int mgmt_connectable(u16 index, u8 connectable)
int mgmt_new_key(u16 index, struct link_key *key, u8 persistent)
int mgmt_connected(u16 index, bdaddr_t *bdaddr)
static void disconnect_rsp(struct pending_cmd *cmd, void *data)
int mgmt_disconnected(u16 index, bdaddr_t *bdaddr)
int mgmt_disconnect_failed(u16 index)
int mgmt_connect_failed(u16 index, bdaddr_t *bdaddr, u8 status)
int mgmt_pin_code_request(u16 index, bdaddr_t *bdaddr, u8 secure)
int mgmt_pin_code_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status)
int mgmt_pin_code_neg_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status)
int mgmt_user_confirm_request(u16 index, bdaddr_t *bdaddr, __le32 value,
u8 confirm_hint)
static int confirm_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status,
u8 opcode)
int mgmt_user_confirm_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status)
int mgmt_user_confirm_neg_reply_complete(u16 index, bdaddr_t *bdaddr, u8 status)
int mgmt_auth_failed(u16 index, bdaddr_t *bdaddr, u8 status)
int mgmt_set_local_name_complete(u16 index, u8 *name, u8 status)
int mgmt_read_local_oob_data_reply_complete(u16 index, u8 *hash, u8 *randomizer,
u8 status)
int mgmt_device_found(u16 index, bdaddr_t *bdaddr, u8 *dev_class, s8 rssi,
u8 *eir)
int mgmt_remote_name(u16 index, bdaddr_t *bdaddr, u8 *name)
int mgmt_discovering(u16 index, u8 discovering)
