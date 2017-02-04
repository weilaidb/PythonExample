#define AVFORMAT_RAWDEC_H
typedef struct FFRawVideoDemuxerContext  FFRawVideoDemuxerContext;
extern const AVOption ff_rawvideo_options[];
ff_raw_read_partial_packet;
ff_raw_audio_read_header;
ff_raw_video_read_header;
ff_raw_data_read_header;
FF_RAWVIDEO_DEMUXER_CLASS\
static const AVClass name ## _demuxer_class = ;
FF_DEF_RAWVIDEO_DEMUXER2\
FF_RAWVIDEO_DEMUXER_CLASS(shortname)\
AVInputFormat ff_ ## shortname ## _demuxer = ;
FF_DEF_RAWVIDEO_DEMUXER\
FF_DEF_RAWVIDEO_DEMUXER2(shortname, longname, probe, ext, id, AVFMT_GENERIC_INDEX)
FF_RAWSUB_DEMUXER_CLASS\
static const AVClass name ## _demuxer_class = ;
FF_DEF_RAWSUB_DEMUXER\
FF_RAWVIDEO_DEMUXER_CLASS(shortname)\
AVInputFormat ff_ ## shortname ## _demuxer = ;
