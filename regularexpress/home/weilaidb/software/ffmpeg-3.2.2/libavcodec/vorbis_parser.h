#define AVCODEC_VORBIS_PARSER_H
typedef struct AVVorbisParseContext AVVorbisParseContext;
*av_vorbis_parse_init;
av_vorbis_parse_free;
#define VORBIS_FLAG_HEADER  0x00000001
#define VORBIS_FLAG_COMMENT 0x00000002
#define VORBIS_FLAG_SETUP   0x00000004
av_vorbis_parse_frame_flags;
av_vorbis_parse_frame;
av_vorbis_parse_reset;
