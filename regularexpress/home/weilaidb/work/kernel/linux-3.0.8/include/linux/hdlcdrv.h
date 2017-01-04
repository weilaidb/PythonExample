#define _HDLCDRV_H
struct hdlcdrv_params ;
struct hdlcdrv_channel_params ;
struct hdlcdrv_old_channel_state ;
struct hdlcdrv_channel_state ;
struct hdlcdrv_ioctl ;
#define HDLCDRVCTL_GETMODEMPAR       0
#define HDLCDRVCTL_SETMODEMPAR       1
#define HDLCDRVCTL_MODEMPARMASK      2
#define HDLCDRVCTL_GETCHANNELPAR    10
#define HDLCDRVCTL_SETCHANNELPAR    11
#define HDLCDRVCTL_OLDGETSTAT       20
#define HDLCDRVCTL_CALIBRATE        21
#define HDLCDRVCTL_GETSTAT          22
#define HDLCDRVCTL_GETSAMPLES       30
#define HDLCDRVCTL_GETBITS          31
#define HDLCDRVCTL_GETMODE          40
#define HDLCDRVCTL_SETMODE          41
#define HDLCDRVCTL_MODELIST         42
#define HDLCDRVCTL_DRIVERNAME       43
#define HDLCDRV_PARMASK_IOBASE      (1<<0)
#define HDLCDRV_PARMASK_IRQ         (1<<1)
#define HDLCDRV_PARMASK_DMA         (1<<2)
#define HDLCDRV_PARMASK_DMA2        (1<<3)
#define HDLCDRV_PARMASK_SERIOBASE   (1<<4)
#define HDLCDRV_PARMASK_PARIOBASE   (1<<5)
#define HDLCDRV_PARMASK_MIDIIOBASE  (1<<6)
#define HDLCDRV_MAGIC      0x5ac6e778
#define HDLCDRV_HDLCBUFFER  32
#define HDLCDRV_BITBUFFER  256
#undef HDLCDRV_LOOPBACK
#define HDLCDRV_DEBUG
#define HDLCDRV_MAXFLEN             400
struct hdlcdrv_hdlcbuffer ;
struct hdlcdrv_bitbuffer ;
static inline void hdlcdrv_add_bitbuffer(struct hdlcdrv_bitbuffer *buf,
unsigned int bit)
static inline void hdlcdrv_add_bitbuffer_word(struct hdlcdrv_bitbuffer *buf,
unsigned int bits)
struct hdlcdrv_ops ;
struct hdlcdrv_state ;
static inline int hdlcdrv_hbuf_full(struct hdlcdrv_hdlcbuffer *hb)
static inline int hdlcdrv_hbuf_empty(struct hdlcdrv_hdlcbuffer *hb)
static inline unsigned short hdlcdrv_hbuf_get(struct hdlcdrv_hdlcbuffer *hb)
static inline void hdlcdrv_hbuf_put(struct hdlcdrv_hdlcbuffer *hb,
unsigned short val)
static inline void hdlcdrv_putbits(struct hdlcdrv_state *s, unsigned int bits)
static inline unsigned int hdlcdrv_getbits(struct hdlcdrv_state *s)
static inline void hdlcdrv_channelbit(struct hdlcdrv_state *s, unsigned int bit)
static inline void hdlcdrv_setdcd(struct hdlcdrv_state *s, int dcd)
static inline int hdlcdrv_ptt(struct hdlcdrv_state *s)
void hdlcdrv_receiver(struct net_device *, struct hdlcdrv_state *);
void hdlcdrv_transmitter(struct net_device *, struct hdlcdrv_state *);
void hdlcdrv_arbitrate(struct net_device *, struct hdlcdrv_state *);
struct net_device *hdlcdrv_register(const struct hdlcdrv_ops *ops,
unsigned int privsize, const char *ifname,
unsigned int baseaddr, unsigned int irq,
unsigned int dma);
void hdlcdrv_unregister(struct net_device *dev);
