const char *lli_revision = "$Revision: 2.59.2.4 $";
extern struct IsdnCard cards[];
static int init_b_st(struct Channel *chanp, int incoming);
static void release_b_st(struct Channel *chanp);
static struct Fsm callcfsm;
static int chancount;
#define ALERT_REJECT 0
#define DEFAULT_B_DELAY	300
#define  FLG_START_B	0
static inline struct IsdnCardState *
hisax_findcard(int driverid)
static __attribute__((format(printf, 3, 4))) void
link_debug(struct Channel *chanp, int direction, char *fmt, ...)
enum ;
#define STATE_COUNT (ST_IN_PROCEED_SEND + 1)
static char *strState[] =
;
enum ;
#define EVENT_COUNT (EV_REDIR + 1)
static char *strEvent[] =
;
static inline void
HL_LL(struct Channel *chanp, int command)
static inline void
lli_deliver_cause(struct Channel *chanp)
static inline void
lli_close(struct FsmInst *fi)
static void
lli_leased_in(struct FsmInst *fi, int event, void *arg)
static void
lli_init_bchan_out(struct FsmInst *fi, int event, void *arg)
static void
lli_prep_dialout(struct FsmInst *fi, int event, void *arg)
static void
lli_resume(struct FsmInst *fi, int event, void *arg)
static void
lli_go_active(struct FsmInst *fi, int event, void *arg)
static void
lli_deliver_call(struct FsmInst *fi, int event, void *arg)
static void
lli_send_dconnect(struct FsmInst *fi, int event, void *arg)
static void
lli_send_alert(struct FsmInst *fi, int event, void *arg)
static void
lli_send_redir(struct FsmInst *fi, int event, void *arg)
static void
lli_init_bchan_in(struct FsmInst *fi, int event, void *arg)
static void
lli_setup_rsp(struct FsmInst *fi, int event, void *arg)
static void
lli_suspend(struct FsmInst *fi, int event, void *arg)
static void
lli_leased_hup(struct FsmInst *fi, struct Channel *chanp)
static void
lli_disconnect_req(struct FsmInst *fi, int event, void *arg)
static void
lli_disconnect_reject(struct FsmInst *fi, int event, void *arg)
static void
lli_dhup_close(struct FsmInst *fi, int event, void *arg)
static void
lli_reject_req(struct FsmInst *fi, int event, void *arg)
static void
lli_disconn_bchan(struct FsmInst *fi, int event, void *arg)
static void
lli_start_disc(struct FsmInst *fi, int event, void *arg)
static void
lli_rel_b_disc(struct FsmInst *fi, int event, void *arg)
static void
lli_bhup_disc(struct FsmInst *fi, int event, void *arg)
static void
lli_bhup_rel_b(struct FsmInst *fi, int event, void *arg)
static void
lli_release_bchan(struct FsmInst *fi, int event, void *arg)
static void
lli_rel_b_dhup(struct FsmInst *fi, int event, void *arg)
static void
lli_bhup_dhup(struct FsmInst *fi, int event, void *arg)
static void
lli_abort(struct FsmInst *fi, int event, void *arg)
static void
lli_release_req(struct FsmInst *fi, int event, void *arg)
static void
lli_rel_b_release_req(struct FsmInst *fi, int event, void *arg)
static void
lli_bhup_release_req(struct FsmInst *fi, int event, void *arg)
static void
lli_charge_info(struct FsmInst *fi, int event, void *arg)
static void
lli_dchan_not_ready(struct FsmInst *fi, int event, void *arg)
static void
lli_no_setup_rsp(struct FsmInst *fi, int event, void *arg)
static void
lli_error(struct FsmInst *fi, int event, void *arg)
static void
lli_failure_l(struct FsmInst *fi, int event, void *arg)
static void
lli_rel_b_fail(struct FsmInst *fi, int event, void *arg)
static void
lli_bhup_fail(struct FsmInst *fi, int event, void *arg)
static void
lli_failure_a(struct FsmInst *fi, int event, void *arg)
static struct FsmNode fnlist[] __initdata =
;
int __init
CallcNew(void)
void
CallcFree(void)
static void
release_b_st(struct Channel *chanp)
static struct Channel
*selectfreechannel(struct PStack *st, int bch)
static void stat_redir_result(struct IsdnCardState *cs, int chan, ulong result)
static void
dchan_l3l4(struct PStack *st, int pr, void *arg)
static void
dummy_pstack(struct PStack *st, int pr, void *arg)
static int
init_PStack(struct PStack **stp)
static int
init_d_st(struct Channel *chanp)
static __attribute__((format(printf, 2, 3))) void
callc_debug(struct FsmInst *fi, char *fmt, ...)
static int
init_chan(int chan, struct IsdnCardState *csta)
int
CallcNewChan(struct IsdnCardState *csta)
static void
release_d_st(struct Channel *chanp)
void
CallcFreeChan(struct IsdnCardState *csta)
static void
lldata_handler(struct PStack *st, int pr, void *arg)
static void
lltrans_handler(struct PStack *st, int pr, void *arg)
void
lli_writewakeup(struct PStack *st, int len)
static int
init_b_st(struct Channel *chanp, int incoming)
static void
leased_l4l3(struct PStack *st, int pr, void *arg)
static void
leased_l1l2(struct PStack *st, int pr, void *arg)
static void
distr_debug(struct IsdnCardState *csta, int debugflags)
static char tmpbuf[256];
static void
capi_debug(struct Channel *chanp, capi_msg *cm)
static void
lli_got_fac_req(struct Channel *chanp, capi_msg *cm)
static void
lli_got_manufacturer(struct Channel *chanp, struct IsdnCardState *cs, capi_msg *cm)
static int
set_channel_limit(struct IsdnCardState *cs, int chanmax)
int
HiSax_command(isdn_ctrl * ic)
int
HiSax_writebuf_skb(int id, int chan, int ack, struct sk_buff *skb)
