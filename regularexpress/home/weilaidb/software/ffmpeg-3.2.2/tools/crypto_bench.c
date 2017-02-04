#define USE_crypto           0x01
#define USE_gcrypt           0x02
#define USE_tomcrypt         0x04
AV_READ_TIME 0
#if HAVE_UNISTD_H
#if !HAVE_GETOPT
#define MAX_INPUT_SIZE 1048576
#define MAX_OUTPUT_SIZE 128
static const char *enabled_libs;
static const char *enabled_algos;
static unsigned specified_runs;
static const uint8_t *hardcoded_key = ;
fatal_error
struct hash_impl ;
#define IMPL_USE_lavu IMPL_USE
run_lavu_md5
DEFINE_LAVU_MD                       \
static void run_lavu_ ## suffix(uint8_t *output,                             \
const uint8_t *input, unsigned size)         \
DEFINE_LAVU_MD(sha1,      AVSHA,    sha, 160);
DEFINE_LAVU_MD(sha256,    AVSHA,    sha, 256);
DEFINE_LAVU_MD(sha512,    AVSHA512, sha512, 512);
DEFINE_LAVU_MD(ripemd128, AVRIPEMD, ripemd, 128);
DEFINE_LAVU_MD(ripemd160, AVRIPEMD, ripemd, 160);
run_lavu_aes128
run_lavu_blowfish
run_lavu_camellia
run_lavu_cast128
run_lavu_des
run_lavu_twofish
run_lavu_rc4
run_lavu_xtea
#if (USE_EXT_LIBS) & USE_crypto
#define OPENSSL_DISABLE_OLD_DES_SUPPORT
DEFINE_CRYPTO_WRAPPER                              \
static void run_crypto_ ## suffix(uint8_t *output,                           \
const uint8_t *input, unsigned size)       \
DEFINE_CRYPTO_WRAPPER(md5,       MD5)
DEFINE_CRYPTO_WRAPPER(sha1,      SHA1)
DEFINE_CRYPTO_WRAPPER(sha256,    SHA256)
DEFINE_CRYPTO_WRAPPER(sha512,    SHA512)
DEFINE_CRYPTO_WRAPPER(ripemd160, RIPEMD160)
run_crypto_aes128
run_crypto_blowfish
run_crypto_camellia
run_crypto_cast128
run_crypto_des
run_crypto_rc4
IMPL_USE_crypto IMPL_USE(__VA_ARGS__)
IMPL_USE_crypto
#if (USE_EXT_LIBS) & USE_gcrypt
DEFINE_GCRYPT_WRAPPER                                  \
static void run_gcrypt_ ## suffix(uint8_t *output,                           \
const uint8_t *input, unsigned size)       \
DEFINE_GCRYPT_WRAPPER(md5,       MD5)
DEFINE_GCRYPT_WRAPPER(sha1,      SHA1)
DEFINE_GCRYPT_WRAPPER(sha256,    SHA256)
DEFINE_GCRYPT_WRAPPER(sha512,    SHA512)
DEFINE_GCRYPT_WRAPPER(ripemd160, RMD160)
DEFINE_GCRYPT_CYPHER_WRAPPER                            \
static void run_gcrypt_ ## suffix(uint8_t *output,                                  \
const uint8_t *input, unsigned size)                  \
DEFINE_GCRYPT_CYPHER_WRAPPER(aes128,   AES128,      16)
DEFINE_GCRYPT_CYPHER_WRAPPER(blowfish, BLOWFISH,    16)
DEFINE_GCRYPT_CYPHER_WRAPPER(camellia, CAMELLIA128, 16)
DEFINE_GCRYPT_CYPHER_WRAPPER(cast128,  CAST5,       16)
DEFINE_GCRYPT_CYPHER_WRAPPER(des,      DES,         8)
DEFINE_GCRYPT_CYPHER_WRAPPER(twofish,  TWOFISH128,  16)
IMPL_USE_gcrypt IMPL_USE(__VA_ARGS__)
IMPL_USE_gcrypt
#if (USE_EXT_LIBS) & USE_tomcrypt
DEFINE_TOMCRYPT_WRAPPER                     \
static void run_tomcrypt_ ## suffix(uint8_t *output,                         \
const uint8_t *input, unsigned size)     \
DEFINE_TOMCRYPT_WRAPPER(md5,       md5,    MD5)
DEFINE_TOMCRYPT_WRAPPER(sha1,      sha1,   SHA1)
DEFINE_TOMCRYPT_WRAPPER(sha256,    sha256, SHA256)
DEFINE_TOMCRYPT_WRAPPER(sha512,    sha512, SHA512)
DEFINE_TOMCRYPT_WRAPPER(ripemd128, rmd128, RIPEMD128)
DEFINE_TOMCRYPT_WRAPPER(ripemd160, rmd160, RIPEMD160)
run_tomcrypt_aes128
run_tomcrypt_blowfish
run_tomcrypt_camellia
run_tomcrypt_cast128
run_tomcrypt_des
run_tomcrypt_twofish
run_tomcrypt_xtea
IMPL_USE_tomcrypt IMPL_USE(__VA_ARGS__)
IMPL_USE_tomcrypt
crc32
run_implementation
IMPL_USE \
,
IMPL IMPL_USE_ ## lib(lib, __VA_ARGS__)
IMPL_ALL \
IMPL(lavu,       __VA_ARGS__) \
IMPL(crypto,     __VA_ARGS__) \
IMPL(gcrypt,     __VA_ARGS__) \
IMPL(tomcrypt,   __VA_ARGS__)
struct hash_impl implementations[] = ;
main
