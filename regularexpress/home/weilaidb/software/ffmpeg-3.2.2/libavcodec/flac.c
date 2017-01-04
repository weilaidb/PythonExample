static const int8_t sample_size_table[] = ;
static const uint64_t flac_channel_layouts[8] = ;
static int64_t get_utf8(GetBitContext *gb)
int ff_flac_decode_frame_header(AVCodecContext *avctx, GetBitContext *gb,
FLACFrameInfo *fi, int log_level_offset)
int ff_flac_get_max_frame_size(int blocksize, int ch, int bps)
int ff_flac_is_extradata_valid(AVCodecContext *avctx,
enum FLACExtradataFormat *format,
uint8_t **streaminfo_start)
void ff_flac_set_channel_layout(AVCodecContext *avctx)
void ff_flac_parse_streaminfo(AVCodecContext *avctx, struct FLACStreaminfo *s,
const uint8_t *buffer)
