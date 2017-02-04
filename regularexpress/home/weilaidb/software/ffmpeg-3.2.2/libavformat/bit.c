#define MAX_FRAME_SIZE 10
#define SYNC_WORD  0x6b21
#define BIT_0      0x7f
#define BIT_1      0x81
probe
read_header
read_packet
AVInputFormat ff_bit_demuxer = ;
#if CONFIG_MUXERS
write_header
write_packet
AVOutputFormat ff_bit_muxer = ;
