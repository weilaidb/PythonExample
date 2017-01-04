#undef ISDN_TTY_STAT_DEBUG
#define VBUF 0x3e0
#define VBUFX (VBUF/16)
#define FIX_FILE_TRANSFER
#define	DUMMY_HAYES_AT
static DEFINE_MUTEX(modem_info_mutex);
static int isdn_tty_edit_at(const char *, int, modem_info *);
static void isdn_tty_check_esc(const u_char *, u_char, int, int *, u_long *);
static void isdn_tty_modem_reset_regs(modem_info *, int);
static void isdn_tty_cmd_ATA(modem_info *);
static void isdn_tty_flush_buffer(struct tty_struct *);
static void isdn_tty_modem_result(int, modem_info *);
static int isdn_tty_countDLE(unsigned char *, int);
#define MODEM_PARANOIA_CHECK
#define MODEM_DO_RESTART
static int bit2si[8] =
;
static int si2bit[8] =
;
char *isdn_tty_revision = "$Revision: 1.1.2.3 $";
static int
isdn_tty_try_read(modem_info * info, struct sk_buff *skb)
void
isdn_tty_readmodem(void)
int
isdn_tty_rcv_skb(int i, int di, int channel, struct sk_buff *skb)
static void
isdn_tty_cleanup_xmit(modem_info * info)
static void
isdn_tty_tint(modem_info * info)
static int
isdn_tty_countDLE(unsigned char *buf, int len)
static int
isdn_tty_handleDLEdown(modem_info * info, atemu * m, int len)
static int
isdn_tty_end_vrx(const char *buf, int c)
static int voice_cf[7] =
;
static void
isdn_tty_senddown(modem_info * info)
static void
isdn_tty_modem_do_ncarrier(unsigned long data)
static void
isdn_tty_modem_ncarrier(modem_info * info)
static int
isdn_calc_usage(int si, int l2)
static void
isdn_tty_dial(char *n, modem_info * info, atemu * m)
void
isdn_tty_modem_hup(modem_info * info, int local)
int
isdn_tty_capi_facility(capi_msg *cm)
static void
isdn_tty_suspend(char *id, modem_info * info, atemu * m)
static void
isdn_tty_resume(char *id, modem_info * info, atemu * m)
static void
isdn_tty_send_msg(modem_info * info, atemu * m, char *msg)
static inline int
isdn_tty_paranoia_check(modem_info *info, char *name, const char *routine)
static void
isdn_tty_change_speed(modem_info * info)
static int
isdn_tty_startup(modem_info * info)
static void
isdn_tty_shutdown(modem_info * info)
static int
isdn_tty_write(struct tty_struct *tty, const u_char * buf, int count)
static int
isdn_tty_write_room(struct tty_struct *tty)
static int
isdn_tty_chars_in_buffer(struct tty_struct *tty)
static void
isdn_tty_flush_buffer(struct tty_struct *tty)
static void
isdn_tty_flush_chars(struct tty_struct *tty)
static void
isdn_tty_throttle(struct tty_struct *tty)
static void
isdn_tty_unthrottle(struct tty_struct *tty)
static int
isdn_tty_get_lsr_info(modem_info * info, uint __user * value)
static int
isdn_tty_tiocmget(struct tty_struct *tty)
static int
isdn_tty_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int
isdn_tty_ioctl(struct tty_struct *tty, uint cmd, ulong arg)
static void
isdn_tty_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static int
isdn_tty_block_til_ready(struct tty_struct *tty, struct file *filp, modem_info * info)
static int
isdn_tty_open(struct tty_struct *tty, struct file *filp)
static void
isdn_tty_close(struct tty_struct *tty, struct file *filp)
static void
isdn_tty_hangup(struct tty_struct *tty)
static void
isdn_tty_reset_profile(atemu * m)
static void
isdn_tty_modem_reset_vpar(atemu * m)
static void
isdn_tty_modem_reset_faxpar(modem_info * info)
static void
isdn_tty_modem_reset_regs(modem_info * info, int force)
static void
modem_write_profile(atemu * m)
static const struct tty_operations modem_ops = ;
int
isdn_tty_modem_init(void)
void
isdn_tty_exit(void)
static int
isdn_tty_match_icall(char *cid, atemu *emu, int di)
int
isdn_tty_find_icall(int di, int ch, setup_parm *setup)
#define TTY_IS_ACTIVE(info) \
(info->flags & (ISDN_ASYNC_NORMAL_ACTIVE | ISDN_ASYNC_CALLOUT_ACTIVE))
int
isdn_tty_stat_callback(int i, isdn_ctrl *c)
#define cmdchar(c) ((c>=' ')&&(c<=0x7f))
void
isdn_tty_at_cout(char *msg, modem_info * info)
static void
isdn_tty_on_hook(modem_info * info)
static void
isdn_tty_off_hook(void)
#define PLUSWAIT1 (HZ/2)
#define PLUSWAIT2 (HZ*3/2)
static void
isdn_tty_check_esc(const u_char * p, u_char plus, int count, int *pluscount,
u_long *lastplus)
static void
isdn_tty_modem_result(int code, modem_info * info)
static void
isdn_tty_show_profile(int ridx, modem_info * info)
static void
isdn_tty_get_msnstr(char *n, char **p)
static void
isdn_tty_getdial(char *p, char *q,int cnt)
#define PARSE_ERROR
#define PARSE_ERROR1
static void
isdn_tty_report(modem_info * info)
static int
isdn_tty_cmd_ATand(char **p, modem_info * info)
static int
isdn_tty_check_ats(int mreg, int mval, modem_info * info, atemu * m)
static int
isdn_tty_cmd_ATS(char **p, modem_info * info)
static void
isdn_tty_cmd_ATA(modem_info * info)
static int
isdn_tty_cmd_PLUSF(char **p, modem_info * info)
static int
isdn_tty_cmd_PLUSV(char **p, modem_info * info)
static void
isdn_tty_parse_at(modem_info * info)
#define my_toupper(c) (((c>='a')&&(c<='z'))?(c&0xdf):c)
static int
isdn_tty_edit_at(const char *p, int count, modem_info * info)
void
isdn_tty_modem_escape(void)
void
isdn_tty_modem_ring(void)
void
isdn_tty_modem_xmit(void)
void
isdn_tty_carrier_timeout(void)
