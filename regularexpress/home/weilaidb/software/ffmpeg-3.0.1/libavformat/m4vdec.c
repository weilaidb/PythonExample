#define VISUAL_OBJECT_START_CODE       0x000001b5
#define VOP_START_CODE                 0x000001b6
static int mpeg4video_probe(AVProbeData *probe_packet)
FF_DEF_RAWVIDEO_DEMUXER2(m4v, "raw MPEG-4 video", mpeg4video_probe, "m4v",
AV_CODEC_ID_MPEG4, AVFMT_GENERIC_INDEX | AVFMT_TS_DISCONT)
