#define AVCODEC_LZF_H
int ff_lzf_uncompress(GetByteContext *gb, uint8_t **buf, int64_t *size);
