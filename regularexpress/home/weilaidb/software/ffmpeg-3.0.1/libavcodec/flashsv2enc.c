#define HAS_IFRAME_IMAGE 0x02
#define HAS_PALLET_INFO 0x01
#define COLORSPACE_BGR 0x00
#define COLORSPACE_15_7 0x10
#define HAS_DIFF_BLOCKS 0x04
#define ZLIB_PRIME_COMPRESS_CURRENT 0x02
#define ZLIB_PRIME_COMPRESS_PREVIOUS 0x01
#define FLASHSV2_DUMB
typedef struct Block  Block;
typedef struct Palette  Palette;
typedef struct FlashSV2Context  FlashSV2Context;
static av_cold void cleanup(FlashSV2Context * s)
static void init_blocks(FlashSV2Context * s, Block * blocks,
uint8_t * encbuf, uint8_t * databuf)
static void reset_stats(FlashSV2Context * s)
static av_cold int flashsv2_encode_init(AVCodecContext * avctx)
static int new_key_frame(FlashSV2Context * s)
static int write_palette(FlashSV2Context * s, uint8_t * buf, int buf_size)
static int write_header(FlashSV2Context * s, uint8_t * buf, int buf_size)
static int write_block(Block * b, uint8_t * buf, int buf_size)
static int encode_zlib(Block * b, uint8_t * buf, unsigned long *buf_size, int comp)
static int encode_zlibprime(Block * b, Block * prime, uint8_t * buf,
int *buf_size, int comp)
static int encode_bgr(Block * b, const uint8_t * src, int stride)
static inline unsigned pixel_color15(const uint8_t * src)
static inline unsigned int chroma_diff(unsigned int c1, unsigned int c2)
static inline int pixel_color7_fast(Palette * palette, unsigned c15)
static int pixel_color7_slow(Palette * palette, unsigned color)
static inline unsigned pixel_bgr(const uint8_t * src)
static int write_pixel_15_7(Palette * palette, uint8_t * dest, const uint8_t * src,
int dist)
static int update_palette_index(Palette * palette)
static const unsigned int default_screen_video_v2_palette[128] = ;
static int generate_default_palette(Palette * palette)
static int generate_optimum_palette(Palette * palette, const uint8_t * image,
int width, int height, int stride)
static inline int encode_15_7_sl(Palette * palette, uint8_t * dest,
const uint8_t * src, int width, int dist)
static int encode_15_7(Palette * palette, Block * b, const uint8_t * src,
int stride, int dist)
static int encode_block(FlashSV2Context *s, Palette * palette, Block * b,
Block * prev, const uint8_t * src, int stride, int comp,
int dist, int keyframe)
static int compare_sl(FlashSV2Context * s, Block * b, const uint8_t * src,
uint8_t * frame, uint8_t * key, int y, int keyframe)
static int mark_all_blocks(FlashSV2Context * s, const uint8_t * src, int stride,
int keyframe)
static int encode_all_blocks(FlashSV2Context * s, int keyframe)
static int write_all_blocks(FlashSV2Context * s, uint8_t * buf,
int buf_size)
static int write_bitstream(FlashSV2Context * s, const uint8_t * src, int stride,
uint8_t * buf, int buf_size, int keyframe)
static void recommend_keyframe(FlashSV2Context * s, int *keyframe)
static const double block_size_fraction = 1.0 / 300;
static const double use15_7_threshold = 8192;
static const double color15_7_factor = 100;
static int optimum_block_width(FlashSV2Context * s)
static int optimum_block_height(FlashSV2Context * s)
static int optimum_use15_7(FlashSV2Context * s)
static int optimum_dist(FlashSV2Context * s)
static int reconfigure_at_keyframe(FlashSV2Context * s, const uint8_t * image,
int stride)
static int flashsv2_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *p, int *got_packet)
static av_cold int flashsv2_encode_end(AVCodecContext * avctx)
AVCodec ff_flashsv2_encoder = ;
