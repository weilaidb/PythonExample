static int pnm_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *p, int *got_packet)
static av_cold int pnm_encode_init(AVCodecContext *avctx)
#if CONFIG_PGM_ENCODER
AVCodec ff_pgm_encoder = ;
#if CONFIG_PGMYUV_ENCODER
AVCodec ff_pgmyuv_encoder = ;
#if CONFIG_PPM_ENCODER
AVCodec ff_ppm_encoder = ;
#if CONFIG_PBM_ENCODER
AVCodec ff_pbm_encoder = ;
