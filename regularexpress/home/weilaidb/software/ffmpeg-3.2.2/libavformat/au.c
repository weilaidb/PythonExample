#define AU_UNKNOWN_SIZE ((uint32_t)(~0))
#define AU_DEFAULT_HEADER_SIZE (24+8)
static const AVCodecTag codec_au_tags[] = ;
#if CONFIG_AU_DEMUXER
static int au_probe(AVProbeData *p)
static int au_read_annotation(AVFormatContext *s, int size)
#define BLOCK_SIZE 1024
static int au_read_header(AVFormatContext *s)
AVInputFormat ff_au_demuxer = ;
#if CONFIG_AU_MUXER
typedef struct AUContext  AUContext;
static int au_get_annotations(AVFormatContext *s, char **buffer)
static int au_write_header(AVFormatContext *s)
static int au_write_trailer(AVFormatContext *s)
AVOutputFormat ff_au_muxer = ;
