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
static int get_bits(Jpeg2000DecoderContext *s, int n)
static void jpeg2000_flush(Jpeg2000DecoderContext *s)
static int tag_tree_decode(Jpeg2000DecoderContext *s, Jpeg2000TgtNode *node,
int threshold)
static int pix_fmt_match(enum AVPixelFormat pix_fmt, int components,
int bpc, uint32_t log2_chroma_wh, int pal8)
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
static int get_siz(Jpeg2000DecoderContext *s)
static int get_cox(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle *c)
static int get_cod(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle *c,
uint8_t *properties)
static int get_coc(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle *c,
uint8_t *properties)
static int get_qcx(Jpeg2000DecoderContext *s, int n, Jpeg2000QuantStyle *q)
static int get_qcd(Jpeg2000DecoderContext *s, int n, Jpeg2000QuantStyle *q,
uint8_t *properties)
static int get_qcc(Jpeg2000DecoderContext *s, int n, Jpeg2000QuantStyle *q,
uint8_t *properties)
static int get_poc(Jpeg2000DecoderContext *s, int size, Jpeg2000POC *p)
static int get_sot(Jpeg2000DecoderContext *s, int n)
static uint8_t get_tlm(Jpeg2000DecoderContext *s, int n)
static uint8_t get_plt(Jpeg2000DecoderContext *s, int n)
static int init_tile(Jpeg2000DecoderContext *s, int tileno)
static int getnpasses(Jpeg2000DecoderContext *s)
static int getlblockinc(Jpeg2000DecoderContext *s)
static int jpeg2000_decode_packet(Jpeg2000DecoderContext *s, Jpeg2000Tile *tile, int *tp_index,
Jpeg2000CodingStyle *codsty,
Jpeg2000ResLevel *rlevel, int precno,
int layno, uint8_t *expn, int numgbits)
static int jpeg2000_decode_packets_po_iteration(Jpeg2000DecoderContext *s, Jpeg2000Tile *tile,
int RSpoc, int CSpoc,
int LYEpoc, int REpoc, int CEpoc,
int Ppoc, int *tp_index)
static int jpeg2000_decode_packets(Jpeg2000DecoderContext *s, Jpeg2000Tile *tile)
static void decode_sigpass(Jpeg2000T1Context *t1, int width, int height,
int bpno, int bandno,
int vert_causal_ctx_csty_symbol)
static void decode_refpass(Jpeg2000T1Context *t1, int width, int height,
int bpno, int vert_causal_ctx_csty_symbol)
static void decode_clnpass(Jpeg2000DecoderContext *s, Jpeg2000T1Context *t1,
int width, int height, int bpno, int bandno,
int seg_symbols, int vert_causal_ctx_csty_symbol)
static int decode_cblk(Jpeg2000DecoderContext *s, Jpeg2000CodingStyle *codsty,
Jpeg2000T1Context *t1, Jpeg2000Cblk *cblk,
int width, int height, int bandpos)
static void dequantization_float(int x, int y, Jpeg2000Cblk *cblk,
Jpeg2000Component *comp,
Jpeg2000T1Context *t1, Jpeg2000Band *band)
static void dequantization_int(int x, int y, Jpeg2000Cblk *cblk,
Jpeg2000Component *comp,
Jpeg2000T1Context *t1, Jpeg2000Band *band)
static void dequantization_int_97(int x, int y, Jpeg2000Cblk *cblk,
Jpeg2000Component *comp,
Jpeg2000T1Context *t1, Jpeg2000Band *band)
static inline void mct_decode(Jpeg2000DecoderContext *s, Jpeg2000Tile *tile)
static inline void tile_codeblocks(Jpeg2000DecoderContext *s, Jpeg2000Tile *tile)
#define WRITE_FRAME(D, PIXEL)                                                                     \
static inline void write_frame_ ## D(Jpeg2000DecoderContext * s, Jpeg2000Tile * tile,         \
AVFrame * picture, int precision)                        \
WRITE_FRAME(8, uint8_t)
WRITE_FRAME(16, uint16_t)
#undef WRITE_FRAME
static int jpeg2000_decode_tile(AVCodecContext *avctx, void *td,
int jobnr, int threadnr)
static void jpeg2000_dec_cleanup(Jpeg2000DecoderContext *s)
static int jpeg2000_read_main_headers(Jpeg2000DecoderContext *s)
static int jpeg2000_read_bitstream_packets(Jpeg2000DecoderContext *s)
static int jp2_find_codestream(Jpeg2000DecoderContext *s)
static av_cold int jpeg2000_decode_init(AVCodecContext *avctx)
static int jpeg2000_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold void jpeg2000_init_static_data(AVCodec *codec)
#define OFFSET(x) offsetof(Jpeg2000DecoderContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass jpeg2000_class = ;
AVCodec ff_jpeg2000_decoder = ;
