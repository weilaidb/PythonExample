#define AVFORMAT_RAWDEC_H
typedef struct FFRawVideoDemuxerContext  FFRawVideoDemuxerContext;
extern const AVOption ff_rawvideo_options[];
int ff_raw_read_partial_packet(AVFormatContext *s, AVPacket *pkt);
int ff_raw_audio_read_header(AVFormatContext *s);
int ff_raw_video_read_header(AVFormatContext *s);
int ff_raw_data_read_header(AVFormatContext *s);
#define FF_RAWVIDEO_DEMUXER_CLASS(name)\
static const AVClass name ## _demuxer_class = ;
#define FF_DEF_RAWVIDEO_DEMUXER2(shortname, longname, probe, ext, id, flag)\
FF_RAWVIDEO_DEMUXER_CLASS(shortname)\
AVInputFormat ff_ ## shortname ## _demuxer = ;
#define FF_DEF_RAWVIDEO_DEMUXER(shortname, longname, probe, ext, id)\
FF_DEF_RAWVIDEO_DEMUXER2(shortname, longname, probe, ext, id, AVFMT_GENERIC_INDEX)
#define FF_RAWSUB_DEMUXER_CLASS(name)\
static const AVClass name ## _demuxer_class = ;
#define FF_DEF_RAWSUB_DEMUXER(shortname, longname, probe, ext, id, flag)\
FF_RAWVIDEO_DEMUXER_CLASS(shortname)\
AVInputFormat ff_ ## shortname ## _demuxer = ;
