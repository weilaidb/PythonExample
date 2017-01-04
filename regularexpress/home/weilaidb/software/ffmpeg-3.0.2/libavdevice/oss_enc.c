#if HAVE_SOUNDCARD_H
#if HAVE_UNISTD_H
static int audio_write_header(AVFormatContext *s1)
static int audio_write_packet(AVFormatContext *s1, AVPacket *pkt)
static int audio_write_trailer(AVFormatContext *s1)
static const AVClass oss_muxer_class = ;
AVOutputFormat ff_oss_muxer = ;
