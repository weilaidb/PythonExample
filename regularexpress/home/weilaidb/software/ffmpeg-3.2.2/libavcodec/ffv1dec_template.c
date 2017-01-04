static av_always_inline void RENAME(decode_line)(FFV1Context *s, int w,
TYPE *sample[2],
int plane_index, int bits)
static void RENAME(decode_rgb_frame)(FFV1Context *s, uint8_t *src[3], int w, int h, int stride[3])
