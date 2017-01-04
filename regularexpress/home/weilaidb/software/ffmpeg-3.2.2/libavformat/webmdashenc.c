typedef struct AdaptationSet  AdaptationSet;
typedef struct WebMDashMuxContext  WebMDashMuxContext;
static const char *get_codec_name(int codec_id)
static double get_duration(AVFormatContext *s)
static int write_header(AVFormatContext *s)
static void write_footer(AVFormatContext *s)
static int subsegment_alignment(AVFormatContext *s, AdaptationSet *as)
static int bitstream_switching(AVFormatContext *s, AdaptationSet *as)
static int write_representation(AVFormatContext *s, AVStream *stream, char *id,
int output_width, int output_height,
int output_sample_rate)
static int check_matching_width(AVFormatContext *s, AdaptationSet *as)
static int check_matching_height(AVFormatContext *s, AdaptationSet *as)
static int check_matching_sample_rate(AVFormatContext *s, AdaptationSet *as)
static void free_adaptation_sets(AVFormatContext *s)
static int parse_filename(char *filename, char **representation_id,
char **initialization_pattern, char **media_pattern)
static int write_adaptation_set(AVFormatContext *s, int as_index)
static int to_integer(char *p, int len)
static int parse_adaptation_sets(AVFormatContext *s)
static int webm_dash_manifest_write_header(AVFormatContext *s)
static int webm_dash_manifest_write_packet(AVFormatContext *s, AVPacket *pkt)
static int webm_dash_manifest_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(WebMDashMuxContext, x)
static const AVOption options[] = ;
#if CONFIG_WEBM_DASH_MANIFEST_MUXER
static const AVClass webm_dash_class = ;
AVOutputFormat ff_webm_dash_manifest_muxer = ;
