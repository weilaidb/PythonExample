#define _DRBD_VLI_H
#define VLI_L_1_1() do  while (0)
static inline int vli_decode_bits(u64 *out, const u64 in)
static inline int __vli_encode_bits(u64 *out, const u64 in)
#undef VLI_L_1_1
struct bitstream_cursor ;
static inline void bitstream_cursor_reset(struct bitstream_cursor *cur, void *s)
static inline void bitstream_cursor_advance(struct bitstream_cursor *cur, unsigned int bits)
struct bitstream ;
static inline void bitstream_init(struct bitstream *bs, void *s, size_t len, unsigned int pad_bits)
static inline void bitstream_rewind(struct bitstream *bs)
static inline int bitstream_put_bits(struct bitstream *bs, u64 val, const unsigned int bits)
static inline int bitstream_get_bits(struct bitstream *bs, u64 *out, int bits)
static inline int vli_encode_bits(struct bitstream *bs, u64 in)
