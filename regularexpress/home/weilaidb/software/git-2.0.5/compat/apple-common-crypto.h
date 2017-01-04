#define OPENSSL_NO_MD5
#define HEADER_HMAC_H
#define HEADER_SHA_H
#define HMAC_CTX CCHmacContext
#define HMAC_Init(hmac, key, len, algo) CCHmacInit(hmac, algo, key, len)
#define HMAC_Update CCHmacUpdate
#define HMAC_Final(hmac, hash, ptr) CCHmacFinal(hmac, hash)
#define HMAC_CTX_cleanup(ignore)
#define EVP_md5(...) kCCHmacAlgMD5
#if __MAC_OS_X_VERSION_MIN_REQUIRED >= 1070
#define APPLE_LION_OR_NEWER
#undef TYPE_BOOL
#define git_CC_error_check(pattern, err) \
do  while(0)
#define EVP_EncodeBlock git_CC_EVP_EncodeBlock
static inline int git_CC_EVP_EncodeBlock(unsigned char *out,
const unsigned char *in, int inlen)
#define EVP_DecodeBlock git_CC_EVP_DecodeBlock
static int inline git_CC_EVP_DecodeBlock(unsigned char *out,
const unsigned char *in, int inlen)
