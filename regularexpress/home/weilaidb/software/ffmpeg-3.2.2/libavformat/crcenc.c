typedef struct CRCState  CRCState;
static int crc_write_header(struct AVFormatContext *s)
static int crc_write_packet(struct AVFormatContext *s, AVPacket *pkt)
static int crc_write_trailer(struct AVFormatContext *s)
AVOutputFormat ff_crc_muxer = ;
