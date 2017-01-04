#define ID_REQUEST	1
#define ID_ASSIGNED	2
#define ID_DENIED	3
#define ID_CHK_REQ	4
#define ID_CHK_RES	5
#define ID_REMOVE	6
#define ID_VERIFY	7
#define TEI_ENTITY_ID	0xf
#define MGR_PH_ACTIVE	16
#define MGR_PH_NOTREADY	17
#define DATIMER_VAL	10000
static 	u_int	*debug;
static struct Fsm deactfsm = ;
static struct Fsm teifsmu = ;
static struct Fsm teifsmn = ;
enum ;
#define DEACT_STATE_COUNT (ST_L1_ACTIV+1)
static char *strDeactState[] =
;
enum ;
#define DEACT_EVENT_COUNT (EV_DATIMER+1)
static char *strDeactEvent[] =
;
static void
da_debug(struct FsmInst *fi, char *fmt, ...)
static void
da_activate(struct FsmInst *fi, int event, void *arg)
static void
da_deactivate_ind(struct FsmInst *fi, int event, void *arg)
static void
da_deactivate(struct FsmInst *fi, int event, void *arg)
static void
da_ui(struct FsmInst *fi, int event, void *arg)
static void
da_timer(struct FsmInst *fi, int event, void *arg)
static struct FsmNode DeactFnList[] =
;
enum ;
#define TEI_STATE_COUNT (ST_TEI_IDVERIFY+1)
static char *strTeiState[] =
;
enum ;
#define TEI_EVENT_COUNT (EV_TIMER+1)
static char *strTeiEvent[] =
;
static void
tei_debug(struct FsmInst *fi, char *fmt, ...)
static int
get_free_id(struct manager *mgr)
static int
get_free_tei(struct manager *mgr)
static void
teiup_create(struct manager *mgr, u_int prim, int len, void *arg)
static u_int
new_id(struct manager *mgr)
static void
do_send(struct manager *mgr)
static void
do_ack(struct manager *mgr, u_int id)
static void
mgr_send_down(struct manager *mgr, struct sk_buff *skb)
static int
dl_unit_data(struct manager *mgr, struct sk_buff *skb)
static unsigned int
random_ri(void)
static struct layer2 *
findtei(struct manager *mgr, int tei)
static void
put_tei_msg(struct manager *mgr, u_char m_id, unsigned int ri, int tei)
static void
tei_id_request(struct FsmInst *fi, int event, void *arg)
static void
tei_id_assign(struct FsmInst *fi, int event, void *arg)
static void
tei_id_test_dup(struct FsmInst *fi, int event, void *arg)
static void
tei_id_denied(struct FsmInst *fi, int event, void *arg)
static void
tei_id_chk_req(struct FsmInst *fi, int event, void *arg)
static void
tei_id_remove(struct FsmInst *fi, int event, void *arg)
static void
tei_id_verify(struct FsmInst *fi, int event, void *arg)
static void
tei_id_req_tout(struct FsmInst *fi, int event, void *arg)
static void
tei_id_ver_tout(struct FsmInst *fi, int event, void *arg)
static struct FsmNode TeiFnListUser[] =
;
static void
tei_l2remove(struct layer2 *l2)
static void
tei_assign_req(struct FsmInst *fi, int event, void *arg)
static void
tei_id_chk_req_net(struct FsmInst *fi, int event, void *arg)
static void
tei_id_chk_resp(struct FsmInst *fi, int event, void *arg)
static void
tei_id_verify_net(struct FsmInst *fi, int event, void *arg)
static void
tei_id_ver_tout_net(struct FsmInst *fi, int event, void *arg)
static struct FsmNode TeiFnListNet[] =
;
static void
tei_ph_data_ind(struct teimgr *tm, u_int mt, u_char *dp, int len)
static struct layer2 *
create_new_tei(struct manager *mgr, int tei, int sapi)
static void
new_tei_req(struct manager *mgr, u_char *dp)
static int
ph_data_ind(struct manager *mgr, struct sk_buff *skb)
int
l2_tei(struct layer2 *l2, u_int cmd, u_long arg)
void
TEIrelease(struct layer2 *l2)
static int
create_teimgr(struct manager *mgr, struct channel_req *crq)
static int
mgr_send(struct mISDNchannel *ch, struct sk_buff *skb)
static int
free_teimanager(struct manager *mgr)
static int
ctrl_teimanager(struct manager *mgr, void *arg)
static int
check_data(struct manager *mgr, struct sk_buff *skb)
void
delete_teimanager(struct mISDNchannel *ch)
static int
mgr_ctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static int
mgr_bcast(struct mISDNchannel *ch, struct sk_buff *skb)
static int
mgr_bcast_ctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
int
create_teimanager(struct mISDNdevice *dev)
int TEIInit(u_int *deb)
void TEIFree(void)
