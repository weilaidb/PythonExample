#define     RIFF_TAG MKTAG('R', 'I', 'F', 'F')
#define  FOURXMV_TAG MKTAG('4', 'X', 'M', 'V')
#define     LIST_TAG MKTAG('L', 'I', 'S', 'T')
#define     HEAD_TAG MKTAG('H', 'E', 'A', 'D')
#define     TRK__TAG MKTAG('T', 'R', 'K', '_')
#define     MOVI_TAG MKTAG('M', 'O', 'V', 'I')
#define     VTRK_TAG MKTAG('V', 'T', 'R', 'K')
#define     STRK_TAG MKTAG('S', 'T', 'R', 'K')
#define     std__TAG MKTAG('s', 't', 'd', '_')
#define     name_TAG MKTAG('n', 'a', 'm', 'e')
#define     vtrk_TAG MKTAG('v', 't', 'r', 'k')
#define     strk_TAG MKTAG('s', 't', 'r', 'k')
#define     ifrm_TAG MKTAG('i', 'f', 'r', 'm')
#define     pfrm_TAG MKTAG('p', 'f', 'r', 'm')
#define     cfrm_TAG MKTAG('c', 'f', 'r', 'm')
#define     ifr2_TAG MKTAG('i', 'f', 'r', '2')
#define     pfr2_TAG MKTAG('p', 'f', 'r', '2')
#define     cfr2_TAG MKTAG('c', 'f', 'r', '2')
#define     snd__TAG MKTAG('s', 'n', 'd', '_')
#define vtrk_SIZE 0x44
#define strk_SIZE 0x28
#define GET_LIST_HEADER() \
fourcc_tag = avio_rl32(pb); \
size       = avio_rl32(pb); \
if (fourcc_tag != LIST_TAG) \
return AVERROR_INVALIDDATA; \
fourcc_tag = avio_rl32(pb);
typedef struct AudioTrack  AudioTrack;
typedef struct FourxmDemuxContext  FourxmDemuxContext;
static int fourxm_probe(AVProbeData *p)
static int parse_vtrk(AVFormatContext *s,
FourxmDemuxContext *fourxm, uint8_t *buf, int size,
int left)
static int parse_strk(AVFormatContext *s,
FourxmDemuxContext *fourxm, uint8_t *buf, int size,
int left)
static int fourxm_read_header(AVFormatContext *s)
static int fourxm_read_packet(AVFormatContext *s,
AVPacket *pkt)
static int fourxm_read_close(AVFormatContext *s)
AVInputFormat ff_fourxm_demuxer = ;
