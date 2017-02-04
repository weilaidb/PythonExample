#define NGLYPHS 256
#define GLYPH_COORD_VECT_SIZE 16
#define PALETTE_SIZE 256
#define PALETTE_DELTA 768
static const int8_t glyph4_x[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t glyph4_y[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t glyph8_x[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t glyph8_y[GLYPH_COORD_VECT_SIZE] = ;
static const int8_t motion_vectors[256][2] = ;
static const int8_t c37_mv[] = ;
typedef struct SANMVideoContext  SANMVideoContext;
typedef struct SANMFrameHeader  SANMFrameHeader;
enum GlyphEdge ;
enum GlyphDir ;
which_edge
which_direction
interp_point
make_glyphs
init_sizes
destroy_buffers
init_buffers
rotate_bufs
decode_init
decode_end
rle_decode
old_codec1
codec37_mv
old_codec37
process_block
old_codec47
process_frame_obj
decode_0
decode_nop
copy_block
fill_block
draw_glyph
opcode_0xf7
opcode_0xf8
good_mvec
codec2subblock
decode_2
decode_3
decode_4
decode_5
decode_6
decode_8
typedef int (*frm_decoder)(SANMVideoContext *ctx);
static const frm_decoder v1_decoders[] = ;
read_frame_header
fill_frame
copy_output
decode_frame
AVCodec ff_sanm_decoder = ;
