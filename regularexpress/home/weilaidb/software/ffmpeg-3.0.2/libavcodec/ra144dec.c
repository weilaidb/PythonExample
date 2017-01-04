static av_cold int ra144_decode_init(AVCodecContext * avctx)
static void do_output_subblock(RA144Context *ractx, const int16_t  *lpc_coefs,
int gval, GetBitContext *gb)
static int ra144_decode_frame(AVCodecContext * avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_ra_144_decoder = ;
