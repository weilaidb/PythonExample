#define AUPR_HDR 0x415550522D484452
#define AUPRINFO 0x41555052494E464F
#define BITSHVTB 0x4249545348565442
#define BLACKOUT 0x424C41434B4F5554
#define BRANCHPT 0x4252414E43485054
#define BUILDVER 0x4255494C44564552
#define CORESSMD 0x434F524553534D44
#define DTSHDHDR 0x4454534844484452
#define EXTSS_MD 0x45585453535f4d44
#define FILEINFO 0x46494C45494E464F
#define NAVI_TBL 0x4E4156492D54424C
#define STRMDATA 0x5354524D44415441
#define TIMECODE 0x54494D45434F4445
typedef struct DTSHDDemuxContext  DTSHDDemuxContext;
static int dtshd_probe(AVProbeData *p)
static int dtshd_read_header(AVFormatContext *s)
static int raw_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_dtshd_demuxer = ;
