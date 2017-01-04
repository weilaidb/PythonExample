struct xz_dec_bcj ;
static inline int bcj_x86_test_msbyte(uint8_t b)
static size_t bcj_x86(struct xz_dec_bcj *s, uint8_t *buf, size_t size)
static size_t bcj_powerpc(struct xz_dec_bcj *s, uint8_t *buf, size_t size)
static size_t bcj_ia64(struct xz_dec_bcj *s, uint8_t *buf, size_t size)
static size_t bcj_arm(struct xz_dec_bcj *s, uint8_t *buf, size_t size)
static size_t bcj_armthumb(struct xz_dec_bcj *s, uint8_t *buf, size_t size)
static size_t bcj_sparc(struct xz_dec_bcj *s, uint8_t *buf, size_t size)
static void bcj_apply(struct xz_dec_bcj *s,
uint8_t *buf, size_t *pos, size_t size)
static void bcj_flush(struct xz_dec_bcj *s, struct xz_buf *b)
XZ_EXTERN enum xz_ret xz_dec_bcj_run(struct xz_dec_bcj *s,
struct xz_dec_lzma2 *lzma2,
struct xz_buf *b)
XZ_EXTERN struct xz_dec_bcj *xz_dec_bcj_create(bool single_call)
XZ_EXTERN enum xz_ret xz_dec_bcj_reset(struct xz_dec_bcj *s, uint8_t id)
