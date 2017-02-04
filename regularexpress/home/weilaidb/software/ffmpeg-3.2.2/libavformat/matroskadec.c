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
matroska_read_close;
matroska_resync
ebml_level_end
ebml_read_num
ebml_read_length
ebml_read_uint
ebml_read_sint
ebml_read_float
ebml_read_ascii
ebml_read_binary
ebml_read_master
matroska_ebmlnum_uint
matroska_ebmlnum_sint
ebml_parse_elem;
ebml_parse_id
ebml_parse
ebml_parse_nest
is_ebml_id_valid
*matroska_find_level1_elem
ebml_parse_elem
ebml_free
matroska_probe
*matroska_find_track_by_num
matroska_decode_buffer
matroska_convert_tag
matroska_convert_tags
matroska_parse_seekhead_entry
matroska_execute_seekhead
matroska_add_index_entries
matroska_parse_cues
matroska_aac_profile
matroska_aac_sri
matroska_metadata_creation_time
matroska_parse_flac
mkv_field_order
mkv_stereo_mode_display_mul
mkv_parse_video_color
get_qt_codec
matroska_parse_tracks
matroska_read_header
matroska_deliver_packet
matroska_clear_queue
matroska_parse_laces
matroska_parse_rm_audio
matroska_parse_wavpack
matroska_parse_webvtt
matroska_parse_frame
matroska_parse_block
matroska_parse_cluster_incremental
matroska_parse_cluster
matroska_read_packet
matroska_read_seek
matroska_read_close
typedef struct  CueDesc;
get_cue_desc
webm_clusters_start_with_keyframe
buffer_size_after_time_downloaded
webm_dash_manifest_compute_bandwidth
webm_dash_manifest_cues
webm_dash_manifest_read_header
webm_dash_manifest_read_packet
OFFSET offsetof(MatroskaDemuxContext, x)
static const AVOption options[] = ;
static const AVClass webm_dash_class = ;
AVInputFormat ff_matroska_demuxer = ;
AVInputFormat ff_webm_dash_manifest_demuxer = ;
