static const uint8_t field_scan[16+1] = ;
static const uint8_t field_scan8x8[64+1] = ;
static const uint8_t field_scan8x8_cavlc[64+1] = ;
static const uint8_t zigzag_scan8x8_cavlc[64+1] = ;
release_unused_pictures
alloc_scratch_buffers
init_table_pools
alloc_picture
pic_is_unused
find_unused_picture
IN_RANGE (((void*)(a) >= (void*)(b)) && ((void*)(a) < (void*)((b) + (size))))
REBASE_PICTURE             \
(((pic) && (pic) >= (old_ctx)->DPB &&                       \
(pic) < (old_ctx)->DPB + H264_MAX_PICTURE_COUNT) ?          \
&(new_ctx)->DPB[(pic) - (old_ctx)->DPB] : NULL)
copy_picture_range
h264_slice_header_init;
ff_h264_update_thread_context
h264_frame_start
backup_mb_border
implicit_weight_table
init_scan_tables
get_pixel_format
init_dimensions
h264_slice_header_init
non_j_pixfmt
h264_init_ps
h264_export_frame_props
h264_field_start
h264_slice_header_parse
ff_h264_decode_slice_header
ff_h264_get_slice_type
fill_filter_caches_inter
fill_filter_caches
loop_filter
predict_field_decoding_flag
decode_finish_row
er_add_slice
decode_slice
ff_h264_execute_decode_slices
