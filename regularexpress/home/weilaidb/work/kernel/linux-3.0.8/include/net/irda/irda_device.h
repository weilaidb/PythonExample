#define IRDA_DEVICE_H
struct irlap_cb;
#define IFF_SIR 	0x0001
#define IFF_MIR 	0x0002
#define IFF_FIR 	0x0004
#define IFF_VFIR        0x0008
#define IFF_PIO   	0x0010
#define IFF_DMA		0x0020
#define IFF_SHM         0x0040
#define IFF_DONGLE      0x0080
#define IFF_AIR         0x0100
#define IO_XMIT 0x01
#define IO_RECV 0x02
typedef enum  INFRARED_MODE;
typedef enum  IRDA_TASK_STATE;
struct irda_task;
typedef int (*IRDA_TASK_CALLBACK) (struct irda_task *task);
struct irda_task ;
struct dongle_reg;
typedef struct  dongle_t;
struct dongle_reg ;
struct irda_skb_cb ;
typedef struct  chipio_t;
typedef struct  iobuff_t;
#define IRDA_SKB_MAX_MTU	2064
#define IRDA_SIR_MAX_FRAME	4269
#define IRDA_RX_COPY_THRESHOLD  256
int  irda_device_init(void);
void irda_device_cleanup(void);
struct irlap_cb *irlap_open(struct net_device *dev, struct qos_info *qos,
const char *hw_name);
void irlap_close(struct irlap_cb *self);
void irda_device_set_media_busy(struct net_device *dev, int status);
int  irda_device_is_media_busy(struct net_device *dev);
int  irda_device_is_receiving(struct net_device *dev);
static inline int irda_device_txqueue_empty(const struct net_device *dev)
int  irda_device_set_raw_mode(struct net_device* self, int status);
struct net_device *alloc_irdadev(int sizeof_priv);
void irda_setup_dma(int channel, dma_addr_t buffer, int count, int mode);
static inline __u16 irda_get_mtt(const struct sk_buff *skb)
static inline __u32 irda_get_next_speed(const struct sk_buff *skb)
static inline __u16 irda_get_xbofs(const struct sk_buff *skb)
static inline __u16 irda_get_next_xbofs(const struct sk_buff *skb)
