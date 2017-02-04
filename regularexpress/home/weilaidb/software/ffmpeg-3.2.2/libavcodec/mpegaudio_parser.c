typedef struct MpegAudioParseContext  MpegAudioParseContext;
#define MPA_HEADER_SIZE 4
#define SAME_HEADER_MASK \
(0xffe00000 | (3 << 17) | (3 << 10) | (3 << 19))
mpegaudio_parse
AVCodecParser ff_mpegaudio_parser = ;
