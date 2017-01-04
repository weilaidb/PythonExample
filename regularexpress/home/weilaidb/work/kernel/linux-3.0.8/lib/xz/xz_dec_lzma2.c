#define RC_INIT_BYTES 5
#define LZMA_IN_REQUIRED 21
struct dictionary ;
struct rc_dec ;
struct lzma_len_dec ;
struct lzma_dec ;
struct lzma2_dec ;
struct xz_dec_lzma2 ;
static void dict_reset(struct dictionary *dict, struct xz_buf *b)
static void dict_limit(struct dictionary *dict, size_t out_max)
static inline bool dict_has_space(const struct dictionary *dict)
static inline uint32_t dict_get(const struct dictionary *dict, uint32_t dist)
static inline void dict_put(struct dictionary *dict, uint8_t byte)
static bool dict_repeat(struct dictionary *dict, uint32_t *len, uint32_t dist)
static void dict_uncompressed(struct dictionary *dict, struct xz_buf *b,
uint32_t *left)
static uint32_t dict_flush(struct dictionary *dict, struct xz_buf *b)
static void rc_reset(struct rc_dec *rc)
static bool rc_read_init(struct rc_dec *rc, struct xz_buf *b)
static inline bool rc_limit_exceeded(const struct rc_dec *rc)
static inline bool rc_is_finished(const struct rc_dec *rc)
static __always_inline void rc_normalize(struct rc_dec *rc)
static __always_inline int rc_bit(struct rc_dec *rc, uint16_t *prob)
static __always_inline uint32_t rc_bittree(struct rc_dec *rc,
uint16_t *probs, uint32_t limit)
static __always_inline void rc_bittree_reverse(struct rc_dec *rc,
uint16_t *probs,
uint32_t *dest, uint32_t limit)
static inline void rc_direct(struct rc_dec *rc, uint32_t *dest, uint32_t limit)
static uint16_t *lzma_literal_probs(struct xz_dec_lzma2 *s)
static void lzma_literal(struct xz_dec_lzma2 *s)
static void lzma_len(struct xz_dec_lzma2 *s, struct lzma_len_dec *l,
uint32_t pos_state)
static void lzma_match(struct xz_dec_lzma2 *s, uint32_t pos_state)
static void lzma_rep_match(struct xz_dec_lzma2 *s, uint32_t pos_state)
static bool lzma_main(struct xz_dec_lzma2 *s)
static void lzma_reset(struct xz_dec_lzma2 *s)
static bool lzma_props(struct xz_dec_lzma2 *s, uint8_t props)
static bool lzma2_lzma(struct xz_dec_lzma2 *s, struct xz_buf *b)
XZ_EXTERN enum xz_ret xz_dec_lzma2_run(struct xz_dec_lzma2 *s,
struct xz_buf *b)
XZ_EXTERN struct xz_dec_lzma2 *xz_dec_lzma2_create(enum xz_mode mode,
uint32_t dict_max)
XZ_EXTERN enum xz_ret xz_dec_lzma2_reset(struct xz_dec_lzma2 *s, uint8_t props)
XZ_EXTERN void xz_dec_lzma2_end(struct xz_dec_lzma2 *s)
