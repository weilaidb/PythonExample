MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
MKTAG
#define vtrk_SIZE 0x44
#define strk_SIZE 0x28
GET_LIST_HEADER \
fourcc_tag = avio_rl32(pb); \
size       = avio_rl32(pb); \
if (fourcc_tag != LIST_TAG) \
return AVERROR_INVALIDDATA; \
fourcc_tag = avio_rl32(pb);
typedef struct AudioTrack  AudioTrack;
typedef struct FourxmDemuxContext  FourxmDemuxContext;
fourxm_probe
parse_vtrk
parse_strk
fourxm_read_header
fourxm_read_packet
fourxm_read_close
AVInputFormat ff_fourxm_demuxer = ;
