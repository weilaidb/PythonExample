#define BITSTREAM_READER_LE
static const int64_t tak_channel_layouts[] = ;
static const uint16_t frame_duration_type_quants[] = ;
static int tak_get_nb_samples(int sample_rate, enum TAKFrameSizeType type)
int ff_tak_check_crc(const uint8_t *buf, unsigned int buf_size)
void avpriv_tak_parse_streaminfo(GetBitContext *gb, TAKStreamInfo *s)
int ff_tak_decode_frame_header(AVCodecContext *avctx, GetBitContext *gb,
TAKStreamInfo *ti, int log_level_offset)
