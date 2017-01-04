#define __MTD_NFTL_H__
#define BLOCK_NIL          0xffff
#define BLOCK_FREE         0xfffe
#define BLOCK_NOTEXPLORED  0xfffd
#define BLOCK_RESERVED     0xfffc
struct NFTLrecord ;
int NFTL_mount(struct NFTLrecord *s);
int NFTL_formatblock(struct NFTLrecord *s, int block);
int nftl_read_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf);
int nftl_write_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf);
#define NFTL_MAJOR 93
#define MAX_NFTLS 16
#define MAX_SECTORS_PER_UNIT 64
#define NFTL_PARTN_BITS 4
