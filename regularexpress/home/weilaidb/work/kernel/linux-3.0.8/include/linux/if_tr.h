#define _LINUX_IF_TR_H
#define TR_ALEN		6
#define TR_HLEN 	(sizeof(struct trh_hdr)+sizeof(struct trllc))
#define AC		0x10
#define LLC_FRAME 	0x40
#define EXTENDED_SAP 	0xAA
#define UI_CMD       	0x03
struct trh_hdr ;
static inline struct trh_hdr *tr_hdr(const struct sk_buff *skb)
struct trllc ;
struct tr_statistics ;
#define TR_RII 			0x80
#define TR_RCF_DIR_BIT 		0x80
#define TR_RCF_LEN_MASK 	0x1f00
#define TR_RCF_BROADCAST 	0x8000
#define TR_RCF_LIMITED_BROADCAST 0xC000
#define TR_RCF_FRAME2K 		0x20
#define TR_RCF_BROADCAST_MASK 	0xC000
#define TR_MAXRIFLEN 		18
