#define APE_MIN_VERSION 3800
#define APE_MAX_VERSION 3990
#define MAC_FORMAT_FLAG_8_BIT                 1
#define MAC_FORMAT_FLAG_CRC                   2
#define MAC_FORMAT_FLAG_HAS_PEAK_LEVEL        4
#define MAC_FORMAT_FLAG_24_BIT                8
#define MAC_FORMAT_FLAG_HAS_SEEK_ELEMENTS    16
#define MAC_FORMAT_FLAG_CREATE_WAV_HEADER    32
#define APE_EXTRADATA_SIZE 6
typedef struct APEFrame  APEFrame;
typedef struct APEContext  APEContext;
ape_probe
ape_dumpinfo
ape_read_header
ape_read_packet
ape_read_close
ape_read_seek
AVInputFormat ff_ape_demuxer = ;
