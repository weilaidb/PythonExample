#define LXF_MAX_PACKET_HEADER_SIZE 256
#define LXF_HEADER_DATA_SIZE    120
#define LXF_IDENT
#define LXF_IDENT_LENGTH        8
#define LXF_SAMPLERATE          48000
static const AVCodecTag lxf_tags[] = ;
typedef struct LXFDemuxContext  LXFDemuxContext;
lxf_probe
check_checksum
lxf_sync
get_packet_header
lxf_read_header
lxf_read_packet
AVInputFormat ff_lxf_demuxer = ;
