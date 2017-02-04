destroy_buffers
ff_vaapi_context_init
ff_vaapi_context_fini
ff_vaapi_render_picture
ff_vaapi_commit_slices
*alloc_buffer
*ff_vaapi_alloc_pic_param
*ff_vaapi_alloc_iq_matrix
*ff_vaapi_alloc_bitplane
*ff_vaapi_alloc_slice
ff_vaapi_common_end_frame
#if CONFIG_H263_VAAPI_HWACCEL  || CONFIG_MPEG1_VAAPI_HWACCEL || \
CONFIG_MPEG2_VAAPI_HWACCEL || CONFIG_MPEG4_VAAPI_HWACCEL || \
CONFIG_VC1_VAAPI_HWACCEL   || CONFIG_WMV3_VAAPI_HWACCEL
ff_vaapi_mpeg_end_frame
