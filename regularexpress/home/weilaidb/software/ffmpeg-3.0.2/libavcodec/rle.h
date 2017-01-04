#define AVCODEC_RLE_H
int ff_rle_count_pixels(const uint8_t *start, int len, int bpp, int same);
int ff_rle_encode(uint8_t *outbuf, int out_size, const uint8_t *inbuf, int bpp, int w,
int add_rep, int xor_rep, int add_raw, int xor_raw);
