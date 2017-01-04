#define VMD_HEADER_SIZE 0x0330
#define BYTES_PER_FRAME_RECORD 16
typedef struct vmd_frame  vmd_frame;
typedef struct VmdDemuxContext  VmdDemuxContext;
static int vmd_probe(AVProbeData *p)
static int vmd_read_header(AVFormatContext *s)
static int vmd_read_packet(AVFormatContext *s,
AVPacket *pkt)
static int vmd_read_close(AVFormatContext *s)
AVInputFormat ff_vmd_demuxer = ;
