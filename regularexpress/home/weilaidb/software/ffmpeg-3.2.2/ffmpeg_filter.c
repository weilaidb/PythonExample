*get_compliance_unofficial_pix_fmts
choose_pixel_fmt
choose_sample_fmt
*choose_pix_fmts
DEF_CHOOSE_FORMAT           \
static char *choose_ ## var ## s(OutputStream *ost)                            \
DEF_CHOOSE_FORMAT(enum AVSampleFormat, sample_fmt, sample_fmts,
AV_SAMPLE_FMT_NONE, GET_SAMPLE_FMT_NAME)
DEF_CHOOSE_FORMAT(int, sample_rate, supported_samplerates, 0,
GET_SAMPLE_RATE_NAME)
DEF_CHOOSE_FORMAT(uint64_t, channel_layout, channel_layouts, 0,
GET_CH_LAYOUT_NAME)
init_simple_filtergraph
init_input_filter
init_complex_filtergraph
insert_trim
insert_filter
configure_output_video_filter
configure_output_audio_filter
DESCRIBE_FILTER_LINK                         \
configure_output_filter
sub2video_prepare
configure_input_video_filter
configure_input_audio_filter
configure_input_filter
configure_filtergraph
ist_in_filtergraph
filtergraph_is_simple
