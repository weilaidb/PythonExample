#if CONFIG_NETWORK
const char av_format_ffversion[] = "FFmpeg version " FFMPEG_VERSION;
unsigned avformat_version(void)
const char *avformat_configuration(void)
const char *avformat_license(void)
#define RELATIVE_TS_BASE (INT64_MAX - (1LL<<48))
static int is_relative(int64_t ts)
static int64_t wrap_timestamp(AVStream *st, int64_t timestamp)
MAKE_ACCESSORS(AVStream, stream, AVRational, r_frame_rate)
MAKE_ACCESSORS(AVStream, stream, char *, recommended_encoder_configuration)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, video_codec)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, audio_codec)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, subtitle_codec)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, data_codec)
MAKE_ACCESSORS(AVFormatContext, format, int, metadata_header_padding)
MAKE_ACCESSORS(AVFormatContext, format, void *, opaque)
MAKE_ACCESSORS(AVFormatContext, format, av_format_control_message, control_message_cb)
#if FF_API_OLD_OPEN_CALLBACKS
FF_DISABLE_DEPRECATION_WARNINGS
MAKE_ACCESSORS(AVFormatContext, format, AVOpenCallback, open_cb)
FF_ENABLE_DEPRECATION_WARNINGS
int64_t av_stream_get_end_pts(const AVStream *st)
struct AVCodecParserContext *av_stream_get_parser(const AVStream *st)
void av_format_inject_global_side_data(AVFormatContext *s)
int ff_copy_whitelists(AVFormatContext *dst, AVFormatContext *src)
static const AVCodec *find_decoder(AVFormatContext *s, AVStream *st, enum AVCodecID codec_id)
int av_format_get_probe_score(const AVFormatContext *s)
#define SANE_CHUNK_SIZE (50000000)
int ffio_limit(AVIOContext *s, int size)
static int append_packet_chunked(AVIOContext *s, AVPacket *pkt, int size)
int av_get_packet(AVIOContext *s, AVPacket *pkt, int size)
int av_append_packet(AVIOContext *s, AVPacket *pkt, int size)
int av_filename_number_test(const char *filename)
static int set_codec_from_probe_data(AVFormatContext *s, AVStream *st,
AVProbeData *pd)
int av_demuxer_open(AVFormatContext *ic)
static int init_input(AVFormatContext *s, const char *filename,
AVDictionary **options)
static int add_to_pktbuf(AVPacketList **packet_buffer, AVPacket *pkt,
AVPacketList **plast_pktl, int ref)
int avformat_queue_attached_pictures(AVFormatContext *s)
int avformat_open_input(AVFormatContext **ps, const char *filename,
AVInputFormat *fmt, AVDictionary **options)
static void force_codec_ids(AVFormatContext *s, AVStream *st)
static int probe_codec(AVFormatContext *s, AVStream *st, const AVPacket *pkt)
static int update_wrap_reference(AVFormatContext *s, AVStream *st, int stream_index, AVPacket *pkt)
int ff_read_packet(AVFormatContext *s, AVPacket *pkt)
static int determinable_frame_size(AVCodecContext *avctx)
void ff_compute_frame_duration(AVFormatContext *s, int *pnum, int *pden, AVStream *st,
AVCodecParserContext *pc, AVPacket *pkt)
static int is_intra_only(AVCodecContext *enc)
static int has_decode_delay_been_guessed(AVStream *st)
static AVPacketList *get_next_pkt(AVFormatContext *s, AVStream *st, AVPacketList *pktl)
static int64_t select_from_pts_buffer(AVStream *st, int64_t *pts_buffer, int64_t dts)
static void update_initial_timestamps(AVFormatContext *s, int stream_index,
int64_t dts, int64_t pts, AVPacket *pkt)
static void update_initial_durations(AVFormatContext *s, AVStream *st,
int stream_index, int duration)
static void compute_pkt_fields(AVFormatContext *s, AVStream *st,
AVCodecParserContext *pc, AVPacket *pkt,
int64_t next_dts, int64_t next_pts)
static void free_packet_buffer(AVPacketList **pkt_buf, AVPacketList **pkt_buf_end)
static int parse_packet(AVFormatContext *s, AVPacket *pkt, int stream_index)
static int read_from_packet_buffer(AVPacketList **pkt_buffer,
AVPacketList **pkt_buffer_end,
AVPacket      *pkt)
static int64_t ts_to_samples(AVStream *st, int64_t ts)
static int read_frame_internal(AVFormatContext *s, AVPacket *pkt)
int av_read_frame(AVFormatContext *s, AVPacket *pkt)
static void flush_packet_queue(AVFormatContext *s)
int av_find_default_stream_index(AVFormatContext *s)
void ff_read_frame_flush(AVFormatContext *s)
void ff_update_cur_dts(AVFormatContext *s, AVStream *ref_st, int64_t timestamp)
void ff_reduce_index(AVFormatContext *s, int stream_index)
int ff_add_index_entry(AVIndexEntry **index_entries,
int *nb_index_entries,
unsigned int *index_entries_allocated_size,
int64_t pos, int64_t timestamp,
int size, int distance, int flags)
int av_add_index_entry(AVStream *st, int64_t pos, int64_t timestamp,
int size, int distance, int flags)
int ff_index_search_timestamp(const AVIndexEntry *entries, int nb_entries,
int64_t wanted_timestamp, int flags)
void ff_configure_buffers_for_index(AVFormatContext *s, int64_t time_tolerance)
int av_index_search_timestamp(AVStream *st, int64_t wanted_timestamp, int flags)
static int64_t ff_read_timestamp(AVFormatContext *s, int stream_index, int64_t *ppos, int64_t pos_limit,
int64_t (*read_timestamp)(struct AVFormatContext *, int , int64_t *, int64_t ))
int ff_seek_frame_binary(AVFormatContext *s, int stream_index,
int64_t target_ts, int flags)
int ff_find_last_ts(AVFormatContext *s, int stream_index, int64_t *ts, int64_t *pos,
int64_t (*read_timestamp)(struct AVFormatContext *, int , int64_t *, int64_t ))
int64_t ff_gen_search(AVFormatContext *s, int stream_index, int64_t target_ts,
int64_t pos_min, int64_t pos_max, int64_t pos_limit,
int64_t ts_min, int64_t ts_max,
int flags, int64_t *ts_ret,
int64_t (*read_timestamp)(struct AVFormatContext *, int,
int64_t *, int64_t))
static int seek_frame_byte(AVFormatContext *s, int stream_index,
int64_t pos, int flags)
static int seek_frame_generic(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static int seek_frame_internal(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
int av_seek_frame(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
int avformat_seek_file(AVFormatContext *s, int stream_index, int64_t min_ts,
int64_t ts, int64_t max_ts, int flags)
int avformat_flush(AVFormatContext *s)
static int has_duration(AVFormatContext *ic)
static void update_stream_timings(AVFormatContext *ic)
static void fill_all_stream_timings(AVFormatContext *ic)
static void estimate_timings_from_bit_rate(AVFormatContext *ic)
#define DURATION_MAX_READ_SIZE 250000LL
#define DURATION_MAX_RETRY 6
static void estimate_timings_from_pts(AVFormatContext *ic, int64_t old_offset)
static void estimate_timings(AVFormatContext *ic, int64_t old_offset)
static int has_codec_parameters(AVStream *st, const char **errmsg_ptr)
static int try_decode_frame(AVFormatContext *s, AVStream *st, AVPacket *avpkt,
AVDictionary **options)
unsigned int ff_codec_get_tag(const AVCodecTag *tags, enum AVCodecID id)
enum AVCodecID ff_codec_get_id(const AVCodecTag *tags, unsigned int tag)
enum AVCodecID ff_get_pcm_codec_id(int bps, int flt, int be, int sflags)
unsigned int av_codec_get_tag(const AVCodecTag *const *tags, enum AVCodecID id)
int av_codec_get_tag2(const AVCodecTag * const *tags, enum AVCodecID id,
unsigned int *tag)
enum AVCodecID av_codec_get_id(const AVCodecTag *const *tags, unsigned int tag)
static void compute_chapters_end(AVFormatContext *s)
static int get_std_framerate(int i)
static int tb_unreliable(AVCodecContext *c)
int ff_alloc_extradata(AVCodecContext *avctx, int size)
int ff_get_extradata(AVCodecContext *avctx, AVIOContext *pb, int size)
int ff_rfps_add_frame(AVFormatContext *ic, AVStream *st, int64_t ts)
void ff_rfps_calculate(AVFormatContext *ic)
int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options)
AVProgram *av_find_program_from_stream(AVFormatContext *ic, AVProgram *last, int s)
int av_find_best_stream(AVFormatContext *ic, enum AVMediaType type,
int wanted_stream_nb, int related_stream,
AVCodec **decoder_ret, int flags)
int av_read_play(AVFormatContext *s)
int av_read_pause(AVFormatContext *s)
static void free_stream(AVStream **pst)
void ff_free_stream(AVFormatContext *s, AVStream *st)
void avformat_free_context(AVFormatContext *s)
void avformat_close_input(AVFormatContext **ps)
AVStream *avformat_new_stream(AVFormatContext *s, const AVCodec *c)
AVProgram *av_new_program(AVFormatContext *ac, int id)
AVChapter *avpriv_new_chapter(AVFormatContext *s, int id, AVRational time_base,
int64_t start, int64_t end, const char *title)
void av_program_add_stream_index(AVFormatContext *ac, int progid, unsigned idx)
uint64_t ff_ntp_time(void)
int av_get_frame_filename(char *buf, int buf_size, const char *path, int number)
void av_url_split(char *proto, int proto_size,
char *authorization, int authorization_size,
char *hostname, int hostname_size,
int *port_ptr, char *path, int path_size, const char *url)
char *ff_data_to_hex(char *buff, const uint8_t *src, int s, int lowercase)
int ff_hex_to_data(uint8_t *data, const char *p)
void avpriv_set_pts_info(AVStream *s, int pts_wrap_bits,
unsigned int pts_num, unsigned int pts_den)
void ff_parse_key_value(const char *str, ff_parse_key_val_cb callback_get_buf,
void *context)
int ff_find_stream_index(AVFormatContext *s, int id)
int avformat_query_codec(const AVOutputFormat *ofmt, enum AVCodecID codec_id,
int std_compliance)
int avformat_network_init(void)
int avformat_network_deinit(void)
int ff_add_param_change(AVPacket *pkt, int32_t channels,
uint64_t channel_layout, int32_t sample_rate,
int32_t width, int32_t height)
AVRational av_guess_sample_aspect_ratio(AVFormatContext *format, AVStream *stream, AVFrame *frame)
AVRational av_guess_frame_rate(AVFormatContext *format, AVStream *st, AVFrame *frame)
int avformat_match_stream_specifier(AVFormatContext *s, AVStream *st,
const char *spec)
int ff_generate_avci_extradata(AVStream *st)
uint8_t *av_stream_get_side_data(AVStream *st, enum AVPacketSideDataType type,
int *size)
uint8_t *av_stream_new_side_data(AVStream *st, enum AVPacketSideDataType type,
int size)
int ff_stream_add_bitstream_filter(AVStream *st, const char *name, const char *args)
int av_apply_bitstream_filters(AVCodecContext *codec, AVPacket *pkt,
AVBitStreamFilterContext *bsfc)
void ff_format_io_close(AVFormatContext *s, AVIOContext **pb)
int ff_parse_creation_time_metadata(AVFormatContext *s, int64_t *timestamp, int return_seconds)
