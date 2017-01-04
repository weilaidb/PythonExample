#define VERSION "1.2"
static DECLARE_RWSEM(hidp_session_sem);
static LIST_HEAD(hidp_session_list);
static unsigned char hidp_keycode[256] = ;
static unsigned char hidp_mkeyspat[] = ;
static struct hidp_session *__hidp_get_session(bdaddr_t *bdaddr)
static void __hidp_link_session(struct hidp_session *session)
static void __hidp_unlink_session(struct hidp_session *session)
static void __hidp_copy_session(struct hidp_session *session, struct hidp_conninfo *ci)
static int hidp_queue_event(struct hidp_session *session, struct input_dev *dev,
unsigned int type, unsigned int code, int value)
static int hidp_hidinput_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static int hidp_input_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static void hidp_input_report(struct hidp_session *session, struct sk_buff *skb)
static int __hidp_send_ctrl_message(struct hidp_session *session,
unsigned char hdr, unsigned char *data, int size)
static inline int hidp_send_ctrl_message(struct hidp_session *session,
unsigned char hdr, unsigned char *data, int size)
static int hidp_queue_report(struct hidp_session *session,
unsigned char *data, int size)
static int hidp_send_report(struct hidp_session *session, struct hid_report *report)
static int hidp_get_raw_report(struct hid_device *hid,
unsigned char report_number,
unsigned char *data, size_t count,
unsigned char report_type)
static int hidp_output_raw_report(struct hid_device *hid, unsigned char *data, size_t count,
unsigned char report_type)
static void hidp_idle_timeout(unsigned long arg)
static void hidp_set_timer(struct hidp_session *session)
static inline void hidp_del_timer(struct hidp_session *session)
static void hidp_process_handshake(struct hidp_session *session,
unsigned char param)
static void hidp_process_hid_control(struct hidp_session *session,
unsigned char param)
static int hidp_process_data(struct hidp_session *session, struct sk_buff *skb,
unsigned char param)
static void hidp_recv_ctrl_frame(struct hidp_session *session,
struct sk_buff *skb)
static void hidp_recv_intr_frame(struct hidp_session *session,
struct sk_buff *skb)
static int hidp_send_frame(struct socket *sock, unsigned char *data, int len)
static void hidp_process_transmit(struct hidp_session *session)
static int hidp_session(void *arg)
static struct device *hidp_get_device(struct hidp_session *session)
static int hidp_setup_input(struct hidp_session *session,
struct hidp_connadd_req *req)
static int hidp_open(struct hid_device *hid)
static void hidp_close(struct hid_device *hid)
static int hidp_parse(struct hid_device *hid)
static int hidp_start(struct hid_device *hid)
static void hidp_stop(struct hid_device *hid)
static struct hid_ll_driver hidp_hid_driver = ;
static int hidp_setup_hid(struct hidp_session *session,
struct hidp_connadd_req *req)
int hidp_add_connection(struct hidp_connadd_req *req, struct socket *ctrl_sock, struct socket *intr_sock)
int hidp_del_connection(struct hidp_conndel_req *req)
int hidp_get_connlist(struct hidp_connlist_req *req)
int hidp_get_conninfo(struct hidp_conninfo *ci)
static const struct hid_device_id hidp_table[] = ;
static struct hid_driver hidp_driver = ;
static int __init hidp_init(void)
static void __exit hidp_exit(void)
module_init(hidp_init);
module_exit(hidp_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth HIDP ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("bt-proto-6");
