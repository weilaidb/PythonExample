static int debugmode = 0;
MODULE_DESCRIPTION("CAPI4Linux: Interface to ISDN4Linux");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
module_param(debugmode, uint, S_IRUGO|S_IWUSR);
struct capidrv_contr ;
struct capidrv_data ;
typedef struct capidrv_plci capidrv_plci;
typedef struct capidrv_ncci capidrv_ncci;
typedef struct capidrv_contr capidrv_contr;
typedef struct capidrv_data capidrv_data;
typedef struct capidrv_bchan capidrv_bchan;
static capidrv_data global;
static DEFINE_SPINLOCK(global_lock);
static void handle_dtrace_data(capidrv_contr *card,
int send, int level2, u8 *data, u16 len);
static inline u32 b1prot(int l2, int l3)
static inline u32 b2prot(int l2, int l3)
static inline u32 b3prot(int l2, int l3)
static _cstruct b1config_async_v110(u16 rate)
static _cstruct b1config(int l2, int l3)
static inline u16 si2cip(u8 si1, u8 si2)
static inline u8 cip2si1(u16 cipval)
static inline u8 cip2si2(u16 cipval)
static inline capidrv_contr *findcontrbydriverid(int driverid)
static capidrv_contr *findcontrbynumber(u32 contr)
static capidrv_plci *new_plci(capidrv_contr * card, int chan)
static capidrv_plci *find_plci_by_plci(capidrv_contr * card, u32 plci)
static capidrv_plci *find_plci_by_msgid(capidrv_contr * card, u16 msgid)
static capidrv_plci *find_plci_by_ncci(capidrv_contr * card, u32 ncci)
static void free_plci(capidrv_contr * card, capidrv_plci * plcip)
static inline capidrv_ncci *new_ncci(capidrv_contr * card,
capidrv_plci * plcip,
u32 ncci)
static inline capidrv_ncci *find_ncci(capidrv_contr * card, u32 ncci)
static inline capidrv_ncci *find_ncci_by_msgid(capidrv_contr * card,
u32 ncci, u16 msgid)
static void free_ncci(capidrv_contr * card, struct capidrv_ncci *nccip)
static int capidrv_add_ack(struct capidrv_ncci *nccip,
u16 datahandle, int len)
static int capidrv_del_ack(struct capidrv_ncci *nccip, u16 datahandle)
static void send_message(capidrv_contr * card, _cmsg * cmsg)
struct listenstatechange ;
static struct listenstatechange listentable[] =
;
static void listen_change_state(capidrv_contr * card, int event)
static void p0(capidrv_contr * card, capidrv_plci * plci)
struct plcistatechange ;
static struct plcistatechange plcitable[] =
;
static void plci_change_state(capidrv_contr * card, capidrv_plci * plci, int event)
static _cmsg cmsg;
static void n0(capidrv_contr * card, capidrv_ncci * ncci)
struct nccistatechange ;
static struct nccistatechange nccitable[] =
;
static void ncci_change_state(capidrv_contr * card, capidrv_ncci * ncci, int event)
static inline int new_bchan(capidrv_contr * card)
static void handle_controller(_cmsg * cmsg)
static void handle_incoming_call(capidrv_contr * card, _cmsg * cmsg)
static void handle_plci(_cmsg * cmsg)
static void handle_ncci(_cmsg * cmsg)
static void handle_data(_cmsg * cmsg, struct sk_buff *skb)
static _cmsg s_cmsg;
static void capidrv_recv_message(struct capi20_appl *ap, struct sk_buff *skb)
#define PUTBYTE_TO_STATUS(card, byte) \
do  while (0)
static void handle_dtrace_data(capidrv_contr *card,
int send, int level2, u8 *data, u16 len)
static _cmsg cmdcmsg;
static int capidrv_ioctl(isdn_ctrl * c, capidrv_contr * card)
struct internal_bchannelinfo ;
static int decodeFVteln(char *teln, unsigned long *bmaskp, int *activep)
static int FVteln2capi20(char *teln, u8 AdditionalInfo[1+2+2+31])
static int capidrv_command(isdn_ctrl * c, capidrv_contr * card)
static int if_command(isdn_ctrl * c)
static _cmsg sendcmsg;
static int if_sendbuf(int id, int channel, int doack, struct sk_buff *skb)
static int if_readstat(u8 __user *buf, int len, int id, int channel)
static void enable_dchannel_trace(capidrv_contr *card)
static void send_listen(capidrv_contr *card)
static void listentimerfunc(unsigned long x)
static int capidrv_addcontr(u16 contr, struct capi_profile *profp)
static int capidrv_delcontr(u16 contr)
static int
lower_callback(struct notifier_block *nb, unsigned long val, void *v)
static int capidrv_proc_show(struct seq_file *m, void *v)
static int capidrv_proc_open(struct inode *inode, struct file *file)
static const struct file_operations capidrv_proc_fops = ;
static void __init proc_init(void)
static void __exit proc_exit(void)
static struct notifier_block capictr_nb = ;
static int __init capidrv_init(void)
static void __exit capidrv_exit(void)
module_init(capidrv_init);
module_exit(capidrv_exit);
