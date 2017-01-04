int avpriv_mpegaudio_decode_header(MPADecodeHeader *s, uint32_t header)
int ff_mpa_decode_header(uint32_t head, int *sample_rate, int *channels, int *frame_size, int *bit_rate, enum AVCodecID *codec_id)
#if LIBAVCODEC_VERSION_MAJOR < 58
int avpriv_mpa_decode_header2(uint32_t head, int *sample_rate, int *channels, int *frame_size, int *bit_rate, enum AVCodecID *codec_id)
int avpriv_mpa_decode_header(AVCodecContext *avctx, uint32_t head, int *sample_rate, int *channels, int *frame_size, int *bit_rate)
