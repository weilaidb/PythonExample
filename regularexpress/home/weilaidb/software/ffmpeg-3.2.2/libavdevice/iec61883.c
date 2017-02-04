#define THREADS HAVE_PTHREADS
#if THREADS
#define MOTDCT_SPEC_ID      0x00005068
#define IEC61883_AUTO       0
#define IEC61883_DV         1
#define IEC61883_HDV        2
typedef struct DVPacket  DVPacket;
struct iec61883_data ;
iec61883_callback
*iec61883_receive_task
iec61883_parse_queue_dv
iec61883_parse_queue_hdv
iec61883_read_header
iec61883_read_packet
iec61883_close
static const AVOption options[] = ;
static const AVClass iec61883_class = ;
AVInputFormat ff_iec61883_demuxer = ;
