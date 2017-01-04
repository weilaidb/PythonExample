enum SIFFTags ;
enum VBFlags ;
typedef struct SIFFContext  SIFFContext;
static int siff_probe(AVProbeData *p)
static int create_audio_stream(AVFormatContext *s, SIFFContext *c)
static int siff_parse_vbv1(AVFormatContext *s, SIFFContext *c, AVIOContext *pb)
static int siff_parse_soun(AVFormatContext *s, SIFFContext *c, AVIOContext *pb)
static int siff_read_header(AVFormatContext *s)
static int siff_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_siff_demuxer = ;
