static const int bmv_aud_mults[16] = ;
static av_cold int bmv_aud_decode_init(AVCodecContext *avctx)
static int bmv_aud_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_bmv_audio_decoder = ;
