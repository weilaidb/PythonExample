#define CDG_FULL_WIDTH           300
#define CDG_FULL_HEIGHT          216
#define CDG_DISPLAY_WIDTH        294
#define CDG_DISPLAY_HEIGHT       204
#define CDG_BORDER_WIDTH           6
#define CDG_BORDER_HEIGHT         12
#define CDG_COMMAND             0x09
#define CDG_MASK                0x3F
#define CDG_INST_MEMORY_PRESET     1
#define CDG_INST_BORDER_PRESET     2
#define CDG_INST_TILE_BLOCK        6
#define CDG_INST_SCROLL_PRESET    20
#define CDG_INST_SCROLL_COPY      24
#define CDG_INST_TRANSPARENT_COL  28
#define CDG_INST_LOAD_PAL_LO      30
#define CDG_INST_LOAD_PAL_HIGH    31
#define CDG_INST_TILE_BLOCK_XOR   38
#define CDG_PACKET_SIZE           24
#define CDG_DATA_SIZE             16
#define CDG_TILE_HEIGHT           12
#define CDG_TILE_WIDTH             6
#define CDG_MINIMUM_PKT_SIZE       6
#define CDG_MINIMUM_SCROLL_SIZE    3
#define CDG_HEADER_SIZE            8
#define CDG_PALETTE_SIZE          16
typedef struct CDGraphicsContext  CDGraphicsContext;
static av_cold int cdg_decode_init(AVCodecContext *avctx)
static void cdg_border_preset(CDGraphicsContext *cc, uint8_t *data)
static void cdg_load_palette(CDGraphicsContext *cc, uint8_t *data, int low)
static int cdg_tile_block(CDGraphicsContext *cc, uint8_t *data, int b)
#define UP    2
#define DOWN  1
#define LEFT  2
#define RIGHT 1
static void cdg_copy_rect_buf(int out_tl_x, int out_tl_y, uint8_t *out,
int in_tl_x, int in_tl_y, uint8_t *in,
int w, int h, int stride)
static void cdg_fill_rect_preset(int tl_x, int tl_y, uint8_t *out,
int color, int w, int h, int stride)
static void cdg_fill_wrapper(int out_tl_x, int out_tl_y, uint8_t *out,
int in_tl_x, int in_tl_y, uint8_t *in,
int color, int w, int h, int stride, int roll)
static void cdg_scroll(CDGraphicsContext *cc, uint8_t *data,
AVFrame *new_frame, int roll_over)
static int cdg_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame, AVPacket *avpkt)
static av_cold int cdg_decode_end(AVCodecContext *avctx)
AVCodec ff_cdgraphics_decoder = ;
