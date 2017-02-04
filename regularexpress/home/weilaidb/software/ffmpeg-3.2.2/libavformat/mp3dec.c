#define XING_FLAG_FRAMES 0x01
#define XING_FLAG_SIZE   0x02
#define XING_FLAG_TOC    0x04
#define XING_FLAC_QSCALE 0x08
#define XING_TOC_COUNT 100
#define SAME_HEADER_MASK \
(0xffe00000 | (3 << 17) | (3 << 10) | (3 << 19))
typedef struct  MP3DecContext;
enum CheckRet ;
check;
mp3_read_probe
read_xing_toc
mp3_parse_info_tag
mp3_parse_vbri_tag
mp3_parse_vbr_tags
mp3_read_header
#define MP3_PACKET_SIZE 1024
mp3_read_packet
#define SEEK_WINDOW 4096
check
mp3_sync
mp3_seek
static const AVOption options[] = ;
static const AVClass demuxer_class = ;
AVInputFormat ff_mp3_demuxer = ;
