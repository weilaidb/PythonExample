typedef enum  SlaveFailurePolicy;
#define DEFAULT_SLAVE_FAILURE_POLICY ON_SLAVE_FAILURE_ABORT
typedef struct  TeeSlave;
typedef struct TeeContext  TeeContext;
static const char *const slave_delim     = "|";
static const char *const slave_bsfs_spec_sep = "/";
static const char *const slave_select_sep = ",";
static const AVClass tee_muxer_class = ;
static inline int parse_slave_failure_policy_option(const char *opt, TeeSlave *tee_slave)
static int close_slave(TeeSlave *tee_slave)
static void close_slaves(AVFormatContext *avf)
static int open_slave(AVFormatContext *avf, char *slave, TeeSlave *tee_slave)
static void log_slave(TeeSlave *slave, void *log_ctx, int log_level)
static int tee_process_slave_failure(AVFormatContext *avf, unsigned slave_idx, int err_n)
static int tee_write_header(AVFormatContext *avf)
static int tee_write_trailer(AVFormatContext *avf)
static int tee_write_packet(AVFormatContext *avf, AVPacket *pkt)
AVOutputFormat ff_tee_muxer = ;
