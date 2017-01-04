#define SEEKPOINT_SIZE 18
typedef struct FLACDecContext  FLACDecContext;
static void reset_index_position(int64_t metadata_head_size, AVStream *st)
static int flac_read_header(AVFormatContext *s)
static int raw_flac_probe(AVProbeData *p)
static int flac_probe(AVProbeData *p)
static av_unused int64_t flac_read_timestamp(AVFormatContext *s, int stream_index,
int64_t *ppos, int64_t pos_limit)
static int flac_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_flac_demuxer = ;
