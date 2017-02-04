MKTAG
MKTAG
#define RAW_CD_SECTOR_SIZE      2352
#define RAW_CD_SECTOR_DATA_SIZE 2304
#define VIDEO_DATA_CHUNK_SIZE   0x7E0
#define VIDEO_DATA_HEADER_SIZE  0x38
#define RIFF_HEADER_SIZE        0x2C
#define CDXA_TYPE_MASK     0x0E
#define CDXA_TYPE_DATA     0x08
#define CDXA_TYPE_AUDIO    0x04
#define CDXA_TYPE_VIDEO    0x02
#define STR_MAGIC (0x80010160)
typedef struct StrChannel  StrChannel;
typedef struct StrDemuxContext  StrDemuxContext;
static const uint8_t sync_header[12] = ;
str_probe
str_read_header
str_read_packet
str_read_close
AVInputFormat ff_str_demuxer = ;
