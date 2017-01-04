static av_always_inline int RENAME(encode_line)(FFV1Context *s, int w,
TYPE *sample[3],
int plane_index, int bits)
static int RENAME(encode_rgb_frame)(FFV1Context *s, const uint8_t *src[3],
int w, int h, const int stride[3])
