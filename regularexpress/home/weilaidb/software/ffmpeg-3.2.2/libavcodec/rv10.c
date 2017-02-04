RV_GET_MAJOR_VER  ((x) >> 28)
RV_GET_MINOR_VER (((x) >> 20) & 0xFF)
RV_GET_MICRO_VER (((x) >> 12) & 0xFF)
#define DC_VLC_BITS 14
typedef struct RVDecContext  RVDecContext;
static const uint16_t rv_lum_code[256] = ;
static const uint8_t rv_lum_bits[256] = ;
static const uint16_t rv_chrom_code[256] = ;
static const uint8_t rv_chrom_bits[256] = ;
static VLC rv_dc_lum, rv_dc_chrom;
ff_rv_decode_dc
rv10_decode_picture_header
rv20_decode_picture_header
rv10_decode_init
rv10_decode_end
rv10_decode_packet
get_slice_offset
rv10_decode_frame
AVCodec ff_rv10_decoder = ;
AVCodec ff_rv20_decoder = ;
