#define H261_MBA_VLC_BITS 9
#define H261_MTYPE_VLC_BITS 6
#define H261_MV_VLC_BITS 7
#define H261_CBP_VLC_BITS 9
#define TCOEFF_VLC_BITS 9
#define MBA_STUFFING 33
#define MBA_STARTCODE 34
static VLC h261_mba_vlc;
static VLC h261_mtype_vlc;
static VLC h261_mv_vlc;
static VLC h261_cbp_vlc;
static av_cold void h261_decode_init_vlc(H261Context *h)
static av_cold int h261_decode_init(AVCodecContext *avctx)
static int h261_decode_gob_header(H261Context *h)
static int h261_resync(H261Context *h)
static int h261_decode_mb_skipped(H261Context *h, int mba1, int mba2)
static const int mvmap[17] = ;
static int decode_mv_component(GetBitContext *gb, int v)
static int h261_decode_block(H261Context *h, int16_t *block, int n, int coded)
static int h261_decode_mb(H261Context *h)
static int h261_decode_picture_header(H261Context *h)
static int h261_decode_gob(H261Context *h)
static int get_consumed_bytes(MpegEncContext *s, int buf_size)
static int h261_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int h261_decode_end(AVCodecContext *avctx)
AVCodec ff_h261_decoder = ;
