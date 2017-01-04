void set_dynamic_sa_command_0(struct dynamic_sa_ctl *sa, u32 save_h,
u32 save_iv, u32 ld_h, u32 ld_iv, u32 hdr_proc,
u32 h, u32 c, u32 pad_type, u32 op_grp, u32 op,
u32 dir)
void set_dynamic_sa_command_1(struct dynamic_sa_ctl *sa, u32 cm, u32 hmac_mc,
u32 cfb, u32 esn, u32 sn_mask, u32 mute,
u32 cp_pad, u32 cp_pay, u32 cp_hdr)
int crypto4xx_encrypt(struct ablkcipher_request *req)
int crypto4xx_decrypt(struct ablkcipher_request *req)
static int crypto4xx_setkey_aes(struct crypto_ablkcipher *cipher,
const u8 *key,
unsigned int keylen,
unsigned char cm,
u8 fb)
int crypto4xx_setkey_aes_cbc(struct crypto_ablkcipher *cipher,
const u8 *key, unsigned int keylen)
static int crypto4xx_hash_alg_init(struct crypto_tfm *tfm,
unsigned int sa_len,
unsigned char ha,
unsigned char hm)
int crypto4xx_hash_init(struct ahash_request *req)
int crypto4xx_hash_update(struct ahash_request *req)
int crypto4xx_hash_final(struct ahash_request *req)
int crypto4xx_hash_digest(struct ahash_request *req)
int crypto4xx_sha1_alg_init(struct crypto_tfm *tfm)
