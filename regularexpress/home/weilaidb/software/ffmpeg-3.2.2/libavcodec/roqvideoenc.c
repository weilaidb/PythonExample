#define CHROMA_BIAS 1
#define MAX_CBS_4x4 256
#define MAX_CBS_2x2 256
#define ROQ_LAMBDA_SCALE ((uint64_t) FF_LAMBDA_SCALE)
unpack_roq_cell
unpack_roq_qcell
enlarge_roq_mb4
square
eval_sse
block_sse
eval_motion_dist
squared_diff_macroblock
typedef struct SubcelEvaluation  SubcelEvaluation;
typedef struct CelEvaluation  CelEvaluation;
typedef struct RoqCodebooks  RoqCodebooks;
typedef struct RoqTempData
RoqTempdata;
create_cel_evals
get_frame_mb
index_mb
EVAL_MOTION \
while
motion_search
gather_data_for_subcel
gather_data_for_cel
remap_codebooks
write_codebooks
motion_arg
typedef struct CodingSpool  CodingSpool;
write_typecode
reconstruct_and_encode_image
frame_block_to_cell
create_clusters
generate_codebook
generate_new_codebooks
roq_encode_video
roq_encode_end
roq_encode_init
roq_write_video_info_chunk
roq_encode_frame
OFFSET offsetof(RoqContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass roq_class = ;
AVCodec ff_roq_encoder = ;
