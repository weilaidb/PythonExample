#define AVERROR_PS_NOT_FOUND      FFERRTAG(0xF8,'?','P','S')
static const uint8_t sei_num_clock_ts_table[9] = ;
void ff_h264_sei_uninit(H264SEIContext *h)
static int decode_picture_timing(H264SEIPictureTiming *h, GetBitContext *gb,
const H264ParamSets *ps, void *logctx)
static int decode_registered_user_data_afd(H264SEIAFD *h, GetBitContext *gb, int size)
static int decode_registered_user_data_closed_caption(H264SEIA53Caption *h,
GetBitContext *gb, void *logctx,
int size)
static int decode_registered_user_data(H264SEIContext *h, GetBitContext *gb,
void *logctx, int size)
static int decode_unregistered_user_data(H264SEIUnregistered *h, GetBitContext *gb,
void *logctx, int size)
static int decode_recovery_point(H264SEIRecoveryPoint *h, GetBitContext *gb)
static int decode_buffering_period(H264SEIBufferingPeriod *h, GetBitContext *gb,
const H264ParamSets *ps, void *logctx)
static int decode_frame_packing_arrangement(H264SEIFramePacking *h,
GetBitContext *gb)
static int decode_display_orientation(H264SEIDisplayOrientation *h,
GetBitContext *gb)
static int decode_green_metadata(H264SEIGreenMetaData *h, GetBitContext *gb)
int ff_h264_sei_decode(H264SEIContext *h, GetBitContext *gb,
const H264ParamSets *ps, void *logctx)
const char *ff_h264_sei_stereo_mode(const H264SEIFramePacking *h)
