#define MPC_FRAMESIZE  1152
#define DELAY_FRAMES   32
static const int mpc_rate[4] = ;
typedef struct MPCFrame MPCFrame;
typedef struct MPCContext  MPCContext;
static int mpc_probe(AVProbeData *p)
static int mpc_read_header(AVFormatContext *s)
static int mpc_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mpc_read_close(AVFormatContext *s)
static int mpc_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_mpc_demuxer = ;
