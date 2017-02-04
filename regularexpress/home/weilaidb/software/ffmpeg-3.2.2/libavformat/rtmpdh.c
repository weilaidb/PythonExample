#define P1024                                          \
\
\
\
\
\
#define Q1024                                          \
\
\
\
\
\
#if CONFIG_GMP || CONFIG_GCRYPT
#if CONFIG_GMP
bn_new                      \
do  while (0)
bn_free     \
do  while (0)
bn_set_word          mpz_set_ui(bn, w)
bn_cmp                mpz_cmp(a, b)
bn_copy           mpz_set(to, from)
bn_sub_word          mpz_sub_ui(bn, bn, w)
bn_cmp_1                mpz_cmp_ui(bn, 1)
bn_num_bytes            (mpz_sizeinbase(bn, 2) + 7) / 8
bn_bn2bin                     \
do  while (0)
bn_bin2bn                     \
do  while (0)
bn_hex2bn                     \
do  while (0)
bn_modexp      mpz_powm(bn, y, q, p)
bn_random                       \
do  while (0)
#elif CONFIG_GCRYPT
bn_new                                              \
do  while (0)
bn_free                 gcry_mpi_release(bn)
bn_set_word          gcry_mpi_set_ui(bn, w)
bn_cmp                gcry_mpi_cmp(a, b)
bn_copy           gcry_mpi_set(to, from)
bn_sub_word          gcry_mpi_sub_ui(bn, bn, w)
bn_cmp_1                gcry_mpi_cmp_ui(bn, 1)
bn_num_bytes            (gcry_mpi_get_nbits(bn) + 7) / 8
bn_bn2bin     gcry_mpi_print(GCRYMPI_FMT_USG, buf, len, NULL, bn)
bn_bin2bn     gcry_mpi_scan(&bn, GCRYMPI_FMT_USG, buf, len, NULL)
bn_hex2bn     ret = (gcry_mpi_scan(&bn, GCRYMPI_FMT_HEX, buf, 0, 0) == 0)
bn_modexp      gcry_mpi_powm(bn, y, q, p)
bn_random     gcry_mpi_randomize(bn, num_bits, GCRY_WEAK_RANDOM)
#define MAX_BYTES 18000
dh_new                    av_malloc(sizeof(FF_DH))
dh_generate_key
dh_compute_key
ff_dh_free
#elif CONFIG_OPENSSL
bn_new                  bn = BN_new()
bn_free                 BN_free(bn)
bn_set_word          BN_set_word(bn, w)
bn_cmp                BN_cmp(a, b)
bn_copy           BN_copy(to, from)
bn_sub_word          BN_sub_word(bn, w)
bn_cmp_1                BN_cmp(bn, BN_value_one())
bn_num_bytes            BN_num_bytes(bn)
bn_bn2bin     BN_bn2bin(bn, buf)
bn_bin2bn     bn = BN_bin2bn(buf, len, 0)
bn_hex2bn     ret = BN_hex2bn(&bn, buf)
bn_modexp               \
do  while (0)
dh_new                                DH_new()
dh_generate_key                     DH_generate_key(dh)
dh_compute_key
ff_dh_free
dh_is_valid_public_key
*ff_dh_init
ff_dh_generate_public_key
ff_dh_write_public_key
ff_dh_compute_shared_secret_key
