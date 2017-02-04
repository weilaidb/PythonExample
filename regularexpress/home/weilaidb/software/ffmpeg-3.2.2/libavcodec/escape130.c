#define BITSTREAM_READER_LE
typedef struct Escape130Context  Escape130Context;
static const uint8_t offset_table[] = ;
static const int8_t sign_table[64][4] = ;
static const int8_t luma_adjust[] = ;
static const int8_t chroma_adjust[2][8] = ;
static const uint8_t chroma_vals[] = ;
escape130_decode_init
escape130_decode_close
decode_skip_count
escape130_decode_frame
AVCodec ff_escape130_decoder = ;
