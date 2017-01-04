#define P1024                                          \
"FFFFFFFFFFFFFFFFC90FDAA22168C234C4C6628B80DC1CD1" \
"29024E088A67CC74020BBEA63B139B22514A08798E3404DD" \
"EF9519B3CD3A431B302B0A6DF25F14374FE1356D6D51C245" \
"E485B576625E7EC6F44C42E9A637ED6B0BFF5CB6F406B7ED" \
"EE386BFB5A899FA5AE9F24117C4B1FE649286651ECE65381" \
"FFFFFFFFFFFFFFFF"
#define Q1024                                          \
"7FFFFFFFFFFFFFFFE487ED5110B4611A62633145C06E0E68" \
"948127044533E63A0105DF531D89CD9128A5043CC71A026E" \
"F7CA8CD9E69D218D98158536F92F8A1BA7F09AB6B6A8E122" \
"F242DABB312F3F637A262174D31BF6B585FFAE5B7A035BF6" \
"F71C35FDAD44CFD2D74F9208BE258FF324943328F67329C0" \
"FFFFFFFFFFFFFFFF"
#if CONFIG_GMP || CONFIG_GCRYPT
#if CONFIG_GMP
#define bn_new(bn)                      \
do  while (0)
#define bn_free(bn)     \
do  while (0)
#define bn_set_word(bn, w)          mpz_set_ui(bn, w)
#define bn_cmp(a, b)                mpz_cmp(a, b)
#define bn_copy(to, from)           mpz_set(to, from)
#define bn_sub_word(bn, w)          mpz_sub_ui(bn, bn, w)
#define bn_cmp_1(bn)                mpz_cmp_ui(bn, 1)
#define bn_num_bytes(bn)            (mpz_sizeinbase(bn, 2) + 7) / 8
#define bn_bn2bin(bn, buf, len)                     \
do  while (0)
#define bn_bin2bn(bn, buf, len)                     \
do  while (0)
#define bn_hex2bn(bn, buf, ret)                     \
do  while (0)
#define bn_modexp(bn, y, q, p)      mpz_powm(bn, y, q, p)
#define bn_random(bn, num_bits)                       \
do  while (0)
#elif CONFIG_GCRYPT
#define bn_new(bn)                                              \
do  while (0)
#define bn_free(bn)                 gcry_mpi_release(bn)
#define bn_set_word(bn, w)          gcry_mpi_set_ui(bn, w)
#define bn_cmp(a, b)                gcry_mpi_cmp(a, b)
#define bn_copy(to, from)           gcry_mpi_set(to, from)
#define bn_sub_word(bn, w)          gcry_mpi_sub_ui(bn, bn, w)
#define bn_cmp_1(bn)                gcry_mpi_cmp_ui(bn, 1)
#define bn_num_bytes(bn)            (gcry_mpi_get_nbits(bn) + 7) / 8
#define bn_bn2bin(bn, buf, len)     gcry_mpi_print(GCRYMPI_FMT_USG, buf, len, NULL, bn)
#define bn_bin2bn(bn, buf, len)     gcry_mpi_scan(&bn, GCRYMPI_FMT_USG, buf, len, NULL)
#define bn_hex2bn(bn, buf, ret)     ret = (gcry_mpi_scan(&bn, GCRYMPI_FMT_HEX, buf, 0, 0) == 0)
#define bn_modexp(bn, y, q, p)      gcry_mpi_powm(bn, y, q, p)
#define bn_random(bn, num_bits)     gcry_mpi_randomize(bn, num_bits, GCRY_WEAK_RANDOM)
#define MAX_BYTES 18000
#define dh_new()                    av_malloc(sizeof(FF_DH))
static FFBigNum dh_generate_key(FF_DH *dh)
static int dh_compute_key(FF_DH *dh, FFBigNum pub_key_bn,
uint32_t secret_key_len, uint8_t *secret_key)
void ff_dh_free(FF_DH *dh)
#elif CONFIG_OPENSSL
#define bn_new(bn)                  bn = BN_new()
#define bn_free(bn)                 BN_free(bn)
#define bn_set_word(bn, w)          BN_set_word(bn, w)
#define bn_cmp(a, b)                BN_cmp(a, b)
#define bn_copy(to, from)           BN_copy(to, from)
#define bn_sub_word(bn, w)          BN_sub_word(bn, w)
#define bn_cmp_1(bn)                BN_cmp(bn, BN_value_one())
#define bn_num_bytes(bn)            BN_num_bytes(bn)
#define bn_bn2bin(bn, buf, len)     BN_bn2bin(bn, buf)
#define bn_bin2bn(bn, buf, len)     bn = BN_bin2bn(buf, len, 0)
#define bn_hex2bn(bn, buf, ret)     ret = BN_hex2bn(&bn, buf)
#define bn_modexp(bn, y, q, p)               \
do  while (0)
#define dh_new()                                DH_new()
#define dh_generate_key(dh)                     DH_generate_key(dh)
static int dh_compute_key(FF_DH *dh, FFBigNum pub_key_bn,
uint32_t secret_key_len, uint8_t *secret_key)
void ff_dh_free(FF_DH *dh)
static int dh_is_valid_public_key(FFBigNum y, FFBigNum p, FFBigNum q)
av_cold FF_DH *ff_dh_init(int key_len)
int ff_dh_generate_public_key(FF_DH *dh)
int ff_dh_write_public_key(FF_DH *dh, uint8_t *pub_key, int pub_key_len)
int ff_dh_compute_shared_secret_key(FF_DH *dh, const uint8_t *pub_key,
int pub_key_len, uint8_t *secret_key,
int secret_key_len)
static int test_random_shared_secret(void)
static const char *private_key =
"976C18FCADC255B456564F74F3EEDA59D28AF6B744D743F2357BFD2404797EF896EF1A"
"7C1CBEAAA3AB60AF3192D189CFF3F991C9CBBFD78119FCA2181384B94011943B6D6F28"
"9E1B708E2D1A0C7771169293F03DA27E561F15F16F0AC9BC858C77A80FA98FD088A232"
"19D08BE6F165DE0B02034B18705829FAD0ACB26A5B75EF";
static const char *public_key =
"F272ECF8362257C5D2C3CC2229CF9C0A03225BC109B1DBC76A68C394F256ACA3EF5F64"
"FC270C26382BF315C19E97A76104A716FC998A651E8610A3AE6CF65D8FAE5D3F32EEA0"
"0B32CB9609B494116A825D7142D17B88E3D20EDD98743DE29CF37A23A9F6A58B960591"
"3157D5965FCB46DDA73A1F08DD897BAE88DFE6FC937CBA";
static const uint8_t public_key_bin[] = ;
static const uint8_t peer_public_key[] = ;
static const uint8_t shared_secret[] = ;
static int test_ref_data(void)
int main(void)
