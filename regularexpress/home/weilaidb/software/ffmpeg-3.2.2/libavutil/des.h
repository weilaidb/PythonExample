#define AVUTIL_DES_H
typedef struct AVDES  AVDES;
AVDES *av_des_alloc(void);
int av_des_init(struct AVDES *d, const uint8_t *key, int key_bits, int decrypt);
void av_des_crypt(struct AVDES *d, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt);
void av_des_mac(struct AVDES *d, uint8_t *dst, const uint8_t *src, int count);
