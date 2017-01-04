#define RPL_SIGNATURE "ARMovie\x0A"
#define RPL_SIGNATURE_SIZE 8
#define RPL_LINE_LENGTH 256
static int rpl_probe(AVProbeData *p)
typedef struct RPLContext  RPLContext;
static int read_line(AVIOContext * pb, char* line, int bufsize)
static int32_t read_int(const char* line, const char** endptr, int* error)
static int32_t read_line_and_int(AVIOContext * pb, int* error)
static AVRational read_fps(const char* line, int* error)
static int rpl_read_header(AVFormatContext *s)
static int rpl_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_rpl_demuxer = ;
