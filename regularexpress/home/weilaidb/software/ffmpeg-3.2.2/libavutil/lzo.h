#define AVUTIL_LZO_H
#define AV_LZO_INPUT_DEPLETED  1
#define AV_LZO_OUTPUT_FULL     2
#define AV_LZO_INVALID_BACKPTR 4
#define AV_LZO_ERROR           8
#define AV_LZO_INPUT_PADDING   8
#define AV_LZO_OUTPUT_PADDING 12
int av_lzo1x_decode(void *out, int *outlen, const void *in, int *inlen);
