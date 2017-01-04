typedef struct AVIStream  AVIStream;
typedef struct AVIContext  AVIContext;
static const AVOption options[] = ;
static const AVClass demuxer_class = ;
static const char avi_headers[][8] = ;
static const AVMetadataConv avi_metadata_conv[] = ;
static int avi_load_index(AVFormatContext *s);
static int guess_ni_flag(AVFormatContext *s);
#define print_tag(str, tag, size)                        \
av_log(NULL, AV_LOG_TRACE, "pos:%"PRIX64" %s: tag=%c%c%c%c size=0x%x\n", \
avio_tell(pb), str, tag & 0xff,              \
(tag >> 8) & 0xff,                           \
(tag >> 16) & 0xff,                          \
(tag >> 24) & 0xff,                          \
size)
static inline int get_duration(AVIStream *ast, int len)
static int get_riff(AVFormatContext *s, AVIOContext *pb)
static int read_braindead_odml_indx(AVFormatContext *s, int frame_num)
static void clean_index(AVFormatContext *s)
static int avi_read_tag(AVFormatContext *s, AVStream *st, uint32_t tag,
uint32_t size)
static const char months[12][4] = ;
static void avi_metadata_creation_time(AVDictionary **metadata, char *date)
static void avi_read_nikon(AVFormatContext *s, uint64_t end)
static int avi_extract_stream_metadata(AVFormatContext *s, AVStream *st)
static int calculate_bitrate(AVFormatContext *s)
static int avi_read_header(AVFormatContext *s)
static int read_gab2_sub(AVFormatContext *s, AVStream *st, AVPacket *pkt)
static AVStream *get_subtitle_pkt(AVFormatContext *s, AVStream *next_st,
AVPacket *pkt)
static int get_stream_idx(const unsigned *d)
static int avi_sync(AVFormatContext *s, int exit_early)
static int ni_prepare_read(AVFormatContext *s)
static int avi_read_packet(AVFormatContext *s, AVPacket *pkt)
static int avi_read_idx1(AVFormatContext *s, int size)
static int check_stream_max_drift(AVFormatContext *s)
static int guess_ni_flag(AVFormatContext *s)
static int avi_load_index(AVFormatContext *s)
static void seek_subtitle(AVStream *st, AVStream *st2, int64_t timestamp)
static int avi_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static int avi_read_close(AVFormatContext *s)
static int avi_probe(AVProbeData *p)
AVInputFormat ff_avi_demuxer = ;
