enum EncTypes ;
enum HexTile_Flags ;
typedef struct VmncContext  VmncContext;
static av_always_inline int vmnc_get_pixel(GetByteContext *gb, int bpp, int be)
static void load_cursor(VmncContext *c)
static void put_cursor(uint8_t *dst, int stride, VmncContext *c, int dx, int dy)
static av_always_inline void paint_rect(uint8_t *dst, int dx, int dy,
int w, int h, int color,
int bpp, int stride)
static av_always_inline void paint_raw(uint8_t *dst, int w, int h,
GetByteContext *gb, int bpp,
int be, int stride)
static int decode_hextile(VmncContext *c, uint8_t* dst, GetByteContext *gb,
int w, int h, int stride)
static void reset_buffers(VmncContext *c)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_vmnc_decoder = ;
