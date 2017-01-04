const char *l3_revision = "$Revision: 2.22.2.3 $";
static struct Fsm l3fsm;
enum ;
#define L3_STATE_COUNT (ST_L3_LC_ESTAB+1)
static char *strL3State[] =
;
enum ;
#define L3_EVENT_COUNT (EV_TIMEOUT+1)
static char *strL3Event[] =
;
static __attribute__((format(printf, 2, 3))) void
l3m_debug(struct FsmInst *fi, char *fmt, ...)
u_char *
findie(u_char * p, int size, u_char ie, int wanted_set)
int
getcallref(u_char * p)
static int OrigCallRef = 0;
int
newcallref(void)
void
newl3state(struct l3_process *pc, int state)
static void
L3ExpireTimer(struct L3Timer *t)
void
L3InitTimer(struct l3_process *pc, struct L3Timer *t)
void
L3DelTimer(struct L3Timer *t)
int
L3AddTimer(struct L3Timer *t,
int millisec, int event)
void
StopAllL3Timer(struct l3_process *pc)
struct sk_buff *
l3_alloc_skb(int len)
static void
no_l3_proto(struct PStack *st, int pr, void *arg)
static int
no_l3_proto_spec(struct PStack *st, isdn_ctrl *ic)
struct l3_process
*getl3proc(struct PStack *st, int cr)
struct l3_process
*new_l3_process(struct PStack *st, int cr)
;
void
release_l3_process(struct l3_process *p)
;
static void
l3ml3p(struct PStack *st, int pr)
void
setstack_l3dc(struct PStack *st, struct Channel *chanp)
static void
isdnl3_trans(struct PStack *st, int pr, void *arg)
void
releasestack_isdnl3(struct PStack *st)
void
setstack_l3bc(struct PStack *st, struct Channel *chanp)
#define DREL_TIMER_VALUE 40000
static void
lc_activate(struct FsmInst *fi, int event, void *arg)
static void
lc_connect(struct FsmInst *fi, int event, void *arg)
static void
lc_connected(struct FsmInst *fi, int event, void *arg)
static void
lc_start_delay(struct FsmInst *fi, int event, void *arg)
static void
lc_start_delay_check(struct FsmInst *fi, int event, void *arg)
static void
lc_release_req(struct FsmInst *fi, int event, void *arg)
static void
lc_release_ind(struct FsmInst *fi, int event, void *arg)
static void
lc_release_cnf(struct FsmInst *fi, int event, void *arg)
static struct FsmNode L3FnList[] __initdata =
;
void
l3_msg(struct PStack *st, int pr, void *arg)
int __init
Isdnl3New(void)
void
Isdnl3Free(void)
