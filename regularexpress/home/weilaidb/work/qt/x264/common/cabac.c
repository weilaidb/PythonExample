static const int8_t x264_cabac_context_init_I[1024][2] =
;
static const int8_t x264_cabac_context_init_PB[3][1024][2] =
;
const uint8_t x264_cabac_range_lps[64][4] =
;
const uint8_t x264_cabac_transition[128][2] =
;
const uint8_t x264_cabac_renorm_shift[64] =
;
const uint16_t x264_cabac_entropy[128] =
;
uint8_t x264_cabac_contexts[4][QP_MAX_SPEC+1][1024];
void x264_cabac_init( x264_t *h )
void x264_cabac_context_init( x264_t *h, x264_cabac_t *cb, int i_slice_type, int i_qp, int i_model )
void x264_cabac_encode_init_core( x264_cabac_t *cb )
void x264_cabac_encode_init( x264_cabac_t *cb, uint8_t *p_data, uint8_t *p_end )
static inline void x264_cabac_putbyte( x264_cabac_t *cb )
static inline void x264_cabac_encode_renorm( x264_cabac_t *cb )
void x264_cabac_encode_decision_c( x264_cabac_t *cb, int i_ctx, int b )
void x264_cabac_encode_bypass_c( x264_cabac_t *cb, int b )
static const int bypass_lut[16] =
;
void x264_cabac_encode_ue_bypass( x264_cabac_t *cb, int exp_bits, int val )
void x264_cabac_encode_terminal_c( x264_cabac_t *cb )
void x264_cabac_encode_flush( x264_t *h, x264_cabac_t *cb )
