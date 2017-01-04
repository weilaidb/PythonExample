static VLC band_vlc, scfi_vlc[2], dscf_vlc[2], res_vlc[2];
static VLC q1_vlc, q2_vlc[2], q3_vlc[2], quant_vlc[4][2], q9up_vlc;
static const int q3_offsets[2] = ;
static const int quant_offsets[6] = ;
static inline int mpc8_dec_base(GetBitContext *gb, int k, int n)
static inline int mpc8_dec_enum(GetBitContext *gb, int k, int n)
static inline int mpc8_get_mod_golomb(GetBitContext *gb, int m)
static int mpc8_get_mask(GetBitContext *gb, int size, int t)
static const uint16_t vlc_offsets[13] = ;
static av_cold int mpc8_decode_init(AVCodecContext * avctx)
static int mpc8_decode_frame(AVCodecContext * avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void mpc8_decode_flush(AVCodecContext *avctx)
AVCodec ff_mpc8_decoder = ;
