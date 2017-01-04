typedef enum ConcatMatchMode  ConcatMatchMode;
typedef struct ConcatStream  ConcatStream;
typedef struct  ConcatFile;
typedef struct  ConcatContext;
static int concat_probe(AVProbeData *probe)
static char *get_keyword(uint8_t **cursor)
static int safe_filename(const char *f)
#define FAIL(retcode) do  while(0)
static int add_file(AVFormatContext *avf, char *filename, ConcatFile **rfile,
unsigned *nb_files_alloc)
static int copy_stream_props(AVStream *st, AVStream *source_st)
static int detect_stream_specific(AVFormatContext *avf, int idx)
static int match_streams_one_to_one(AVFormatContext *avf)
static int match_streams_exact_id(AVFormatContext *avf)
static int match_streams(AVFormatContext *avf)
static int open_file(AVFormatContext *avf, unsigned fileno)
static int concat_read_close(AVFormatContext *avf)
static int concat_read_header(AVFormatContext *avf)
static int open_next_file(AVFormatContext *avf)
static int filter_packet(AVFormatContext *avf, ConcatStream *cs, AVPacket *pkt)
static int packet_after_outpoint(ConcatContext *cat, AVPacket *pkt)
static int concat_read_packet(AVFormatContext *avf, AVPacket *pkt)
static void rescale_interval(AVRational tb_in, AVRational tb_out,
int64_t *min_ts, int64_t *ts, int64_t *max_ts)
static int try_seek(AVFormatContext *avf, int stream,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int real_seek(AVFormatContext *avf, int stream,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags, AVFormatContext *cur_avf)
static int concat_seek(AVFormatContext *avf, int stream,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
#define OFFSET(x) offsetof(ConcatContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass concat_class = ;
AVInputFormat ff_concat_demuxer = ;
