#define CVID_HEADER_SIZE 10
#define STRIP_HEADER_SIZE 12
#define CHUNK_HEADER_SIZE 4
#define MB_SIZE 4
#define MB_AREA (MB_SIZE*MB_SIZE)
#define VECTOR_MAX 6
#define CODEBOOK_MAX 256
#define MAX_STRIPS  32
#define MIN_STRIPS  1
typedef enum  CinepakMode;
typedef enum  mb_encoding;
typedef struct  mb_info;
typedef struct  strip_info;
typedef struct  CinepakEncContext;
OFFSET offsetof(CinepakEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass cinepak_class = ;
cinepak_encode_init
calculate_mode_score
write_chunk_header
encode_codebook
get_sub_picture
decode_v1_vector
decode_v4_vector
copy_mb
encode_mode
compute_mb_distortion
CERTAIN ((x)!=ENC_UNCERTAIN)
quantize
calculate_skip_errors
write_strip_header
rd_strip
write_cvid_header
rd_frame
cinepak_encode_frame
cinepak_encode_end
AVCodec ff_cinepak_encoder = ;
