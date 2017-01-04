#if HAVE_SOUNDCARD_H
#if HAVE_UNISTD_H
static int audio_read_header(AVFormatContext *s1)
static int audio_read_packet(AVFormatContext *s1, AVPacket *pkt)
static int audio_read_close(AVFormatContext *s1)
static const AVOption options[] = ;
static const AVClass oss_demuxer_class = ;
AVInputFormat ff_oss_demuxer = ;
