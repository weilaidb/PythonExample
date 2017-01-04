#define _ZCRYPT_CEX2A_H_
struct type50_hdr  __attribute__((packed));
#define TYPE50_TYPE_CODE	0x50
#define TYPE50_MEB1_FMT		0x0001
#define TYPE50_MEB2_FMT		0x0002
#define TYPE50_MEB3_FMT		0x0003
#define TYPE50_CRB1_FMT		0x0011
#define TYPE50_CRB2_FMT		0x0012
#define TYPE50_CRB3_FMT		0x0013
struct type50_meb1_msg  __attribute__((packed));
struct type50_meb2_msg  __attribute__((packed));
struct type50_meb3_msg  __attribute__((packed));
struct type50_crb1_msg  __attribute__((packed));
struct type50_crb2_msg  __attribute__((packed));
struct type50_crb3_msg  __attribute__((packed));
#define TYPE80_RSP_CODE 0x80
struct type80_hdr  __attribute__((packed));
int zcrypt_cex2a_init(void);
void zcrypt_cex2a_exit(void);
