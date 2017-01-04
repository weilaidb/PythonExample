#define PC_DIAL		0x001
#define PC_HUP		0x002
#define PC_INIT		0x004
#define PC_DLE0		0x008
#define PC_DLE1		0x010
#define PC_SHUTDOWN	0x020
#define PC_ACCEPT	0x040
#define PC_CID		0x080
#define PC_NOCID	0x100
#define PC_CIDMODE	0x200
#define PC_UMMODE	0x400
#define RT_NOTHING	0
#define RT_ZSAU		1
#define RT_RING		2
#define RT_NUMBER	3
#define RT_STRING	4
#define RT_ZCAU		6
#define RSP_OK		0
#define RSP_ERROR	1
#define RSP_ZGCI	3
#define RSP_RING	4
#define RSP_ZVLS	5
#define RSP_ZCAU	6
#define RSP_VAR		100
#define RSP_ZSAU	(RSP_VAR + VAR_ZSAU)
#define RSP_ZDLE	(RSP_VAR + VAR_ZDLE)
#define RSP_ZCTP	(RSP_VAR + VAR_ZCTP)
#define RSP_STR		(RSP_VAR + VAR_NUM)
#define RSP_NMBR	(RSP_STR + STR_NMBR)
#define RSP_ZCPN	(RSP_STR + STR_ZCPN)
#define RSP_ZCON	(RSP_STR + STR_ZCON)
#define RSP_ZBC		(RSP_STR + STR_ZBC)
#define RSP_ZHLC	(RSP_STR + STR_ZHLC)
#define RSP_WRONG_CID	-2
#define RSP_INVAL	-6
#define RSP_NODEV	-9
#define RSP_NONE	-19
#define RSP_STRING	-20
#define RSP_NULL	-21
#define RSP_INIT	-27
#define RSP_ANY		-26
#define RSP_LAST	-28
#define ACT_NOTHING		0
#define ACT_SETDLE1		1
#define ACT_SETDLE0		2
#define ACT_FAILINIT		3
#define ACT_HUPMODEM		4
#define ACT_CONFIGMODE		5
#define ACT_INIT		6
#define ACT_DLE0		7
#define ACT_DLE1		8
#define ACT_FAILDLE0		9
#define ACT_FAILDLE1		10
#define ACT_RING		11
#define ACT_CID			12
#define ACT_FAILCID		13
#define ACT_SDOWN		14
#define ACT_FAILSDOWN		15
#define ACT_DEBUG		16
#define ACT_WARN		17
#define ACT_DIALING		18
#define ACT_ABORTDIAL		19
#define ACT_DISCONNECT		20
#define ACT_CONNECT		21
#define ACT_REMOTEREJECT	22
#define ACT_CONNTIMEOUT		23
#define ACT_REMOTEHUP		24
#define ACT_ABORTHUP		25
#define ACT_ICALL		26
#define ACT_ACCEPTED		27
#define ACT_ABORTACCEPT		28
#define ACT_TIMEOUT		29
#define ACT_GETSTRING		30
#define ACT_SETVER		31
#define ACT_FAILVER		32
#define ACT_GOTVER		33
#define ACT_TEST		34
#define ACT_ERROR		35
#define ACT_ABORTCID		36
#define ACT_ZCAU		37
#define ACT_NOTIFY_BC_DOWN	38
#define ACT_NOTIFY_BC_UP	39
#define ACT_DIAL		40
#define ACT_ACCEPT		41
#define ACT_HUP			43
#define ACT_IF_LOCK		44
#define ACT_START		45
#define ACT_STOP		46
#define ACT_FAKEDLE0		47
#define ACT_FAKEHUP		48
#define ACT_FAKESDOWN		49
#define ACT_SHUTDOWN		50
#define ACT_PROC_CIDMODE	51
#define ACT_UMODESET		52
#define ACT_FAILUMODE		53
#define ACT_CMODESET		54
#define ACT_FAILCMODE		55
#define ACT_IF_VER		56
#define ACT_CMD			100
#define SEQ_NONE	0
#define SEQ_INIT	100
#define SEQ_DLE0	200
#define SEQ_DLE1	250
#define SEQ_CID		300
#define SEQ_NOCID	350
#define SEQ_HUP		400
#define SEQ_DIAL	600
#define SEQ_ACCEPT	720
#define SEQ_SHUTDOWN	500
#define SEQ_CIDMODE	10
#define SEQ_UMMODE	11
struct reply_t gigaset_tab_nocid[] =
;
struct reply_t gigaset_tab_cid[] =
;
static const struct resp_type_t  resp_type[] =
;
static const struct zsau_resp_t  zsau_resp[] =
;
static int cid_of_response(char *s)
void gigaset_handle_modem_response(struct cardstate *cs)
EXPORT_SYMBOL_GPL(gigaset_handle_modem_response);
static void disconnect(struct at_state_t **at_state_p)
static inline struct at_state_t *get_free_channel(struct cardstate *cs,
int cid)
static void init_failed(struct cardstate *cs, int mode)
static void schedule_init(struct cardstate *cs, int state)
static void send_command(struct cardstate *cs, const char *cmd, int cid,
int dle, gfp_t kmallocflags)
static struct at_state_t *at_state_from_cid(struct cardstate *cs, int cid)
static void bchannel_down(struct bc_state *bcs)
static void bchannel_up(struct bc_state *bcs)
static void start_dial(struct at_state_t *at_state, void *data,
unsigned seq_index)
static void start_accept(struct at_state_t *at_state)
static void do_start(struct cardstate *cs)
static void finish_shutdown(struct cardstate *cs)
static void do_shutdown(struct cardstate *cs)
static void do_stop(struct cardstate *cs)
static int reinit_and_retry(struct cardstate *cs, int channel)
static int at_state_invalid(struct cardstate *cs,
struct at_state_t *test_ptr)
static void handle_icall(struct cardstate *cs, struct bc_state *bcs,
struct at_state_t **p_at_state)
static int do_lock(struct cardstate *cs)
static int do_unlock(struct cardstate *cs)
static void do_action(int action, struct cardstate *cs,
struct bc_state *bcs,
struct at_state_t **p_at_state, char **pp_command,
int *p_genresp, int *p_resp_code,
struct event_t *ev)
static void process_event(struct cardstate *cs, struct event_t *ev)
static void schedule_sequence(struct cardstate *cs,
struct at_state_t *at_state, int sequence)
static void process_command_flags(struct cardstate *cs)
static void process_events(struct cardstate *cs)
void gigaset_handle_event(unsigned long data)
