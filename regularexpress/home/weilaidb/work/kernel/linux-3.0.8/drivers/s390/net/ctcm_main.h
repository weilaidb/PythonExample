#define _CTCM_MAIN_H_
#define CTC_DRIVER_NAME	"ctcm"
#define CTC_DEVICE_NAME	"ctc"
#define MPC_DEVICE_NAME	"mpc"
#define CTC_DEVICE_GENE CTC_DEVICE_NAME "%d"
#define MPC_DEVICE_GENE	MPC_DEVICE_NAME "%d"
#define CHANNEL_FLAGS_READ	0
#define CHANNEL_FLAGS_WRITE	1
#define CHANNEL_FLAGS_INUSE	2
#define CHANNEL_FLAGS_BUFSIZE_CHANGED	4
#define CHANNEL_FLAGS_FAILED	8
#define CHANNEL_FLAGS_WAITIRQ	16
#define CHANNEL_FLAGS_RWMASK	1
#define CHANNEL_DIRECTION(f) (f & CHANNEL_FLAGS_RWMASK)
#define LOG_FLAG_ILLEGALPKT	1
#define LOG_FLAG_ILLEGALSIZE	2
#define LOG_FLAG_OVERRUN	4
#define LOG_FLAG_NOMEM		8
#define ctcm_pr_debug(fmt, arg...) printk(KERN_DEBUG fmt, ##arg)
#define CTCM_PR_DEBUG(fmt, arg...) \
do  while (0)
#define	CTCM_PR_DBGDATA(fmt, arg...) \
do  while (0)
#define	CTCM_D3_DUMP(buf, len) \
do  while (0)
#define	CTCM_CCW_DUMP(buf, len) \
do  while (0)
enum ctcm_channel_types ;
#define CCW_CMD_WRITE		0x01
#define CCW_CMD_READ		0x02
#define CCW_CMD_NOOP		0x03
#define CCW_CMD_TIC             0x08
#define CCW_CMD_SENSE_CMD	0x14
#define CCW_CMD_WRITE_CTL	0x17
#define CCW_CMD_SET_EXTENDED	0xc3
#define CCW_CMD_PREPARE		0xe3
#define CTCM_PROTO_S390		0
#define CTCM_PROTO_LINUX	1
#define CTCM_PROTO_LINUX_TTY	2
#define CTCM_PROTO_OS390	3
#define CTCM_PROTO_MPC		4
#define CTCM_PROTO_MAX		4
#define CTCM_BUFSIZE_LIMIT	65535
#define CTCM_BUFSIZE_DEFAULT	32768
#define MPC_BUFSIZE_DEFAULT	CTCM_BUFSIZE_LIMIT
#define CTCM_TIME_1_SEC		1000
#define CTCM_TIME_5_SEC		5000
#define CTCM_TIME_10_SEC	10000
#define CTCM_INITIAL_BLOCKLEN	2
#define CTCM_READ		0
#define CTCM_WRITE		1
#define CTCM_ID_SIZE		20+3
struct ctcm_profile ;
struct channel ;
struct ctcm_priv ;
int ctcm_open(struct net_device *dev);
int ctcm_close(struct net_device *dev);
int ctcm_add_attributes(struct device *dev);
void ctcm_remove_attributes(struct device *dev);
int ctcm_add_files(struct device *dev);
void ctcm_remove_files(struct device *dev);
static inline void ctcm_clear_busy_do(struct net_device *dev)
static inline void ctcm_clear_busy(struct net_device *dev)
static inline int ctcm_test_and_set_busy(struct net_device *dev)
extern int loglevel;
extern struct channel *channels;
void ctcm_unpack_skb(struct channel *ch, struct sk_buff *pskb);
static inline int ctcm_less_than(char *id1, char *id2)
int ctcm_ch_alloc_buffer(struct channel *ch);
static inline int ctcm_checkalloc_buffer(struct channel *ch)
struct mpc_group *ctcmpc_init_mpc_group(struct ctcm_priv *priv);
#define IS_MPC(p) ((p)->protocol == CTCM_PROTO_MPC)
#define IS_MPCDEV(dev) IS_MPC((struct ctcm_priv *)dev->ml_priv)
static inline gfp_t gfp_type(void)
struct ll_header ;
#define LL_HEADER_LENGTH (sizeof(struct ll_header))
