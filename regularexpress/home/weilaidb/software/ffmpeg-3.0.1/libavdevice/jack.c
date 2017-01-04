#define FIFO_PACKETS_NUM 16
typedef struct JackData  JackData;
static int process_callback(jack_nframes_t nframes, void *arg)
static void shutdown_callback(void *arg)
static int xrun_callback(void *arg)
static int supply_new_packets(JackData *self, AVFormatContext *context)
static int start_jack(AVFormatContext *context)
static void free_pkt_fifo(AVFifoBuffer **fifo)
static void stop_jack(JackData *self)
static int audio_read_header(AVFormatContext *context)
static int audio_read_packet(AVFormatContext *context, AVPacket *pkt)
static int audio_read_close(AVFormatContext *context)
#define OFFSET(x) offsetof(JackData, x)
static const AVOption options[] = ;
static const AVClass jack_indev_class = ;
AVInputFormat ff_jack_demuxer = ;
