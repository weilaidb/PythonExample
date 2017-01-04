#define DC_VLC_BITS 9
#define V2_INTRA_CBPC_VLC_BITS 3
#define V2_MB_TYPE_VLC_BITS 7
#define MV_VLC_BITS 9
#define V2_MV_VLC_BITS 9
#define TEX_VLC_BITS 9
#define DEFAULT_INTER_INDEX 3
static inline int msmpeg4v1_pred_dc(MpegEncContext * s, int n,
int32_t **dc_val_ptr)
VLC ff_mb_non_intra_vlc[4];
static VLC v2_dc_lum_vlc;
static VLC v2_dc_chroma_vlc;
static VLC v2_intra_cbpc_vlc;
static VLC v2_mb_type_vlc;
static VLC v2_mv_vlc;
VLC ff_inter_intra_vlc;
static int msmpeg4v2_decode_motion(MpegEncContext * s, int pred, int f_code)
static int msmpeg4v12_decode_mb(MpegEncContext *s, int16_t block[6][64])
static int msmpeg4v34_decode_mb(MpegEncContext *s, int16_t block[6][64])
av_cold int ff_msmpeg4_decode_init(AVCodecContext *avctx)
int ff_msmpeg4_decode_picture_header(MpegEncContext * s)
int ff_msmpeg4_decode_ext_header(MpegEncContext * s, int buf_size)
static int msmpeg4_decode_dc(MpegEncContext * s, int n, int *dir_ptr)
int ff_msmpeg4_decode_block(MpegEncContext * s, int16_t * block,
int n, int coded, const uint8_t *scan_table)
int ff_msmpeg4_decode_motion(MpegEncContext * s,
int *mx_ptr, int *my_ptr)
AVCodec ff_msmpeg4v1_decoder = ;
AVCodec ff_msmpeg4v2_decoder = ;
AVCodec ff_msmpeg4v3_decoder = ;
AVCodec ff_wmv1_decoder = ;
