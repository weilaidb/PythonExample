static const uint8_t mv_scan[4] = ;
static const uint8_t cbp_tab[64][2] = ;
static const uint8_t scan3x3[4] = ;
static const uint8_t dequant_shift[64] = ;
static const uint16_t dequant_mul[64] = ;
#define EOB 0, 0, 0
static const struct dec_2dvlc intra_dec[7] = ;
static const struct dec_2dvlc inter_dec[7] = ;
static const struct dec_2dvlc chroma_dec[5] = ;
#undef EOB
static inline void store_mvs(AVSContext *h)
static inline void mv_pred_direct(AVSContext *h, cavs_vector *pmv_fw,
cavs_vector *col_mv)
static inline void mv_pred_sym(AVSContext *h, cavs_vector *src,
enum cavs_block size)
static inline int get_ue_code(GetBitContext *gb, int order)
static inline int dequant(AVSContext *h, int16_t *level_buf, uint8_t *run_buf,
int16_t *dst, int mul, int shift, int coeff_num)
static int decode_residual_block(AVSContext *h, GetBitContext *gb,
const struct dec_2dvlc *r, int esc_golomb_order,
int qp, uint8_t *dst, int stride)
static inline void decode_residual_chroma(AVSContext *h)
static inline int decode_residual_inter(AVSContext *h)
static inline void set_mv_intra(AVSContext *h)
static int decode_mb_i(AVSContext *h, int cbp_code)
static inline void set_intra_mode_default(AVSContext *h)
static void decode_mb_p(AVSContext *h, enum cavs_mb mb_type)
static int decode_mb_b(AVSContext *h, enum cavs_mb mb_type)
static inline int decode_slice_header(AVSContext *h, GetBitContext *gb)
static inline int check_for_slice(AVSContext *h)
static int decode_pic(AVSContext *h)
static int decode_seq_header(AVSContext *h)
static void cavs_flush(AVCodecContext * avctx)
static int cavs_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_cavs_decoder = ;
