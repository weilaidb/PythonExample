#define BITSTREAM_WRITER_LE
#undef NDEBUG
typedef struct vorbis_enc_codebook  vorbis_enc_codebook;
typedef struct vorbis_enc_floor_class  vorbis_enc_floor_class;
typedef struct vorbis_enc_floor  vorbis_enc_floor;
typedef struct vorbis_enc_residue  vorbis_enc_residue;
typedef struct vorbis_enc_mapping  vorbis_enc_mapping;
typedef struct vorbis_enc_mode  vorbis_enc_mode;
typedef struct vorbis_enc_context  vorbis_enc_context;
#define MAX_CHANNELS     2
#define MAX_CODEBOOK_DIM 8
#define MAX_FLOOR_CLASS_DIM  4
#define NUM_FLOOR_PARTITIONS 8
#define MAX_FLOOR_VALUES     (MAX_FLOOR_CLASS_DIM*NUM_FLOOR_PARTITIONS+2)
#define RESIDUE_SIZE           1600
#define RESIDUE_PART_SIZE      32
#define NUM_RESIDUE_PARTITIONS (RESIDUE_SIZE/RESIDUE_PART_SIZE)
static inline int put_codeword(PutBitContext *pb, vorbis_enc_codebook *cb,
int entry)
static int cb_lookup_vals(int lookup, int dimensions, int entries)
static int ready_codebook(vorbis_enc_codebook *cb)
static int ready_residue(vorbis_enc_residue *rc, vorbis_enc_context *venc)
static int create_vorbis_context(vorbis_enc_context *venc,
AVCodecContext *avctx)
static void put_float(PutBitContext *pb, float f)
static void put_codebook_header(PutBitContext *pb, vorbis_enc_codebook *cb)
static void put_floor_header(PutBitContext *pb, vorbis_enc_floor *fc)
static void put_residue_header(PutBitContext *pb, vorbis_enc_residue *rc)
static int put_main_header(vorbis_enc_context *venc, uint8_t **out)
static float get_floor_average(vorbis_enc_floor * fc, float *coeffs, int i)
static void floor_fit(vorbis_enc_context *venc, vorbis_enc_floor *fc,
float *coeffs, uint16_t *posts, int samples)
static int render_point(int x0, int y0, int x1, int y1, int x)
static int floor_encode(vorbis_enc_context *venc, vorbis_enc_floor *fc,
PutBitContext *pb, uint16_t *posts,
float *floor, int samples)
static float *put_vector(vorbis_enc_codebook *book, PutBitContext *pb,
float *num)
static int residue_encode(vorbis_enc_context *venc, vorbis_enc_residue *rc,
PutBitContext *pb, float *coeffs, int samples,
int real_ch)
static int apply_window_and_mdct(vorbis_enc_context *venc,
float **audio, int samples)
static int vorbis_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold int vorbis_encode_close(AVCodecContext *avctx)
static av_cold int vorbis_encode_init(AVCodecContext *avctx)
AVCodec ff_vorbis_encoder = ;
