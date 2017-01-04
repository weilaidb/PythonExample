static int vp5_parse_header(VP56Context *s, const uint8_t *buf, int buf_size)
static void vp5_parse_vector_adjustment(VP56Context *s, VP56mv *vect)
static void vp5_parse_vector_models(VP56Context *s)
static int vp5_parse_coeff_models(VP56Context *s)
static void vp5_parse_coeff(VP56Context *s)
static void vp5_default_models_init(VP56Context *s)
static av_cold int vp5_decode_init(AVCodecContext *avctx)
AVCodec ff_vp5_decoder = ;
