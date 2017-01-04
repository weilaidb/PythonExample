#define VERSION "1.11"
static int disable_cfc;
static int l2cap_ertm;
static int channel_mtu = -1;
static unsigned int l2cap_mtu = RFCOMM_MAX_L2CAP_MTU;
static struct task_struct *rfcomm_thread;
static DEFINE_MUTEX(rfcomm_mutex);
#define rfcomm_lock()	mutex_lock(&rfcomm_mutex)
#define rfcomm_unlock()	mutex_unlock(&rfcomm_mutex)
static unsigned long rfcomm_event;
static LIST_HEAD(session_list);
static int rfcomm_send_frame(struct rfcomm_session *s, u8 *data, int len);
static int rfcomm_send_sabm(struct rfcomm_session *s, u8 dlci);
static int rfcomm_send_disc(struct rfcomm_session *s, u8 dlci);
static int rfcomm_queue_disc(struct rfcomm_dlc *d);
static int rfcomm_send_nsc(struct rfcomm_session *s, int cr, u8 type);
static int rfcomm_send_pn(struct rfcomm_session *s, int cr, struct rfcomm_dlc *d);
static int rfcomm_send_msc(struct rfcomm_session *s, int cr, u8 dlci, u8 v24_sig);
static int rfcomm_send_test(struct rfcomm_session *s, int cr, u8 *pattern, int len);
static int rfcomm_send_credits(struct rfcomm_session *s, u8 addr, u8 credits);
static void rfcomm_make_uih(struct sk_buff *skb, u8 addr);
static void rfcomm_process_connect(struct rfcomm_session *s);
static struct rfcomm_session *rfcomm_session_create(bdaddr_t *src,
bdaddr_t *dst,
u8 sec_level,
int *err);
static struct rfcomm_session *rfcomm_session_get(bdaddr_t *src, bdaddr_t *dst);
static void rfcomm_session_del(struct rfcomm_session *s);
#define __get_dlci(b)     ((b & 0xfc) >> 2)
#define __get_channel(b)  ((b & 0xf8) >> 3)
#define __get_dir(b)      ((b & 0x04) >> 2)
#define __get_type(b)     ((b & 0xef))
#define __test_ea(b)      ((b & 0x01))
#define __test_cr(b)      ((b & 0x02))
#define __test_pf(b)      ((b & 0x10))
#define __addr(cr, dlci)       (((dlci & 0x3f) << 2) | (cr << 1) | 0x01)
#define __ctrl(type, pf)       (((type & 0xef) | (pf << 4)))
#define __dlci(dir, chn)       (((chn & 0x1f) << 1) | dir)
#define __srv_channel(dlci)    (dlci >> 1)
#define __dir(dlci)            (dlci & 0x01)
#define __len8(len)       (((len) << 1) | 1)
#define __len16(len)      ((len) << 1)
#define __mcc_type(cr, type)   (((type << 2) | (cr << 1) | 0x01))
#define __get_mcc_type(b) ((b & 0xfc) >> 2)
#define __get_mcc_len(b)  ((b & 0xfe) >> 1)
#define __rpn_line_settings(data, stop, parity)  ((data & 0x3) | ((stop & 0x1) << 2) | ((parity & 0x7) << 3))
#define __get_rpn_data_bits(line) ((line) & 0x3)
#define __get_rpn_stop_bits(line) (((line) >> 2) & 0x1)
#define __get_rpn_parity(line)    (((line) >> 3) & 0x7)
static inline void rfcomm_schedule(void)
static inline void rfcomm_session_put(struct rfcomm_session *s)
static unsigned char rfcomm_crc_table[256] = ;
#define __crc(data) (rfcomm_crc_table[rfcomm_crc_table[0xff ^ data[0]] ^ data[1]])
static inline u8 __fcs(u8 *data)
static inline u8 __fcs2(u8 *data)
static inline int __check_fcs(u8 *data, int type, u8 fcs)
static void rfcomm_l2state_change(struct sock *sk)
static void rfcomm_l2data_ready(struct sock *sk, int bytes)
static int rfcomm_l2sock_create(struct socket **sock)
static inline int rfcomm_check_security(struct rfcomm_dlc *d)
static void rfcomm_session_timeout(unsigned long arg)
static void rfcomm_session_set_timer(struct rfcomm_session *s, long timeout)
static void rfcomm_session_clear_timer(struct rfcomm_session *s)
static void rfcomm_dlc_timeout(unsigned long arg)
static void rfcomm_dlc_set_timer(struct rfcomm_dlc *d, long timeout)
static void rfcomm_dlc_clear_timer(struct rfcomm_dlc *d)
static void rfcomm_dlc_clear_state(struct rfcomm_dlc *d)
struct rfcomm_dlc *rfcomm_dlc_alloc(gfp_t prio)
void rfcomm_dlc_free(struct rfcomm_dlc *d)
static void rfcomm_dlc_link(struct rfcomm_session *s, struct rfcomm_dlc *d)
static void rfcomm_dlc_unlink(struct rfcomm_dlc *d)
static struct rfcomm_dlc *rfcomm_dlc_get(struct rfcomm_session *s, u8 dlci)
static int __rfcomm_dlc_open(struct rfcomm_dlc *d, bdaddr_t *src, bdaddr_t *dst, u8 channel)
int rfcomm_dlc_open(struct rfcomm_dlc *d, bdaddr_t *src, bdaddr_t *dst, u8 channel)
static int __rfcomm_dlc_close(struct rfcomm_dlc *d, int err)
int rfcomm_dlc_close(struct rfcomm_dlc *d, int err)
int rfcomm_dlc_send(struct rfcomm_dlc *d, struct sk_buff *skb)
void __rfcomm_dlc_throttle(struct rfcomm_dlc *d)
void __rfcomm_dlc_unthrottle(struct rfcomm_dlc *d)
int rfcomm_dlc_set_modem_status(struct rfcomm_dlc *d, u8 v24_sig)
int rfcomm_dlc_get_modem_status(struct rfcomm_dlc *d, u8 *v24_sig)
static struct rfcomm_session *rfcomm_session_add(struct socket *sock, int state)
static void rfcomm_session_del(struct rfcomm_session *s)
static struct rfcomm_session *rfcomm_session_get(bdaddr_t *src, bdaddr_t *dst)
static void rfcomm_session_close(struct rfcomm_session *s, int err)
static struct rfcomm_session *rfcomm_session_create(bdaddr_t *src,
bdaddr_t *dst,
u8 sec_level,
int *err)
void rfcomm_session_getaddr(struct rfcomm_session *s, bdaddr_t *src, bdaddr_t *dst)
static int rfcomm_send_frame(struct rfcomm_session *s, u8 *data, int len)
static int rfcomm_send_sabm(struct rfcomm_session *s, u8 dlci)
static int rfcomm_send_ua(struct rfcomm_session *s, u8 dlci)
static int rfcomm_send_disc(struct rfcomm_session *s, u8 dlci)
static int rfcomm_queue_disc(struct rfcomm_dlc *d)
static int rfcomm_send_dm(struct rfcomm_session *s, u8 dlci)
static int rfcomm_send_nsc(struct rfcomm_session *s, int cr, u8 type)
static int rfcomm_send_pn(struct rfcomm_session *s, int cr, struct rfcomm_dlc *d)
int rfcomm_send_rpn(struct rfcomm_session *s, int cr, u8 dlci,
u8 bit_rate, u8 data_bits, u8 stop_bits,
u8 parity, u8 flow_ctrl_settings,
u8 xon_char, u8 xoff_char, u16 param_mask)
static int rfcomm_send_rls(struct rfcomm_session *s, int cr, u8 dlci, u8 status)
static int rfcomm_send_msc(struct rfcomm_session *s, int cr, u8 dlci, u8 v24_sig)
static int rfcomm_send_fcoff(struct rfcomm_session *s, int cr)
static int rfcomm_send_fcon(struct rfcomm_session *s, int cr)
static int rfcomm_send_test(struct rfcomm_session *s, int cr, u8 *pattern, int len)
static int rfcomm_send_credits(struct rfcomm_session *s, u8 addr, u8 credits)
static void rfcomm_make_uih(struct sk_buff *skb, u8 addr)
static int rfcomm_recv_ua(struct rfcomm_session *s, u8 dlci)
static int rfcomm_recv_dm(struct rfcomm_session *s, u8 dlci)
static int rfcomm_recv_disc(struct rfcomm_session *s, u8 dlci)
void rfcomm_dlc_accept(struct rfcomm_dlc *d)
static void rfcomm_check_accept(struct rfcomm_dlc *d)
static int rfcomm_recv_sabm(struct rfcomm_session *s, u8 dlci)
static int rfcomm_apply_pn(struct rfcomm_dlc *d, int cr, struct rfcomm_pn *pn)
static int rfcomm_recv_pn(struct rfcomm_session *s, int cr, struct sk_buff *skb)
static int rfcomm_recv_rpn(struct rfcomm_session *s, int cr, int len, struct sk_buff *skb)
static int rfcomm_recv_rls(struct rfcomm_session *s, int cr, struct sk_buff *skb)
static int rfcomm_recv_msc(struct rfcomm_session *s, int cr, struct sk_buff *skb)
static int rfcomm_recv_mcc(struct rfcomm_session *s, struct sk_buff *skb)
static int rfcomm_recv_data(struct rfcomm_session *s, u8 dlci, int pf, struct sk_buff *skb)
static int rfcomm_recv_frame(struct rfcomm_session *s, struct sk_buff *skb)
static void rfcomm_process_connect(struct rfcomm_session *s)
static inline int rfcomm_process_tx(struct rfcomm_dlc *d)
static inline void rfcomm_process_dlcs(struct rfcomm_session *s)
static inline void rfcomm_process_rx(struct rfcomm_session *s)
static inline void rfcomm_accept_connection(struct rfcomm_session *s)
static inline void rfcomm_check_connection(struct rfcomm_session *s)
static inline void rfcomm_process_sessions(void)
static int rfcomm_add_listener(bdaddr_t *ba)
static void rfcomm_kill_listener(void)
static int rfcomm_run(void *unused)
static void rfcomm_security_cfm(struct hci_conn *conn, u8 status, u8 encrypt)
static struct hci_cb rfcomm_cb = ;
static int rfcomm_dlc_debugfs_show(struct seq_file *f, void *x)
static int rfcomm_dlc_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations rfcomm_dlc_debugfs_fops = ;
static struct dentry *rfcomm_dlc_debugfs;
static int __init rfcomm_init(void)
static void __exit rfcomm_exit(void)
module_init(rfcomm_init);
module_exit(rfcomm_exit);
module_param(disable_cfc, bool, 0644);
MODULE_PARM_DESC(disable_cfc, "Disable credit based flow control");
module_param(channel_mtu, int, 0644);
MODULE_PARM_DESC(channel_mtu, "Default MTU for the RFCOMM channel");
module_param(l2cap_mtu, uint, 0644);
MODULE_PARM_DESC(l2cap_mtu, "Default MTU for the L2CAP connection");
module_param(l2cap_ertm, bool, 0644);
MODULE_PARM_DESC(l2cap_ertm, "Use L2CAP ERTM mode for connection");
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth RFCOMM ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("bt-proto-3");
