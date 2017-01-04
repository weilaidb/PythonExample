static char *revision = "$Revision: 1.11.6.7 $";
static char *isdnloop_id = "loop0";
MODULE_DESCRIPTION("ISDN4Linux: Pseudo Driver that simulates an ISDN card");
MODULE_AUTHOR("Fritz Elfert");
MODULE_LICENSE("GPL");
module_param(isdnloop_id, charp, 0);
MODULE_PARM_DESC(isdnloop_id, "ID-String of first card");
static int isdnloop_addcard(char *);
static void
isdnloop_free_queue(isdnloop_card * card, int channel)
static void
isdnloop_bchan_send(isdnloop_card * card, int ch)
static void
isdnloop_pollbchan(unsigned long data)
static void
isdnloop_parse_setup(char *setup, isdn_ctrl * cmd)
typedef struct isdnloop_stat  isdnloop_stat;
static isdnloop_stat isdnloop_stat_table[] =
;
static void
isdnloop_parse_status(u_char * status, int channel, isdnloop_card * card)
static void
isdnloop_putmsg(isdnloop_card * card, unsigned char c)
static void
isdnloop_polldchan(unsigned long data)
static int
isdnloop_sendbuf(int channel, struct sk_buff *skb, isdnloop_card * card)
static int
isdnloop_readstatus(u_char __user *buf, int len, isdnloop_card * card)
static int
isdnloop_fake(isdnloop_card * card, char *s, int ch)
static isdnloop_stat isdnloop_cmd_table[] =
;
static void
isdnloop_fake_err(isdnloop_card * card)
static u_char ctable_eu[] =
;
static u_char ctable_1t[] =
;
static char *
isdnloop_unicause(isdnloop_card * card, int loc, int cau)
static void
isdnloop_atimeout(isdnloop_card * card, int ch)
static void
isdnloop_atimeout0(unsigned long data)
static void
isdnloop_atimeout1(unsigned long data)
static void
isdnloop_start_ctimer(isdnloop_card * card, int ch)
static void
isdnloop_kill_ctimer(isdnloop_card * card, int ch)
static u_char si2bit[] =
;
static u_char bit2si[] =
;
static int
isdnloop_try_call(isdnloop_card * card, char *p, int lch, isdn_ctrl * cmd)
static char *
isdnloop_vstphone(isdnloop_card * card, char *phone, int caller)
static void
isdnloop_parse_cmd(isdnloop_card * card)
static int
isdnloop_writecmd(const u_char * buf, int len, int user, isdnloop_card * card)
static void
isdnloop_stopcard(isdnloop_card * card)
static void
isdnloop_stopallcards(void)
static int
isdnloop_start(isdnloop_card * card, isdnloop_sdef * sdefp)
static int
isdnloop_command(isdn_ctrl * c, isdnloop_card * card)
static inline isdnloop_card *
isdnloop_findcard(int driverid)
static int
if_command(isdn_ctrl * c)
static int
if_writecmd(const u_char __user *buf, int len, int id, int channel)
static int
if_readstatus(u_char __user *buf, int len, int id, int channel)
static int
if_sendbuf(int id, int channel, int ack, struct sk_buff *skb)
static isdnloop_card *
isdnloop_initcard(char *id)
static int
isdnloop_addcard(char *id1)
static int __init
isdnloop_init(void)
static void __exit
isdnloop_exit(void)
module_init(isdnloop_init);
module_exit(isdnloop_exit);
