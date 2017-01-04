#define VP6_MAX_HUFF_SIZE 12
static void vp6_parse_coeff(VP56Context *s);
static void vp6_parse_coeff_huffman(VP56Context *s);
static int vp6_parse_header(VP56Context *s, const uint8_t *buf, int buf_size)
static void vp6_coeff_order_table_init(VP56Context *s)
static void vp6_default_models_init(VP56Context *s)
static void vp6_parse_vector_models(VP56Context *s)
static int vp6_huff_cmp(const void *va, const void *vb)
static int vp6_build_huff_tree(VP56Context *s, uint8_t coeff_model[],
const uint8_t *map, unsigned size, VLC *vlc)
static int vp6_parse_coeff_models(VP56Context *s)
static void vp6_parse_vector_adjustment(VP56Context *s, VP56mv *vect)
static unsigned vp6_get_nb_null(VP56Context *s)
static void vp6_parse_coeff_huffman(VP56Context *s)
static void vp6_parse_coeff(VP56Context *s)
static int vp6_block_variance(uint8_t *src, int stride)
static void vp6_filter_hv4(uint8_t *dst, uint8_t *src, int stride,
int delta, const int16_t *weights)
static void vp6_filter_diag2(VP56Context *s, uint8_t *dst, uint8_t *src,
int stride, int h_weight, int v_weight)
static void vp6_filter(VP56Context *s, uint8_t *dst, uint8_t *src,
int offset1, int offset2, int stride,
VP56mv mv, int mask, int select, int luma)
static av_cold void vp6_decode_init_context(VP56Context *s);
static av_cold int vp6_decode_init(AVCodecContext *avctx)
static av_cold void vp6_decode_init_context(VP56Context *s)
static av_cold void vp6_decode_free_context(VP56Context *s);
static av_cold int vp6_decode_free(AVCodecContext *avctx)
static av_cold void vp6_decode_free_context(VP56Context *s)
AVCodec ff_vp6_decoder = ;
AVCodec ff_vp6f_decoder = ;
AVCodec ff_vp6a_decoder = ;
