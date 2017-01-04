#define AVUTIL_SHA_H
extern const int av_sha_size;
struct AVSHA;
struct AVSHA *av_sha_alloc(void);
int av_sha_init(struct AVSHA* context, int bits);
void av_sha_update(struct AVSHA* context, const uint8_t* data, unsigned int len);
void av_sha_final(struct AVSHA* context, uint8_t *digest);
