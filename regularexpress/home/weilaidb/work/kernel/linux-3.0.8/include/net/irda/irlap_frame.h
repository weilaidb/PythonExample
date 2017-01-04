#define IRLAP_FRAME_H
struct irlap_cb;
struct discovery_t;
#define INVALID   0xff
#define SNRM_CMD  0x83
#define DISC_CMD  0x43
#define XID_CMD   0x2f
#define TEST_CMD  0xe3
#define RNRM_RSP  0x83
#define UA_RSP    0x63
#define FRMR_RSP  0x87
#define DM_RSP    0x0f
#define RD_RSP    0x43
#define XID_RSP   0xaf
#define TEST_RSP  0xe3
#define RR        0x01
#define REJ       0x09
#define RNR       0x05
#define SREJ      0x0d
#define I_FRAME   0x00
#define UI_FRAME  0x03
#define CMD_FRAME 0x01
#define RSP_FRAME 0x00
#define PF_BIT    0x10
#define IRLAP_NEGOCIATION_PARAMS_LEN 25
#define IRLAP_DISCOVERY_INFO_LEN     32
struct disc_frame  __packed;
struct xid_frame  __packed;
struct test_frame  __packed;
struct ua_frame  __packed;
struct dm_frame  __packed;
struct rd_frame  __packed;
struct rr_frame  __packed;
struct i_frame  __packed;
struct snrm_frame  __packed;
void irlap_queue_xmit(struct irlap_cb *self, struct sk_buff *skb);
void irlap_send_discovery_xid_frame(struct irlap_cb *, int S, __u8 s,
__u8 command,
struct discovery_t *discovery);
void irlap_send_snrm_frame(struct irlap_cb *, struct qos_info *);
void irlap_send_test_frame(struct irlap_cb *self, __u8 caddr, __u32 daddr,
struct sk_buff *cmd);
void irlap_send_ua_response_frame(struct irlap_cb *, struct qos_info *);
void irlap_send_dm_frame(struct irlap_cb *self);
void irlap_send_rd_frame(struct irlap_cb *self);
void irlap_send_disc_frame(struct irlap_cb *self);
void irlap_send_rr_frame(struct irlap_cb *self, int command);
void irlap_send_data_primary(struct irlap_cb *, struct sk_buff *);
void irlap_send_data_primary_poll(struct irlap_cb *, struct sk_buff *);
void irlap_send_data_secondary(struct irlap_cb *, struct sk_buff *);
void irlap_send_data_secondary_final(struct irlap_cb *, struct sk_buff *);
void irlap_resend_rejected_frames(struct irlap_cb *, int command);
void irlap_resend_rejected_frame(struct irlap_cb *self, int command);
void irlap_send_ui_frame(struct irlap_cb *self, struct sk_buff *skb,
__u8 caddr, int command);
extern int irlap_insert_qos_negotiation_params(struct irlap_cb *self,
struct sk_buff *skb);
