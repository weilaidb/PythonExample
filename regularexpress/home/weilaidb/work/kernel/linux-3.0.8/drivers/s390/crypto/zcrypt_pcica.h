#define _ZCRYPT_PCICA_H_
struct type4_hdr  __attribute__((packed));
#define TYPE4_TYPE_CODE 0x04
#define TYPE4_REQU_CODE 0x40
#define TYPE4_SME_FMT 0x00
#define TYPE4_LME_FMT 0x10
#define TYPE4_SCR_FMT 0x40
#define TYPE4_LCR_FMT 0x50
struct type4_sme  __attribute__((packed));
struct type4_lme  __attribute__((packed));
struct type4_scr  __attribute__((packed));
struct type4_lcr  __attribute__((packed));
struct type84_hdr  __attribute__((packed));
#define TYPE84_RSP_CODE 0x84
int zcrypt_pcica_init(void);
void zcrypt_pcica_exit(void);
