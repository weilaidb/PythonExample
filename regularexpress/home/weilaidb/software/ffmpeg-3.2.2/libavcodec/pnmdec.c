static void samplecpy(uint8_t *dst, const uint8_t *src, int n, int maxval)
static int pnm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
#if CONFIG_PGM_DECODER
AVCodec ff_pgm_decoder = ;
#if CONFIG_PGMYUV_DECODER
AVCodec ff_pgmyuv_decoder = ;
#if CONFIG_PPM_DECODER
AVCodec ff_ppm_decoder = ;
#if CONFIG_PBM_DECODER
AVCodec ff_pbm_decoder = ;
#if CONFIG_PAM_DECODER
AVCodec ff_pam_decoder = ;
