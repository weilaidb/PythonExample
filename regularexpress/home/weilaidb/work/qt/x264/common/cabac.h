#define X264_CABAC_H
typedef struct
x264_cabac_t;
extern const uint8_t x264_cabac_transition[128][2];
extern const uint16_t x264_cabac_entropy[128];
void x264_cabac_context_init( x264_t *h, x264_cabac_t *cb, int i_slice_type, int i_qp, int i_model );
void x264_cabac_encode_init_core( x264_cabac_t *cb );
void x264_cabac_encode_init( x264_cabac_t *cb, uint8_t *p_data, uint8_t *p_end );
void x264_cabac_encode_decision_c( x264_cabac_t *cb, int i_ctx, int b );
void x264_cabac_encode_decision_asm( x264_cabac_t *cb, int i_ctx, int b );
void x264_cabac_encode_bypass_c( x264_cabac_t *cb, int b );
void x264_cabac_encode_bypass_asm( x264_cabac_t *cb, int b );
void x264_cabac_encode_terminal_c( x264_cabac_t *cb );
void x264_cabac_encode_terminal_asm( x264_cabac_t *cb );
void x264_cabac_encode_ue_bypass( x264_cabac_t *cb, int exp_bits, int val );
void x264_cabac_encode_flush( x264_t *h, x264_cabac_t *cb );
#if HAVE_MMX
#define x264_cabac_encode_decision x264_cabac_encode_decision_asm
#define x264_cabac_encode_bypass x264_cabac_encode_bypass_asm
#define x264_cabac_encode_terminal x264_cabac_encode_terminal_asm
#elif defined(ARCH_AARCH64)
#define x264_cabac_encode_decision x264_cabac_encode_decision_asm
#define x264_cabac_encode_bypass x264_cabac_encode_bypass_asm
#define x264_cabac_encode_terminal x264_cabac_encode_terminal_asm
#define x264_cabac_encode_decision x264_cabac_encode_decision_c
#define x264_cabac_encode_bypass x264_cabac_encode_bypass_c
#define x264_cabac_encode_terminal x264_cabac_encode_terminal_c
#define x264_cabac_encode_decision_noup x264_cabac_encode_decision
static ALWAYS_INLINE int x264_cabac_pos( x264_cabac_t *cb )
static ALWAYS_INLINE void x264_cabac_size_decision( x264_cabac_t *cb, long i_ctx, long b )
static ALWAYS_INLINE int x264_cabac_size_decision2( uint8_t *state, long b )
static ALWAYS_INLINE void x264_cabac_size_decision_noup( x264_cabac_t *cb, long i_ctx, long b )
static ALWAYS_INLINE int x264_cabac_size_decision_noup2( uint8_t *state, long b )
