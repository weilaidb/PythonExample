#define _LINUX_ARCDEVICE_H
#define bool int
#define RECON_THRESHOLD 30
#define TX_TIMEOUT (HZ * 200 / 1000)
#undef ALPHA_WARNING
#define D_NORMAL	1
#define D_EXTRA		2
#define	D_INIT		4
#define D_INIT_REASONS	8
#define D_RECON		32
#define D_PROTO		64
#define D_DURING	128
#define D_TX	        256
#define D_RX		512
#define D_SKB		1024
#define D_SKB_SIZE	2048
#define D_TIMING	4096
#define D_DEBUG         8192
#define ARCNET_DEBUG_MAX (127)
#define ARCNET_DEBUG (D_NORMAL|D_EXTRA)
extern int arcnet_debug;
#define BUGLVL(x) if ((ARCNET_DEBUG_MAX)&arcnet_debug&(x))
#define BUGMSG2(x,msg,args...) do  while (0)
#define BUGMSG(x,msg,args...) \
BUGMSG2(x, "%s%6s: " msg, \
x==D_NORMAL	? KERN_WARNING \
: x < D_DURING ? KERN_INFO : KERN_DEBUG, \
dev->name , ## args)
#define TIME(name, bytes, call) BUGLVL(D_TIMING)  \
else
#define RESETtime (300)
#define MTU	253
#define MinTU	257
#define XMTU	508
#define TXFREEflag	0x01
#define TXACKflag       0x02
#define RECONflag       0x04
#define TESTflag        0x08
#define EXCNAKflag      0x08
#define RESETflag       0x10
#define RES1flag        0x20
#define RES2flag        0x40
#define NORXflag        0x80
#define AUTOINCflag     0x40
#define IOMAPflag       0x02
#define ENABLE16flag    0x80
#define NOTXcmd         0x01
#define NORXcmd         0x02
#define TXcmd           0x03
#define RXcmd           0x04
#define CONFIGcmd       0x05
#define CFLAGScmd       0x06
#define TESTcmd         0x07
#define RESETclear      0x08
#define CONFIGclear     0x10
#define EXCNAKclear     0x0E
#define TESTload        0x08
#define TESTvalue       0321
#define RXbcasts        0x80
#define NORMALconf      0x00
#define EXTconf         0x08
#define ARC_IS_5MBIT    1
#define ARC_CAN_10MBIT  2
struct ArcProto ;
extern struct ArcProto *arc_proto_map[256], *arc_proto_default,
*arc_bcast_proto, *arc_raw_proto;
struct Incoming ;
struct Outgoing ;
struct arcnet_local ;
#define ARCRESET(x)  (lp->hw.reset(dev, (x)))
#define ACOMMAND(x)  (lp->hw.command(dev, (x)))
#define ASTATUS()    (lp->hw.status(dev))
#define AINTMASK(x)  (lp->hw.intmask(dev, (x)))
#if ARCNET_DEBUG_MAX & D_SKB
void arcnet_dump_skb(struct net_device *dev, struct sk_buff *skb, char *desc);
#define arcnet_dump_skb(dev,skb,desc) ;
void arcnet_unregister_proto(struct ArcProto *proto);
irqreturn_t arcnet_interrupt(int irq, void *dev_id);
struct net_device *alloc_arcdev(const char *name);
int arcnet_open(struct net_device *dev);
int arcnet_close(struct net_device *dev);
netdev_tx_t arcnet_send_packet(struct sk_buff *skb,
struct net_device *dev);
void arcnet_timeout(struct net_device *dev);
