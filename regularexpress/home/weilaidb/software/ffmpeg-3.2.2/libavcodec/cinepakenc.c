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
#define OFFSET(x) offsetof(CinepakEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass cinepak_class = ;
static av_cold int cinepak_encode_init(AVCodecContext *avctx)
static int64_t calculate_mode_score(CinepakEncContext *s, int h, strip_info *info, int report, int *training_set_v1_shrunk, int *training_set_v4_shrunk
, int64_t *serr
)
static int write_chunk_header(unsigned char *buf, int chunk_type, int chunk_size)
static int encode_codebook(CinepakEncContext *s, int *codebook, int size, int chunk_type_yuv, int chunk_type_gray, unsigned char *buf)
static void get_sub_picture(CinepakEncContext *s, int x, int y,
uint8_t * in_data[4], int  in_linesize[4],
uint8_t *out_data[4], int out_linesize[4])
static void decode_v1_vector(CinepakEncContext *s, uint8_t *data[4],
int linesize[4], int v1_vector, strip_info *info)
static void decode_v4_vector(CinepakEncContext *s, uint8_t *data[4],
int linesize[4], int *v4_vector, strip_info *info)
static void copy_mb(CinepakEncContext *s,
uint8_t *a_data[4], int a_linesize[4],
uint8_t *b_data[4], int b_linesize[4])
static int encode_mode(CinepakEncContext *s, int h,
uint8_t *scratch_data[4], int scratch_linesize[4],
uint8_t *last_data[4], int last_linesize[4],
strip_info *info, unsigned char *buf)
static int compute_mb_distortion(CinepakEncContext *s,
uint8_t *a_data[4], int a_linesize[4],
uint8_t *b_data[4], int b_linesize[4])
#define CERTAIN(x) ((x)!=ENC_UNCERTAIN)
static int quantize(CinepakEncContext *s, int h,
uint8_t *data[4], int linesize[4],
int v1mode, strip_info *info,
mb_encoding encoding)
static void calculate_skip_errors(CinepakEncContext *s, int h,
uint8_t *last_data[4], int last_linesize[4],
uint8_t *data[4], int linesize[4],
strip_info *info)
static void write_strip_header(CinepakEncContext *s, int y, int h, int keyframe, unsigned char *buf, int strip_size)
static int rd_strip(CinepakEncContext *s, int y, int h, int keyframe,
uint8_t *last_data[4], int last_linesize[4],
uint8_t *data[4], int linesize[4],
uint8_t *scratch_data[4], int scratch_linesize[4],
unsigned char *buf, int64_t *best_score
, int64_t *best_serr
)
static int write_cvid_header(CinepakEncContext *s, unsigned char *buf, int num_strips, int data_size, int isakeyframe)
static int rd_frame(CinepakEncContext *s, const AVFrame *frame,
int isakeyframe, unsigned char *buf, int buf_size)
static int cinepak_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int cinepak_encode_end(AVCodecContext *avctx)
AVCodec ff_cinepak_encoder = ;
