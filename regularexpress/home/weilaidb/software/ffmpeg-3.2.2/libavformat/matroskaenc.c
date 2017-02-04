typedef struct ebml_master  ebml_master;
typedef struct mkv_seekhead_entry  mkv_seekhead_entry;
typedef struct mkv_seekhead  mkv_seekhead;
typedef struct mkv_cuepoint  mkv_cuepoint;
typedef struct mkv_cues  mkv_cues;
typedef struct mkv_track  mkv_track;
typedef struct mkv_attachment  mkv_attachment;
typedef struct mkv_attachments  mkv_attachments;
#define MODE_MATROSKAv2 0x01
#define MODE_WEBM       0x02
#define MAX_TRACKS 126
typedef struct MatroskaMuxContext  MatroskaMuxContext;
#define MAX_SEEKENTRY_SIZE 21
#define MAX_CUETRACKPOS_SIZE 42
MAX_CUEPOINT_SIZE 12 + MAX_CUETRACKPOS_SIZE * num_tracks
#define OPUS_SEEK_PREROLL 80000000
ebml_id_size
put_ebml_id
put_ebml_size_unknown
ebml_num_size
put_ebml_num
put_ebml_uint
put_ebml_sint
put_ebml_float
put_ebml_binary
put_ebml_string
put_ebml_void
start_ebml_master
end_ebml_master
start_ebml_master_crc32
end_ebml_master_crc32
put_xiph_size
mkv_free
*mkv_start_seekhead
mkv_add_seekhead_entry
mkv_write_seekhead
*mkv_start_cues
mkv_add_cuepoint
mkv_write_cues
put_xiph_codecpriv
put_wv_codecpriv
put_flac_codecpriv
get_aac_sample_rates
mkv_write_native_codecprivate
mkv_write_codecprivate
mkv_write_video_color
mkv_write_field_order
mkv_write_stereo_mode
mkv_write_track
mkv_write_tracks
mkv_write_chapters
mkv_write_simpletag
mkv_write_tag_targets
mkv_check_tag_name
mkv_write_tag
mkv_check_tag
mkv_write_tags
mkv_write_attachments
get_metadata_duration
mkv_write_header
mkv_blockgroup_size
mkv_strip_wavpack
mkv_write_block
mkv_write_vtt_blocks
mkv_start_new_cluster
mkv_write_packet_internal
mkv_write_packet
mkv_write_flush_packet
mkv_write_trailer
mkv_query_codec
mkv_init
mkv_check_bitstream
static const AVCodecTag additional_audio_tags[] = ;
static const AVCodecTag additional_video_tags[] = ;
static const AVCodecTag additional_subtitle_tags[] = ;
OFFSET offsetof(MatroskaMuxContext, x)
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
