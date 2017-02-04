static VLC svq1_block_type;
static VLC svq1_motion_component;
static VLC svq1_intra_multistage[6];
static VLC svq1_inter_multistage[6];
static VLC svq1_intra_mean;
static VLC svq1_inter_mean;
typedef struct svq1_pmv_s  svq1_pmv;
typedef struct SVQ1Context  SVQ1Context;
static const uint8_t string_table[256] = ;
SVQ1_PROCESS_VECTOR                                           \
for (; level > 0; i++)
SVQ1_ADD_CODEBOOK                                             \                                \
for (j = 0; j < stages; j++)                                                                    \
\                                              \
if (n1 & 0xFF00FF00)                                                                    \
\
if (n2 & 0xFF00FF00)
SVQ1_CALC_CODEBOOK_ENTRIES                               \
codebook = (const uint32_t *)cbook[level];                          \
if (stages > 0)                                                     \
bit_cache = get_bits(bitbuf, 4 * stages);                       \                    \
for (j = 0; j < stages; j++)                                                                    \
mean -= stages * 128;                                               \
n4    = (mean << 16) + mean;
svq1_decode_block_intra
svq1_decode_block_non_intra
svq1_decode_motion_vector
svq1_skip_block
svq1_motion_inter_block
svq1_motion_inter_4v_block
svq1_decode_delta_block
svq1_parse_string
svq1_decode_frame_header
svq1_decode_frame
svq1_decode_init
svq1_decode_end
svq1_flush
AVCodec ff_svq1_decoder = ;
