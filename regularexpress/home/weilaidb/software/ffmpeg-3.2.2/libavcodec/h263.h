#define AVCODEC_H263_H
#if !FF_API_ASPECT_EXTENDED
#define FF_ASPECT_EXTENDED 15
sizeof)
#define INTRA_MCBPC_VLC_BITS 6
#define INTER_MCBPC_VLC_BITS 7
#define CBPY_VLC_BITS 6
#define TEX_VLC_BITS 9
H263_GOB_HEIGHT ((h) <= 400 ? 1 : (h) <= 800 ? 2 : 4)
extern VLC ff_h263_intra_MCBPC_vlc;
extern VLC ff_h263_inter_MCBPC_vlc;
extern VLC ff_h263_cbpy_vlc;
extern const enum AVPixelFormat ff_h263_hwaccel_pixfmt_list_420[];
ff_h263_decode_motion;
ff_h263_aspect_to_info;
ff_h263_decode_init;
ff_h263_decode_frame;
ff_h263_decode_end;
ff_h263_encode_mb;
ff_h263_encode_picture_header;
ff_h263_encode_gob_header;
*ff_h263_pred_motion;
ff_h263_encode_init;
ff_h263_decode_init_vlc;
ff_h263_decode_picture_header;
ff_h263_decode_gob_header;
ff_h263_update_motion_val;
ff_h263_loop_filter;
ff_h263_decode_mba;
ff_h263_encode_mba;
ff_init_qscale_tab;
ff_h263_pred_dc;
ff_h263_pred_acdc;
ff_h263_show_pict_info;
ff_intel_h263_decode_picture_header;
ff_h263_decode_mb;
h263_get_picture_format;
ff_clean_h263_qscales;
ff_h263_resync;
ff_h263_encode_motion;
h263_get_motion_length
ff_h263_encode_motion_vector
get_p_cbp
