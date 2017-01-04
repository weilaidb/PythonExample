#define RAW_PACKET_SIZE 1024
int ff_raw_read_partial_packet(AVFormatContext *s, AVPacket *pkt)
int ff_raw_audio_read_header(AVFormatContext *s)
int ff_raw_video_read_header(AVFormatContext *s)
int ff_raw_data_read_header(AVFormatContext *s)
#define OFFSET(x) offsetof(FFRawVideoDemuxerContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
const AVOption ff_rawvideo_options[] = ;
#if CONFIG_DATA_DEMUXER
AVInputFormat ff_data_demuxer = ;
#if CONFIG_MJPEG_DEMUXER
static int mjpeg_probe(AVProbeData *p)
FF_DEF_RAWVIDEO_DEMUXER2(mjpeg, "raw MJPEG video", mjpeg_probe, "mjpg,mjpeg,mpo", AV_CODEC_ID_MJPEG, AVFMT_GENERIC_INDEX|AVFMT_NOTIMESTAMPS)
