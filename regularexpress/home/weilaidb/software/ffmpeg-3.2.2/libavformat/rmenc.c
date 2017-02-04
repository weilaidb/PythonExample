typedef struct StreamInfo  StreamInfo;
typedef struct RMMuxContext  RMMuxContext;
#define BUFFER_DURATION 0
#define MAX_HEADER_SIZE (7 + 4 + 12)
#define MAX_PACKET_SIZE (UINT16_MAX - MAX_HEADER_SIZE)
put_str
put_str8
rv10_write_header
write_packet_header
rm_write_header
rm_write_audio
rm_write_video
rm_write_packet
rm_write_trailer
AVOutputFormat ff_rm_muxer = ;
