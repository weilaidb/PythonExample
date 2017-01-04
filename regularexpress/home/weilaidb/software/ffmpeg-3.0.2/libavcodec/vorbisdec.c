#define BITSTREAM_READER_LE
#define V_NB_BITS 8
#define V_NB_BITS2 11
#define V_MAX_VLCS (1 << 16)
#define V_MAX_PARTITIONS (1 << 20)
typedef struct vorbis_codebook  vorbis_codebook;
typedef union  vorbis_floor_u  vorbis_floor_data;
typedef struct vorbis_floor0_s vorbis_floor0;
typedef struct vorbis_floor1_s vorbis_floor1;
struct vorbis_context_s;
typedef
int (* vorbis_floor_decode_func)
(struct vorbis_context_s *, vorbis_floor_data *, float *);
typedef struct vorbis_floor  vorbis_floor;
typedef struct vorbis_residue  vorbis_residue;
typedef struct vorbis_mapping  vorbis_mapping;
typedef struct vorbis_mode  vorbis_mode;
typedef struct vorbis_context_s  vorbis_context;
#define BARK(x) \
(13.1f * atan(0.00074f * (x)) + 2.24f * atan(1.85e-8f * (x) * (x)) + 1e-4f * (x))
static const char idx_err_str[] = "Index value %d out of range (0 - %d) for %s at %s:%i\n";
#define VALIDATE_INDEX(idx, limit) \
if (idx >= limit)
#define GET_VALIDATED_INDEX(idx, bits, limit) \
static float vorbisfloat2float(unsigned val)
static void vorbis_free(vorbis_context *vc)
static int vorbis_parse_setup_hdr_codebooks(vorbis_context *vc)
static int vorbis_parse_setup_hdr_tdtransforms(vorbis_context *vc)
static int vorbis_floor0_decode(vorbis_context *vc,
vorbis_floor_data *vfu, float *vec);
static int create_map(vorbis_context *vc, unsigned floor_number);
static int vorbis_floor1_decode(vorbis_context *vc,
vorbis_floor_data *vfu, float *vec);
static int vorbis_parse_setup_hdr_floors(vorbis_context *vc)
static int vorbis_parse_setup_hdr_residues(vorbis_context *vc)
static int vorbis_parse_setup_hdr_mappings(vorbis_context *vc)
static int create_map(vorbis_context *vc, unsigned floor_number)
static int vorbis_parse_setup_hdr_modes(vorbis_context *vc)
static int vorbis_parse_setup_hdr(vorbis_context *vc)
static int vorbis_parse_id_hdr(vorbis_context *vc)
static av_cold int vorbis_decode_init(AVCodecContext *avctx)
static int vorbis_floor0_decode(vorbis_context *vc,
vorbis_floor_data *vfu, float *vec)
static int vorbis_floor1_decode(vorbis_context *vc,
vorbis_floor_data *vfu, float *vec)
static av_always_inline int setup_classifs(vorbis_context *vc,
vorbis_residue *vr,
uint8_t *do_not_decode,
unsigned ch_used,
int partition_count,
int ptns_to_read
)
static av_always_inline int vorbis_residue_decode_internal(vorbis_context *vc,
vorbis_residue *vr,
unsigned ch,
uint8_t *do_not_decode,
float *vec,
unsigned vlen,
unsigned ch_left,
int vr_type)
static inline int vorbis_residue_decode(vorbis_context *vc, vorbis_residue *vr,
unsigned ch,
uint8_t *do_not_decode,
float *vec, unsigned vlen,
unsigned ch_left)
void ff_vorbis_inverse_coupling(float *mag, float *ang, intptr_t blocksize)
static int vorbis_parse_audio_packet(vorbis_context *vc, float **floor_ptr)
static int vorbis_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int vorbis_decode_close(AVCodecContext *avctx)
static av_cold void vorbis_decode_flush(AVCodecContext *avctx)
AVCodec ff_vorbis_decoder = ;
