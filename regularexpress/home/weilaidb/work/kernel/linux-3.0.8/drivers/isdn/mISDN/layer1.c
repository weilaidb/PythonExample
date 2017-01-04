static u_int *debug;
struct layer1 ;
#define TIMER3_VALUE 7000
static
struct Fsm l1fsm_s = ;
enum ;
#define L1S_STATE_COUNT (ST_L1_F8+1)
static char *strL1SState[] =
;
enum ;
#define L1_EVENT_COUNT (EV_TIMER3 + 1)
static char *strL1Event[] =
;
static void
l1m_debug(struct FsmInst *fi, char *fmt, ...)
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
static struct FsmNode L1SFnList[] =
;
static void
release_l1(struct layer1 *l1)
int
l1_event(struct layer1 *l1, u_int event)
EXPORT_SYMBOL(l1_event);
int
create_l1(struct dchannel *dch, dchannel_l1callback *dcb)
EXPORT_SYMBOL(create_l1);
int
l1_init(u_int *deb)
void
l1_cleanup(void)
