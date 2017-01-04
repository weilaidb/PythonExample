#define CONFIG_ISDN_DIVERSION
#undef ISDN_DEBUG_STATCALLB
MODULE_DESCRIPTION("ISDN4Linux: link layer");
MODULE_AUTHOR("Fritz Elfert");
MODULE_LICENSE("GPL");
isdn_dev *dev;
static DEFINE_MUTEX(isdn_mutex);
static char *isdn_revision = "$Revision: 1.1.2.3 $";
extern char *isdn_net_revision;
extern char *isdn_tty_revision;
extern char *isdn_ppp_revision;
static char *isdn_ppp_revision = ": none $";
extern char *isdn_audio_revision;
static char *isdn_audio_revision = ": none $";
extern char *isdn_v110_revision;
static isdn_divert_if *divert_if;
static int isdn_writebuf_stub(int, int, const u_char __user *, int);
static void set_global_features(void);
static int isdn_wildmat(char *s, char *p);
static int isdn_add_channels(isdn_driver_t *d, int drvidx, int n, int adding);
static inline void
isdn_lock_driver(isdn_driver_t *drv)
void
isdn_lock_drivers(void)
static inline void
isdn_unlock_driver(isdn_driver_t *drv)
void
isdn_unlock_drivers(void)
#if defined(ISDN_DEBUG_NET_DUMP) || defined(ISDN_DEBUG_MODEM_DUMP)
void
isdn_dumppkt(char *s, u_char * p, int len, int dumplen)
static int
isdn_star(char *s, char *p)
static int
isdn_wildmat(char *s, char *p)
int isdn_msncmp( const char * msn1, const char * msn2 )
int
isdn_dc2minor(int di, int ch)
static int isdn_timer_cnt1 = 0;
static int isdn_timer_cnt2 = 0;
static int isdn_timer_cnt3 = 0;
static void
isdn_timer_funct(ulong dummy)
void
isdn_timer_ctrl(int tf, int onoff)
static void
isdn_receive_skb_callback(int di, int channel, struct sk_buff *skb)
int
isdn_command(isdn_ctrl *cmd)
void
isdn_all_eaz(int di, int ch)
static int
isdn_capi_rec_hl_msg(capi_msg *cm)
static int
isdn_status_callback(isdn_ctrl * c)
int
isdn_getnum(char **p)
#define DLE 0x10
int
isdn_readbchan(int di, int channel, u_char * buf, u_char * fp, int len, wait_queue_head_t *sleep)
int
isdn_readbchan_tty(int di, int channel, struct tty_struct *tty, int cisco_hack)
static inline int
isdn_minor2drv(int minor)
static inline int
isdn_minor2chan(int minor)
static char *
isdn_statstr(void)
void
isdn_info_update(void)
static ssize_t
isdn_read(struct file *file, char __user *buf, size_t count, loff_t * off)
static ssize_t
isdn_write(struct file *file, const char __user *buf, size_t count, loff_t * off)
static unsigned int
isdn_poll(struct file *file, poll_table * wait)
static int
isdn_ioctl(struct file *file, uint cmd, ulong arg)
static long
isdn_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
isdn_open(struct inode *ino, struct file *filep)
static int
isdn_close(struct inode *ino, struct file *filep)
static const struct file_operations isdn_fops =
;
char *
isdn_map_eaz2msn(char *msn, int di)
#define L2V (~(ISDN_FEATURE_L2_V11096|ISDN_FEATURE_L2_V11019|ISDN_FEATURE_L2_V11038))
int
isdn_get_free_channel(int usage, int l2_proto, int l3_proto, int pre_dev
,int pre_chan, char *msn)
void
isdn_free_channel(int di, int ch, int usage)
void
isdn_unexclusive_channel(int di, int ch)
static int
isdn_writebuf_stub(int drvidx, int chan, const u_char __user * buf, int len)
int
isdn_writebuf_skb_stub(int drvidx, int chan, int ack, struct sk_buff *skb)
static int
isdn_add_channels(isdn_driver_t *d, int drvidx, int n, int adding)
static void
set_global_features(void)
static char *map_drvname(int di)
static int map_namedrv(char *id)
int DIVERT_REG_NAME(isdn_divert_if *i_div)
EXPORT_SYMBOL(DIVERT_REG_NAME);
EXPORT_SYMBOL(register_isdn);
EXPORT_SYMBOL(isdn_ppp_register_compressor);
EXPORT_SYMBOL(isdn_ppp_unregister_compressor);
int
register_isdn(isdn_if * i)
static char *
isdn_getrev(const char *revision)
static int __init isdn_init(void)
static void __exit isdn_exit(void)
module_init(isdn_init);
module_exit(isdn_exit);
