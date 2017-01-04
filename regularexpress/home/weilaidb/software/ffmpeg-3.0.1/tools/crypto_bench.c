#define USE_crypto           0x01
#define USE_gcrypt           0x02
#define USE_tomcrypt         0x04
#define AV_READ_TIME(x) 0
#if HAVE_UNISTD_H
#if !HAVE_GETOPT
#define MAX_INPUT_SIZE 1048576
#define MAX_OUTPUT_SIZE 128
static const char *enabled_libs;
static const char *enabled_algos;
static unsigned specified_runs;
static const uint8_t *hardcoded_key = "FFmpeg is the best program ever.";
static void fatal_error(const char *tag)
struct hash_impl ;
#define IMPL_USE_lavu IMPL_USE
static void run_lavu_md5(uint8_t *output,
const uint8_t *input, unsigned size)
#define DEFINE_LAVU_MD(suffix, type, namespace, hsize)                       \
static void run_lavu_ ## suffix(uint8_t *output,                             \
const uint8_t *input, unsigned size)         \
DEFINE_LAVU_MD(sha1,      AVSHA,    sha, 160);
DEFINE_LAVU_MD(sha256,    AVSHA,    sha, 256);
DEFINE_LAVU_MD(sha512,    AVSHA512, sha512, 512);
DEFINE_LAVU_MD(ripemd128, AVRIPEMD, ripemd, 128);
DEFINE_LAVU_MD(ripemd160, AVRIPEMD, ripemd, 160);
static void run_lavu_aes128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_lavu_blowfish(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_lavu_camellia(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_lavu_cast128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_lavu_twofish(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_lavu_rc4(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_lavu_xtea(uint8_t *output,
const uint8_t *input, unsigned size)
#if (USE_EXT_LIBS) & USE_crypto
#define DEFINE_CRYPTO_WRAPPER(suffix, function)                              \
static void run_crypto_ ## suffix(uint8_t *output,                           \
const uint8_t *input, unsigned size)       \
DEFINE_CRYPTO_WRAPPER(md5,       MD5)
DEFINE_CRYPTO_WRAPPER(sha1,      SHA1)
DEFINE_CRYPTO_WRAPPER(sha256,    SHA256)
DEFINE_CRYPTO_WRAPPER(sha512,    SHA512)
DEFINE_CRYPTO_WRAPPER(ripemd160, RIPEMD160)
static void run_crypto_aes128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_crypto_blowfish(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_crypto_camellia(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_crypto_cast128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_crypto_rc4(uint8_t *output,
const uint8_t *input, unsigned size)
#define IMPL_USE_crypto(...) IMPL_USE(__VA_ARGS__)
#define IMPL_USE_crypto(...)
#if (USE_EXT_LIBS) & USE_gcrypt
#define DEFINE_GCRYPT_WRAPPER(suffix, algo)                                  \
static void run_gcrypt_ ## suffix(uint8_t *output,                           \
const uint8_t *input, unsigned size)       \
DEFINE_GCRYPT_WRAPPER(md5,       MD5)
DEFINE_GCRYPT_WRAPPER(sha1,      SHA1)
DEFINE_GCRYPT_WRAPPER(sha256,    SHA256)
DEFINE_GCRYPT_WRAPPER(sha512,    SHA512)
DEFINE_GCRYPT_WRAPPER(ripemd160, RMD160)
static void run_gcrypt_aes128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_gcrypt_blowfish(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_gcrypt_camellia(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_gcrypt_cast128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_gcrypt_twofish(uint8_t *output,
const uint8_t *input, unsigned size)
#define IMPL_USE_gcrypt(...) IMPL_USE(__VA_ARGS__)
#define IMPL_USE_gcrypt(...)
#if (USE_EXT_LIBS) & USE_tomcrypt
#define DEFINE_TOMCRYPT_WRAPPER(suffix, namespace, algo)                     \
static void run_tomcrypt_ ## suffix(uint8_t *output,                         \
const uint8_t *input, unsigned size)     \
DEFINE_TOMCRYPT_WRAPPER(md5,       md5,    MD5)
DEFINE_TOMCRYPT_WRAPPER(sha1,      sha1,   SHA1)
DEFINE_TOMCRYPT_WRAPPER(sha256,    sha256, SHA256)
DEFINE_TOMCRYPT_WRAPPER(sha512,    sha512, SHA512)
DEFINE_TOMCRYPT_WRAPPER(ripemd128, rmd128, RIPEMD128)
DEFINE_TOMCRYPT_WRAPPER(ripemd160, rmd160, RIPEMD160)
static void run_tomcrypt_aes128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_tomcrypt_blowfish(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_tomcrypt_camellia(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_tomcrypt_cast128(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_tomcrypt_twofish(uint8_t *output,
const uint8_t *input, unsigned size)
static void run_tomcrypt_xtea(uint8_t *output,
const uint8_t *input, unsigned size)
#define IMPL_USE_tomcrypt(...) IMPL_USE(__VA_ARGS__)
#define IMPL_USE_tomcrypt(...)
static unsigned crc32(const uint8_t *data, unsigned size)
static void run_implementation(const uint8_t *input, uint8_t *output,
struct hash_impl *impl, unsigned size)
#define IMPL_USE(lib, name, symbol, output) \
,
#define IMPL(lib, ...) IMPL_USE_ ## lib(lib, __VA_ARGS__)
#define IMPL_ALL(...) \
IMPL(lavu,       __VA_ARGS__) \
IMPL(crypto,     __VA_ARGS__) \
IMPL(gcrypt,     __VA_ARGS__) \
IMPL(tomcrypt,   __VA_ARGS__)
struct hash_impl implementations[] = ;
int main(int argc, char **argv)
