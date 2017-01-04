#define AVUTIL_AES_H
extern const int av_aes_size;
struct AVAES;
struct AVAES *av_aes_alloc(void);
int av_aes_init(struct AVAES *a, const uint8_t *key, int key_bits, int decrypt);
void av_aes_crypt(struct AVAES *a, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt);
