#define _CTC_MPC_H_
extern int ctc_mpc_alloc_channel(int port,
void (*callback)(int port_num, int max_write_size));
extern void ctc_mpc_establish_connectivity(int port,
void (*callback)(int port_num, int rc, int max_write_size));
extern void ctc_mpc_dealloc_ch(int port);
extern void ctc_mpc_flow_control(int port, int flowc);
#define ETH_P_SNA_DIX	0x80D5
#define ALLZEROS 0x0000000000000000
#define XID_FM2		0x20
#define XID2_0		0x00
#define XID2_7		0x07
#define XID2_WRITE_SIDE 0x04
#define XID2_READ_SIDE	0x05
struct xid2  __attribute__ ((packed));
#define XID2_LENGTH  (sizeof(struct xid2))
struct th_header  __attribute__ ((packed));
struct th_addon  __attribute__ ((packed));
struct th_sweep  __attribute__ ((packed));
#define TH_HEADER_LENGTH (sizeof(struct th_header))
#define TH_SWEEP_LENGTH (sizeof(struct th_sweep))
#define PDU_LAST	0x80
#define PDU_CNTL	0x40
#define PDU_FIRST	0x20
struct pdu  __attribute__ ((packed));
#define PDU_HEADER_LENGTH  (sizeof(struct pdu))
struct qllc  __attribute__ ((packed));
#define MAX_MPCGCHAN		10
#define MPC_XID_TIMEOUT_VALUE	10000
#define MPC_CHANNEL_ADD		0
#define MPC_CHANNEL_REMOVE	1
#define MPC_CHANNEL_ATTN	2
#define XSIDE	1
#define YSIDE	0
struct mpcg_info ;
struct mpc_group ;
void ctcmpc_dumpit(char *buf, int len);
static inline void ctcmpc_dumpit(char *buf, int len)
void ctcmpc_dump_skb(struct sk_buff *skb, int offset);
static inline void ctcmpc_dump_skb(struct sk_buff *skb, int offset)
static inline void ctcmpc_dump32(char *buf, int len)
int ctcmpc_open(struct net_device *);
void ctcm_ccw_check_rc(struct channel *, int, char *);
void mpc_group_ready(unsigned long adev);
void mpc_channel_action(struct channel *ch, int direction, int action);
void mpc_action_send_discontact(unsigned long thischan);
void mpc_action_discontact(fsm_instance *fi, int event, void *arg);
void ctcmpc_bh(unsigned long thischan);
