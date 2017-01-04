#define __MTD_INFTL_H__
#error This is a kernel header. Perhaps include nftl-user.h instead?
#define INFTL_MAJOR 96
#define INFTL_PARTN_BITS 4
struct INFTLrecord ;
int INFTL_mount(struct INFTLrecord *s);
int INFTL_formatblock(struct INFTLrecord *s, int block);
void INFTL_dumptables(struct INFTLrecord *s);
void INFTL_dumpVUchains(struct INFTLrecord *s);
int inftl_read_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf);
int inftl_write_oob(struct mtd_info *mtd, loff_t offs, size_t len,
size_t *retlen, uint8_t *buf);
