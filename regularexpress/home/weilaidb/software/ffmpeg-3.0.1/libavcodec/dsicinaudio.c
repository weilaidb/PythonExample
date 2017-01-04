typedef struct CinAudioContext  CinAudioContext;
static const int16_t cinaudio_delta16_table[256] = ;
static av_cold int cinaudio_decode_init(AVCodecContext *avctx)
static int cinaudio_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_dsicinaudio_decoder = ;
