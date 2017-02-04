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
BARK \
atan * (x)) + 1e-4f * (x))
static const char idx_err_str[] = ;
VALIDATE_INDEX \
if (idx >= limit)
GET_VALIDATED_INDEX \
vorbisfloat2float
vorbis_free
vorbis_parse_setup_hdr_codebooks
vorbis_parse_setup_hdr_tdtransforms
vorbis_floor0_decode;
create_map;
vorbis_floor1_decode;
vorbis_parse_setup_hdr_floors
vorbis_parse_setup_hdr_residues
vorbis_parse_setup_hdr_mappings
create_map
vorbis_parse_setup_hdr_modes
vorbis_parse_setup_hdr
vorbis_parse_id_hdr
vorbis_decode_init
vorbis_floor0_decode
vorbis_floor1_decode
setup_classifs
vorbis_residue_decode_internal
vorbis_residue_decode
ff_vorbis_inverse_coupling
vorbis_parse_audio_packet
vorbis_decode_frame
vorbis_decode_close
vorbis_decode_flush
AVCodec ff_vorbis_decoder = ;
