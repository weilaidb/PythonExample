static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
#if CONFIG_R210_ENCODER
AVCodec ff_r210_encoder = ;
#if CONFIG_R10K_ENCODER
AVCodec ff_r10k_encoder = ;
#if CONFIG_AVRP_ENCODER
AVCodec ff_avrp_encoder = ;
