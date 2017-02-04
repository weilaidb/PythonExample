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
avpriv_mpegaudio_decode_header;
ff_mpa_decode_header;
#if LIBAVCODEC_VERSION_MAJOR < 58
avpriv_mpa_decode_header;
avpriv_mpa_decode_header2;
ff_mpa_check_header
