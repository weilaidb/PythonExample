#define AVFORMAT_AVFORMAT_H
struct AVFormatContext;
struct AVDeviceInfoList;
struct AVDeviceCapabilitiesQuery;
int av_get_packet(AVIOContext *s, AVPacket *pkt, int size);
int av_append_packet(AVIOContext *s, AVPacket *pkt, int size);
#if FF_API_LAVF_FRAC
typedef struct AVFrac  AVFrac;
struct AVCodecTag;
typedef struct AVProbeData  AVProbeData;
#define AVPROBE_SCORE_RETRY (AVPROBE_SCORE_MAX/4)
#define AVPROBE_SCORE_STREAM_RETRY (AVPROBE_SCORE_MAX/4-1)
#define AVPROBE_SCORE_EXTENSION  50
#define AVPROBE_SCORE_MIME       75
#define AVPROBE_SCORE_MAX       100
#define AVPROBE_PADDING_SIZE 32
#define AVFMT_NOFILE        0x0001
#define AVFMT_NEEDNUMBER    0x0002
#define AVFMT_SHOW_IDS      0x0008
#if FF_API_LAVF_FMT_RAWPICTURE
#define AVFMT_RAWPICTURE    0x0020
#define AVFMT_GLOBALHEADER  0x0040
#define AVFMT_NOTIMESTAMPS  0x0080
#define AVFMT_GENERIC_INDEX 0x0100
#define AVFMT_TS_DISCONT    0x0200
#define AVFMT_VARIABLE_FPS  0x0400
#define AVFMT_NODIMENSIONS  0x0800
#define AVFMT_NOSTREAMS     0x1000
#define AVFMT_NOBINSEARCH   0x2000
#define AVFMT_NOGENSEARCH   0x4000
#define AVFMT_NO_BYTE_SEEK  0x8000
#define AVFMT_ALLOW_FLUSH  0x10000
#define AVFMT_TS_NONSTRICT 0x20000
#define AVFMT_TS_NEGATIVE  0x40000
#define AVFMT_SEEK_TO_PTS   0x4000000
typedef struct AVOutputFormat  AVOutputFormat;
typedef struct AVInputFormat  AVInputFormat;
enum AVStreamParseType ;
typedef struct AVIndexEntry  AVIndexEntry;
#define AV_DISPOSITION_DEFAULT   0x0001
#define AV_DISPOSITION_DUB       0x0002
#define AV_DISPOSITION_ORIGINAL  0x0004
#define AV_DISPOSITION_COMMENT   0x0008
#define AV_DISPOSITION_LYRICS    0x0010
#define AV_DISPOSITION_KARAOKE   0x0020
#define AV_DISPOSITION_FORCED    0x0040
#define AV_DISPOSITION_HEARING_IMPAIRED  0x0080
#define AV_DISPOSITION_VISUAL_IMPAIRED   0x0100
#define AV_DISPOSITION_CLEAN_EFFECTS     0x0200
#define AV_DISPOSITION_ATTACHED_PIC      0x0400
#define AV_DISPOSITION_TIMED_THUMBNAILS  0x0800
typedef struct AVStreamInternal AVStreamInternal;
#define AV_DISPOSITION_CAPTIONS     0x10000
#define AV_DISPOSITION_DESCRIPTIONS 0x20000
#define AV_DISPOSITION_METADATA     0x40000
#define AV_PTS_WRAP_IGNORE      0
#define AV_PTS_WRAP_ADD_OFFSET  1
#define AV_PTS_WRAP_SUB_OFFSET  -1
typedef struct AVStream  AVStream;
AVRational av_stream_get_r_frame_rate(const AVStream *s);
void       av_stream_set_r_frame_rate(AVStream *s, AVRational r);
struct AVCodecParserContext *av_stream_get_parser(const AVStream *s);
char* av_stream_get_recommended_encoder_configuration(const AVStream *s);
void  av_stream_set_recommended_encoder_configuration(AVStream *s, char *configuration);
int64_t    av_stream_get_end_pts(const AVStream *st);
#define AV_PROGRAM_RUNNING 1
typedef struct AVProgram  AVProgram;
#define AVFMTCTX_NOHEADER      0x0001
typedef struct AVChapter  AVChapter;
typedef int (*av_format_control_message)(struct AVFormatContext *s, int type,
void *data, size_t data_size);
typedef int (*AVOpenCallback)(struct AVFormatContext *s, AVIOContext **pb, const char *url, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options);
enum AVDurationEstimationMethod ;
typedef struct AVFormatInternal AVFormatInternal;
typedef struct AVFormatContext  AVFormatContext;
int av_format_get_probe_score(const AVFormatContext *s);
AVCodec * av_format_get_video_codec(const AVFormatContext *s);
void      av_format_set_video_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_audio_codec(const AVFormatContext *s);
void      av_format_set_audio_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_subtitle_codec(const AVFormatContext *s);
void      av_format_set_subtitle_codec(AVFormatContext *s, AVCodec *c);
AVCodec * av_format_get_data_codec(const AVFormatContext *s);
void      av_format_set_data_codec(AVFormatContext *s, AVCodec *c);
int       av_format_get_metadata_header_padding(const AVFormatContext *s);
void      av_format_set_metadata_header_padding(AVFormatContext *s, int c);
void *    av_format_get_opaque(const AVFormatContext *s);
void      av_format_set_opaque(AVFormatContext *s, void *opaque);
av_format_control_message av_format_get_control_message_cb(const AVFormatContext *s);
void      av_format_set_control_message_cb(AVFormatContext *s, av_format_control_message callback);
#if FF_API_OLD_OPEN_CALLBACKS
attribute_deprecated AVOpenCallback av_format_get_open_cb(const AVFormatContext *s);
attribute_deprecated void av_format_set_open_cb(AVFormatContext *s, AVOpenCallback callback);
void av_format_inject_global_side_data(AVFormatContext *s);
enum AVDurationEstimationMethod av_fmt_ctx_get_duration_estimation_method(const AVFormatContext* ctx);
typedef struct AVPacketList  AVPacketList;
unsigned avformat_version(void);
const char *avformat_configuration(void);
const char *avformat_license(void);
void av_register_all(void);
void av_register_input_format(AVInputFormat *format);
void av_register_output_format(AVOutputFormat *format);
int avformat_network_init(void);
int avformat_network_deinit(void);
AVInputFormat  *av_iformat_next(const AVInputFormat  *f);
AVOutputFormat *av_oformat_next(const AVOutputFormat *f);
AVFormatContext *avformat_alloc_context(void);
void avformat_free_context(AVFormatContext *s);
const AVClass *avformat_get_class(void);
AVStream *avformat_new_stream(AVFormatContext *s, const AVCodec *c);
uint8_t *av_stream_new_side_data(AVStream *stream,
enum AVPacketSideDataType type, int size);
#if FF_API_NOCONST_GET_SIDE_DATA
uint8_t *av_stream_get_side_data(AVStream *stream,
enum AVPacketSideDataType type, int *size);
uint8_t *av_stream_get_side_data(const AVStream *stream,
enum AVPacketSideDataType type, int *size);
AVProgram *av_new_program(AVFormatContext *s, int id);
int avformat_alloc_output_context2(AVFormatContext **ctx, AVOutputFormat *oformat,
const char *format_name, const char *filename);
AVInputFormat *av_find_input_format(const char *short_name);
AVInputFormat *av_probe_input_format(AVProbeData *pd, int is_opened);
AVInputFormat *av_probe_input_format2(AVProbeData *pd, int is_opened, int *score_max);
AVInputFormat *av_probe_input_format3(AVProbeData *pd, int is_opened, int *score_ret);
int av_probe_input_buffer2(AVIOContext *pb, AVInputFormat **fmt,
const char *url, void *logctx,
unsigned int offset, unsigned int max_probe_size);
int av_probe_input_buffer(AVIOContext *pb, AVInputFormat **fmt,
const char *url, void *logctx,
unsigned int offset, unsigned int max_probe_size);
int avformat_open_input(AVFormatContext **ps, const char *url, AVInputFormat *fmt, AVDictionary **options);
attribute_deprecated
int av_demuxer_open(AVFormatContext *ic);
int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options);
AVProgram *av_find_program_from_stream(AVFormatContext *ic, AVProgram *last, int s);
void av_program_add_stream_index(AVFormatContext *ac, int progid, unsigned int idx);
int av_find_best_stream(AVFormatContext *ic,
enum AVMediaType type,
int wanted_stream_nb,
int related_stream,
AVCodec **decoder_ret,
int flags);
int av_read_frame(AVFormatContext *s, AVPacket *pkt);
int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp,
int flags);
int avformat_seek_file(AVFormatContext *s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags);
int avformat_flush(AVFormatContext *s);
int av_read_play(AVFormatContext *s);
int av_read_pause(AVFormatContext *s);
void avformat_close_input(AVFormatContext **s);
#define AVSEEK_FLAG_BACKWARD 1
#define AVSEEK_FLAG_BYTE     2
#define AVSEEK_FLAG_ANY      4
#define AVSEEK_FLAG_FRAME    8
#define AVSTREAM_INIT_IN_WRITE_HEADER 0
#define AVSTREAM_INIT_IN_INIT_OUTPUT  1
av_warn_unused_result
int avformat_write_header(AVFormatContext *s, AVDictionary **options);
av_warn_unused_result
int avformat_init_output(AVFormatContext *s, AVDictionary **options);
int av_write_frame(AVFormatContext *s, AVPacket *pkt);
int av_interleaved_write_frame(AVFormatContext *s, AVPacket *pkt);
int av_write_uncoded_frame(AVFormatContext *s, int stream_index,
AVFrame *frame);
int av_interleaved_write_uncoded_frame(AVFormatContext *s, int stream_index,
AVFrame *frame);
int av_write_uncoded_frame_query(AVFormatContext *s, int stream_index);
int av_write_trailer(AVFormatContext *s);
AVOutputFormat *av_guess_format(const char *short_name,
const char *filename,
const char *mime_type);
enum AVCodecID av_guess_codec(AVOutputFormat *fmt, const char *short_name,
const char *filename, const char *mime_type,
enum AVMediaType type);
int av_get_output_timestamp(struct AVFormatContext *s, int stream,
int64_t *dts, int64_t *wall);
void av_hex_dump(FILE *f, const uint8_t *buf, int size);
void av_hex_dump_log(void *avcl, int level, const uint8_t *buf, int size);
void av_pkt_dump2(FILE *f, const AVPacket *pkt, int dump_payload, const AVStream *st);
void av_pkt_dump_log2(void *avcl, int level, const AVPacket *pkt, int dump_payload,
const AVStream *st);
enum AVCodecID av_codec_get_id(const struct AVCodecTag * const *tags, unsigned int tag);
unsigned int av_codec_get_tag(const struct AVCodecTag * const *tags, enum AVCodecID id);
int av_codec_get_tag2(const struct AVCodecTag * const *tags, enum AVCodecID id,
unsigned int *tag);
int av_find_default_stream_index(AVFormatContext *s);
int av_index_search_timestamp(AVStream *st, int64_t timestamp, int flags);
int av_add_index_entry(AVStream *st, int64_t pos, int64_t timestamp,
int size, int distance, int flags);
void av_url_split(char *proto,         int proto_size,
char *authorization, int authorization_size,
char *hostname,      int hostname_size,
int *port_ptr,
char *path,          int path_size,
const char *url);
void av_dump_format(AVFormatContext *ic,
int index,
const char *url,
int is_output);
#define AV_FRAME_FILENAME_FLAGS_MULTIPLE 1
int av_get_frame_filename2(char *buf, int buf_size,
const char *path, int number, int flags);
int av_get_frame_filename(char *buf, int buf_size,
const char *path, int number);
int av_filename_number_test(const char *filename);
int av_sdp_create(AVFormatContext *ac[], int n_files, char *buf, int size);
int av_match_ext(const char *filename, const char *extensions);
int avformat_query_codec(const AVOutputFormat *ofmt, enum AVCodecID codec_id,
int std_compliance);
const struct AVCodecTag *avformat_get_riff_video_tags(void);
const struct AVCodecTag *avformat_get_riff_audio_tags(void);
const struct AVCodecTag *avformat_get_mov_video_tags(void);
const struct AVCodecTag *avformat_get_mov_audio_tags(void);
AVRational av_guess_sample_aspect_ratio(AVFormatContext *format, AVStream *stream, AVFrame *frame);
AVRational av_guess_frame_rate(AVFormatContext *ctx, AVStream *stream, AVFrame *frame);
int avformat_match_stream_specifier(AVFormatContext *s, AVStream *st,
const char *spec);
int avformat_queue_attached_pictures(AVFormatContext *s);
#if FF_API_OLD_BSF
attribute_deprecated
int av_apply_bitstream_filters(AVCodecContext *codec, AVPacket *pkt,
AVBitStreamFilterContext *bsfc);
enum AVTimebaseSource ;
int avformat_transfer_internal_stream_timing_info(const AVOutputFormat *ofmt,
AVStream *ost, const AVStream *ist,
enum AVTimebaseSource copy_tb);
AVRational av_stream_get_codec_timebase(const AVStream *st);
