#define MAX_SLAVES 16
typedef struct  TeeSlave;
typedef struct TeeContext  TeeContext;
static const char *const slave_delim     = "|";
static const char *const slave_opt_open  = "[";
static const char *const slave_opt_close = "]";
static const char *const slave_opt_delim = ":]";
static const char *const slave_bsfs_spec_sep = "/";
static const char *const slave_select_sep = ",";
static const AVClass tee_muxer_class = ;
static int parse_slave_options(void *log, char *slave,
AVDictionary **options, char **filename)
static int parse_bsfs(void *log_ctx, const char *bsfs_spec,
AVBitStreamFilterContext **bsfs)
static int open_slave(AVFormatContext *avf, char *slave, TeeSlave *tee_slave)
static void close_slaves(AVFormatContext *avf)
static void log_slave(TeeSlave *slave, void *log_ctx, int log_level)
static int tee_write_header(AVFormatContext *avf)
static int tee_write_trailer(AVFormatContext *avf)
static int tee_write_packet(AVFormatContext *avf, AVPacket *pkt)
AVOutputFormat ff_tee_muxer = ;
