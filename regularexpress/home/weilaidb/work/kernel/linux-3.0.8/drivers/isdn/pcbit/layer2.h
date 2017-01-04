#define LAYER2_H
#define BANK1 0x0000U
#define BANK2 0x01ffU
#define BANK3 0x03feU
#define BANK4 0x03ffU
#define BANKLEN 0x01FFU
#define LOAD_ZONE_START 0x03f8U
#define LOAD_ZONE_END   0x03fdU
#define LOAD_RETRY      18000000
#define PREHDR_LEN 8
#define FRAME_HDR_LEN  8
#define MSG_CONN_REQ		0x08000100
#define MSG_CONN_CONF		0x00000101
#define MSG_CONN_IND		0x00000102
#define MSG_CONN_RESP		0x08000103
#define MSG_CONN_ACTV_REQ	0x08000300
#define MSG_CONN_ACTV_CONF	0x00000301
#define MSG_CONN_ACTV_IND	0x00000302
#define MSG_CONN_ACTV_RESP	0x08000303
#define MSG_DISC_REQ		0x08000400
#define MSG_DISC_CONF		0x00000401
#define MSG_DISC_IND		0x00000402
#define MSG_DISC_RESP		0x08000403
#define MSG_TDATA_REQ		0x0908E200
#define MSG_TDATA_CONF		0x0000E201
#define MSG_TDATA_IND		0x0000E202
#define MSG_TDATA_RESP		0x0908E203
#define MSG_SELP_REQ		0x09004000
#define MSG_SELP_CONF		0x00004001
#define MSG_ACT_TRANSP_REQ      0x0908E000
#define MSG_ACT_TRANSP_CONF     0x0000E001
#define MSG_STPROT_REQ		0x09004100
#define MSG_STPROT_CONF		0x00004101
#define MSG_PING188_REQ		0x09030500
#define MSG_PING188_CONF        0x000005bc
#define MSG_WATCH188	        0x09030400
#define MSG_API_ON              0x08020102
#define MSG_POOL_PCBIT          0x08020400
#define MSG_POOL_PCBIT_CONF     0x00000401
#define MSG_INFO_IND            0x00002602
#define MSG_INFO_RESP           0x08002603
#define MSG_DEBUG_188           0x0000ff00
#define SET_MSG_SCMD(msg, ch) 	(msg = (msg & 0xffffff00) | (((ch) & 0xff)))
#define SET_MSG_CMD(msg, ch) 	(msg = (msg & 0xffff00ff) | (((ch) & 0xff) << 8))
#define SET_MSG_PROC(msg, ch) 	(msg = (msg & 0xff00ffff) | (((ch) & 0xff) << 16))
#define SET_MSG_CPU(msg, ch) 	(msg = (msg & 0x00ffffff) | (((ch) & 0xff) << 24))
#define GET_MSG_SCMD(msg) 	((msg) & 0xFF)
#define GET_MSG_CMD(msg) 	((msg) >> 8 & 0xFF)
#define GET_MSG_PROC(msg) 	((msg) >> 16 & 0xFF)
#define GET_MSG_CPU(msg) 	((msg) >> 24)
#error "Non-Intel CPU"
#define MAX_QUEUED 7
#define SCHED_READ    0x01
#define SCHED_WRITE   0x02
#define SET_RUN_TIMEOUT 2*HZ
struct frame_buf ;
extern int pcbit_l2_write(struct pcbit_dev * dev, ulong msg, ushort refnum,
struct sk_buff *skb, unsigned short hdr_len);
extern irqreturn_t pcbit_irq_handler(int interrupt, void *);
extern struct pcbit_dev * dev_pcbit[MAX_PCBIT_CARDS];
static __inline__ void log_state(struct pcbit_dev *dev)
static __inline__ struct pcbit_dev * chan2dev(struct pcbit_chan * chan)
static __inline__ struct pcbit_dev * finddev(int id)
static __inline__ void pcbit_writeb(struct pcbit_dev *dev, unsigned char dt)
static __inline__ void pcbit_writew(struct pcbit_dev *dev, unsigned short dt)
static __inline__ void memcpy_topcbit(struct pcbit_dev * dev, u_char * data,
int len)
static __inline__ unsigned char pcbit_readb(struct pcbit_dev *dev)
static __inline__ unsigned short pcbit_readw(struct pcbit_dev *dev)
static __inline__ void memcpy_frompcbit(struct pcbit_dev * dev, u_char * data, int len)
