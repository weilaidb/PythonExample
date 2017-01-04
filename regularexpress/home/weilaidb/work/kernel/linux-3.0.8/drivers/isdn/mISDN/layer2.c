static u_int *debug;
static
struct Fsm l2fsm = ;
static char *strL2State[] =
;
enum ;
#define L2_EVENT_COUNT (EV_L2_FRAME_ERROR+1)
static char *strL2Event[] =
;
static void
l2m_debug(struct FsmInst *fi, char *fmt, ...)
inline u_int
l2headersize(struct layer2 *l2, int ui)
inline u_int
l2addrsize(struct layer2 *l2)
static u_int
l2_newid(struct layer2 *l2)
static void
l2up(struct layer2 *l2, u_int prim, struct sk_buff *skb)
static void
l2up_create(struct layer2 *l2, u_int prim, int len, void *arg)
static int
l2down_skb(struct layer2 *l2, struct sk_buff *skb)
static int
l2down_raw(struct layer2 *l2, struct sk_buff *skb)
static int
l2down(struct layer2 *l2, u_int prim, u_int id, struct sk_buff *skb)
static int
l2down_create(struct layer2 *l2, u_int prim, u_int id, int len, void *arg)
static int
ph_data_confirm(struct layer2 *l2, struct mISDNhead *hh, struct sk_buff *skb)
static int
l2mgr(struct layer2 *l2, u_int prim, void *arg)
static void
set_peer_busy(struct layer2 *l2)
static void
clear_peer_busy(struct layer2 *l2)
static void
InitWin(struct layer2 *l2)
static int
freewin(struct layer2 *l2)
static void
ReleaseWin(struct layer2 *l2)
inline unsigned int
cansend(struct layer2 *l2)
inline void
clear_exception(struct layer2 *l2)
static int
sethdraddr(struct layer2 *l2, u_char *header, int rsp)
static inline void
enqueue_super(struct layer2 *l2, struct sk_buff *skb)
static inline void
enqueue_ui(struct layer2 *l2, struct sk_buff *skb)
inline int
IsUI(u_char *data)
inline int
IsUA(u_char *data)
inline int
IsDM(u_char *data)
inline int
IsDISC(u_char *data)
inline int
IsRR(u_char *data, struct layer2 *l2)
inline int
IsSFrame(u_char *data, struct layer2 *l2)
inline int
IsSABME(u_char *data, struct layer2 *l2)
inline int
IsREJ(u_char *data, struct layer2 *l2)
inline int
IsFRMR(u_char *data)
inline int
IsRNR(u_char *data, struct layer2 *l2)
static int
iframe_error(struct layer2 *l2, struct sk_buff *skb)
static int
super_error(struct layer2 *l2, struct sk_buff *skb)
static int
unnum_error(struct layer2 *l2, struct sk_buff *skb, int wantrsp)
static int
UI_error(struct layer2 *l2, struct sk_buff *skb)
static int
FRMR_error(struct layer2 *l2, struct sk_buff *skb)
static unsigned int
legalnr(struct layer2 *l2, unsigned int nr)
static void
setva(struct layer2 *l2, unsigned int nr)
static void
send_uframe(struct layer2 *l2, struct sk_buff *skb, u_char cmd, u_char cr)
inline u_char
get_PollFlag(struct layer2 *l2, struct sk_buff *skb)
inline u_char
get_PollFlagFree(struct layer2 *l2, struct sk_buff *skb)
inline void
start_t200(struct layer2 *l2, int i)
inline void
restart_t200(struct layer2 *l2, int i)
inline void
stop_t200(struct layer2 *l2, int i)
inline void
st5_dl_release_l2l3(struct layer2 *l2)
inline void
lapb_dl_release_l2l3(struct layer2 *l2, int f)
static void
establishlink(struct FsmInst *fi)
static void
l2_mdl_error_ua(struct FsmInst *fi, int event, void *arg)
static void
l2_mdl_error_dm(struct FsmInst *fi, int event, void *arg)
static void
l2_st8_mdl_error_dm(struct FsmInst *fi, int event, void *arg)
static void
l2_go_st3(struct FsmInst *fi, int event, void *arg)
static void
l2_mdl_assign(struct FsmInst *fi, int event, void *arg)
static void
l2_queue_ui_assign(struct FsmInst *fi, int event, void *arg)
static void
l2_queue_ui(struct FsmInst *fi, int event, void *arg)
static void
tx_ui(struct layer2 *l2)
static void
l2_send_ui(struct FsmInst *fi, int event, void *arg)
static void
l2_got_ui(struct FsmInst *fi, int event, void *arg)
static void
l2_establish(struct FsmInst *fi, int event, void *arg)
static void
l2_discard_i_setl3(struct FsmInst *fi, int event, void *arg)
static void
l2_l3_reestablish(struct FsmInst *fi, int event, void *arg)
static void
l2_release(struct FsmInst *fi, int event, void *arg)
static void
l2_pend_rel(struct FsmInst *fi, int event, void *arg)
static void
l2_disconnect(struct FsmInst *fi, int event, void *arg)
static void
l2_start_multi(struct FsmInst *fi, int event, void *arg)
static void
l2_send_UA(struct FsmInst *fi, int event, void *arg)
static void
l2_send_DM(struct FsmInst *fi, int event, void *arg)
static void
l2_restart_multi(struct FsmInst *fi, int event, void *arg)
static void
l2_stop_multi(struct FsmInst *fi, int event, void *arg)
static void
l2_connected(struct FsmInst *fi, int event, void *arg)
static void
l2_released(struct FsmInst *fi, int event, void *arg)
static void
l2_reestablish(struct FsmInst *fi, int event, void *arg)
static void
l2_st5_dm_release(struct FsmInst *fi, int event, void *arg)
static void
l2_st6_dm_release(struct FsmInst *fi, int event, void *arg)
static void
enquiry_cr(struct layer2 *l2, u_char typ, u_char cr, u_char pf)
inline void
enquiry_response(struct layer2 *l2)
inline void
transmit_enquiry(struct layer2 *l2)
static void
nrerrorrecovery(struct FsmInst *fi)
static void
invoke_retransmission(struct layer2 *l2, unsigned int nr)
static void
l2_st7_got_super(struct FsmInst *fi, int event, void *arg)
static void
l2_feed_i_if_reest(struct FsmInst *fi, int event, void *arg)
static void
l2_feed_i_pull(struct FsmInst *fi, int event, void *arg)
static void
l2_feed_iqueue(struct FsmInst *fi, int event, void *arg)
static void
l2_got_iframe(struct FsmInst *fi, int event, void *arg)
static void
l2_got_tei(struct FsmInst *fi, int event, void *arg)
static void
l2_st5_tout_200(struct FsmInst *fi, int event, void *arg)
static void
l2_st6_tout_200(struct FsmInst *fi, int event, void *arg)
static void
l2_st7_tout_200(struct FsmInst *fi, int event, void *arg)
static void
l2_st8_tout_200(struct FsmInst *fi, int event, void *arg)
static void
l2_st7_tout_203(struct FsmInst *fi, int event, void *arg)
static void
l2_pull_iqueue(struct FsmInst *fi, int event, void *arg)
static void
l2_st8_got_super(struct FsmInst *fi, int event, void *arg)
static void
l2_got_FRMR(struct FsmInst *fi, int event, void *arg)
static void
l2_st24_tei_remove(struct FsmInst *fi, int event, void *arg)
static void
l2_st3_tei_remove(struct FsmInst *fi, int event, void *arg)
static void
l2_st5_tei_remove(struct FsmInst *fi, int event, void *arg)
static void
l2_st6_tei_remove(struct FsmInst *fi, int event, void *arg)
static void
l2_tei_remove(struct FsmInst *fi, int event, void *arg)
static void
l2_st14_persistent_da(struct FsmInst *fi, int event, void *arg)
static void
l2_st5_persistent_da(struct FsmInst *fi, int event, void *arg)
static void
l2_st6_persistent_da(struct FsmInst *fi, int event, void *arg)
static void
l2_persistent_da(struct FsmInst *fi, int event, void *arg)
static void
l2_set_own_busy(struct FsmInst *fi, int event, void *arg)
static void
l2_clear_own_busy(struct FsmInst *fi, int event, void *arg)
static void
l2_frame_error(struct FsmInst *fi, int event, void *arg)
static void
l2_frame_error_reest(struct FsmInst *fi, int event, void *arg)
static struct FsmNode L2FnList[] =
;
static int
ph_data_indication(struct layer2 *l2, struct mISDNhead *hh, struct sk_buff *skb)
static int
l2_send(struct mISDNchannel *ch, struct sk_buff *skb)
int
tei_l2(struct layer2 *l2, u_int cmd, u_long arg)
static void
release_l2(struct layer2 *l2)
static int
l2_ctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
struct layer2 *
create_l2(struct mISDNchannel *ch, u_int protocol, u_long options, int tei,
int sapi)
static int
x75create(struct channel_req *crq)
static struct Bprotocol X75SLP = ;
int
Isdnl2_Init(u_int *deb)
void
Isdnl2_cleanup(void)
