#if CONFIG_ZLIB
static const AVCodecTag swf_audio_codec_tags[] = ;
static int get_swf_tag(AVIOContext *pb, int *len_ptr)
static int swf_probe(AVProbeData *p)
#if CONFIG_ZLIB
static int zlib_refill(void *opaque, uint8_t *buf, int buf_size)
static int swf_read_header(AVFormatContext *s)
static AVStream *create_new_audio_stream(AVFormatContext *s, int id, int info)
static int swf_read_packet(AVFormatContext *s, AVPacket *pkt)
#if CONFIG_ZLIB
static av_cold int swf_read_close(AVFormatContext *avctx)
AVInputFormat ff_swf_demuxer = ;
