#define AVCODEC_MSMPEG4_H
#define INTER_INTRA_VLC_BITS 3
#define MB_NON_INTRA_VLC_BITS 9
#define MB_INTRA_VLC_BITS 9
#define II_BITRATE 128*1024
#define MBAC_BITRATE 50*1024
#define DC_MAX 119
extern VLC ff_mb_non_intra_vlc[4];
extern VLC ff_inter_intra_vlc;
ff_msmpeg4_code012;
ff_msmpeg4_common_init;
ff_msmpeg4_encode_block;
ff_msmpeg4_handle_slices;
ff_msmpeg4_encode_motion;
ff_msmpeg4_coded_block_pred;
ff_msmpeg4_encode_init;
ff_msmpeg4_encode_picture_header;
ff_msmpeg4_encode_ext_header;
ff_msmpeg4_encode_mb;
ff_msmpeg4_decode_init;
ff_msmpeg4_decode_picture_header;
ff_msmpeg4_decode_ext_header;
ff_msmpeg4_decode_motion;
ff_msmpeg4_decode_block;
ff_msmpeg4_pred_dc;
#define CONFIG_MSMPEG4_DECODER (CONFIG_MSMPEG4V1_DECODER || \
CONFIG_MSMPEG4V2_DECODER || \
CONFIG_MSMPEG4V3_DECODER || \
CONFIG_WMV1_DECODER      || \
CONFIG_WMV2_DECODER      || \
CONFIG_VC1_DECODER)
#define CONFIG_MSMPEG4_ENCODER (CONFIG_MSMPEG4V2_ENCODER || \
CONFIG_MSMPEG4V3_ENCODER || \
CONFIG_WMV1_ENCODER      || \
CONFIG_WMV2_ENCODER)
