static inline int stuff_byte(__u8 byte, __u8 *buf)
int async_wrap_skb(struct sk_buff *skb, __u8 *tx_buff, int buffsize)
EXPORT_SYMBOL(async_wrap_skb);
static inline void
async_bump(struct net_device *dev,
struct net_device_stats *stats,
iobuff_t *rx_buff)
static inline void
async_unwrap_bof(struct net_device *dev,
struct net_device_stats *stats,
iobuff_t *rx_buff, __u8 byte)
static inline void
async_unwrap_eof(struct net_device *dev,
struct net_device_stats *stats,
iobuff_t *rx_buff, __u8 byte)
static inline void
async_unwrap_ce(struct net_device *dev,
struct net_device_stats *stats,
iobuff_t *rx_buff, __u8 byte)
static inline void
async_unwrap_other(struct net_device *dev,
struct net_device_stats *stats,
iobuff_t *rx_buff, __u8 byte)
void async_unwrap_char(struct net_device *dev,
struct net_device_stats *stats,
iobuff_t *rx_buff, __u8 byte)
EXPORT_SYMBOL(async_unwrap_char);
