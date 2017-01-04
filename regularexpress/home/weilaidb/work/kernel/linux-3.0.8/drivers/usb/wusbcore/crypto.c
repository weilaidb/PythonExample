static int debug_crypto_verify = 0;
module_param(debug_crypto_verify, int, 0);
MODULE_PARM_DESC(debug_crypto_verify, "verify the key generation algorithms");
static void wusb_key_dump(const void *buf, size_t len)
struct aes_ccm_block  __attribute__((packed));
struct aes_ccm_b0  __attribute__((packed));
struct aes_ccm_b1  __attribute__((packed));
struct aes_ccm_a  __attribute__((packed));
static void bytewise_xor(void *_bo, const void *_bi1, const void *_bi2,
size_t size)
static int wusb_ccm_mac(struct crypto_blkcipher *tfm_cbc,
struct crypto_cipher *tfm_aes, void *mic,
const struct aes_ccm_nonce *n,
const struct aes_ccm_label *a, const void *b,
size_t blen)
ssize_t wusb_prf(void *out, size_t out_size,
const u8 key[16], const struct aes_ccm_nonce *_n,
const struct aes_ccm_label *a,
const void *b, size_t blen, size_t len)
static const u8 stv_hsmic_key[16] = ;
static const struct aes_ccm_nonce stv_hsmic_n = ;
static int wusb_oob_mic_verify(void)
static const u8 stv_key_a1[16] __attribute__ ((__aligned__(4))) = ;
static const struct aes_ccm_nonce stv_keydvt_n_a1 = ;
static const struct wusb_keydvt_out stv_keydvt_out_a1 = ;
static int wusb_key_derive_verify(void)
int wusb_crypto_init(void)
void wusb_crypto_exit(void)
