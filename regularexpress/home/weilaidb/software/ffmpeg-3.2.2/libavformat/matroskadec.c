#if CONFIG_BZLIB
#if CONFIG_ZLIB
typedef enum  EbmlType;
typedef const struct EbmlSyntax  EbmlSyntax;
typedef struct EbmlList  EbmlList;
typedef struct EbmlBin  EbmlBin;
typedef struct Ebml  Ebml;
typedef struct MatroskaTrackCompression  MatroskaTrackCompression;
typedef struct MatroskaTrackEncryption  MatroskaTrackEncryption;
typedef struct MatroskaTrackEncoding  MatroskaTrackEncoding;
typedef struct MatroskaMasteringMeta  MatroskaMasteringMeta;
typedef struct MatroskaTrackVideoColor  MatroskaTrackVideoColor;
typedef struct MatroskaTrackVideo  MatroskaTrackVideo;
typedef struct MatroskaTrackAudio  MatroskaTrackAudio;
typedef struct MatroskaTrackPlane  MatroskaTrackPlane;
typedef struct MatroskaTrackOperation  MatroskaTrackOperation;
typedef struct MatroskaTrack  MatroskaTrack;
typedef struct MatroskaAttachment  MatroskaAttachment;
typedef struct MatroskaChapter  MatroskaChapter;
typedef struct MatroskaIndexPos  MatroskaIndexPos;
typedef struct MatroskaIndex  MatroskaIndex;
typedef struct MatroskaTag  MatroskaTag;
typedef struct MatroskaTagTarget  MatroskaTagTarget;
typedef struct MatroskaTags  MatroskaTags;
typedef struct MatroskaSeekhead  MatroskaSeekhead;
typedef struct MatroskaLevel  MatroskaLevel;
typedef struct MatroskaCluster  MatroskaCluster;
typedef struct MatroskaLevel1Element  MatroskaLevel1Element;
typedef struct MatroskaDemuxContext  MatroskaDemuxContext;
typedef struct MatroskaBlock  MatroskaBlock;
static const EbmlSyntax ebml_header[] = ;
static const EbmlSyntax ebml_syntax[] = ;
static const EbmlSyntax matroska_info[] = ;
static const EbmlSyntax matroska_mastering_meta[] = ;
static const EbmlSyntax matroska_track_video_color[] = ;
static const EbmlSyntax matroska_track_video[] = ;
static const EbmlSyntax matroska_track_audio[] = ;
static const EbmlSyntax matroska_track_encoding_compression[] = ;
static const EbmlSyntax matroska_track_encoding_encryption[] = ;
static const EbmlSyntax matroska_track_encoding[] = ;
static const EbmlSyntax matroska_track_encodings[] = ;
static const EbmlSyntax matroska_track_plane[] = ;
static const EbmlSyntax matroska_track_combine_planes[] = ;
static const EbmlSyntax matroska_track_operation[] = ;
static const EbmlSyntax matroska_track[] = ;
static const EbmlSyntax matroska_tracks[] = ;
static const EbmlSyntax matroska_attachment[] = ;
static const EbmlSyntax matroska_attachments[] = ;
static const EbmlSyntax matroska_chapter_display[] = ;
static const EbmlSyntax matroska_chapter_entry[] = ;
static const EbmlSyntax matroska_chapter[] = ;
static const EbmlSyntax matroska_chapters[] = ;
static const EbmlSyntax matroska_index_pos[] = ;
static const EbmlSyntax matroska_index_entry[] = ;
static const EbmlSyntax matroska_index[] = ;
static const EbmlSyntax matroska_simpletag[] = ;
static const EbmlSyntax matroska_tagtargets[] = ;
static const EbmlSyntax matroska_tag[] = ;
static const EbmlSyntax matroska_tags[] = ;
static const EbmlSyntax matroska_seekhead_entry[] = ;
static const EbmlSyntax matroska_seekhead[] = ;
static const EbmlSyntax matroska_segment[] = ;
static const EbmlSyntax matroska_segments[] = ;
static const EbmlSyntax matroska_blockmore[] = ;
static const EbmlSyntax matroska_blockadditions[] = ;
static const EbmlSyntax matroska_blockgroup[] = ;
static const EbmlSyntax matroska_cluster[] = ;
static const EbmlSyntax matroska_clusters[] = ;
static const EbmlSyntax matroska_cluster_incremental_parsing[] = ;
static const EbmlSyntax matroska_cluster_incremental[] = ;
static const EbmlSyntax matroska_clusters_incremental[] = ;
static const char *const matroska_doctypes[] = ;
static int matroska_read_close(AVFormatContext *s);
static int matroska_resync(MatroskaDemuxContext *matroska, int64_t last_pos)
static int ebml_level_end(MatroskaDemuxContext *matroska)
static int ebml_read_num(MatroskaDemuxContext *matroska, AVIOContext *pb,
int max_size, uint64_t *number)
static int ebml_read_length(MatroskaDemuxContext *matroska, AVIOContext *pb,
uint64_t *number)
static int ebml_read_uint(AVIOContext *pb, int size, uint64_t *num)
static int ebml_read_sint(AVIOContext *pb, int size, int64_t *num)
static int ebml_read_float(AVIOContext *pb, int size, double *num)
static int ebml_read_ascii(AVIOContext *pb, int size, char **str)
static int ebml_read_binary(AVIOContext *pb, int length, EbmlBin *bin)
static int ebml_read_master(MatroskaDemuxContext *matroska, uint64_t length)
static int matroska_ebmlnum_uint(MatroskaDemuxContext *matroska,
uint8_t *data, uint32_t size, uint64_t *num)
static int matroska_ebmlnum_sint(MatroskaDemuxContext *matroska,
uint8_t *data, uint32_t size, int64_t *num)
static int ebml_parse_elem(MatroskaDemuxContext *matroska,
EbmlSyntax *syntax, void *data);
static int ebml_parse_id(MatroskaDemuxContext *matroska, EbmlSyntax *syntax,
uint32_t id, void *data)
static int ebml_parse(MatroskaDemuxContext *matroska, EbmlSyntax *syntax,
void *data)
static int ebml_parse_nest(MatroskaDemuxContext *matroska, EbmlSyntax *syntax,
void *data)
static int is_ebml_id_valid(uint32_t id)
static MatroskaLevel1Element *matroska_find_level1_elem(MatroskaDemuxContext *matroska,
uint32_t id)
static int ebml_parse_elem(MatroskaDemuxContext *matroska,
EbmlSyntax *syntax, void *data)
static void ebml_free(EbmlSyntax *syntax, void *data)
static int matroska_probe(AVProbeData *p)
static MatroskaTrack *matroska_find_track_by_num(MatroskaDemuxContext *matroska,
int num)
static int matroska_decode_buffer(uint8_t **buf, int *buf_size,
MatroskaTrack *track)
static void matroska_convert_tag(AVFormatContext *s, EbmlList *list,
AVDictionary **metadata, char *prefix)
static void matroska_convert_tags(AVFormatContext *s)
static int matroska_parse_seekhead_entry(MatroskaDemuxContext *matroska,
uint64_t pos)
static void matroska_execute_seekhead(MatroskaDemuxContext *matroska)
static void matroska_add_index_entries(MatroskaDemuxContext *matroska)
static void matroska_parse_cues(MatroskaDemuxContext *matroska)
static int matroska_aac_profile(char *codec_id)
static int matroska_aac_sri(int samplerate)
static void matroska_metadata_creation_time(AVDictionary **metadata, int64_t date_utc)
static int matroska_parse_flac(AVFormatContext *s,
MatroskaTrack *track,
int *offset)
static int mkv_field_order(MatroskaDemuxContext *matroska, int64_t field_order)
static void mkv_stereo_mode_display_mul(int stereo_mode,
int *h_width, int *h_height)
static int mkv_parse_video_color(AVStream *st, const MatroskaTrack *track)
static int get_qt_codec(MatroskaTrack *track, uint32_t *fourcc, enum AVCodecID *codec_id)
static int matroska_parse_tracks(AVFormatContext *s)
static int matroska_read_header(AVFormatContext *s)
static int matroska_deliver_packet(MatroskaDemuxContext *matroska,
AVPacket *pkt)
static void matroska_clear_queue(MatroskaDemuxContext *matroska)
static int matroska_parse_laces(MatroskaDemuxContext *matroska, uint8_t **buf,
int *buf_size, int type,
uint32_t **lace_buf, int *laces)
static int matroska_parse_rm_audio(MatroskaDemuxContext *matroska,
MatroskaTrack *track, AVStream *st,
uint8_t *data, int size, uint64_t timecode,
int64_t pos)
static int matroska_parse_wavpack(MatroskaTrack *track, uint8_t *src,
uint8_t **pdst, int *size)
static int matroska_parse_webvtt(MatroskaDemuxContext *matroska,
MatroskaTrack *track,
AVStream *st,
uint8_t *data, int data_len,
uint64_t timecode,
uint64_t duration,
int64_t pos)
static int matroska_parse_frame(MatroskaDemuxContext *matroska,
MatroskaTrack *track, AVStream *st,
uint8_t *data, int pkt_size,
uint64_t timecode, uint64_t lace_duration,
int64_t pos, int is_keyframe,
uint8_t *additional, uint64_t additional_id, int additional_size,
int64_t discard_padding)
static int matroska_parse_block(MatroskaDemuxContext *matroska, uint8_t *data,
int size, int64_t pos, uint64_t cluster_time,
uint64_t block_duration, int is_keyframe,
uint8_t *additional, uint64_t additional_id, int additional_size,
int64_t cluster_pos, int64_t discard_padding)
static int matroska_parse_cluster_incremental(MatroskaDemuxContext *matroska)
static int matroska_parse_cluster(MatroskaDemuxContext *matroska)
static int matroska_read_packet(AVFormatContext *s, AVPacket *pkt)
static int matroska_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static int matroska_read_close(AVFormatContext *s)
typedef struct  CueDesc;
static CueDesc get_cue_desc(AVFormatContext *s, int64_t ts, int64_t cues_start)
static int webm_clusters_start_with_keyframe(AVFormatContext *s)
static int buffer_size_after_time_downloaded(int64_t time_ns, double search_sec, int64_t bps,
double min_buffer, double* buffer,
double* sec_to_download, AVFormatContext *s,
int64_t cues_start)
static int64_t webm_dash_manifest_compute_bandwidth(AVFormatContext *s, int64_t cues_start)
static int webm_dash_manifest_cues(AVFormatContext *s)
static int webm_dash_manifest_read_header(AVFormatContext *s)
static int webm_dash_manifest_read_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(MatroskaDemuxContext, x)
static const AVOption options[] = ;
static const AVClass webm_dash_class = ;
AVInputFormat ff_matroska_demuxer = ;
AVInputFormat ff_webm_dash_manifest_demuxer = ;
