#define AVUTIL_RIPEMD_H
extern const int av_ripemd_size;
struct AVRIPEMD;
struct AVRIPEMD *av_ripemd_alloc(void);
int av_ripemd_init(struct AVRIPEMD* context, int bits);
void av_ripemd_update(struct AVRIPEMD* context, const uint8_t* data, unsigned int len);
void av_ripemd_final(struct AVRIPEMD* context, uint8_t *digest);
