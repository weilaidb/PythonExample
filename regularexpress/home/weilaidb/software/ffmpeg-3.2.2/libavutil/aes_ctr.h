#define AVUTIL_AES_CTR_H
#define AES_CTR_KEY_SIZE (16)
#define AES_CTR_IV_SIZE (8)
struct AVAESCTR;
*av_aes_ctr_alloc;
av_aes_ctr_init;
av_aes_ctr_free;
av_aes_ctr_crypt;
av_aes_ctr_get_iv;
av_aes_ctr_set_random_iv;
av_aes_ctr_set_iv;
av_aes_ctr_increment_iv;
