#define RAW_PACKET_SIZE 1024
ff_raw_read_partial_packet
ff_raw_audio_read_header
ff_raw_video_read_header
ff_raw_data_read_header
OFFSET offsetof(FFRawVideoDemuxerContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
const AVOption ff_rawvideo_options[] = ,
,
};
#if CONFIG_DATA_DEMUXER
AVInputFormat ff_data_demuxer = ;
#if CONFIG_MJPEG_DEMUXER
mjpeg_probe
FF_DEF_RAWVIDEO_DEMUXER2(mjpeg, , AV_CODEC_ID_MJPEG, AVFMT_GENERIC_INDEX|AVFMT_NOTIMESTAMPS)
