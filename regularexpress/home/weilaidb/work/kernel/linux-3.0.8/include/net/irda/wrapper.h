#define WRAPPER_H
#define BOF  0xc0
#define XBOF 0xff
#define EOF  0xc1
#define CE   0x7d
#define STA BOF
#define STO EOF
#define IRDA_TRANS 0x20
enum ;
int async_wrap_skb(struct sk_buff *skb, __u8 *tx_buff, int buffsize);
void async_unwrap_char(struct net_device *dev, struct net_device_stats *stats,
iobuff_t *buf, __u8 byte);
