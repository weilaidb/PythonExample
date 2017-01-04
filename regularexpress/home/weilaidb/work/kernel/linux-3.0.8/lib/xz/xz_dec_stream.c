struct xz_dec_hash ;
struct xz_dec ;
static const uint8_t check_sizes[16] = ;
static bool fill_temp(struct xz_dec *s, struct xz_buf *b)
static enum xz_ret dec_vli(struct xz_dec *s, const uint8_t *in,
size_t *in_pos, size_t in_size)
static enum xz_ret dec_block(struct xz_dec *s, struct xz_buf *b)
static void index_update(struct xz_dec *s, const struct xz_buf *b)
static enum xz_ret dec_index(struct xz_dec *s, struct xz_buf *b)
static enum xz_ret crc32_validate(struct xz_dec *s, struct xz_buf *b)
static bool check_skip(struct xz_dec *s, struct xz_buf *b)
static enum xz_ret dec_stream_header(struct xz_dec *s)
static enum xz_ret dec_stream_footer(struct xz_dec *s)
static enum xz_ret dec_block_header(struct xz_dec *s)
static enum xz_ret dec_main(struct xz_dec *s, struct xz_buf *b)
XZ_EXTERN enum xz_ret xz_dec_run(struct xz_dec *s, struct xz_buf *b)
XZ_EXTERN struct xz_dec *xz_dec_init(enum xz_mode mode, uint32_t dict_max)
XZ_EXTERN void xz_dec_reset(struct xz_dec *s)
XZ_EXTERN void xz_dec_end(struct xz_dec *s)
