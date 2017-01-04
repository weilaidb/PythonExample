#define AVUTIL_BASE64_H
int av_base64_decode(uint8_t *out, const char *in, int out_size);
char *av_base64_encode(char *out, int out_size, const uint8_t *in, int in_size);
#define AV_BASE64_SIZE(x)  (((x)+2) / 3 * 4 + 1)
