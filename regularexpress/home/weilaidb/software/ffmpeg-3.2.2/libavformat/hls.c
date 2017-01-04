#define INITIAL_BUFFER_SIZE 32768
#define MAX_FIELD_LEN 64
#define MAX_CHARACTERISTICS_LEN 512
#define MPEG_TIME_BASE 90000
#define MPEG_TIME_BASE_Q (AVRational)
enum KeyType ;
struct segment ;
struct rendition;
enum PlaylistType ;
struct playlist ;
struct rendition ;
struct variant ;
typedef struct HLSContext  HLSContext;
static int read_chomp_line(AVIOContext *s, char *buf, int maxlen)
static void free_segment_list(struct playlist *pls)
static void free_init_section_list(struct playlist *pls)
static void free_playlist_list(HLSContext *c)
static void free_variant_list(HLSContext *c)
static void free_rendition_list(HLSContext *c)
static void reset_packet(AVPacket *pkt)
static struct playlist *new_playlist(HLSContext *c, const char *url,
const char *base)
struct variant_info ;
static struct variant *new_variant(HLSContext *c, struct variant_info *info,
const char *url, const char *base)
static void handle_variant_args(struct variant_info *info, const char *key,
int key_len, char **dest, int *dest_len)
struct key_info ;
static void handle_key_args(struct key_info *info, const char *key,
int key_len, char **dest, int *dest_len)
struct init_section_info ;
static struct segment *new_init_section(struct playlist *pls,
struct init_section_info *info,
const char *url_base)
static void handle_init_section_args(struct init_section_info *info, const char *key,
int key_len, char **dest, int *dest_len)
struct rendition_info ;
static struct rendition *new_rendition(HLSContext *c, struct rendition_info *info,
const char *url_base)
static void handle_rendition_args(struct rendition_info *info, const char *key,
int key_len, char **dest, int *dest_len)
static int ensure_playlist(HLSContext *c, struct playlist **pls, const char *url)
static void update_options(char **dest, const char *name, void *src)
static int open_url(AVFormatContext *s, AVIOContext **pb, const char *url,
AVDictionary *opts, AVDictionary *opts2, int *is_http)
static int parse_playlist(HLSContext *c, const char *url,
struct playlist *pls, AVIOContext *in)
static struct segment *current_segment(struct playlist *pls)
enum ReadFromURLMode ;
static int read_from_url(struct playlist *pls, struct segment *seg,
uint8_t *buf, int buf_size,
enum ReadFromURLMode mode)
static void parse_id3(AVFormatContext *s, AVIOContext *pb,
AVDictionary **metadata, int64_t *dts,
ID3v2ExtraMetaAPIC **apic, ID3v2ExtraMeta **extra_meta)
static int id3_has_changed_values(struct playlist *pls, AVDictionary *metadata,
ID3v2ExtraMetaAPIC *apic)
static void handle_id3(AVIOContext *pb, struct playlist *pls)
static void intercept_id3(struct playlist *pls, uint8_t *buf,
int buf_size, int *len)
static int open_input(HLSContext *c, struct playlist *pls, struct segment *seg)
static int update_init_section(struct playlist *pls, struct segment *seg)
static int64_t default_reload_interval(struct playlist *pls)
static int read_data(void *opaque, uint8_t *buf, int buf_size)
static void add_renditions_to_variant(HLSContext *c, struct variant *var,
enum AVMediaType type, const char *group_id)
static void add_metadata_from_renditions(AVFormatContext *s, struct playlist *pls,
enum AVMediaType type)
static int find_timestamp_in_playlist(HLSContext *c, struct playlist *pls,
int64_t timestamp, int *seq_no)
static int select_cur_seq_no(HLSContext *c, struct playlist *pls)
static int save_avio_options(AVFormatContext *s)
static int nested_io_open(AVFormatContext *s, AVIOContext **pb, const char *url,
int flags, AVDictionary **opts)
static void add_stream_to_programs(AVFormatContext *s, struct playlist *pls, AVStream *stream)
static int set_stream_info_from_input_stream(AVStream *st, struct playlist *pls, AVStream *ist)
static int update_streams_from_subdemuxer(AVFormatContext *s, struct playlist *pls)
static void update_noheader_flag(AVFormatContext *s)
static int hls_read_header(AVFormatContext *s)
static int recheck_discard_flags(AVFormatContext *s, int first)
static void fill_timing_for_id3_timestamped_stream(struct playlist *pls)
static AVRational get_timebase(struct playlist *pls)
static int compare_ts_with_wrapdetect(int64_t ts_a, struct playlist *pls_a,
int64_t ts_b, struct playlist *pls_b)
static int hls_read_packet(AVFormatContext *s, AVPacket *pkt)
static int hls_close(AVFormatContext *s)
static int hls_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static int hls_probe(AVProbeData *p)
#define OFFSET(x) offsetof(HLSContext, x)
#define FLAGS AV_OPT_FLAG_DECODING_PARAM
static const AVOption hls_options[] = ;
static const AVClass hls_class = ;
AVInputFormat ff_hls_demuxer = ;
