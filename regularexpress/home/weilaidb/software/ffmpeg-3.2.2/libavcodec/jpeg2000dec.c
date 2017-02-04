#define JP2_SIG_TYPE    0x6A502020
#define JP2_SIG_VALUE   0x0D0A870A
#define JP2_CODESTREAM  0x6A703263
#define JP2_HEADER      0x6A703268
#define HAD_COC 0x01
#define HAD_QCC 0x02
#define MAX_POCS 32
typedef struct Jpeg2000POCEntry  Jpeg2000POCEntry;
typedef struct Jpeg2000POC  Jpeg2000POC;
typedef struct Jpeg2000TilePart  Jpeg2000TilePart;
typedef struct Jpeg2000Tile  Jpeg2000Tile;
typedef struct Jpeg2000DecoderContext  Jpeg2000DecoderContext;
get_bits
jpeg2000_flush
tag_tree_decode
pix_fmt_match
#define RGB_PIXEL_FORMATS   AV_PIX_FMT_PAL8,AV_PIX_FMT_RGB24,AV_PIX_FMT_RGBA,AV_PIX_FMT_RGB48,AV_PIX_FMT_RGBA64
#define GRAY_PIXEL_FORMATS  AV_PIX_FMT_GRAY8,AV_PIX_FMT_GRAY8A,AV_PIX_FMT_GRAY16,AV_PIX_FMT_YA16
#define YUV_PIXEL_FORMATS   AV_PIX_FMT_YUV410P,AV_PIX_FMT_YUV411P,AV_PIX_FMT_YUVA420P, \
AV_PIX_FMT_YUV420P,AV_PIX_FMT_YUV422P,AV_PIX_FMT_YUVA422P, \
AV_PIX_FMT_YUV440P,AV_PIX_FMT_YUV444P,AV_PIX_FMT_YUVA444P, \
AV_PIX_FMT_YUV420P9,AV_PIX_FMT_YUV422P9,AV_PIX_FMT_YUV444P9, \
AV_PIX_FMT_YUVA420P9,AV_PIX_FMT_YUVA422P9,AV_PIX_FMT_YUVA444P9, \
AV_PIX_FMT_YUV420P10,AV_PIX_FMT_YUV422P10,AV_PIX_FMT_YUV444P10, \
AV_PIX_FMT_YUVA420P10,AV_PIX_FMT_YUVA422P10,AV_PIX_FMT_YUVA444P10, \
AV_PIX_FMT_YUV420P12,AV_PIX_FMT_YUV422P12,AV_PIX_FMT_YUV444P12, \
AV_PIX_FMT_YUV420P14,AV_PIX_FMT_YUV422P14,AV_PIX_FMT_YUV444P14, \
AV_PIX_FMT_YUV420P16,AV_PIX_FMT_YUV422P16,AV_PIX_FMT_YUV444P16, \
AV_PIX_FMT_YUVA420P16,AV_PIX_FMT_YUVA422P16,AV_PIX_FMT_YUVA444P16
#define XYZ_PIXEL_FORMATS   AV_PIX_FMT_XYZ12
static const enum AVPixelFormat rgb_pix_fmts[]  = ;
static const enum AVPixelFormat gray_pix_fmts[] = ;
static const enum AVPixelFormat yuv_pix_fmts[]  = ;
static const enum AVPixelFormat xyz_pix_fmts[]  = ;
static const enum AVPixelFormat all_pix_fmts[]  = ;
get_siz
get_cox
get_cod
get_coc
get_qcx
get_qcd
get_qcc
get_poc
get_sot
get_tlm
get_plt
init_tile
getnpasses
getlblockinc
jpeg2000_decode_packet
jpeg2000_decode_packets_po_iteration
jpeg2000_decode_packets
decode_sigpass
decode_refpass
decode_clnpass
decode_cblk
dequantization_float
dequantization_int
dequantization_int_97
mct_decode
tile_codeblocks
WRITE_FRAME                                                                     \
static inline void write_frame_ ## D(Jpeg2000DecoderContext * s, Jpeg2000Tile * tile,         \
AVFrame * picture, int precision)                        \
WRITE_FRAME(8, uint8_t)
WRITE_FRAME(16, uint16_t)
#undef WRITE_FRAME
jpeg2000_decode_tile
jpeg2000_dec_cleanup
jpeg2000_read_main_headers
jpeg2000_read_bitstream_packets
jp2_find_codestream
jpeg2000_decode_init
jpeg2000_decode_frame
jpeg2000_init_static_data
OFFSET offsetof(Jpeg2000DecoderContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass jpeg2000_class = ;
AVCodec ff_jpeg2000_decoder = ;
