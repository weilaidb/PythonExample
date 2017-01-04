extern char *HiSax_getrev(const char *revision);
static const char *l3_1tr6_revision = "$Revision: 2.15.2.3 $";
#define MsgHead(ptr, cref, mty, dis) \
*ptr++ = dis; \
*ptr++ = 0x1; \
*ptr++ = cref ^ 0x80; \
*ptr++ = mty
static void
l3_1TR6_message(struct l3_process *pc, u_char mt, u_char pd)
static void
l3_1tr6_release_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_invalid(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_error(struct l3_process *pc, u_char *msg, struct sk_buff *skb)
static void
l3_1tr6_setup_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_setup(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_setup_ack(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_call_sent(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_alert(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_info(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_info_s2(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_connect(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_rel(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_rel_ack(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_disc(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_connect_ack(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_alert_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_setup_rsp(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_reset(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_disconnect_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_t303(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_t304(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_t305(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_t310(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_t313(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_t308_1(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_t308_2(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_dl_reset(struct l3_process *pc, u_char pr, void *arg)
static void
l3_1tr6_dl_release(struct l3_process *pc, u_char pr, void *arg)
static struct stateentry downstl[] =
;
static struct stateentry datastln1[] =
;
static struct stateentry manstatelist[] =
;
static void
up1tr6(struct PStack *st, int pr, void *arg)
static void
down1tr6(struct PStack *st, int pr, void *arg)
static void
man1tr6(struct PStack *st, int pr, void *arg)
void
setstack_1tr6(struct PStack *st)
