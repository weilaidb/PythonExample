#define LINE_DATA_SIZE 9
typedef struct ReadVitcContext  ReadVitcContext;
#define OFFSET(x) offsetof(ReadVitcContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption readvitc_options[] = ;
AVFILTER_DEFINE_CLASS(readvitc);
static uint8_t get_vitc_crc( uint8_t *line )
static inline uint8_t get_pit_avg3( uint8_t *line, int i )
static int read_vitc_line( ReadVitcContext *ctx, uint8_t *src, int line_size, int width, int height )
static unsigned bcd2uint(uint8_t high, uint8_t low)
static char *make_vitc_tc_string(char *buf, uint8_t *line)
static av_cold int init(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_readvitc = ;
