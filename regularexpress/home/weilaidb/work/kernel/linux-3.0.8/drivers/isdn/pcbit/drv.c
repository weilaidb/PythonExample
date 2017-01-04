extern ushort last_ref_num;
static int pcbit_ioctl(isdn_ctrl* ctl);
static char* pcbit_devname[MAX_PCBIT_CARDS] = ;
static int pcbit_command(isdn_ctrl* ctl);
static int pcbit_stat(u_char __user * buf, int len, int, int);
static int pcbit_xmit(int driver, int chan, int ack, struct sk_buff *skb);
static int pcbit_writecmd(const u_char __user *, int, int, int);
static int set_protocol_running(struct pcbit_dev * dev);
static void pcbit_clear_msn(struct pcbit_dev *dev);
static void pcbit_set_msn(struct pcbit_dev *dev, char *list);
static int pcbit_check_msn(struct pcbit_dev *dev, char *msn);
int pcbit_init_dev(int board, int mem_base, int irq)
void pcbit_terminate(int board)
static int pcbit_command(isdn_ctrl* ctl)
static void pcbit_block_timer(unsigned long data)
static int pcbit_xmit(int driver, int chnum, int ack, struct sk_buff *skb)
static int pcbit_writecmd(const u_char __user *buf, int len, int driver, int channel)
void pcbit_l3_receive(struct pcbit_dev * dev, ulong msg,
struct sk_buff * skb,
ushort hdr_len, ushort refnum)
static char statbuf[STATBUF_LEN];
static int stat_st = 0;
static int stat_end = 0;
static int pcbit_stat(u_char __user *buf, int len, int driver, int channel)
static void pcbit_logstat(struct pcbit_dev *dev, char *str)
void pcbit_state_change(struct pcbit_dev * dev, struct pcbit_chan * chan,
unsigned short i, unsigned short ev, unsigned short f)
static void set_running_timeout(unsigned long ptr)
static int set_protocol_running(struct pcbit_dev * dev)
static int pcbit_ioctl(isdn_ctrl* ctl)
static void pcbit_clear_msn(struct pcbit_dev *dev)
static void pcbit_set_msn(struct pcbit_dev *dev, char *list)
static int pcbit_check_msn(struct pcbit_dev *dev, char *msn)
