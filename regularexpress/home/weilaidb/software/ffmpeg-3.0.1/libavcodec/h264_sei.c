static const uint8_t sei_num_clock_ts_table[9] = ;
void ff_h264_reset_sei(H264Context *h)
static int decode_picture_timing(H264Context *h)
static int decode_registered_user_data_afd(H264Context *h, int size)
static int decode_registered_user_data_closed_caption(H264Context *h, int size)
static int decode_registered_user_data(H264Context *h, int size)
static int decode_unregistered_user_data(H264Context *h, int size)
static int decode_recovery_point(H264Context *h)
static int decode_buffering_period(H264Context *h)
static int decode_frame_packing_arrangement(H264Context *h)
static int decode_display_orientation(H264Context *h)
static int decode_GreenMetadata(H264Context *h)
int ff_h264_decode_sei(H264Context *h)
const char* ff_h264_sei_stereo_mode(H264Context *h)