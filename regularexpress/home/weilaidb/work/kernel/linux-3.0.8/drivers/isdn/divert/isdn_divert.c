struct call_struc
;
struct deflect_struc
;
static struct call_struc *divert_head = NULL;
static ulong next_id = 1;
static struct deflect_struc *table_head = NULL;
static struct deflect_struc *table_tail = NULL;
static unsigned char extern_wait_max = 4;
DEFINE_SPINLOCK(divert_lock);
static void deflect_timer_expire(ulong arg)
int cf_command(int drvid, int mode,
u_char proc, char *msn,
u_char service, char *fwd_nr, ulong *procid)
int deflect_extern_action(u_char cmd, ulong callid, char *to_nr)
int insertrule(int idx, divert_rule *newrule)
int deleterule(int idx)
divert_rule *getruleptr(int idx)
static int isdn_divert_icall(isdn_ctrl *ic)
void deleteprocs(void)
static int put_address(char *st, u_char *p, int len)
static int interrogate_success(isdn_ctrl *ic, struct call_struc *cs)
static int prot_stat_callback(isdn_ctrl *ic)
static int isdn_divert_stat_callback(isdn_ctrl *ic)
int ll_callback(isdn_ctrl *ic)
