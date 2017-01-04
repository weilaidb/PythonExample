#define SEQ_START_CODE          0x000001b3
#define GOP_START_CODE          0x000001b8
#define PICTURE_START_CODE      0x00000100
#define SLICE_START_CODE        0x00000101
#define PACK_START_CODE         0x000001ba
#define VIDEO_ID                0x000001e0
#define AUDIO_ID                0x000001c0
static int mpegvideo_probe(AVProbeData *p)
FF_DEF_RAWVIDEO_DEMUXER(mpegvideo, "raw MPEG video", mpegvideo_probe, NULL, AV_CODEC_ID_MPEG1VIDEO)
