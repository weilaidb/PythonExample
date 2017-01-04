#define LZF_LITERAL_MAX (1 << 5)
#define LZF_LONG_BACKREF 7 + 2
int ff_lzf_uncompress(GetByteContext *gb, uint8_t **buf, int64_t *size)
