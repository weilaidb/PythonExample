enum ;
static int64_t bytestream2_get_levarint(GetByteContext *gb)
static int snappy_literal(GetByteContext *gb, uint8_t *p, int size, int val)
static int snappy_copy(uint8_t *start, uint8_t *p, int size,
unsigned int off, int len)
static int snappy_copy1(GetByteContext *gb, uint8_t *start, uint8_t *p,
int size, int val)
static int snappy_copy2(GetByteContext *gb, uint8_t *start, uint8_t *p,
int size, int val)
static int snappy_copy4(GetByteContext *gb, uint8_t *start, uint8_t *p,
int size, int val)
static int64_t decode_len(GetByteContext *gb)
int64_t ff_snappy_peek_uncompressed_length(GetByteContext *gb)
int ff_snappy_uncompress(GetByteContext *gb, uint8_t *buf, int64_t *size)
