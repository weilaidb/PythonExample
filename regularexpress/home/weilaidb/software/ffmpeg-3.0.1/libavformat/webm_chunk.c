#define MAX_FILENAME_SIZE 1024
typedef struct WebMChunkContext  WebMChunkContext;
static int chunk_mux_init(AVFormatContext *s)
static int get_chunk_filename(AVFormatContext *s, int is_header, char *filename)
static int webm_chunk_write_header(AVFormatContext *s)
static int chunk_start(AVFormatContext *s)
static int chunk_end(AVFormatContext *s)
static int webm_chunk_write_packet(AVFormatContext *s, AVPacket *pkt)
static int webm_chunk_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(WebMChunkContext, x)
static const AVOption options[] = ;
#if CONFIG_WEBM_CHUNK_MUXER
static const AVClass webm_chunk_class = ;
AVOutputFormat ff_webm_chunk_muxer = ;
