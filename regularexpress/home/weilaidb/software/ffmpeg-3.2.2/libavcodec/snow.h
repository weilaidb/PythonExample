#define AVCODEC_SNOW_H
FF_MPV_OFFSET (offsetof(MpegEncContext, x) + offsetof(SnowContext, m))
#define MID_STATE 128
#define MAX_PLANES 4
#define QSHIFT 5
#define QROOT (1<<QSHIFT)
#define LOSSLESS_QLOG -128
#define FRAC_BITS 4
#define MAX_REF_FRAMES 8
#define LOG2_OBMC_MAX 8
#define OBMC_MAX (1<<(LOG2_OBMC_MAX))
typedef struct BlockNodeBlockNode;
static const BlockNode null_block= ;
#define LOG2_MB_SIZE 4
#define MB_SIZE (1<<LOG2_MB_SIZE)
#define ENCODER_EXTRA_BITS 4
#define HTAPS_MAX 8
typedef struct x_and_coeff x_and_coeff;
typedef struct SubBandSubBand;
typedef struct PlanePlane;
typedef struct SnowContextSnowContext;
extern const uint8_t * const ff_obmc_tab[4];
extern uint8_t ff_qexp[QROOT];
extern int ff_scale_mv_ref[MAX_REF_FRAMES][MAX_REF_FRAMES];
snow_interleave_line_header
snow_interleave_line_footer
snow_horizontal_compose_lift_lead_out
snow_horizontal_compose_liftS_lead_out
ff_snow_common_init;
ff_snow_common_init_after_header;
ff_snow_common_end;
ff_snow_release_buffer;
ff_snow_reset_contexts;
ff_snow_alloc_blocks;
ff_snow_frame_start;
ff_snow_pred_block;
ff_snow_get_buffer;
pred_mv
same_block
add_yblock
predict_slice
predict_plane
set_blocks
init_ref
extern const int8_t ff_quant3bA[256];
#define QEXPSHIFT (7-FRAC_BITS+8)
put_symbol
get_symbol
put_symbol2
get_symbol2
unpack_coeffs
