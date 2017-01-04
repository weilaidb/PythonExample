const char *l1_revision = "$Revision: 2.46.2.5 $";
#define TIMER3_VALUE 7000
static struct Fsm l1fsm_b;
static struct Fsm l1fsm_s;
enum ;
#define L1S_STATE_COUNT (ST_L1_F8+1)
static char *strL1SState[] =
;
static
struct Fsm l1fsm_u =
;
enum ;
#define L1U_STATE_COUNT (ST_L1_TRANS+1)
static char *strL1UState[] =
;
enum ;
#define L1B_STATE_COUNT (ST_L1_ACTIV+1)
static char *strL1BState[] =
;
enum ;
#define L1_EVENT_COUNT (EV_TIMER3 + 1)
static char *strL1Event[] =
;
void
debugl1(struct IsdnCardState *cs, char *fmt, ...)
static void
l1m_debug(struct FsmInst *fi, char *fmt, ...)
static void
L1activated(struct IsdnCardState *cs)
static void
L1deactivated(struct IsdnCardState *cs)
void
DChannel_proc_xmt(struct IsdnCardState *cs)
void
DChannel_proc_rcv(struct IsdnCardState *cs)
static void
BChannel_proc_xmt(struct BCState *bcs)
static void
BChannel_proc_rcv(struct BCState *bcs)
static void
BChannel_proc_ack(struct BCState *bcs)
void
BChannel_bh(struct work_struct *work)
void
HiSax_addlist(struct IsdnCardState *cs,
struct PStack *st)
void
HiSax_rmlist(struct IsdnCardState *cs,
struct PStack *st)
void
init_bcstate(struct IsdnCardState *cs, int bc)
static char *
l2cmd(u_char cmd)
static char tmpdeb[32];
static char *
l2frames(u_char * ptr)
void
Logl2Frame(struct IsdnCardState *cs, struct sk_buff *skb, char *buf, int dir)
static void
l1_reset(struct FsmInst *fi, int event, void *arg)
static void
l1_deact_cnf(struct FsmInst *fi, int event, void *arg)
static void
l1_deact_req_s(struct FsmInst *fi, int event, void *arg)
static void
l1_power_up_s(struct FsmInst *fi, int event, void *arg)
static void
l1_go_F5(struct FsmInst *fi, int event, void *arg)
static void
l1_go_F8(struct FsmInst *fi, int event, void *arg)
static void
l1_info2_ind(struct FsmInst *fi, int event, void *arg)
static void
l1_info4_ind(struct FsmInst *fi, int event, void *arg)
static void
l1_timer3(struct FsmInst *fi, int event, void *arg)
static void
l1_timer_act(struct FsmInst *fi, int event, void *arg)
static void
l1_timer_deact(struct FsmInst *fi, int event, void *arg)
static void
l1_activate_s(struct FsmInst *fi, int event, void *arg)
static void
l1_activate_no(struct FsmInst *fi, int event, void *arg)
static struct FsmNode L1SFnList[] __initdata =
;
static void
l1_deact_req_u(struct FsmInst *fi, int event, void *arg)
static void
l1_power_up_u(struct FsmInst *fi, int event, void *arg)
static void
l1_info0_ind(struct FsmInst *fi, int event, void *arg)
static void
l1_activate_u(struct FsmInst *fi, int event, void *arg)
static struct FsmNode L1UFnList[] __initdata =
;
static void
l1b_activate(struct FsmInst *fi, int event, void *arg)
static void
l1b_deactivate(struct FsmInst *fi, int event, void *arg)
static void
l1b_timer_act(struct FsmInst *fi, int event, void *arg)
static void
l1b_timer_deact(struct FsmInst *fi, int event, void *arg)
static struct FsmNode L1BFnList[] __initdata =
;
int __init
Isdnl1New(void)
void Isdnl1Free(void)
static void
dch_l2l1(struct PStack *st, int pr, void *arg)
void
l1_msg(struct IsdnCardState *cs, int pr, void *arg)
void
l1_msg_b(struct PStack *st, int pr, void *arg)
void
setstack_HiSax(struct PStack *st, struct IsdnCardState *cs)
void
setstack_l1_B(struct PStack *st)
