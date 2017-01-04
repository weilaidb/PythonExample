#define _ZCRYPT_PCICC_H_
struct type6_hdr  __attribute__((packed));
struct CPRB  __attribute__((packed));
struct type86_hdr  __attribute__((packed));
#define TYPE86_RSP_CODE 0x86
#define TYPE86_FMT2	0x02
struct type86_fmt2_ext  __attribute__((packed));
struct function_and_rules_block  __attribute__((packed));
int zcrypt_pcicc_init(void);
void zcrypt_pcicc_exit(void);
