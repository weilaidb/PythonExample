#define AVFORMAT_SUBTITLES_H
enum sub_sort ;
enum ff_utf_type ;
typedef struct  FFTextReader;
ff_text_init_avio;
ff_text_init_buf;
ff_text_pos;
ff_text_r8;
ff_text_eof;
ff_text_peek_r8;
ff_text_read;
typedef struct  FFDemuxSubtitlesQueue;
*ff_subtitles_queue_insert;
ff_subtitles_queue_finalize;
ff_subtitles_queue_read_packet;
ff_subtitles_queue_seek;
ff_subtitles_queue_clean;
ff_smil_extract_next_text_chunk;
*ff_smil_get_attr_ptr;
ff_subtitles_read_chunk;
ff_subtitles_read_text_chunk;
ff_subtitles_next_line
ff_subtitles_read_line;
