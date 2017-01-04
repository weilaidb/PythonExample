#define DVBSUB_PAGE_SEGMENT     0x10
#define DVBSUB_REGION_SEGMENT   0x11
#define DVBSUB_CLUT_SEGMENT     0x12
#define DVBSUB_OBJECT_SEGMENT   0x13
#define DVBSUB_DISPLAYDEFINITION_SEGMENT 0x14
#define DVBSUB_DISPLAY_SEGMENT  0x80
#define cm (ff_crop_tab + MAX_NEG_CROP)
static void png_save2(const char *filename, uint32_t *bitmap, int w, int h)
#define RGBA(r,g,b,a) (((unsigned)(a) << 24) | ((r) << 16) | ((g) << 8) | (b))
typedef struct DVBSubCLUT  DVBSubCLUT;
static DVBSubCLUT default_clut;
typedef struct DVBSubObjectDisplay  DVBSubObjectDisplay;
typedef struct DVBSubObject  DVBSubObject;
typedef struct DVBSubRegionDisplay  DVBSubRegionDisplay;
typedef struct DVBSubRegion  DVBSubRegion;
typedef struct DVBSubDisplayDefinition  DVBSubDisplayDefinition;
typedef struct DVBSubContext  DVBSubContext;
static DVBSubObject* get_object(DVBSubContext *ctx, int object_id)
static DVBSubCLUT* get_clut(DVBSubContext *ctx, int clut_id)
static DVBSubRegion* get_region(DVBSubContext *ctx, int region_id)
static void delete_region_display_list(DVBSubContext *ctx, DVBSubRegion *region)
static void delete_cluts(DVBSubContext *ctx)
static void delete_objects(DVBSubContext *ctx)
static void delete_regions(DVBSubContext *ctx)
static av_cold int dvbsub_init_decoder(AVCodecContext *avctx)
static av_cold int dvbsub_close_decoder(AVCodecContext *avctx)
static int dvbsub_read_2bit_string(AVCodecContext *avctx,
uint8_t *destbuf, int dbuf_len,
const uint8_t **srcbuf, int buf_size,
int non_mod, uint8_t *map_table, int x_pos)
static int dvbsub_read_4bit_string(AVCodecContext *avctx, uint8_t *destbuf, int dbuf_len,
const uint8_t **srcbuf, int buf_size,
int non_mod, uint8_t *map_table, int x_pos)
static int dvbsub_read_8bit_string(AVCodecContext *avctx,
uint8_t *destbuf, int dbuf_len,
const uint8_t **srcbuf, int buf_size,
int non_mod, uint8_t *map_table, int x_pos)
static void compute_default_clut(AVSubtitleRect *rect, int w, int h)
static int save_subtitle_set(AVCodecContext *avctx, AVSubtitle *sub, int *got_output)
static void dvbsub_parse_pixel_data_block(AVCodecContext *avctx, DVBSubObjectDisplay *display,
const uint8_t *buf, int buf_size, int top_bottom, int non_mod)
static int dvbsub_parse_object_segment(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int dvbsub_parse_clut_segment(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int dvbsub_parse_region_segment(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int dvbsub_parse_page_segment(AVCodecContext *avctx,
const uint8_t *buf, int buf_size, AVSubtitle *sub, int *got_output)
static int save_display_set(DVBSubContext *ctx)
static int dvbsub_parse_display_definition_segment(AVCodecContext *avctx,
const uint8_t *buf,
int buf_size)
static int dvbsub_display_end_segment(AVCodecContext *avctx, const uint8_t *buf,
int buf_size, AVSubtitle *sub,int *got_output)
static int dvbsub_decode(AVCodecContext *avctx,
void *data, int *data_size,
AVPacket *avpkt)
#define DS AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_SUBTITLE_PARAM
static const AVOption options[] = ;
static const AVClass dvbsubdec_class = ;
AVCodec ff_dvbsub_decoder = ;
