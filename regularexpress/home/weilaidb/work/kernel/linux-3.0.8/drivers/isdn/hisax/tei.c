const char *tei_revision = "$Revision: 2.20.2.3 $";
#define ID_REQUEST	1
#define ID_ASSIGNED	2
#define ID_DENIED	3
#define ID_CHK_REQ	4
#define ID_CHK_RES	5
#define ID_REMOVE	6
#define ID_VERIFY	7
#define TEI_ENTITY_ID	0xf
static struct Fsm teifsm;
void tei_handler(struct PStack *st, u_char pr, struct sk_buff *skb);
enum ;
#define TEI_STATE_COUNT (ST_TEI_IDVERIFY+1)
static char *strTeiState[] =
;
enum ;
#define TEI_EVENT_COUNT (EV_T202+1)
static char *strTeiEvent[] =
;
static unsigned int
random_ri(void)
static struct PStack *
findtei(struct PStack *st, int tei)
static void
put_tei_msg(struct PStack *st, u_char m_id, unsigned int ri, u_char tei)
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
static void
tei_l1l2(struct PStack *st, int pr, void *arg)
static void
tei_l2tei(struct PStack *st, int pr, void *arg)
static void
tei_debug(struct FsmInst *fi, char *fmt, ...)
void
setstack_tei(struct PStack *st)
void
init_tei(struct IsdnCardState *cs, int protocol)
void
release_tei(struct IsdnCardState *cs)
static struct FsmNode TeiFnList[] __initdata =
;
int __init
TeiNew(void)
void
TeiFree(void)
