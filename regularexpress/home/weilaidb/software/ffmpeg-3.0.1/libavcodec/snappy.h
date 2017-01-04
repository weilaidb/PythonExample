#define AVCODEC_SNAPPY_H
int64_t ff_snappy_peek_uncompressed_length(GetByteContext *gb);
int ff_snappy_uncompress(GetByteContext *gb, uint8_t *buf, int64_t *size);
