AVRC4 *av_rc4_alloc(void)
int av_rc4_init(AVRC4 *r, const uint8_t *key, int key_bits, int decrypt)
void av_rc4_crypt(AVRC4 *r, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt)
