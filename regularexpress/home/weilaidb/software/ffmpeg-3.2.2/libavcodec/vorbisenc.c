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
put_codeword
cb_lookup_vals
ready_codebook
ready_residue
create_vorbis_context
put_float
put_codebook_header
put_floor_header
put_residue_header
put_main_header
get_floor_average
floor_fit
render_point
floor_encode
*put_vector
residue_encode
apply_window_and_mdct
vorbis_encode_frame
vorbis_encode_close
vorbis_encode_init
AVCodec ff_vorbis_encoder = ;
