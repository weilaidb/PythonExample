#define __HISAX_DEBUG_H__
#define DBG(level, format, arg...) do  while (0)
#define DBG_PACKET(level,data,count) \
if (level & __debug_variable) dump_packet(__func__,data,count)
#define DBG_SKB(level,skb) \
if ((level & __debug_variable) && skb) dump_packet(__func__,skb->data,skb->len)
static void __attribute__((unused))
dump_packet(const char *name,const u_char *data,int pkt_len)
#define DBG(level, format, arg...) do  while (0)
#define DBG_PACKET(level,data,count) do  while (0)
#define DBG_SKB(level,skb) do  while (0)
