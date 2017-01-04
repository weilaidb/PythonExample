#define _CRYPTO_TESTMGR_H
#define MAX_DIGEST_SIZE		64
#define MAX_TAP			8
#define MAX_KEYLEN		56
#define MAX_IVLEN		32
struct hash_testvec ;
struct cipher_testvec ;
struct aead_testvec ;
struct cprng_testvec ;
static char zeroed_string[48];
#define MD4_TEST_VECTORS	7
static struct hash_testvec md4_tv_template [] = ;
#define MD5_TEST_VECTORS	7
static struct hash_testvec md5_tv_template[] = ;
#define RMD128_TEST_VECTORS     10
static struct hash_testvec rmd128_tv_template[] = ;
#define RMD160_TEST_VECTORS     10
static struct hash_testvec rmd160_tv_template[] = ;
#define RMD256_TEST_VECTORS     8
static struct hash_testvec rmd256_tv_template[] = ;
#define RMD320_TEST_VECTORS     8
static struct hash_testvec rmd320_tv_template[] = ;
#define SHA1_TEST_VECTORS	3
static struct hash_testvec sha1_tv_template[] = ;
#define SHA224_TEST_VECTORS     2
static struct hash_testvec sha224_tv_template[] = ;
#define SHA256_TEST_VECTORS	2
static struct hash_testvec sha256_tv_template[] = ;
#define SHA384_TEST_VECTORS	4
static struct hash_testvec sha384_tv_template[] = ;
#define SHA512_TEST_VECTORS	4
static struct hash_testvec sha512_tv_template[] = ;
#define WP512_TEST_VECTORS	8
static struct hash_testvec wp512_tv_template[] = ;
#define WP384_TEST_VECTORS	8
static struct hash_testvec wp384_tv_template[] = ;
#define WP256_TEST_VECTORS	8
static struct hash_testvec wp256_tv_template[] = ;
#define TGR192_TEST_VECTORS	6
static struct hash_testvec tgr192_tv_template[] = ;
#define TGR160_TEST_VECTORS	6
static struct hash_testvec tgr160_tv_template[] = ;
#define TGR128_TEST_VECTORS	6
static struct hash_testvec tgr128_tv_template[] = ;
#define GHASH_TEST_VECTORS 1
static struct hash_testvec ghash_tv_template[] =
;
#define HMAC_MD5_TEST_VECTORS	7
static struct hash_testvec hmac_md5_tv_template[] =
;
#define HMAC_RMD128_TEST_VECTORS	7
static struct hash_testvec hmac_rmd128_tv_template[] = ;
#define HMAC_RMD160_TEST_VECTORS	7
static struct hash_testvec hmac_rmd160_tv_template[] = ;
#define HMAC_SHA1_TEST_VECTORS	7
static struct hash_testvec hmac_sha1_tv_template[] = ;
#define HMAC_SHA224_TEST_VECTORS    4
static struct hash_testvec hmac_sha224_tv_template[] = ;
#define HMAC_SHA256_TEST_VECTORS	10
static struct hash_testvec hmac_sha256_tv_template[] = ;
#define XCBC_AES_TEST_VECTORS 6
static struct hash_testvec aes_xcbc128_tv_template[] = ;
#define VMAC_AES_TEST_VECTORS	8
static char vmac_string1[128] = ;
static char vmac_string2[128] = ;
static char vmac_string3[128] = ;
static struct hash_testvec aes_vmac128_tv_template[] = ;
#define HMAC_SHA384_TEST_VECTORS	4
static struct hash_testvec hmac_sha384_tv_template[] = ;
#define HMAC_SHA512_TEST_VECTORS	4
static struct hash_testvec hmac_sha512_tv_template[] = ;
#define DES_ENC_TEST_VECTORS		10
#define DES_DEC_TEST_VECTORS		4
#define DES_CBC_ENC_TEST_VECTORS	5
#define DES_CBC_DEC_TEST_VECTORS	4
#define DES3_EDE_ENC_TEST_VECTORS	3
#define DES3_EDE_DEC_TEST_VECTORS	3
#define DES3_EDE_CBC_ENC_TEST_VECTORS	1
#define DES3_EDE_CBC_DEC_TEST_VECTORS	1
static struct cipher_testvec des_enc_tv_template[] = ;
static struct cipher_testvec des_dec_tv_template[] = ;
static struct cipher_testvec des_cbc_enc_tv_template[] = ;
static struct cipher_testvec des_cbc_dec_tv_template[] = ;
static struct cipher_testvec des3_ede_enc_tv_template[] = ;
static struct cipher_testvec des3_ede_dec_tv_template[] = ;
static struct cipher_testvec des3_ede_cbc_enc_tv_template[] = ;
static struct cipher_testvec des3_ede_cbc_dec_tv_template[] = ;
#define BF_ENC_TEST_VECTORS	6
#define BF_DEC_TEST_VECTORS	6
#define BF_CBC_ENC_TEST_VECTORS	1
#define BF_CBC_DEC_TEST_VECTORS	1
static struct cipher_testvec bf_enc_tv_template[] = ;
static struct cipher_testvec bf_dec_tv_template[] = ;
static struct cipher_testvec bf_cbc_enc_tv_template[] = ;
static struct cipher_testvec bf_cbc_dec_tv_template[] = ;
#define TF_ENC_TEST_VECTORS		3
#define TF_DEC_TEST_VECTORS		3
#define TF_CBC_ENC_TEST_VECTORS		4
#define TF_CBC_DEC_TEST_VECTORS		4
static struct cipher_testvec tf_enc_tv_template[] = ;
static struct cipher_testvec tf_dec_tv_template[] = ;
static struct cipher_testvec tf_cbc_enc_tv_template[] = ;
static struct cipher_testvec tf_cbc_dec_tv_template[] = ;
#define SERPENT_ENC_TEST_VECTORS	4
#define SERPENT_DEC_TEST_VECTORS	4
#define TNEPRES_ENC_TEST_VECTORS	4
#define TNEPRES_DEC_TEST_VECTORS	4
static struct cipher_testvec serpent_enc_tv_template[] = ;
static struct cipher_testvec tnepres_enc_tv_template[] = ;
static struct cipher_testvec serpent_dec_tv_template[] = ;
static struct cipher_testvec tnepres_dec_tv_template[] = ;
#define CAST6_ENC_TEST_VECTORS	3
#define CAST6_DEC_TEST_VECTORS  3
static struct cipher_testvec cast6_enc_tv_template[] = ;
static struct cipher_testvec cast6_dec_tv_template[] = ;
#define AES_ENC_TEST_VECTORS 3
#define AES_DEC_TEST_VECTORS 3
#define AES_CBC_ENC_TEST_VECTORS 4
#define AES_CBC_DEC_TEST_VECTORS 4
#define AES_LRW_ENC_TEST_VECTORS 8
#define AES_LRW_DEC_TEST_VECTORS 8
#define AES_XTS_ENC_TEST_VECTORS 4
#define AES_XTS_DEC_TEST_VECTORS 4
#define AES_CTR_ENC_TEST_VECTORS 3
#define AES_CTR_DEC_TEST_VECTORS 3
#define AES_OFB_ENC_TEST_VECTORS 1
#define AES_OFB_DEC_TEST_VECTORS 1
#define AES_CTR_3686_ENC_TEST_VECTORS 7
#define AES_CTR_3686_DEC_TEST_VECTORS 6
#define AES_GCM_ENC_TEST_VECTORS 9
#define AES_GCM_DEC_TEST_VECTORS 8
#define AES_GCM_4106_ENC_TEST_VECTORS 7
#define AES_GCM_4106_DEC_TEST_VECTORS 7
#define AES_CCM_ENC_TEST_VECTORS 7
#define AES_CCM_DEC_TEST_VECTORS 7
#define AES_CCM_4309_ENC_TEST_VECTORS 7
#define AES_CCM_4309_DEC_TEST_VECTORS 10
static struct cipher_testvec aes_enc_tv_template[] = ;
static struct cipher_testvec aes_dec_tv_template[] = ;
static struct cipher_testvec aes_cbc_enc_tv_template[] = ;
static struct cipher_testvec aes_cbc_dec_tv_template[] = ;
static struct cipher_testvec aes_lrw_enc_tv_template[] = , , , , , , , ;
static struct cipher_testvec aes_xts_dec_tv_template[] = , , ,
};
static struct cipher_testvec aes_ctr_enc_tv_template[] = ;
static struct cipher_testvec aes_ctr_dec_tv_template[] = ;
static struct cipher_testvec aes_ctr_rfc3686_enc_tv_template[] = ;
static struct cipher_testvec aes_ctr_rfc3686_dec_tv_template[] = ;
static struct cipher_testvec aes_ofb_enc_tv_template[] = ;
static struct cipher_testvec aes_ofb_dec_tv_template[] = ;
static struct aead_testvec aes_gcm_enc_tv_template[] = ;
static struct aead_testvec aes_gcm_rfc4106_dec_tv_template[] = ;
static struct aead_testvec aes_ccm_enc_tv_template[] = ;
static struct aead_testvec aes_ccm_dec_tv_template[] = ;
static struct aead_testvec aes_ccm_rfc4309_enc_tv_template[] = ;
static struct aead_testvec aes_ccm_rfc4309_dec_tv_template[] = ;
#define ANSI_CPRNG_AES_TEST_VECTORS	6
static struct cprng_testvec ansi_cprng_aes_tv_template[] = ;
#define CAST5_ENC_TEST_VECTORS	3
#define CAST5_DEC_TEST_VECTORS	3
static struct cipher_testvec cast5_enc_tv_template[] = ;
static struct cipher_testvec cast5_dec_tv_template[] = ;
#define ARC4_ENC_TEST_VECTORS	7
#define ARC4_DEC_TEST_VECTORS	7
static struct cipher_testvec arc4_enc_tv_template[] = ;
static struct cipher_testvec arc4_dec_tv_template[] = ;
#define TEA_ENC_TEST_VECTORS	4
#define TEA_DEC_TEST_VECTORS	4
static struct cipher_testvec tea_enc_tv_template[] = ;
static struct cipher_testvec tea_dec_tv_template[] = ;
#define XTEA_ENC_TEST_VECTORS	4
#define XTEA_DEC_TEST_VECTORS	4
static struct cipher_testvec xtea_enc_tv_template[] = ;
static struct cipher_testvec xtea_dec_tv_template[] = ;
#define KHAZAD_ENC_TEST_VECTORS 5
#define KHAZAD_DEC_TEST_VECTORS 5
static struct cipher_testvec khazad_enc_tv_template[] = ;
static struct cipher_testvec khazad_dec_tv_template[] = ;
#define ANUBIS_ENC_TEST_VECTORS			5
#define ANUBIS_DEC_TEST_VECTORS			5
#define ANUBIS_CBC_ENC_TEST_VECTORS		2
#define ANUBIS_CBC_DEC_TEST_VECTORS		2
static struct cipher_testvec anubis_enc_tv_template[] = ;
static struct cipher_testvec anubis_dec_tv_template[] = ;
static struct cipher_testvec anubis_cbc_enc_tv_template[] = ;
static struct cipher_testvec anubis_cbc_dec_tv_template[] = ;
#define XETA_ENC_TEST_VECTORS	4
#define XETA_DEC_TEST_VECTORS	4
static struct cipher_testvec xeta_enc_tv_template[] = ;
static struct cipher_testvec xeta_dec_tv_template[] = ;
#define FCRYPT_ENC_TEST_VECTORS	ARRAY_SIZE(fcrypt_pcbc_enc_tv_template)
#define FCRYPT_DEC_TEST_VECTORS	ARRAY_SIZE(fcrypt_pcbc_dec_tv_template)
static struct cipher_testvec fcrypt_pcbc_enc_tv_template[] = ;
static struct cipher_testvec fcrypt_pcbc_dec_tv_template[] = ;
#define CAMELLIA_ENC_TEST_VECTORS 3
#define CAMELLIA_DEC_TEST_VECTORS 3
#define CAMELLIA_CBC_ENC_TEST_VECTORS 2
#define CAMELLIA_CBC_DEC_TEST_VECTORS 2
static struct cipher_testvec camellia_enc_tv_template[] = ;
static struct cipher_testvec camellia_dec_tv_template[] = ;
static struct cipher_testvec camellia_cbc_enc_tv_template[] = ;
static struct cipher_testvec camellia_cbc_dec_tv_template[] = ;
#define SEED_ENC_TEST_VECTORS	4
#define SEED_DEC_TEST_VECTORS	4
static struct cipher_testvec seed_enc_tv_template[] = ;
static struct cipher_testvec seed_dec_tv_template[] = ;
#define SALSA20_STREAM_ENC_TEST_VECTORS 5
static struct cipher_testvec salsa20_stream_enc_tv_template[] = ;
#define CTS_MODE_ENC_TEST_VECTORS 6
#define CTS_MODE_DEC_TEST_VECTORS 6
static struct cipher_testvec cts_mode_enc_tv_template[] = ;
static struct cipher_testvec cts_mode_dec_tv_template[] = ;
#define COMP_BUF_SIZE           512
struct comp_testvec ;
struct pcomp_testvec ;
#define DEFLATE_COMP_TEST_VECTORS 2
#define DEFLATE_DECOMP_TEST_VECTORS 2
static struct comp_testvec deflate_comp_tv_template[] = ;
static struct comp_testvec deflate_decomp_tv_template[] = ;
#define ZLIB_COMP_TEST_VECTORS 2
#define ZLIB_DECOMP_TEST_VECTORS 2
static const struct  deflate_comp_params[] = ;
static const struct  deflate_decomp_params[] = ;
static struct pcomp_testvec zlib_comp_tv_template[] = ;
static struct pcomp_testvec zlib_decomp_tv_template[] = ;
#define LZO_COMP_TEST_VECTORS 2
#define LZO_DECOMP_TEST_VECTORS 2
static struct comp_testvec lzo_comp_tv_template[] = ;
static struct comp_testvec lzo_decomp_tv_template[] = ;
#define MICHAEL_MIC_TEST_VECTORS 6
static struct hash_testvec michael_mic_tv_template[] = ;
#define CRC32C_TEST_VECTORS 14
static struct hash_testvec crc32c_tv_template[] = ;
