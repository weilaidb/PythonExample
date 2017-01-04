#define AVCODEC_FRAME_THREAD_ENCODER_H
int ff_frame_thread_encoder_init(AVCodecContext *avctx, AVDictionary *options);
void ff_frame_thread_encoder_free(AVCodecContext *avctx);
int ff_thread_video_encode_frame(AVCodecContext *avctx, AVPacket *pkt, const AVFrame *frame, int *got_packet_ptr);
