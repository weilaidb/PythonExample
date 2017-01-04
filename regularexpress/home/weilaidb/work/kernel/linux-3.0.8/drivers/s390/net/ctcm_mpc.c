#undef DEBUG
#undef DEBUGDATA
#undef DEBUGCCW
#define KMSG_COMPONENT "ctcm"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static const struct xid2 init_xid = ;
static const struct th_header thnorm = ;
static const struct th_header thdummy = ;
static void ctcmpc_unpack_skb(struct channel *ch, struct sk_buff *pskb);
static void mpc_action_nop(fsm_instance *fsm, int event, void *arg);
static void mpc_action_go_ready(fsm_instance *fsm, int event, void *arg);
static void mpc_action_go_inop(fsm_instance *fi, int event, void *arg);
static void mpc_action_timeout(fsm_instance *fi, int event, void *arg);
static int  mpc_validate_xid(struct mpcg_info *mpcginfo);
static void mpc_action_yside_xid(fsm_instance *fsm, int event, void *arg);
static void mpc_action_doxid0(fsm_instance *fsm, int event, void *arg);
static void mpc_action_doxid7(fsm_instance *fsm, int event, void *arg);
static void mpc_action_xside_xid(fsm_instance *fsm, int event, void *arg);
static void mpc_action_rcvd_xid0(fsm_instance *fsm, int event, void *arg);
static void mpc_action_rcvd_xid7(fsm_instance *fsm, int event, void *arg);
void ctcmpc_dumpit(char *buf, int len)
void ctcmpc_dump_skb(struct sk_buff *skb, int offset)
static struct net_device *ctcmpc_get_dev(int port_num)
int ctc_mpc_alloc_channel(int port_num, void (*callback)(int, int))
EXPORT_SYMBOL(ctc_mpc_alloc_channel);
void ctc_mpc_establish_connectivity(int port_num,
void (*callback)(int, int, int))
EXPORT_SYMBOL(ctc_mpc_establish_connectivity);
void ctc_mpc_dealloc_ch(int port_num)
EXPORT_SYMBOL(ctc_mpc_dealloc_ch);
void ctc_mpc_flow_control(int port_num, int flowc)
EXPORT_SYMBOL(ctc_mpc_flow_control);
static int mpc_send_qllc_discontact(struct net_device *);
static void mpc_rcvd_sweep_resp(struct mpcg_info *mpcginfo)
static void ctcmpc_send_sweep_resp(struct channel *rch)
static void mpc_rcvd_sweep_req(struct mpcg_info *mpcginfo)
static const char *mpcg_event_names[] = ;
static const char *mpcg_state_names[] = ;
static const fsm_node mpcg_fsm[] = ;
static int mpcg_fsm_len = ARRAY_SIZE(mpcg_fsm);
static void mpc_action_go_ready(fsm_instance *fsm, int event, void *arg)
void mpc_group_ready(unsigned long adev)
void mpc_channel_action(struct channel *ch, int direction, int action)
static void ctcmpc_unpack_skb(struct channel *ch, struct sk_buff *pskb)
void ctcmpc_bh(unsigned long thischan)
struct mpc_group *ctcmpc_init_mpc_group(struct ctcm_priv *priv)
static void mpc_action_nop(fsm_instance *fi, int event, void *arg)
static void mpc_action_go_inop(fsm_instance *fi, int event, void *arg)
static void mpc_action_timeout(fsm_instance *fi, int event, void *arg)
void mpc_action_discontact(fsm_instance *fi, int event, void *arg)
void mpc_action_send_discontact(unsigned long thischan)
static int mpc_validate_xid(struct mpcg_info *mpcginfo)
static void mpc_action_side_xid(fsm_instance *fsm, void *arg, int side)
static void mpc_action_xside_xid(fsm_instance *fsm, int event, void *arg)
static void mpc_action_yside_xid(fsm_instance *fsm, int event, void *arg)
static void mpc_action_doxid0(fsm_instance *fsm, int event, void *arg)
static void mpc_action_doxid7(fsm_instance *fsm, int event, void *arg)
static void mpc_action_rcvd_xid0(fsm_instance *fsm, int event, void *arg)
static void mpc_action_rcvd_xid7(fsm_instance *fsm, int event, void *arg)
static int mpc_send_qllc_discontact(struct net_device *dev)
