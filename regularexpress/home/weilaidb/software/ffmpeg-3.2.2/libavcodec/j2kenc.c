#define NMSEDEC_BITS 7
#define NMSEDEC_FRACBITS (NMSEDEC_BITS-1)
#define WMSEDEC_SHIFT 13
#define LAMBDA_SCALE (100000000LL << (WMSEDEC_SHIFT - 13))
#define CODEC_JP2 1
#define CODEC_J2K 0
static int lut_nmsedec_ref [1<<NMSEDEC_BITS],
lut_nmsedec_ref0[1<<NMSEDEC_BITS],
lut_nmsedec_sig [1<<NMSEDEC_BITS],
lut_nmsedec_sig0[1<<NMSEDEC_BITS];
static const int dwt_norms[2][4][10] = ;
typedef struct  Jpeg2000Tile;
typedef struct  Jpeg2000EncoderContext;
put_bits
put_num
j2k_flush
tag_tree_code
tag_tree_update
put_siz
put_cod
put_qcd
put_com
*put_sot
init_tiles
copy_frame
init_quantization
init_luts
getnmsedec_sig
getnmsedec_ref
encode_sigpass
encode_refpass
encode_clnpass
encode_cblk
putnumpasses
encode_packet
encode_packets
getcut
truncpasses
encode_tile
cleanup
reinit
update_size
encode_frame
j2kenc_init
j2kenc_destroy
OFFSET offsetof(Jpeg2000EncoderContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass j2k_class = ;
AVCodec ff_jpeg2000_encoder = ;
