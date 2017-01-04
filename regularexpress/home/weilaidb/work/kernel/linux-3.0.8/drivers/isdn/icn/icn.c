static int portbase = ICN_BASEADDR;
static unsigned long membase = ICN_MEMADDR;
static char *icn_id = "\0";
static char *icn_id2 = "\0";
MODULE_DESCRIPTION("ISDN4Linux: Driver for ICN active ISDN card");
MODULE_AUTHOR("Fritz Elfert");
MODULE_LICENSE("GPL");
module_param(portbase, int, 0);
MODULE_PARM_DESC(portbase, "Port address of first card");
module_param(membase, ulong, 0);
MODULE_PARM_DESC(membase, "Shared memory address of all cards");
module_param(icn_id, charp, 0);
MODULE_PARM_DESC(icn_id, "ID-String of first card");
module_param(icn_id2, charp, 0);
MODULE_PARM_DESC(icn_id2, "ID-String of first card, second S0 (4B only)");
#undef BOOT_DEBUG
#undef MAP_DEBUG
static char
*revision = "$Revision: 1.65.6.8 $";
static int icn_addcard(int, char *, char *);
static void
icn_free_queue(icn_card * card, int channel)
static inline void
icn_shiftout(unsigned short port,
unsigned long val,
int firstbit,
int bitcount)
static inline void
icn_disable_ram(icn_card * card)
static inline void
icn_enable_ram(icn_card * card)
static inline void
icn_map_channel(icn_card * card, int channel)
static inline int
icn_lock_channel(icn_card * card, int channel)
static inline void
__icn_release_channel(void)
static inline void
icn_release_channel(void)
static inline int
icn_trymaplock_channel(icn_card * card, int channel)
static inline void
icn_maprelease_channel(icn_card * card, int channel)
static void
icn_pollbchan_receive(int channel, icn_card * card)
static void
icn_pollbchan_send(int channel, icn_card * card)
static void
icn_pollbchan(unsigned long data)
typedef struct icn_stat  icn_stat;
static icn_stat icn_stat_table[] =
;
static void
icn_parse_status(u_char * status, int channel, icn_card * card)
static void
icn_putmsg(icn_card * card, unsigned char c)
static void
icn_polldchan(unsigned long data)
static int
icn_sendbuf(int channel, int ack, struct sk_buff *skb, icn_card * card)
static int
icn_check_loader(int cardnumber)
#define SLEEP(sec)
#define SLEEP(sec)
static int
icn_loadboot(u_char __user * buffer, icn_card * card)
static int
icn_loadproto(u_char __user * buffer, icn_card * card)
static int
icn_readstatus(u_char __user *buf, int len, icn_card * card)
static int
icn_writecmd(const u_char * buf, int len, int user, icn_card * card)
static void
icn_stopcard(icn_card * card)
static void
icn_stopallcards(void)
static void
icn_disable_cards(void)
static int
icn_command(isdn_ctrl * c, icn_card * card)
static inline icn_card *
icn_findcard(int driverid)
static int
if_command(isdn_ctrl * c)
static int
if_writecmd(const u_char __user *buf, int len, int id, int channel)
static int
if_readstatus(u_char __user *buf, int len, int id, int channel)
static int
if_sendbuf(int id, int channel, int ack, struct sk_buff *skb)
static icn_card *
icn_initcard(int port, char *id)
static int
icn_addcard(int port, char *id1, char *id2)
static int __init
icn_setup(char *line)
__setup("icn=", icn_setup);
static int __init icn_init(void)
static void __exit icn_exit(void)
module_init(icn_init);
module_exit(icn_exit);
