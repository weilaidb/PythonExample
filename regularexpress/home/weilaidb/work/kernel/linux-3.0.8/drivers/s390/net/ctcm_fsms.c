#undef DEBUG
#undef DEBUGDATA
#undef DEBUGCCW
#define KMSG_COMPONENT "ctcm"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
const char *dev_state_names[] = ;
const char *dev_event_names[] = ;
const char *ctc_ch_event_names[] = ;
const char *ctc_ch_state_names[] = ;
static void ctcm_action_nop(fsm_instance *fi, int event, void *arg);
static void chx_txdone(fsm_instance *fi, int event, void *arg);
static void chx_rx(fsm_instance *fi, int event, void *arg);
static void chx_rxidle(fsm_instance *fi, int event, void *arg);
static void chx_firstio(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_setmode(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_start(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_haltio(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_stopped(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_stop(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_fail(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_setuperr(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_restart(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_rxiniterr(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_rxinitfail(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_rxdisc(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_txiniterr(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_txretry(fsm_instance *fi, int event, void *arg);
static void ctcm_chx_iofatal(fsm_instance *fi, int event, void *arg);
static void ctcmpc_chx_txdone(fsm_instance *fi, int event, void *arg);
static void ctcmpc_chx_rx(fsm_instance *fi, int event, void *arg);
static void ctcmpc_chx_firstio(fsm_instance *fi, int event, void *arg);
static void ctcmpc_chx_attn(fsm_instance *fsm, int event, void *arg);
static void ctcmpc_chx_attnbusy(fsm_instance *, int, void *);
static void ctcmpc_chx_resend(fsm_instance *, int, void *);
static void ctcmpc_chx_send_sweep(fsm_instance *fsm, int event, void *arg);
void ctcm_ccw_check_rc(struct channel *ch, int rc, char *msg)
void ctcm_purge_skb_queue(struct sk_buff_head *q)
static void ctcm_action_nop(fsm_instance *fi, int event, void *arg)
static void chx_txdone(fsm_instance *fi, int event, void *arg)
void ctcm_chx_txidle(fsm_instance *fi, int event, void *arg)
static void chx_rx(fsm_instance *fi, int event, void *arg)
static void chx_firstio(fsm_instance *fi, int event, void *arg)
static void chx_rxidle(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_setmode(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_start(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_haltio(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_cleanup(fsm_instance *fi, int state,
struct channel *ch)
static void ctcm_chx_stopped(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_stop(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_fail(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_setuperr(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_restart(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_rxiniterr(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_rxinitfail(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_rxdisc(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_txiniterr(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_txretry(fsm_instance *fi, int event, void *arg)
static void ctcm_chx_iofatal(fsm_instance *fi, int event, void *arg)
const fsm_node ch_fsm[] = ;
int ch_fsm_len = ARRAY_SIZE(ch_fsm);
static void ctcmpc_chx_txdone(fsm_instance *fi, int event, void *arg)
static void ctcmpc_chx_rx(fsm_instance *fi, int event, void *arg)
static void ctcmpc_chx_firstio(fsm_instance *fi, int event, void *arg)
void ctcmpc_chx_rxidle(fsm_instance *fi, int event, void *arg)
static void ctcmpc_chx_attn(fsm_instance *fsm, int event, void *arg)
static void ctcmpc_chx_attnbusy(fsm_instance *fsm, int event, void *arg)
static void ctcmpc_chx_resend(fsm_instance *fsm, int event, void *arg)
static void ctcmpc_chx_send_sweep(fsm_instance *fsm, int event, void *arg)
const fsm_node ctcmpc_ch_fsm[] = ;
int mpc_ch_fsm_len = ARRAY_SIZE(ctcmpc_ch_fsm);
static void dev_action_start(fsm_instance *fi, int event, void *arg)
static void dev_action_stop(fsm_instance *fi, int event, void *arg)
static void dev_action_restart(fsm_instance *fi, int event, void *arg)
static void dev_action_chup(fsm_instance *fi, int event, void *arg)
static void dev_action_chdown(fsm_instance *fi, int event, void *arg)
const fsm_node dev_fsm[] = ;
int dev_fsm_len = ARRAY_SIZE(dev_fsm);
