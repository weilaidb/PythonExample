MAKE_ACCESSORS(AVFrame, frame, int64_t, best_effort_timestamp)
MAKE_ACCESSORS(AVFrame, frame, int64_t, pkt_duration)
MAKE_ACCESSORS(AVFrame, frame, int64_t, pkt_pos)
MAKE_ACCESSORS(AVFrame, frame, int64_t, channel_layout)
MAKE_ACCESSORS(AVFrame, frame, int,     channels)
MAKE_ACCESSORS(AVFrame, frame, int,     sample_rate)
MAKE_ACCESSORS(AVFrame, frame, AVDictionary *, metadata)
MAKE_ACCESSORS(AVFrame, frame, int,     decode_error_flags)
MAKE_ACCESSORS(AVFrame, frame, int,     pkt_size)
MAKE_ACCESSORS(AVFrame, frame, enum AVColorSpace, colorspace)
MAKE_ACCESSORS(AVFrame, frame, enum AVColorRange, color_range)
CHECK_CHANNELS_CONSISTENCY \
av_assert2(!(frame)->channel_layout || \
(frame)->channels == \
av_get_channel_layout_nb_channels((frame)->channel_layout))
**avpriv_frame_get_metadatap ;
#if FF_API_FRAME_QP
av_frame_set_qp_table
*av_frame_get_qp_table
*av_get_colorspace_name
get_frame_defaults
free_side_data
wipe_side_data
*av_frame_alloc
av_frame_free
get_video_buffer
get_audio_buffer
av_frame_get_buffer
frame_copy_props
av_frame_ref
*av_frame_clone
av_frame_unref
av_frame_move_ref
av_frame_is_writable
av_frame_make_writable
av_frame_copy_props
*av_frame_get_plane_buffer
*av_frame_new_side_data
*av_frame_get_side_data
frame_copy_video
frame_copy_audio
av_frame_copy
av_frame_remove_side_data
*av_frame_side_data_name
