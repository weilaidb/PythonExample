typedef struct Page  Page;
typedef struct AnmDemuxContext  AnmDemuxContext;
#define LPF_TAG  MKTAG('L','P','F',' ')
#define ANIM_TAG MKTAG('A','N','I','M')
static int probe(AVProbeData *p)
static int find_record(const AnmDemuxContext *anm, int record)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_anm_demuxer = ;
