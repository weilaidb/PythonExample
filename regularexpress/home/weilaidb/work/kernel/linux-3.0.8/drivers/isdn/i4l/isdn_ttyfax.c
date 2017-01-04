#undef ISDN_TTY_FAX_STAT_DEBUG
#undef ISDN_TTY_FAX_CMD_DEBUG
static char *isdn_tty_fax_revision = "$Revision: 1.1.2.2 $";
#define PARSE_ERROR1
static char *
isdn_getrev(const char *revision)
static void
isdn_tty_fax_modem_result(int code, modem_info * info)
static int
isdn_tty_fax_command1(modem_info * info, isdn_ctrl * c)
int
isdn_tty_fax_command(modem_info * info, isdn_ctrl * c)
void
isdn_tty_fax_bitorder(modem_info * info, struct sk_buff *skb)
static int
isdn_tty_cmd_FCLASS1(char **p, modem_info * info)
static int
isdn_tty_cmd_FCLASS2(char **p, modem_info * info)
int
isdn_tty_cmd_PLUSF_FAX(char **p, modem_info * info)
