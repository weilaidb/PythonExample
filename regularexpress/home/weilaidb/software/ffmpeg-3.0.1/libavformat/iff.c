#define ID_8SVX       MKTAG('8','S','V','X')
#define ID_16SV       MKTAG('1','6','S','V')
#define ID_MAUD       MKTAG('M','A','U','D')
#define ID_MHDR       MKTAG('M','H','D','R')
#define ID_MDAT       MKTAG('M','D','A','T')
#define ID_VHDR       MKTAG('V','H','D','R')
#define ID_ATAK       MKTAG('A','T','A','K')
#define ID_RLSE       MKTAG('R','L','S','E')
#define ID_CHAN       MKTAG('C','H','A','N')
#define ID_PBM        MKTAG('P','B','M',' ')
#define ID_ILBM       MKTAG('I','L','B','M')
#define ID_BMHD       MKTAG('B','M','H','D')
#define ID_DGBL       MKTAG('D','G','B','L')
#define ID_CAMG       MKTAG('C','A','M','G')
#define ID_CMAP       MKTAG('C','M','A','P')
#define ID_ACBM       MKTAG('A','C','B','M')
#define ID_DEEP       MKTAG('D','E','E','P')
#define ID_RGB8       MKTAG('R','G','B','8')
#define ID_RGBN       MKTAG('R','G','B','N')
#define ID_DSD        MKTAG('D','S','D',' ')
#define ID_ANIM       MKTAG('A','N','I','M')
#define ID_FORM       MKTAG('F','O','R','M')
#define ID_FRM8       MKTAG('F','R','M','8')
#define ID_ANNO       MKTAG('A','N','N','O')
#define ID_AUTH       MKTAG('A','U','T','H')
#define ID_CHRS       MKTAG('C','H','R','S')
#define ID_COPYRIGHT  MKTAG('(','c',')',' ')
#define ID_CSET       MKTAG('C','S','E','T')
#define ID_FVER       MKTAG('F','V','E','R')
#define ID_NAME       MKTAG('N','A','M','E')
#define ID_TEXT       MKTAG('T','E','X','T')
#define ID_ABIT       MKTAG('A','B','I','T')
#define ID_BODY       MKTAG('B','O','D','Y')
#define ID_DBOD       MKTAG('D','B','O','D')
#define ID_DPEL       MKTAG('D','P','E','L')
#define ID_DLOC       MKTAG('D','L','O','C')
#define ID_TVDC       MKTAG('T','V','D','C')
#define LEFT    2
#define RIGHT   4
#define STEREO  6
#define IFF_EXTRA_VIDEO_SIZE 41
typedef enum  svx8_compression_type;
typedef struct IffDemuxContext  IffDemuxContext;
static int get_metadata(AVFormatContext *s,
const char *const tag,
const unsigned data_size)
static int iff_probe(AVProbeData *p)
static const AVCodecTag dsd_codec_tags[] = ;
#define DSD_SLFT MKTAG('S','L','F','T')
#define DSD_SRGT MKTAG('S','R','G','T')
#define DSD_MLFT MKTAG('M','L','F','T')
#define DSD_MRGT MKTAG('M','R','G','T')
#define DSD_C    MKTAG('C',' ',' ',' ')
#define DSD_LS   MKTAG('L','S',' ',' ')
#define DSD_RS   MKTAG('R','S',' ',' ')
#define DSD_LFE  MKTAG('L','F','E',' ')
static const uint32_t dsd_stereo[]  = ;
static const uint32_t dsd_5point0[] = ;
static const uint32_t dsd_5point1[] = ;
typedef struct  DSDLayoutDesc;
static const DSDLayoutDesc dsd_channel_layout[] = ;
static const uint64_t dsd_loudspeaker_config[] = ;
static const char * dsd_source_comment[] = ;
static const char * dsd_history_comment[] = ;
static int parse_dsd_diin(AVFormatContext *s, AVStream *st, uint64_t eof)
static int parse_dsd_prop(AVFormatContext *s, AVStream *st, uint64_t eof)
static const uint8_t deep_rgb24[] = ;
static const uint8_t deep_rgba[]  = ;
static const uint8_t deep_bgra[]  = ;
static const uint8_t deep_argb[]  = ;
static const uint8_t deep_abgr[]  = ;
static int iff_read_header(AVFormatContext *s)
static int iff_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_iff_demuxer = ;
