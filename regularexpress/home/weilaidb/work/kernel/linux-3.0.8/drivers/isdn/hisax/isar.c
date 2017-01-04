#define DBG_LOADFIRM	0
#define DUMP_MBOXFRAME	2
#define DLE	0x10
#define ETX	0x03
#define FAXMODCNT	13
static const	u_char	faxmodulation[] = ;
static	u_int	modmask = 0x1fff;
static	int	frm_extra_delay = 2;
static	int	para_TOA = 6;
static const   u_char  *FC1_CMD[] = ;
static void isar_setup(struct IsdnCardState *cs);
static void isar_pump_cmd(struct BCState *bcs, u_char cmd, u_char para);
static void ll_deliver_faxstat(struct BCState *bcs, u_char status);
static inline int
waitforHIA(struct IsdnCardState *cs, int timeout)
static int
sendmsg(struct IsdnCardState *cs, u_char his, u_char creg, u_char len,
u_char *msg)
static inline void
rcv_mbox(struct IsdnCardState *cs, struct isar_reg *ireg, u_char *msg)
static inline void
get_irq_infos(struct IsdnCardState *cs, struct isar_reg *ireg)
static int
waitrecmsg(struct IsdnCardState *cs, u_char *len,
u_char *msg, int maxdelay)
int
ISARVersion(struct IsdnCardState *cs, char *s)
static int
isar_load_firmware(struct IsdnCardState *cs, u_char __user *buf)
#define B_LL_NOCARRIER	8
#define B_LL_CONNECT	9
#define B_LL_OK		10
static void
isar_bh(struct work_struct *work)
static void
send_DLE_ETX(struct BCState *bcs)
static inline int
dle_count(unsigned char *buf, int len)
static inline void
insert_dle(unsigned char *dest, unsigned char *src, int count)
static void
isar_rcv_frame(struct IsdnCardState *cs, struct BCState *bcs)
void
isar_fill_fifo(struct BCState *bcs)
static inline
struct BCState *sel_bcs_isar(struct IsdnCardState *cs, u_char dpath)
static void
send_frames(struct BCState *bcs)
static inline void
check_send(struct IsdnCardState *cs, u_char rdm)
static const char *dmril[] = ;
static const char *dmrim[] = ;
static void
isar_pump_status_rsp(struct BCState *bcs, struct isar_reg *ireg)
static void
isar_pump_statev_modem(struct BCState *bcs, u_char devt)
static void
ll_deliver_faxstat(struct BCState *bcs, u_char status)
static void
isar_pump_statev_fax(struct BCState *bcs, u_char devt)
static char debbuf[128];
void
isar_int_main(struct IsdnCardState *cs)
static void
ftimer_handler(struct BCState *bcs)
static void
setup_pump(struct BCState *bcs)
static void
setup_sart(struct BCState *bcs)
static void
setup_iom2(struct BCState *bcs)
static int
modeisar(struct BCState *bcs, int mode, int bc)
static void
isar_pump_cmd(struct BCState *bcs, u_char cmd, u_char para)
static void
isar_setup(struct IsdnCardState *cs)
static void
isar_l2l1(struct PStack *st, int pr, void *arg)
static void
close_isarstate(struct BCState *bcs)
static int
open_isarstate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_isar(struct PStack *st, struct BCState *bcs)
int
isar_auxcmd(struct IsdnCardState *cs, isdn_ctrl *ic)
void initisar(struct IsdnCardState *cs)
