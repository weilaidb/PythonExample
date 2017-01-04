static const AVClass vorbis_parser_class = ;
static int parse_id_header(AVVorbisParseContext *s,
const uint8_t *buf, int buf_size)
static int parse_setup_header(AVVorbisParseContext *s,
const uint8_t *buf, int buf_size)
static int vorbis_parse_init(AVVorbisParseContext *s,
const uint8_t *extradata, int extradata_size)
int av_vorbis_parse_frame_flags(AVVorbisParseContext *s, const uint8_t *buf,
int buf_size, int *flags)
int av_vorbis_parse_frame(AVVorbisParseContext *s, const uint8_t *buf,
int buf_size)
void av_vorbis_parse_reset(AVVorbisParseContext *s)
void av_vorbis_parse_free(AVVorbisParseContext **s)
AVVorbisParseContext *av_vorbis_parse_init(const uint8_t *extradata,
int extradata_size)
#if CONFIG_VORBIS_PARSER
typedef struct VorbisParseContext  VorbisParseContext;
static int vorbis_parse(AVCodecParserContext *s1, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static void vorbis_parser_close(AVCodecParserContext *ctx)
AVCodecParser ff_vorbis_parser = ;
