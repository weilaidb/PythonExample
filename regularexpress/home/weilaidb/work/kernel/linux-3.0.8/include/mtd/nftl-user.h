#define __MTD_NFTL_USER_H__
struct nftl_bci __attribute__((packed));
struct nftl_uci0  __attribute__((packed));
struct nftl_uci1  __attribute__((packed));
struct nftl_uci2  __attribute__((packed));
union nftl_uci ;
struct nftl_oob ;
struct NFTLMediaHeader  __attribute__((packed));
#define MAX_ERASE_ZONES (8192 - 512)
#define ERASE_MARK 0x3c69
#define SECTOR_FREE 0xff
#define SECTOR_USED 0x55
#define SECTOR_IGNORE 0x11
#define SECTOR_DELETED 0x00
#define FOLD_MARK_IN_PROGRESS 0x5555
#define ZONE_GOOD 0xff
#define ZONE_BAD_ORIGINAL 0
#define ZONE_BAD_MARKED 7
