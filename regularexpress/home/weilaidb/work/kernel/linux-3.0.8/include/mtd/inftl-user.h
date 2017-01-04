#define __MTD_INFTL_USER_H__
#define	OSAK_VERSION	0x5120
#define	PERCENTUSED	98
#define	SECTORSIZE	512
struct inftl_bci  __attribute__((packed));
struct inftl_unithead1  __attribute__((packed));
struct inftl_unithead2  __attribute__((packed));
struct inftl_unittail  __attribute__((packed));
union inftl_uci ;
struct inftl_oob ;
struct INFTLPartition  __attribute__((packed));
struct INFTLMediaHeader  __attribute__((packed));
#define	INFTL_BINARY	0x20000000
#define	INFTL_BDTL	0x40000000
#define	INFTL_LAST	0x80000000
