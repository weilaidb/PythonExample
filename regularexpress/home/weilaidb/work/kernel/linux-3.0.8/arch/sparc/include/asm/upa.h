#define _SPARC64_UPA_H
#define UPA_CONFIG_RESV		0xffffffffc0000000
#define UPA_CONFIG_PCON		0x000000003fc00000
#define UPA_CONFIG_MID		0x00000000003e0000
#define UPA_CONFIG_PCAP		0x000000000001ffff
#define UPA_PORTID_FNP		0xff00000000000000
#define UPA_PORTID_RESV		0x00fffff800000000
#define UPA_PORTID_ECCVALID     0x0000000400000000
#define UPA_PORTID_ONEREAD      0x0000000200000000
#define UPA_PORTID_PINTRDQ      0x0000000180000000
#define UPA_PORTID_PREQDQ       0x000000007e000000
#define UPA_PORTID_PREQRD       0x0000000001e00000
#define UPA_PORTID_UPACAP       0x00000000001f0000
#define UPA_PORTID_ID           0x000000000000ffff
#if defined(__KERNEL__) && !defined(__ASSEMBLY__)
static inline unsigned char _upa_readb(unsigned long addr)
static inline unsigned short _upa_readw(unsigned long addr)
static inline unsigned int _upa_readl(unsigned long addr)
static inline unsigned long _upa_readq(unsigned long addr)
static inline void _upa_writeb(unsigned char b, unsigned long addr)
static inline void _upa_writew(unsigned short w, unsigned long addr)
static inline void _upa_writel(unsigned int l, unsigned long addr)
static inline void _upa_writeq(unsigned long q, unsigned long addr)
#define upa_readb(__addr)		(_upa_readb((unsigned long)(__addr)))
#define upa_readw(__addr)		(_upa_readw((unsigned long)(__addr)))
#define upa_readl(__addr)		(_upa_readl((unsigned long)(__addr)))
#define upa_readq(__addr)		(_upa_readq((unsigned long)(__addr)))
#define upa_writeb(__b, __addr)		(_upa_writeb((__b), (unsigned long)(__addr)))
#define upa_writew(__w, __addr)		(_upa_writew((__w), (unsigned long)(__addr)))
#define upa_writel(__l, __addr)		(_upa_writel((__l), (unsigned long)(__addr)))
#define upa_writeq(__q, __addr)		(_upa_writeq((__q), (unsigned long)(__addr)))
