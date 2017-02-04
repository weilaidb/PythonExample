#define AU_UNKNOWN_SIZE ((uint32_t)(~0))
#define AU_DEFAULT_HEADER_SIZE (24+8)
static const AVCodecTag codec_au_tags[] = ;
#if CONFIG_AU_DEMUXER
au_probe
au_read_annotation
#define BLOCK_SIZE 1024
au_read_header
AVInputFormat ff_au_demuxer = ;
#if CONFIG_AU_MUXER
typedef struct AUContext  AUContext;
au_get_annotations
au_write_header
au_write_trailer
AVOutputFormat ff_au_muxer = ;
