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
FF_DH *ff_dh_init(int key_len);
void ff_dh_free(FF_DH *dh);
int ff_dh_generate_public_key(FF_DH *dh);
int ff_dh_write_public_key(FF_DH *dh, uint8_t *pub_key, int pub_key_len);
int ff_dh_compute_shared_secret_key(FF_DH *dh, const uint8_t *pub_key,
int pub_key_len, uint8_t *secret_key,
int secret_key_len);
