#define  UNCHECKED_BITSTREAM_READER 1
typedef struct RowContext  RowContext;
typedef struct DNXHDContext  DNXHDContext;
#define DNXHD_VLC_BITS 9
#define DNXHD_DC_VLC_BITS 7
static int dnxhd_decode_dct_block_8(const DNXHDContext *ctx,
RowContext *row, int n);
static int dnxhd_decode_dct_block_10(const DNXHDContext *ctx,
RowContext *row, int n);
static int dnxhd_decode_dct_block_10_444(const DNXHDContext *ctx,
RowContext *row, int n);
static int dnxhd_decode_dct_block_12(const DNXHDContext *ctx,
RowContext *row, int n);
static int dnxhd_decode_dct_block_12_444(const DNXHDContext *ctx,
RowContext *row, int n);
static av_cold int dnxhd_decode_init(AVCodecContext *avctx)
static int dnxhd_init_vlc(DNXHDContext *ctx, uint32_t cid, int bitdepth)
static av_cold int dnxhd_decode_init_thread_copy(AVCodecContext *avctx)
static int dnxhd_decode_header(DNXHDContext *ctx, AVFrame *frame,
const uint8_t *buf, int buf_size,
int first_field)
static av_always_inline int dnxhd_decode_dct_block(const DNXHDContext *ctx,
RowContext *row,
int n,
int index_bits,
int level_bias,
int level_shift,
int dc_shift)
static int dnxhd_decode_dct_block_8(const DNXHDContext *ctx,
RowContext *row, int n)
static int dnxhd_decode_dct_block_10(const DNXHDContext *ctx,
RowContext *row, int n)
static int dnxhd_decode_dct_block_10_444(const DNXHDContext *ctx,
RowContext *row, int n)
static int dnxhd_decode_dct_block_12(const DNXHDContext *ctx,
RowContext *row, int n)
static int dnxhd_decode_dct_block_12_444(const DNXHDContext *ctx,
RowContext *row, int n)
static int dnxhd_decode_macroblock(const DNXHDContext *ctx, RowContext *row,
AVFrame *frame, int x, int y)
static int dnxhd_decode_row(AVCodecContext *avctx, void *data,
int rownb, int threadnb)
static int dnxhd_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int dnxhd_decode_close(AVCodecContext *avctx)
AVCodec ff_dnxhd_decoder = ;
