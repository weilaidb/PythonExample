typedef struct voc_enc_context  VocEncContext;
static int voc_write_header(AVFormatContext *s)
static int voc_write_packet(AVFormatContext *s, AVPacket *pkt)
static int voc_write_trailer(AVFormatContext *s)
AVOutputFormat ff_voc_muxer = ;
