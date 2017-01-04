#define __L2CAP_H
#define L2CAP_DEFAULT_MTU		672
#define L2CAP_DEFAULT_MIN_MTU		48
#define L2CAP_DEFAULT_FLUSH_TO		0xffff
#define L2CAP_DEFAULT_TX_WINDOW		63
#define L2CAP_DEFAULT_MAX_TX		3
#define L2CAP_DEFAULT_RETRANS_TO	2000
#define L2CAP_DEFAULT_MONITOR_TO	12000
#define L2CAP_DEFAULT_MAX_PDU_SIZE	1009
#define L2CAP_DEFAULT_ACK_TO		200
#define L2CAP_LOCAL_BUSY_TRIES		12
#define L2CAP_LE_DEFAULT_MTU		23
#define L2CAP_CONN_TIMEOUT	(40000)
#define L2CAP_INFO_TIMEOUT	(4000)
struct sockaddr_l2 ;
#define L2CAP_OPTIONS	0x01
struct l2cap_options ;
#define L2CAP_CONNINFO	0x02
struct l2cap_conninfo ;
#define L2CAP_LM	0x03
#define L2CAP_LM_MASTER		0x0001
#define L2CAP_LM_AUTH		0x0002
#define L2CAP_LM_ENCRYPT	0x0004
#define L2CAP_LM_TRUSTED	0x0008
#define L2CAP_LM_RELIABLE	0x0010
#define L2CAP_LM_SECURE		0x0020
#define L2CAP_COMMAND_REJ	0x01
#define L2CAP_CONN_REQ		0x02
#define L2CAP_CONN_RSP		0x03
#define L2CAP_CONF_REQ		0x04
#define L2CAP_CONF_RSP		0x05
#define L2CAP_DISCONN_REQ	0x06
#define L2CAP_DISCONN_RSP	0x07
#define L2CAP_ECHO_REQ		0x08
#define L2CAP_ECHO_RSP		0x09
#define L2CAP_INFO_REQ		0x0a
#define L2CAP_INFO_RSP		0x0b
#define L2CAP_CONN_PARAM_UPDATE_REQ	0x12
#define L2CAP_CONN_PARAM_UPDATE_RSP	0x13
#define L2CAP_FEAT_FLOWCTL	0x00000001
#define L2CAP_FEAT_RETRANS	0x00000002
#define L2CAP_FEAT_ERTM		0x00000008
#define L2CAP_FEAT_STREAMING	0x00000010
#define L2CAP_FEAT_FCS		0x00000020
#define L2CAP_FEAT_FIXED_CHAN	0x00000080
#define L2CAP_FCS_NONE		0x00
#define L2CAP_FCS_CRC16		0x01
#define L2CAP_CTRL_SAR               0xC000
#define L2CAP_CTRL_REQSEQ            0x3F00
#define L2CAP_CTRL_TXSEQ             0x007E
#define L2CAP_CTRL_RETRANS           0x0080
#define L2CAP_CTRL_FINAL             0x0080
#define L2CAP_CTRL_POLL              0x0010
#define L2CAP_CTRL_SUPERVISE         0x000C
#define L2CAP_CTRL_FRAME_TYPE        0x0001
#define L2CAP_CTRL_TXSEQ_SHIFT      1
#define L2CAP_CTRL_REQSEQ_SHIFT     8
#define L2CAP_CTRL_SAR_SHIFT       14
#define L2CAP_SUPER_RCV_READY           0x0000
#define L2CAP_SUPER_REJECT              0x0004
#define L2CAP_SUPER_RCV_NOT_READY       0x0008
#define L2CAP_SUPER_SELECT_REJECT       0x000C
#define L2CAP_SDU_UNSEGMENTED       0x0000
#define L2CAP_SDU_START             0x4000
#define L2CAP_SDU_END               0x8000
#define L2CAP_SDU_CONTINUE          0xC000
struct l2cap_hdr  __packed;
#define L2CAP_HDR_SIZE		4
struct l2cap_cmd_hdr  __packed;
#define L2CAP_CMD_HDR_SIZE	4
struct l2cap_cmd_rej  __packed;
struct l2cap_conn_req  __packed;
struct l2cap_conn_rsp  __packed;
#define L2CAP_CID_SIGNALING	0x0001
#define L2CAP_CID_CONN_LESS	0x0002
#define L2CAP_CID_LE_DATA	0x0004
#define L2CAP_CID_LE_SIGNALING	0x0005
#define L2CAP_CID_SMP		0x0006
#define L2CAP_CID_DYN_START	0x0040
#define L2CAP_CID_DYN_END	0xffff
#define L2CAP_CR_SUCCESS	0x0000
#define L2CAP_CR_PEND		0x0001
#define L2CAP_CR_BAD_PSM	0x0002
#define L2CAP_CR_SEC_BLOCK	0x0003
#define L2CAP_CR_NO_MEM		0x0004
#define L2CAP_CS_NO_INFO	0x0000
#define L2CAP_CS_AUTHEN_PEND	0x0001
#define L2CAP_CS_AUTHOR_PEND	0x0002
struct l2cap_conf_req  __packed;
struct l2cap_conf_rsp  __packed;
#define L2CAP_CONF_SUCCESS	0x0000
#define L2CAP_CONF_UNACCEPT	0x0001
#define L2CAP_CONF_REJECT	0x0002
#define L2CAP_CONF_UNKNOWN	0x0003
struct l2cap_conf_opt  __packed;
#define L2CAP_CONF_OPT_SIZE	2
#define L2CAP_CONF_HINT		0x80
#define L2CAP_CONF_MASK		0x7f
#define L2CAP_CONF_MTU		0x01
#define L2CAP_CONF_FLUSH_TO	0x02
#define L2CAP_CONF_QOS		0x03
#define L2CAP_CONF_RFC		0x04
#define L2CAP_CONF_FCS		0x05
#define L2CAP_CONF_MAX_SIZE	22
struct l2cap_conf_rfc  __packed;
#define L2CAP_MODE_BASIC	0x00
#define L2CAP_MODE_RETRANS	0x01
#define L2CAP_MODE_FLOWCTL	0x02
#define L2CAP_MODE_ERTM		0x03
#define L2CAP_MODE_STREAMING	0x04
struct l2cap_disconn_req  __packed;
struct l2cap_disconn_rsp  __packed;
struct l2cap_info_req  __packed;
struct l2cap_info_rsp  __packed;
#define L2CAP_IT_CL_MTU     0x0001
#define L2CAP_IT_FEAT_MASK  0x0002
#define L2CAP_IT_FIXED_CHAN 0x0003
#define L2CAP_IR_SUCCESS    0x0000
#define L2CAP_IR_NOTSUPP    0x0001
struct l2cap_conn_param_update_req  __packed;
struct l2cap_conn_param_update_rsp  __packed;
#define L2CAP_CONN_PARAM_ACCEPTED	0x0000
#define L2CAP_CONN_PARAM_REJECTED	0x0001
struct srej_list ;
struct l2cap_chan ;
struct l2cap_conn ;
#define L2CAP_INFO_CL_MTU_REQ_SENT	0x01
#define L2CAP_INFO_FEAT_MASK_REQ_SENT	0x04
#define L2CAP_INFO_FEAT_MASK_REQ_DONE	0x08
#define l2cap_pi(sk) ((struct l2cap_pinfo *) sk)
struct l2cap_pinfo ;
#define L2CAP_CONF_REQ_SENT       0x01
#define L2CAP_CONF_INPUT_DONE     0x02
#define L2CAP_CONF_OUTPUT_DONE    0x04
#define L2CAP_CONF_MTU_DONE       0x08
#define L2CAP_CONF_MODE_DONE      0x10
#define L2CAP_CONF_CONNECT_PEND   0x20
#define L2CAP_CONF_NO_FCS_RECV    0x40
#define L2CAP_CONF_STATE2_DEVICE  0x80
#define L2CAP_CONF_MAX_CONF_REQ 2
#define L2CAP_CONF_MAX_CONF_RSP 2
#define L2CAP_CONN_SAR_SDU         0x0001
#define L2CAP_CONN_SREJ_SENT       0x0002
#define L2CAP_CONN_WAIT_F          0x0004
#define L2CAP_CONN_SREJ_ACT        0x0008
#define L2CAP_CONN_SEND_PBIT       0x0010
#define L2CAP_CONN_REMOTE_BUSY     0x0020
#define L2CAP_CONN_LOCAL_BUSY      0x0040
#define L2CAP_CONN_REJ_ACT         0x0080
#define L2CAP_CONN_SEND_FBIT       0x0100
#define L2CAP_CONN_RNR_SENT        0x0200
#define L2CAP_CONN_SAR_RETRY       0x0400
#define __mod_retrans_timer() mod_timer(&chan->retrans_timer, \
jiffies +  msecs_to_jiffies(L2CAP_DEFAULT_RETRANS_TO));
#define __mod_monitor_timer() mod_timer(&chan->monitor_timer, \
jiffies + msecs_to_jiffies(L2CAP_DEFAULT_MONITOR_TO));
#define __mod_ack_timer() mod_timer(&chan->ack_timer, \
jiffies + msecs_to_jiffies(L2CAP_DEFAULT_ACK_TO));
static inline int l2cap_tx_window_full(struct l2cap_chan *ch)
#define __get_txseq(ctrl)	(((ctrl) & L2CAP_CTRL_TXSEQ) >> 1)
#define __get_reqseq(ctrl)	(((ctrl) & L2CAP_CTRL_REQSEQ) >> 8)
#define __is_iframe(ctrl)	(!((ctrl) & L2CAP_CTRL_FRAME_TYPE))
#define __is_sframe(ctrl)	((ctrl) & L2CAP_CTRL_FRAME_TYPE)
#define __is_sar_start(ctrl)	(((ctrl) & L2CAP_CTRL_SAR) == L2CAP_SDU_START)
extern int disable_ertm;
int l2cap_init_sockets(void);
void l2cap_cleanup_sockets(void);
void l2cap_send_cmd(struct l2cap_conn *conn, u8 ident, u8 code, u16 len, void *data);
void __l2cap_connect_rsp_defer(struct l2cap_chan *chan);
int __l2cap_wait_ack(struct sock *sk);
struct sk_buff *l2cap_create_connless_pdu(struct l2cap_chan *chan, struct msghdr *msg, size_t len);
struct sk_buff *l2cap_create_basic_pdu(struct l2cap_chan *chan, struct msghdr *msg, size_t len);
struct sk_buff *l2cap_create_iframe_pdu(struct l2cap_chan *chan, struct msghdr *msg, size_t len, u16 control, u16 sdulen);
int l2cap_sar_segment_sdu(struct l2cap_chan *chan, struct msghdr *msg, size_t len);
void l2cap_do_send(struct l2cap_chan *chan, struct sk_buff *skb);
void l2cap_streaming_send(struct l2cap_chan *chan);
int l2cap_ertm_send(struct l2cap_chan *chan);
int l2cap_add_psm(struct l2cap_chan *chan, bdaddr_t *src, __le16 psm);
int l2cap_add_scid(struct l2cap_chan *chan,  __u16 scid);
void l2cap_sock_set_timer(struct sock *sk, long timeout);
void l2cap_sock_clear_timer(struct sock *sk);
void __l2cap_sock_close(struct sock *sk, int reason);
void l2cap_sock_kill(struct sock *sk);
void l2cap_sock_init(struct sock *sk, struct sock *parent);
struct sock *l2cap_sock_alloc(struct net *net, struct socket *sock,
int proto, gfp_t prio);
void l2cap_send_disconn_req(struct l2cap_conn *conn, struct l2cap_chan *chan, int err);
struct l2cap_chan *l2cap_chan_create(struct sock *sk);
void l2cap_chan_del(struct l2cap_chan *chan, int err);
void l2cap_chan_destroy(struct l2cap_chan *chan);
int l2cap_chan_connect(struct l2cap_chan *chan);
