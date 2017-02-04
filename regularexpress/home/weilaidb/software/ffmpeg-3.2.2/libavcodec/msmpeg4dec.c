#define DC_VLC_BITS 9
#define V2_INTRA_CBPC_VLC_BITS 3
#define V2_MB_TYPE_VLC_BITS 7
#define MV_VLC_BITS 9
#define V2_MV_VLC_BITS 9
#define TEX_VLC_BITS 9
#define DEFAULT_INTER_INDEX 3
msmpeg4v1_pred_dc
VLC ff_mb_non_intra_vlc[4];
static VLC v2_dc_lum_vlc;
static VLC v2_dc_chroma_vlc;
static VLC v2_intra_cbpc_vlc;
static VLC v2_mb_type_vlc;
static VLC v2_mv_vlc;
VLC ff_inter_intra_vlc;
msmpeg4v2_decode_motion
msmpeg4v12_decode_mb
msmpeg4v34_decode_mb
ff_msmpeg4_decode_init
ff_msmpeg4_decode_picture_header
ff_msmpeg4_decode_ext_header
msmpeg4_decode_dc
ff_msmpeg4_decode_block
ff_msmpeg4_decode_motion
AVCodec ff_msmpeg4v1_decoder = ;
AVCodec ff_msmpeg4v2_decoder = ;
AVCodec ff_msmpeg4v3_decoder = ;
AVCodec ff_wmv1_decoder = ;
