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
static void put_bits(Jpeg2000EncoderContext *s, int val, int n)
static void put_num(Jpeg2000EncoderContext *s, int num, int n)
static void j2k_flush(Jpeg2000EncoderContext *s)
static void tag_tree_code(Jpeg2000EncoderContext *s, Jpeg2000TgtNode *node, int threshold)
static void tag_tree_update(Jpeg2000TgtNode *node)
static int put_siz(Jpeg2000EncoderContext *s)
static int put_cod(Jpeg2000EncoderContext *s)
static int put_qcd(Jpeg2000EncoderContext *s, int compno)
static int put_com(Jpeg2000EncoderContext *s, int compno)
static uint8_t *put_sot(Jpeg2000EncoderContext *s, int tileno)
static int init_tiles(Jpeg2000EncoderContext *s)
static void copy_frame(Jpeg2000EncoderContext *s)
static void init_quantization(Jpeg2000EncoderContext *s)
static void init_luts(void)
static int getnmsedec_sig(int x, int bpno)
static int getnmsedec_ref(int x, int bpno)
static void encode_sigpass(Jpeg2000T1Context *t1, int width, int height, int bandno, int *nmsedec, int bpno)
static void encode_refpass(Jpeg2000T1Context *t1, int width, int height, int *nmsedec, int bpno)
static void encode_clnpass(Jpeg2000T1Context *t1, int width, int height, int bandno, int *nmsedec, int bpno)
static void encode_cblk(Jpeg2000EncoderContext *s, Jpeg2000T1Context *t1, Jpeg2000Cblk *cblk, Jpeg2000Tile *tile,
int width, int height, int bandpos, int lev)
static void putnumpasses(Jpeg2000EncoderContext *s, int n)
static int encode_packet(Jpeg2000EncoderContext *s, Jpeg2000ResLevel *rlevel, int precno,
uint8_t *expn, int numgbits)
static int encode_packets(Jpeg2000EncoderContext *s, Jpeg2000Tile *tile, int tileno)
static int getcut(Jpeg2000Cblk *cblk, int64_t lambda, int dwt_norm)
static void truncpasses(Jpeg2000EncoderContext *s, Jpeg2000Tile *tile)
static int encode_tile(Jpeg2000EncoderContext *s, Jpeg2000Tile *tile, int tileno)
static void cleanup(Jpeg2000EncoderContext *s)
static void reinit(Jpeg2000EncoderContext *s)
static void update_size(uint8_t *size, const uint8_t *end)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int j2kenc_init(AVCodecContext *avctx)
static int j2kenc_destroy(AVCodecContext *avctx)
#define OFFSET(x) offsetof(Jpeg2000EncoderContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass j2k_class = ;
AVCodec ff_jpeg2000_encoder = ;
