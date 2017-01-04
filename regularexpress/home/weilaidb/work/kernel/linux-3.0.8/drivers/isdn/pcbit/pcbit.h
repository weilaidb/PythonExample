#define PCBIT_H
#define MAX_PCBIT_CARDS 4
#define BLOCK_TIMER
struct pcbit_chan ;
struct msn_entry ;
struct pcbit_dev ;
#define STATS_TIMER (10*HZ)
#define ERRTIME     (HZ/10)
#define MAXBUFSIZE  1534
#define MRU   MAXBUFSIZE
#define STATBUF_LEN 2048
struct pcbit_ioctl ;
#define PCBIT_IOCTL_GETSTAT  0x01
#define PCBIT_IOCTL_LWMODE   0x02
#define PCBIT_IOCTL_STRLOAD  0x03
#define PCBIT_IOCTL_ENDLOAD  0x04
#define PCBIT_IOCTL_SETBYTE  0x05
#define PCBIT_IOCTL_GETBYTE  0x06
#define PCBIT_IOCTL_RUNNING  0x07
#define PCBIT_IOCTL_WATCH188 0x08
#define PCBIT_IOCTL_PING188  0x09
#define PCBIT_IOCTL_FWMODE   0x0A
#define PCBIT_IOCTL_STOP     0x0B
#define PCBIT_IOCTL_APION    0x0C
#define PCBIT_GETSTAT  (PCBIT_IOCTL_GETSTAT  + IIOCDRVCTL)
#define PCBIT_LWMODE   (PCBIT_IOCTL_LWMODE   + IIOCDRVCTL)
#define PCBIT_STRLOAD  (PCBIT_IOCTL_STRLOAD  + IIOCDRVCTL)
#define PCBIT_ENDLOAD  (PCBIT_IOCTL_ENDLOAD  + IIOCDRVCTL)
#define PCBIT_SETBYTE  (PCBIT_IOCTL_SETBYTE  + IIOCDRVCTL)
#define PCBIT_GETBYTE  (PCBIT_IOCTL_GETBYTE  + IIOCDRVCTL)
#define PCBIT_RUNNING  (PCBIT_IOCTL_RUNNING  + IIOCDRVCTL)
#define PCBIT_WATCH188 (PCBIT_IOCTL_WATCH188 + IIOCDRVCTL)
#define PCBIT_PING188  (PCBIT_IOCTL_PING188  + IIOCDRVCTL)
#define PCBIT_FWMODE   (PCBIT_IOCTL_FWMODE   + IIOCDRVCTL)
#define PCBIT_STOP     (PCBIT_IOCTL_STOP     + IIOCDRVCTL)
#define PCBIT_APION    (PCBIT_IOCTL_APION    + IIOCDRVCTL)
#define MAXSUPERLINE 3000
#define L2_DOWN     0
#define L2_LOADING  1
#define L2_LWMODE   2
#define L2_FWMODE   3
#define L2_STARTING 4
#define L2_RUNNING  5
#define L2_ERROR    6
void pcbit_deliver(struct work_struct *work);
int pcbit_init_dev(int board, int mem_base, int irq);
void pcbit_terminate(int board);
void pcbit_l3_receive(struct pcbit_dev * dev, ulong msg, struct sk_buff * skb,
ushort hdr_len, ushort refnum);
void pcbit_state_change(struct pcbit_dev * dev, struct pcbit_chan * chan,
unsigned short i, unsigned short ev, unsigned short f);
