static void parse_mb_skip(Wmv2Context *w)
static int decode_ext_header(Wmv2Context *w)
int ff_wmv2_decode_picture_header(MpegEncContext *s)
int ff_wmv2_decode_secondary_picture_header(MpegEncContext *s)
static inline int wmv2_decode_motion(Wmv2Context *w, int *mx_ptr, int *my_ptr)
static int16_t *wmv2_pred_motion(Wmv2Context *w, int *px, int *py)
static inline int wmv2_decode_inter_block(Wmv2Context *w, int16_t *block,
int n, int cbp)
int ff_wmv2_decode_mb(MpegEncContext *s, int16_t block[6][64])
static av_cold int wmv2_decode_init(AVCodecContext *avctx)
static av_cold int wmv2_decode_end(AVCodecContext *avctx)
AVCodec ff_wmv2_decoder = ;
