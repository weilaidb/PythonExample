#define AVFORMAT_SUBTITLES_H
enum sub_sort ;
enum ff_utf_type ;
typedef struct  FFTextReader;
void ff_text_init_avio(void *s, FFTextReader *r, AVIOContext *pb);
void ff_text_init_buf(FFTextReader *r, void *buf, size_t size);
int64_t ff_text_pos(FFTextReader *r);
int ff_text_r8(FFTextReader *r);
int ff_text_eof(FFTextReader *r);
int ff_text_peek_r8(FFTextReader *r);
void ff_text_read(FFTextReader *r, char *buf, size_t size);
typedef struct  FFDemuxSubtitlesQueue;
AVPacket *ff_subtitles_queue_insert(FFDemuxSubtitlesQueue *q,
const uint8_t *event, size_t len, int merge);
void ff_subtitles_queue_finalize(void *log_ctx, FFDemuxSubtitlesQueue *q);
int ff_subtitles_queue_read_packet(FFDemuxSubtitlesQueue *q, AVPacket *pkt);
int ff_subtitles_queue_seek(FFDemuxSubtitlesQueue *q, AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags);
void ff_subtitles_queue_clean(FFDemuxSubtitlesQueue *q);
int ff_smil_extract_next_text_chunk(FFTextReader *tr, AVBPrint *buf, char *c);
const char *ff_smil_get_attr_ptr(const char *s, const char *attr);
void ff_subtitles_read_chunk(AVIOContext *pb, AVBPrint *buf);
void ff_subtitles_read_text_chunk(FFTextReader *tr, AVBPrint *buf);
static av_always_inline int ff_subtitles_next_line(const char *ptr)
ptrdiff_t ff_subtitles_read_line(FFTextReader *tr, char *buf, size_t size);
