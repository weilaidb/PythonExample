#define AVCODEC_MPEGAUDIODECHEADER_H
#define MP3_MASK 0xFFFE0CCF
#define MPA_DECODE_HEADER \
int frame_size; \
int error_protection; \
int layer; \
int sample_rate; \
int sample_rate_index; \
int bit_rate; \
int nb_channels; \
int mode; \
int mode_ext; \
int lsf;
typedef struct MPADecodeHeader  MPADecodeHeader;
int avpriv_mpegaudio_decode_header(MPADecodeHeader *s, uint32_t header);
int ff_mpa_decode_header(uint32_t head, int *sample_rate,
int *channels, int *frame_size, int *bitrate, enum AVCodecID *codec_id);
#if LIBAVCODEC_VERSION_MAJOR < 58
int avpriv_mpa_decode_header(AVCodecContext *avctx, uint32_t head, int *sample_rate, int *channels, int *frame_size, int *bitrate);
int avpriv_mpa_decode_header2(uint32_t head, int *sample_rate, int *channels, int *frame_size, int *bitrate, enum AVCodecID *codec_id);
static inline int ff_mpa_check_header(uint32_t header)
