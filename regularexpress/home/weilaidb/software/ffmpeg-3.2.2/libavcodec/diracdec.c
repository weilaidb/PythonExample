#define MAX_REFERENCE_FRAMES 8
#define MAX_DELAY 5
#define MAX_FRAMES (MAX_REFERENCE_FRAMES + MAX_DELAY + 1)
#define MAX_QUANT 255
#define MAX_BLOCKSIZE 32
#define DIRAC_REF_MASK_REF1   1
#define DIRAC_REF_MASK_REF2   2
#define DIRAC_REF_MASK_GLOBAL 4
#define DELAYED_PIC_REF 4
CALC_PADDING                       \
(((size + (1 << depth) - 1) >> depth) << depth)
DIVRNDUP (((a) + (b) - 1) / (b))
typedef struct  DiracFrame;
typedef struct  DiracBlock;
typedef struct SubBand  SubBand;
typedef struct Plane  Plane;
typedef struct DiracSlice  DiracSlice;
typedef struct DiracContext  DiracContext;
enum dirac_subband ;
divide3
*remove_frame
add_frame
alloc_sequence_buffers
alloc_buffers
free_sequence_buffers
dirac_decode_init
dirac_decode_flush
dirac_decode_end
coeff_unpack_golomb
SIGN_CTX (CTX_SIGN_ZERO + ((x) > 0) - ((x) < 0))
UNPACK_ARITH \
static inline void coeff_unpack_arith_##n(DiracArith *c, int qfactor, int qoffset, \
SubBand *b, type *buf, int x, int y) \
\
UNPACK_ARITH(8, int16_t)
UNPACK_ARITH(10, int32_t)
codeblock
INTRA_DC_PRED \
static inline void intra_dc_prediction_##n(SubBand *b) \
\
INTRA_DC_PRED(8, int16_t)
INTRA_DC_PRED(10, int32_t)
decode_subband_internal
decode_subband_arith
decode_subband_golomb
decode_component
PARSE_VALUES \
type *buf = (type *)buf1; \
buf[x] = coeff_unpack_golomb(gb, qfactor, qoffset); \
if (get_bits_count(gb) >= ebits) \
return; \
if (buf2)  \
decode_subband
decode_lowdelay_slice
typedef struct SliceCoeffs  SliceCoeffs;
subband_coeffs
decode_hq_slice
decode_hq_slice_row
decode_lowdelay
init_planes
dirac_unpack_prediction_parameters
dirac_unpack_idwt_params
pred_sbsplit
pred_block_mode
pred_block_dc
pred_mv
global_mv
decode_block_params
propagate_block_data
dirac_unpack_block_motion_data
weight
init_obmc_weight_row
init_obmc_weight
init_obmc_weights
static const uint8_t epel_weights[4][4][4] = ;
mc_subpel
add_dc
block_mc
mc_row
select_dsp_funcs
interpolate_refplane
dirac_decode_frame_internal
get_buffer_with_edge
dirac_decode_picture_header
get_delayed_pic
#define DATA_UNIT_HEADER_SIZE 13
dirac_decode_data_unit
dirac_decode_frame
AVCodec ff_dirac_decoder = ;
