#define FRAGMENT_PIXELS 8
typedef struct Vp3Fragment  Vp3Fragment;
#define SB_NOT_CODED        0
#define SB_PARTIALLY_CODED  1
#define SB_FULLY_CODED      2
#define MAXIMUM_LONG_BIT_RUN 4129
#define MODE_INTER_NO_MV      0
#define MODE_INTRA            1
#define MODE_INTER_PLUS_MV    2
#define MODE_INTER_LAST_MV    3
#define MODE_INTER_PRIOR_LAST 4
#define MODE_USING_GOLDEN     5
#define MODE_GOLDEN_MV        6
#define MODE_INTER_FOURMV     7
#define CODING_MODE_COUNT     8
#define MODE_COPY             8
theora_decode_header;
theora_decode_tables;
static const int ModeAlphabet[6][CODING_MODE_COUNT] = ;
static const uint8_t hilbert_offset[16][2] = ;
#define MIN_DEQUANT_VAL 2
typedef struct Vp3DecodeContext  Vp3DecodeContext;
free_tables
vp3_decode_flush
vp3_decode_end
init_block_mapping
init_dequantizer
init_loop_filter
unpack_superblocks
unpack_modes
unpack_vectors
unpack_block_qpis
unpack_vlcs
reverse_dc_prediction;
unpack_dct_coeffs
COMPATIBLE_FRAME                                                   \
(compatible_frame[s->all_fragments[x].coding_method] == current_frame_type)
DC_COEFF s->all_fragments[u].dc
reverse_dc_prediction
apply_loop_filter
vp3_dequant
vp3_draw_horiz_band
await_reference_row
render_slice
allocate_tables
init_frames
vp3_decode_init
update_frames
ref_frame
ref_frames
#if HAVE_THREADS
vp3_update_thread_context
vp3_decode_frame
read_huffman_tree
#if HAVE_THREADS
vp3_init_thread_copy
#if CONFIG_THEORA_DECODER
static const enum AVPixelFormat theora_pix_fmts[4] = ;
theora_decode_header
theora_decode_tables
theora_decode_init
AVCodec ff_theora_decoder = ;
AVCodec ff_vp3_decoder = ;
