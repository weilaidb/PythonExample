#define CARD_H
#define CHECKRESET_TIME		msecs_to_jiffies(4000)
#define CHECKSTAT_TIME		msecs_to_jiffies(8000)
#define SAR_TIMEOUT		msecs_to_jiffies(10000)
#define IS_VALID_CARD(x)	((x >= 0) && (x <= cinst))
typedef struct  bchan;
typedef struct  board;
extern board *sc_adapter[];
extern int cinst;
void memcpy_toshmem(int card, void *dest, const void *src, size_t n);
void memcpy_fromshmem(int card, void *dest, const void *src, size_t n);
int get_card_from_id(int driver);
int indicate_status(int card, int event, ulong Channel, char *Data);
irqreturn_t interrupt_handler(int interrupt, void *cardptr);
int sndpkt(int devId, int channel, int ack, struct sk_buff *data);
void rcvpkt(int card, RspMessage *rcvmsg);
int command(isdn_ctrl *cmd);
int reset(int card);
int startproc(int card);
int send_and_receive(int card, unsigned int procid, unsigned char type,
unsigned char class, unsigned char code,
unsigned char link, unsigned char data_len,
unsigned char *data,  RspMessage *mesgdata, int timeout);
void flushreadfifo (int card);
int sendmessage(int card, unsigned int procid, unsigned int type,
unsigned int class, unsigned int code, unsigned int link,
unsigned int data_len, unsigned int *data);
int receivemessage(int card, RspMessage *rspmsg);
int sc_ioctl(int card, scs_ioctl *data);
int setup_buffers(int card, int c);
void sc_check_reset(unsigned long data);
void check_phystat(unsigned long data);
