const char *l2_revision = "$Revision: 2.30.2.4 $";
static void l2m_debug(struct FsmInst *fi, char *fmt, ...);
static struct Fsm l2fsm;
enum ;
#define L2_STATE_COUNT (ST_L2_8+1)
static char *strL2State[] =
;
enum ;
#define L2_EVENT_COUNT (EV_L2_FRAME_ERROR+1)
static char *strL2Event[] =
;
static int l2addrsize(struct Layer2 *l2);
static void
set_peer_busy(struct Layer2 *l2)
static void
clear_peer_busy(struct Layer2 *l2)
static void
InitWin(struct Layer2 *l2)
static int
freewin1(struct Layer2 *l2)
static inline void
freewin(struct PStack *st)
static void
ReleaseWin(struct Layer2 *l2)
static inline unsigned int
cansend(struct PStack *st)
static inline void
clear_exception(struct Layer2 *l2)
static inline int
l2headersize(struct Layer2 *l2, int ui)
inline int
l2addrsize(struct Layer2 *l2)
static int
sethdraddr(struct Layer2 *l2, u_char * header, int rsp)
static inline void
enqueue_super(struct PStack *st,
struct sk_buff *skb)
#define enqueue_ui(a, b) enqueue_super(a, b)
static inline int
IsUI(u_char * data)
static inline int
IsUA(u_char * data)
static inline int
IsDM(u_char * data)
static inline int
IsDISC(u_char * data)
static inline int
IsSFrame(u_char * data, struct PStack *st)
static inline int
IsSABME(u_char * data, struct PStack *st)
static inline int
IsREJ(u_char * data, struct PStack *st)
static inline int
IsFRMR(u_char * data)
static inline int
IsRNR(u_char * data, struct PStack *st)
static int
iframe_error(struct PStack *st, struct sk_buff *skb)
static int
super_error(struct PStack *st, struct sk_buff *skb)
static int
unnum_error(struct PStack *st, struct sk_buff *skb, int wantrsp)
static int
UI_error(struct PStack *st, struct sk_buff *skb)
static int
FRMR_error(struct PStack *st, struct sk_buff *skb)
static unsigned int
legalnr(struct PStack *st, unsigned int nr)
static void
setva(struct PStack *st, unsigned int nr)
static void
send_uframe(struct PStack *st, u_char cmd, u_char cr)
static inline u_char
get_PollFlag(struct PStack * st, struct sk_buff * skb)
static inline u_char
get_PollFlagFree(struct PStack *st, struct sk_buff *skb)
static inline void
start_t200(struct PStack *st, int i)
static inline void
restart_t200(struct PStack *st, int i)
static inline void
stop_t200(struct PStack *st, int i)
static inline void
st5_dl_release_l2l3(struct PStack *st)
static inline void
lapb_dl_release_l2l3(struct PStack *st, int f)
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
tx_ui(struct PStack *st)
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
static inline void
enquiry_cr(struct PStack *st, u_char typ, u_char cr, u_char pf)
static inline void
enquiry_response(struct PStack *st)
static inline void
transmit_enquiry(struct PStack *st)
static void
nrerrorrecovery(struct FsmInst *fi)
static void
invoke_retransmission(struct PStack *st, unsigned int nr)
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
static struct FsmNode L2FnList[] __initdata =
;
static void
isdnl2_l1l2(struct PStack *st, int pr, void *arg)
static void
isdnl2_l3l2(struct PStack *st, int pr, void *arg)
void
releasestack_isdnl2(struct PStack *st)
static void
l2m_debug(struct FsmInst *fi, char *fmt, ...)
void
setstack_isdnl2(struct PStack *st, char *debug_id)
static void
transl2_l3l2(struct PStack *st, int pr, void *arg)
void
setstack_transl2(struct PStack *st)
void
releasestack_transl2(struct PStack *st)
int __init
Isdnl2New(void)
void
Isdnl2Free(void)
