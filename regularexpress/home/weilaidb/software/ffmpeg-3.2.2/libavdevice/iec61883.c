#define THREADS HAVE_PTHREADS
#if THREADS
#define MOTDCT_SPEC_ID      0x00005068
#define IEC61883_AUTO       0
#define IEC61883_DV         1
#define IEC61883_HDV        2
typedef struct DVPacket  DVPacket;
struct iec61883_data ;
static int iec61883_callback(unsigned char *data, int length,
int complete, void *callback_data)
static void *iec61883_receive_task(void *opaque)
static int iec61883_parse_queue_dv(struct iec61883_data *dv, AVPacket *pkt)
static int iec61883_parse_queue_hdv(struct iec61883_data *dv, AVPacket *pkt)
static int iec61883_read_header(AVFormatContext *context)
static int iec61883_read_packet(AVFormatContext *context, AVPacket *pkt)
static int iec61883_close(AVFormatContext *context)
static const AVOption options[] = ;
static const AVClass iec61883_class = ;
AVInputFormat ff_iec61883_demuxer = ;
