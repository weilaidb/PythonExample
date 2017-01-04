#define RGBA(r,g,b,a) (((unsigned)(a) << 24) | ((r) << 16) | ((g) << 8) | (b))
#define MAX_EPOCH_PALETTES 8
#define MAX_EPOCH_OBJECTS  64
#define MAX_OBJECT_REFS    2
enum SegmentType ;
typedef struct PGSSubObjectRef  PGSSubObjectRef;
typedef struct PGSSubPresentation  PGSSubPresentation;
typedef struct PGSSubObject  PGSSubObject;
typedef struct PGSSubObjects  PGSSubObjects;
typedef struct PGSSubPalette  PGSSubPalette;
typedef struct PGSSubPalettes  PGSSubPalettes;
typedef struct PGSSubContext  PGSSubContext;
static void flush_cache(AVCodecContext *avctx)
static PGSSubObject * find_object(int id, PGSSubObjects *objects)
static PGSSubPalette * find_palette(int id, PGSSubPalettes *palettes)
static av_cold int init_decoder(AVCodecContext *avctx)
static av_cold int close_decoder(AVCodecContext *avctx)
static int decode_rle(AVCodecContext *avctx, AVSubtitleRect *rect,
const uint8_t *buf, unsigned int buf_size)
static int parse_object_segment(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int parse_palette_segment(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int parse_presentation_segment(AVCodecContext *avctx,
const uint8_t *buf, int buf_size,
int64_t pts)
static int display_end_segment(AVCodecContext *avctx, void *data,
const uint8_t *buf, int buf_size)
static int decode(AVCodecContext *avctx, void *data, int *data_size,
AVPacket *avpkt)
#define OFFSET(x) offsetof(PGSSubContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass pgsdec_class = ;
AVCodec ff_pgssub_decoder = ;
