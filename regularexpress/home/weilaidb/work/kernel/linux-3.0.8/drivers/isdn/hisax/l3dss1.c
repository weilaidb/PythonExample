extern char *HiSax_getrev(const char *revision);
static const char *dss1_revision = "$Revision: 2.32.2.3 $";
#define EXT_BEARER_CAPS 1
#define	MsgHead(ptr, cref, mty) \
*ptr++ = 0x8; \
if (cref == -1)  else  \
*ptr++ = mty
static unsigned char new_invoke_id(struct PStack *p)
static void free_invoke_id(struct PStack *p, unsigned char id)
static struct l3_process
*dss1_new_l3_process(struct PStack *st, int cr)
static void
dss1_release_l3_process(struct l3_process *p)
static struct l3_process *
l3dss1_search_dummy_proc(struct PStack *st, int id)
static void
l3dss1_dummy_return_result(struct PStack *st, int id, u_char *p, u_char nlen)
static void
l3dss1_dummy_error_return(struct PStack *st, int id, ulong error)
static void
l3dss1_dummy_invoke(struct PStack *st, int cr, int id,
int ident, u_char *p, u_char nlen)
static void
l3dss1_parse_facility(struct PStack *st, struct l3_process *pc,
int cr, u_char * p)
static void
l3dss1_message(struct l3_process *pc, u_char mt)
static void
l3dss1_message_cause(struct l3_process *pc, u_char mt, u_char cause)
static void
l3dss1_status_send(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_msg_without_setup(struct l3_process *pc, u_char pr, void *arg)
static int ie_ALERTING[] = ;
static int ie_CALL_PROCEEDING[] = ;
static int ie_CONNECT[] = ;
static int ie_CONNECT_ACKNOWLEDGE[] = ;
static int ie_DISCONNECT[] = ;
static int ie_INFORMATION[] = ;
static int ie_NOTIFY[] = ;
static int ie_PROGRESS[] = ;
static int ie_RELEASE[] = ;
static int ie_RESUME_ACKNOWLEDGE[] = ;
static int ie_RESUME_REJECT[] = ;
static int ie_SETUP[] = ;
static int ie_SETUP_ACKNOWLEDGE[] = ;
static int ie_STATUS[] = ;
static int ie_STATUS_ENQUIRY[] = ;
static int ie_SUSPEND_ACKNOWLEDGE[] = ;
static int ie_SUSPEND_REJECT[] = ;
static int ie_FACILITY[] = ;
static int comp_required[] = ;
static int l3_valid_states[] = ;
struct ie_len ;
static
struct ie_len max_ie_len[] = ;
static int
getmax_ie_len(u_char ie)
static int
ie_in_set(struct l3_process *pc, u_char ie, int *checklist)
static int
check_infoelements(struct l3_process *pc, struct sk_buff *skb, int *checklist)
static int
l3dss1_check_messagetype_validity(struct l3_process *pc, int mt, void *arg)
static void
l3dss1_std_ie_err(struct l3_process *pc, int ret)
static int
l3dss1_get_channel_id(struct l3_process *pc, struct sk_buff *skb)
static int
l3dss1_get_cause(struct l3_process *pc, struct sk_buff *skb)
static void
l3dss1_msg_with_uus(struct l3_process *pc, u_char cmd)
static void
l3dss1_release_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_release_cmpl(struct l3_process *pc, u_char pr, void *arg)
static u_char *
EncodeASyncParams(u_char * p, u_char si2)
static  u_char
EncodeSyncParams(u_char si2, u_char ai)
static u_char
DecodeASyncParams(u_char si2, u_char * p)
static u_char
DecodeSyncParams(u_char si2, u_char info)
static u_char
DecodeSI2(struct sk_buff *skb)
static void
l3dss1_setup_req(struct l3_process *pc, u_char pr,
void *arg)
static void
l3dss1_call_proc(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_setup_ack(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_disconnect(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_connect(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_alerting(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_setup(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_reset(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_disconnect_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_setup_rsp(struct l3_process *pc, u_char pr,
void *arg)
static void
l3dss1_connect_ack(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_reject_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_release(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_alert_req(struct l3_process *pc, u_char pr,
void *arg)
static void
l3dss1_proceed_req(struct l3_process *pc, u_char pr,
void *arg)
static void
l3dss1_setup_ack_req(struct l3_process *pc, u_char pr,
void *arg)
static void
l3dss1_deliver_display(struct l3_process *pc, int pr, u_char *infp)
static void
l3dss1_progress(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_notify(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_status_enq(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_information(struct l3_process *pc, u_char pr, void *arg)
static void l3dss1_redir_req(struct l3_process *pc, u_char pr, void *arg)
static void l3dss1_redir_req_early(struct l3_process *pc, u_char pr, void *arg)
static int l3dss1_cmd_global(struct PStack *st, isdn_ctrl *ic)
static void
l3dss1_io_timer(struct l3_process *pc)
static void
l3dss1_release_ind(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_dummy(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t302(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t303(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t304(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t305(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t310(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t313(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t308_1(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t308_2(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t318(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_t319(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_restart(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_status(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_facility(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_suspend_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_suspend_ack(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_suspend_rej(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_resume_req(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_resume_ack(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_resume_rej(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_global_restart(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_dl_reset(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_dl_release(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_dl_reestablish(struct l3_process *pc, u_char pr, void *arg)
static void
l3dss1_dl_reest_status(struct l3_process *pc, u_char pr, void *arg)
static struct stateentry downstatelist[] =
;
static struct stateentry datastatelist[] =
;
static struct stateentry globalmes_list[] =
;
static struct stateentry manstatelist[] =
;
static void
global_handler(struct PStack *st, int mt, struct sk_buff *skb)
static void
dss1up(struct PStack *st, int pr, void *arg)
static void
dss1down(struct PStack *st, int pr, void *arg)
static void
dss1man(struct PStack *st, int pr, void *arg)
void
setstack_dss1(struct PStack *st)
