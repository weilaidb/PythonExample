#define AVFORMAT_INTERNAL_H
#define MAX_URL_SIZE 4096
#define PROBE_BUF_MIN 2048
#define PROBE_BUF_MAX (1 << 20)
#define MAX_PROBE_PACKETS 2500
#    define hex_dump_debug(class, buf, size) av_hex_dump_log(class, AV_LOG_DEBUG, buf, size)
#    define hex_dump_debug(class, buf, size) do  while(0)
typedef struct AVCodecTag  AVCodecTag;
typedef struct CodecMime CodecMime;
typedef struct FFFrac  FFFrac;
struct AVFormatInternal ;
struct AVStreamInternal ;
#define dynarray_add(tab, nb_ptr, elem)\
do  while(0)
#define dynarray_add(tab, nb_ptr, elem)\
do  while(0)
struct tm *ff_brktimegm(time_t secs, struct tm *tm);
char *ff_data_to_hex(char *buf, const uint8_t *src, int size, int lowercase);
int ff_hex_to_data(uint8_t *data, const char *p);
int ff_interleave_add_packet(AVFormatContext *s, AVPacket *pkt,
int (*compare)(AVFormatContext *, AVPacket *, AVPacket *));
void ff_read_frame_flush(AVFormatContext *s);
#define NTP_OFFSET 2208988800ULL
#define NTP_OFFSET_US (NTP_OFFSET * 1000000ULL)
uint64_t ff_ntp_time(void);
void ff_sdp_write_media(char *buff, int size, AVStream *st, int idx,
const char *dest_addr, const char *dest_type,
int port, int ttl, AVFormatContext *fmt);
int ff_write_chained(AVFormatContext *dst, int dst_stream, AVPacket *pkt,
AVFormatContext *src, int interleave);
int ff_get_v_length(uint64_t val);
void ff_put_v(AVIOContext *bc, uint64_t val);
int ff_get_line(AVIOContext *s, char *buf, int maxlen);
#define SPACE_CHARS " \t\r\n"
typedef void (*ff_parse_key_val_cb)(void *context, const char *key,
int key_len, char **dest, int *dest_len);
void ff_parse_key_value(const char *str, ff_parse_key_val_cb callback_get_buf,
void *context);
int ff_find_stream_index(AVFormatContext *s, int id);
int ff_index_search_timestamp(const AVIndexEntry *entries, int nb_entries,
int64_t wanted_timestamp, int flags);
int ff_add_index_entry(AVIndexEntry **index_entries,
int *nb_index_entries,
unsigned int *index_entries_allocated_size,
int64_t pos, int64_t timestamp, int size, int distance, int flags);
void ff_configure_buffers_for_index(AVFormatContext *s, int64_t time_tolerance);
AVChapter *avpriv_new_chapter(AVFormatContext *s, int id, AVRational time_base,
int64_t start, int64_t end, const char *title);
void ff_reduce_index(AVFormatContext *s, int stream_index);
enum AVCodecID ff_guess_image2_codec(const char *filename);
int ff_seek_frame_binary(AVFormatContext *s, int stream_index,
int64_t target_ts, int flags);
void ff_update_cur_dts(AVFormatContext *s, AVStream *ref_st, int64_t timestamp);
int ff_find_last_ts(AVFormatContext *s, int stream_index, int64_t *ts, int64_t *pos,
int64_t (*read_timestamp)(struct AVFormatContext *, int , int64_t *, int64_t ));
int64_t ff_gen_search(AVFormatContext *s, int stream_index,
int64_t target_ts, int64_t pos_min,
int64_t pos_max, int64_t pos_limit,
int64_t ts_min, int64_t ts_max,
int flags, int64_t *ts_ret,
int64_t (*read_timestamp)(struct AVFormatContext *, int , int64_t *, int64_t ));
void avpriv_set_pts_info(AVStream *s, int pts_wrap_bits,
unsigned int pts_num, unsigned int pts_den);
int ff_add_param_change(AVPacket *pkt, int32_t channels,
uint64_t channel_layout, int32_t sample_rate,
int32_t width, int32_t height);
int ff_framehash_write_header(AVFormatContext *s);
int ff_read_packet(AVFormatContext *s, AVPacket *pkt);
int ff_interleave_packet_per_dts(AVFormatContext *s, AVPacket *out,
AVPacket *pkt, int flush);
void ff_free_stream(AVFormatContext *s, AVStream *st);
void ff_compute_frame_duration(AVFormatContext *s, int *pnum, int *pden, AVStream *st,
AVCodecParserContext *pc, AVPacket *pkt);
unsigned int ff_codec_get_tag(const AVCodecTag *tags, enum AVCodecID id);
enum AVCodecID ff_codec_get_id(const AVCodecTag *tags, unsigned int tag);
enum AVCodecID ff_get_pcm_codec_id(int bps, int flt, int be, int sflags);
AVRational ff_choose_timebase(AVFormatContext *s, AVStream *st, int min_precision);
enum AVChromaLocation ff_choose_chroma_location(AVFormatContext *s, AVStream *st);
int ff_generate_avci_extradata(AVStream *st);
int ff_stream_add_bitstream_filter(AVStream *st, const char *name, const char *args);
int ff_stream_encode_params_copy(AVStream *dst, const AVStream *src);
static inline int ff_rename(const char *oldpath, const char *newpath, void *logctx)
int ff_alloc_extradata(AVCodecParameters *par, int size);
int ff_get_extradata(AVFormatContext *s, AVCodecParameters *par, AVIOContext *pb, int size);
int ff_rfps_add_frame(AVFormatContext *ic, AVStream *st, int64_t dts);
void ff_rfps_calculate(AVFormatContext *ic);
enum AVWriteUncodedFrameFlags ;
int ff_copy_whiteblacklists(AVFormatContext *dst, const AVFormatContext *src);
int ffio_open2_wrapper(struct AVFormatContext *s, AVIOContext **pb, const char *url, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options);
#define FFERROR_REDO FFERRTAG('R','E','D','O')
int ff_format_output_open(AVFormatContext *s, const char *url, AVDictionary **options);
void ff_format_io_close(AVFormatContext *s, AVIOContext **pb);
int ff_parse_creation_time_metadata(AVFormatContext *s, int64_t *timestamp, int return_seconds);
int ff_standardize_creation_time(AVFormatContext *s);
#define CONTAINS_PAL 2
int ff_reshuffle_raw_rgb(AVFormatContext *s, AVPacket **ppkt, AVCodecParameters *par, int expected_stride);
int ff_get_packet_palette(AVFormatContext *s, AVPacket *pkt, int ret, uint32_t *palette);
int ff_bprint_to_codecpar_extradata(AVCodecParameters *par, struct AVBPrint *buf);
const AVPacket *ff_interleaved_peek(AVFormatContext *s, int stream, int64_t *ts_offset);
