struct dv1394_data ;
static int dv1394_reset(struct dv1394_data *dv)
static int dv1394_start(struct dv1394_data *dv)
static int dv1394_read_header(AVFormatContext * context)
static int dv1394_read_packet(AVFormatContext *context, AVPacket *pkt)
static int dv1394_close(AVFormatContext * context)
static const AVOption options[] = ;
static const AVClass dv1394_class = ;
AVInputFormat ff_dv1394_demuxer = ;
