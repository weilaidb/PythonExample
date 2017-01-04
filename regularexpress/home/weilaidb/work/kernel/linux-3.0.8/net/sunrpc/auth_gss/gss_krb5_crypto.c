# define RPCDBG_FACILITY        RPCDBG_AUTH
u32
krb5_encrypt(
struct crypto_blkcipher *tfm,
void * iv,
void * in,
void * out,
int length)
u32
krb5_decrypt(
struct crypto_blkcipher *tfm,
void * iv,
void * in,
void * out,
int length)
static int
checksummer(struct scatterlist *sg, void *data)
static int
arcfour_hmac_md5_usage_to_salt(unsigned int usage, u8 salt[4])
static u32
make_checksum_hmac_md5(struct krb5_ctx *kctx, char *header, int hdrlen,
struct xdr_buf *body, int body_offset, u8 *cksumkey,
unsigned int usage, struct xdr_netobj *cksumout)
u32
make_checksum(struct krb5_ctx *kctx, char *header, int hdrlen,
struct xdr_buf *body, int body_offset, u8 *cksumkey,
unsigned int usage, struct xdr_netobj *cksumout)
u32
make_checksum_v2(struct krb5_ctx *kctx, char *header, int hdrlen,
struct xdr_buf *body, int body_offset, u8 *cksumkey,
unsigned int usage, struct xdr_netobj *cksumout)
struct encryptor_desc ;
static int
encryptor(struct scatterlist *sg, void *data)
int
gss_encrypt_xdr_buf(struct crypto_blkcipher *tfm, struct xdr_buf *buf,
int offset, struct page **pages)
struct decryptor_desc ;
static int
decryptor(struct scatterlist *sg, void *data)
int
gss_decrypt_xdr_buf(struct crypto_blkcipher *tfm, struct xdr_buf *buf,
int offset)
int
xdr_extend_head(struct xdr_buf *buf, unsigned int base, unsigned int shiftlen)
static u32
gss_krb5_cts_crypt(struct crypto_blkcipher *cipher, struct xdr_buf *buf,
u32 offset, u8 *iv, struct page **pages, int encrypt)
u32
gss_krb5_aes_encrypt(struct krb5_ctx *kctx, u32 offset,
struct xdr_buf *buf, int ec, struct page **pages)
u32
gss_krb5_aes_decrypt(struct krb5_ctx *kctx, u32 offset, struct xdr_buf *buf,
u32 *headskip, u32 *tailskip)
int
krb5_rc4_setup_seq_key(struct krb5_ctx *kctx, struct crypto_blkcipher *cipher,
unsigned char *cksum)
int
krb5_rc4_setup_enc_key(struct krb5_ctx *kctx, struct crypto_blkcipher *cipher,
s32 seqnum)
