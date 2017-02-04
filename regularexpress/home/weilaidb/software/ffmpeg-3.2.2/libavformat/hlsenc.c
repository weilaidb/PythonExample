#if HAVE_UNISTD_H
#define KEYSIZE 16
#define LINE_BUFFER_SIZE 1024
typedef struct HLSSegment  HLSSegment;
typedef enum HLSFlags  HLSFlags;
typedef enum  PlaylistType;
typedef struct HLSContext  HLSContext;
mkdir_p
hls_delete_old_segments
hls_encryption_start
read_chomp_line
hls_mux_init
hls_append_segment
parse_playlist
hls_free_segments
set_http_options
hls_window
hls_start
hls_write_header
hls_write_packet
hls_write_trailer
OFFSET offsetof(HLSContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass hls_class = ;
AVOutputFormat ff_hls_muxer = ;
