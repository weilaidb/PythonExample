typedef struct CinFileHeader  CinFileHeader;
typedef struct CinFrameHeader  CinFrameHeader;
typedef struct CinDemuxContext  CinDemuxContext;
static int cin_probe(AVProbeData *p)
static int cin_read_file_header(CinDemuxContext *cin, AVIOContext *pb)
static int cin_read_header(AVFormatContext *s)
static int cin_read_frame_header(CinDemuxContext *cin, AVIOContext *pb)
static int cin_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_dsicin_demuxer = ;
