#define _ZCRYPT_CCA_KEY_H_
struct T6_keyBlock_hdr ;
struct cca_token_hdr  __attribute__((packed));
#define CCA_TKN_HDR_ID_EXT 0x1E
struct cca_private_ext_ME_sec  __attribute__((packed));
#define CCA_PVT_USAGE_ALL 0x80
struct cca_public_sec  __attribute__((packed));
struct cca_pvt_ext_CRT_sec  __attribute__((packed));
#define CCA_PVT_EXT_CRT_SEC_ID_PVT 0x08
#define CCA_PVT_EXT_CRT_SEC_FMT_CL 0x40
static inline int zcrypt_type6_mex_key_de(struct ica_rsa_modexpo *mex,
void *p, int big_endian)
static inline int zcrypt_type6_mex_key_en(struct ica_rsa_modexpo *mex,
void *p, int big_endian)
static inline int zcrypt_type6_crt_key(struct ica_rsa_modexpo_crt *crt,
void *p, int big_endian)
