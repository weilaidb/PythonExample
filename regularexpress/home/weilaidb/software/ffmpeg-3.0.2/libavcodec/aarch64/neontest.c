wrap(avcodec_open2(AVCodecContext *avctx,
AVCodec *codec,
AVDictionary **options))
wrap(avcodec_decode_audio4(AVCodecContext *avctx,
AVFrame *frame,
int *got_frame_ptr,
AVPacket *avpkt))
wrap(avcodec_decode_video2(AVCodecContext *avctx,
AVFrame *picture,
int *got_picture_ptr,
AVPacket *avpkt))
wrap(avcodec_decode_subtitle2(AVCodecContext *avctx,
AVSubtitle *sub,
int *got_sub_ptr,
AVPacket *avpkt))
wrap(avcodec_encode_audio2(AVCodecContext *avctx,
AVPacket *avpkt,
const AVFrame *frame,
int *got_packet_ptr))
wrap(avcodec_encode_subtitle(AVCodecContext *avctx,
uint8_t *buf, int buf_size,
const AVSubtitle *sub))
wrap(avcodec_encode_video2(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr))
