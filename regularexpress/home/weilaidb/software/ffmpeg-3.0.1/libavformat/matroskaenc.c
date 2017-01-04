typedef struct ebml_master  ebml_master;
typedef struct mkv_seekhead_entry  mkv_seekhead_entry;
typedef struct mkv_seekhead  mkv_seekhead;
typedef struct mkv_cuepoint  mkv_cuepoint;
typedef struct mkv_cues  mkv_cues;
typedef struct mkv_track  mkv_track;
#define MODE_MATROSKAv2 0x01
#define MODE_WEBM       0x02
#define MAX_TRACKS 126
typedef struct MatroskaMuxContext  MatroskaMuxContext;
#define MAX_SEEKENTRY_SIZE 21
#define MAX_CUETRACKPOS_SIZE 42
#define MAX_CUEPOINT_SIZE(num_tracks) 12 + MAX_CUETRACKPOS_SIZE * num_tracks
#define OPUS_SEEK_PREROLL 80000000
static int ebml_id_size(unsigned int id)
static void put_ebml_id(AVIOContext *pb, unsigned int id)
static void put_ebml_size_unknown(AVIOContext *pb, int bytes)
static int ebml_num_size(uint64_t num)
static void put_ebml_num(AVIOContext *pb, uint64_t num, int bytes)
static void put_ebml_uint(AVIOContext *pb, unsigned int elementid, uint64_t val)
static void put_ebml_sint(AVIOContext *pb, unsigned int elementid, int64_t val)
static void put_ebml_float(AVIOContext *pb, unsigned int elementid, double val)
static void put_ebml_binary(AVIOContext *pb, unsigned int elementid,
const void *buf, int size)
static void put_ebml_string(AVIOContext *pb, unsigned int elementid,
const char *str)
static void put_ebml_void(AVIOContext *pb, uint64_t size)
static ebml_master start_ebml_master(AVIOContext *pb, unsigned int elementid,
uint64_t expectedsize)
static void end_ebml_master(AVIOContext *pb, ebml_master master)
static void put_xiph_size(AVIOContext *pb, int size)
static void mkv_free(MatroskaMuxContext *mkv)
static mkv_seekhead *mkv_start_seekhead(AVIOContext *pb, int64_t segment_offset,
int numelements)
static int mkv_add_seekhead_entry(mkv_seekhead *seekhead, unsigned int elementid, uint64_t filepos)
static int64_t mkv_write_seekhead(AVIOContext *pb, MatroskaMuxContext *mkv)
static mkv_cues *mkv_start_cues(int64_t segment_offset)
static int mkv_add_cuepoint(mkv_cues *cues, int stream, int tracknum, int64_t ts,
int64_t cluster_pos, int64_t relative_pos, int64_t duration)
static int64_t mkv_write_cues(AVFormatContext *s, mkv_cues *cues, mkv_track *tracks, int num_tracks)
static int put_xiph_codecpriv(AVFormatContext *s, AVIOContext *pb, AVCodecContext *codec)
static int put_wv_codecpriv(AVIOContext *pb, AVCodecContext *codec)
static int put_flac_codecpriv(AVFormatContext *s,
AVIOContext *pb, AVCodecContext *codec)
static int get_aac_sample_rates(AVFormatContext *s, AVCodecContext *codec,
int *sample_rate, int *output_sample_rate)
static int mkv_write_native_codecprivate(AVFormatContext *s,
AVCodecContext *codec,
AVIOContext *dyn_cp)
static int mkv_write_codecprivate(AVFormatContext *s, AVIOContext *pb,
AVCodecContext *codec, int native_id,
int qt_id)
static int mkv_write_stereo_mode(AVFormatContext *s, AVIOContext *pb,
AVStream *st, int mode, int *h_width, int *h_height)
static int mkv_write_track(AVFormatContext *s, MatroskaMuxContext *mkv,
int i, AVIOContext *pb, int default_stream_exists)
static int mkv_write_tracks(AVFormatContext *s)
static int mkv_write_chapters(AVFormatContext *s)
static int mkv_write_simpletag(AVIOContext *pb, AVDictionaryEntry *t)
static int mkv_write_tag_targets(AVFormatContext *s,
unsigned int elementid, unsigned int uid,
ebml_master *tags, ebml_master* tag)
static int mkv_write_tag(AVFormatContext *s, AVDictionary *m, unsigned int elementid,
unsigned int uid, ebml_master *tags)
static int mkv_check_tag(AVDictionary *m)
static int mkv_write_tags(AVFormatContext *s)
static int mkv_write_attachments(AVFormatContext *s)
static int mkv_write_header(AVFormatContext *s)
static int mkv_blockgroup_size(int pkt_size)
static int mkv_strip_wavpack(const uint8_t *src, uint8_t **pdst, int *size)
static void mkv_write_block(AVFormatContext *s, AVIOContext *pb,
unsigned int blockid, AVPacket *pkt, int keyframe)
static int mkv_write_vtt_blocks(AVFormatContext *s, AVIOContext *pb, AVPacket *pkt)
static void mkv_flush_dynbuf(AVFormatContext *s)
static void mkv_start_new_cluster(AVFormatContext *s, AVPacket *pkt)
static int mkv_write_packet_internal(AVFormatContext *s, AVPacket *pkt, int add_cue)
static int mkv_write_packet(AVFormatContext *s, AVPacket *pkt)
static int mkv_write_flush_packet(AVFormatContext *s, AVPacket *pkt)
static int mkv_write_trailer(AVFormatContext *s)
static int mkv_query_codec(enum AVCodecID codec_id, int std_compliance)
static int mkv_init(struct AVFormatContext *s)
static int mkv_check_bitstream(struct AVFormatContext *s, const AVPacket *pkt)
static const AVCodecTag additional_audio_tags[] = ;
static const AVCodecTag additional_video_tags[] = ;
static const AVCodecTag additional_subtitle_tags[] = ;
#define OFFSET(x) offsetof(MatroskaMuxContext, x)
#define FLAGS AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
#if CONFIG_MATROSKA_MUXER
static const AVClass matroska_class = ;
AVOutputFormat ff_matroska_muxer = ;
#if CONFIG_WEBM_MUXER
static const AVClass webm_class = ;
AVOutputFormat ff_webm_muxer = ;
#if CONFIG_MATROSKA_AUDIO_MUXER
static const AVClass mka_class = ;
AVOutputFormat ff_matroska_audio_muxer = ;
