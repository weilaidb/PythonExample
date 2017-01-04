static VLC scfi_vlc, dscf_vlc, hdr_vlc, quant_vlc[MPC7_QUANT_VLC_TABLES][2];
static const uint16_t quant_offsets[MPC7_QUANT_VLC_TABLES*2 + 1] =
;
static av_cold int mpc7_decode_init(AVCodecContext * avctx)
static inline void idx_to_quant(MPCContext *c, GetBitContext *gb, int idx, int *dst)
static int get_scale_idx(GetBitContext *gb, int ref)
static int mpc7_decode_frame(AVCodecContext * avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void mpc7_decode_flush(AVCodecContext *avctx)
static av_cold int mpc7_decode_close(AVCodecContext *avctx)
AVCodec ff_mpc7_decoder = ;
