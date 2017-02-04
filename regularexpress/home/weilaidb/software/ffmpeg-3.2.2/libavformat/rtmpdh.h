#define AVFORMAT_RTMPDH_H
#if CONFIG_GMP || CONFIG_GCRYPT
#if CONFIG_GMP
typedef mpz_ptr FFBigNum;
#elif CONFIG_GCRYPT
typedef gcry_mpi_t FFBigNum;
typedef struct FF_DH  FF_DH;
#elif CONFIG_OPENSSL
typedef BIGNUM *FFBigNum;
typedef DH FF_DH;
*ff_dh_init;
ff_dh_free;
ff_dh_generate_public_key;
ff_dh_write_public_key;
ff_dh_compute_shared_secret_key;
