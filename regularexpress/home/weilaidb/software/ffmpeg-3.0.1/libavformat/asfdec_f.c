typedef struct ASFPayload  ASFPayload;
typedef struct ASFStream  ASFStream;
typedef struct ASFContext  ASFContext;
static const AVOption options[] = ;
static const AVClass asf_class = ;
#undef NDEBUG
#define ASF_MAX_STREAMS 127
#define FRAME_HEADER_SIZE 6
static const ff_asf_guid stream_bitrate_guid =
static int get_value(AVIOContext *pb, int type, int type2_size)
static int asf_read_picture(AVFormatContext *s, int len)
static void get_id3_tag(AVFormatContext *s, int len)
static void get_tag(AVFormatContext *s, const char *key, int type, int len, int type2_size)
static int asf_read_file_properties(AVFormatContext *s, int64_t size)
static int asf_read_stream_properties(AVFormatContext *s, int64_t size)
static int asf_read_ext_stream_properties(AVFormatContext *s, int64_t size)
static int asf_read_content_desc(AVFormatContext *s, int64_t size)
static int asf_read_ext_content_desc(AVFormatContext *s, int64_t size)
static int asf_read_language_list(AVFormatContext *s, int64_t size)
static int asf_read_metadata(AVFormatContext *s, int64_t size)
static int asf_read_marker(AVFormatContext *s, int64_t size)
static int asf_read_header(AVFormatContext *s)
#define DO_2BITS(bits, var, defval)             \
switch (bits & 3)
static int asf_get_packet(AVFormatContext *s, AVIOContext *pb)
static int asf_read_frame_header(AVFormatContext *s, AVIOContext *pb)
static int asf_parse_packet(AVFormatContext *s, AVIOContext *pb, AVPacket *pkt)
static int asf_read_packet(AVFormatContext *s, AVPacket *pkt)
static void asf_reset_header(AVFormatContext *s)
static void skip_to_key(AVFormatContext *s)
static int asf_read_close(AVFormatContext *s)
static int64_t asf_read_pts(AVFormatContext *s, int stream_index,
int64_t *ppos, int64_t pos_limit)
static int asf_build_simple_index(AVFormatContext *s, int stream_index)
static int asf_read_seek(AVFormatContext *s, int stream_index,
int64_t pts, int flags)
AVInputFormat ff_asf_demuxer = ;
