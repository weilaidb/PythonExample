#define AVFORMAT_AVFORMAT_H
struct AVFormatContext;
struct AVDeviceInfoList;
struct AVDeviceCapabilitiesQuery;
av_get_packet;
av_append_packet;
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
av_stream_get_r_frame_rate;
av_stream_set_r_frame_rate;
*av_stream_get_parser;
av_stream_get_recommended_encoder_configuration;
av_stream_set_recommended_encoder_configuration;
av_stream_get_end_pts;
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
av_format_get_probe_score;
av_format_get_video_codec;
av_format_set_video_codec;
av_format_get_audio_codec;
av_format_set_audio_codec;
av_format_get_subtitle_codec;
av_format_set_subtitle_codec;
av_format_get_data_codec;
av_format_set_data_codec;
av_format_get_metadata_header_padding;
av_format_set_metadata_header_padding;
av_format_get_opaque;
av_format_set_opaque;
av_format_get_control_message_cb;
av_format_set_control_message_cb;
#if FF_API_OLD_OPEN_CALLBACKS
av_format_get_open_cb;
av_format_set_open_cb;
av_format_inject_global_side_data;
av_fmt_ctx_get_duration_estimation_method;
typedef struct AVPacketList  AVPacketList;
avformat_version;
*avformat_configuration;
*avformat_license;
av_register_all;
av_register_input_format;
av_register_output_format;
avformat_network_init;
avformat_network_deinit;
*av_iformat_next;
*av_oformat_next;
*avformat_alloc_context;
avformat_free_context;
*avformat_get_class;
*avformat_new_stream;
*av_stream_new_side_data;
#if FF_API_NOCONST_GET_SIDE_DATA
*av_stream_get_side_data;
*av_stream_get_side_data;
*av_new_program;
avformat_alloc_output_context2;
*av_find_input_format;
*av_probe_input_format;
*av_probe_input_format2;
*av_probe_input_format3;
av_probe_input_buffer2;
av_probe_input_buffer;
avformat_open_input;
attribute_deprecated
av_demuxer_open;
avformat_find_stream_info;
*av_find_program_from_stream;
av_program_add_stream_index;
av_find_best_stream;
av_read_frame;
av_seek_frame;
avformat_seek_file;
avformat_flush;
av_read_play;
av_read_pause;
avformat_close_input;
#define AVSEEK_FLAG_BACKWARD 1
#define AVSEEK_FLAG_BYTE     2
#define AVSEEK_FLAG_ANY      4
#define AVSEEK_FLAG_FRAME    8
#define AVSTREAM_INIT_IN_WRITE_HEADER 0
#define AVSTREAM_INIT_IN_INIT_OUTPUT  1
av_warn_unused_result
avformat_write_header;
av_warn_unused_result
avformat_init_output;
av_write_frame;
av_interleaved_write_frame;
av_write_uncoded_frame;
av_interleaved_write_uncoded_frame;
av_write_uncoded_frame_query;
av_write_trailer;
*av_guess_format;
av_guess_codec;
av_get_output_timestamp;
av_hex_dump;
av_hex_dump_log;
av_pkt_dump2;
av_pkt_dump_log2;
av_codec_get_id;
av_codec_get_tag;
av_codec_get_tag2;
av_find_default_stream_index;
av_index_search_timestamp;
av_add_index_entry;
av_url_split;
av_dump_format;
#define AV_FRAME_FILENAME_FLAGS_MULTIPLE 1
av_get_frame_filename2;
av_get_frame_filename;
av_filename_number_test;
av_sdp_create;
av_match_ext;
avformat_query_codec;
*avformat_get_riff_video_tags;
*avformat_get_riff_audio_tags;
*avformat_get_mov_video_tags;
*avformat_get_mov_audio_tags;
av_guess_sample_aspect_ratio;
av_guess_frame_rate;
avformat_match_stream_specifier;
avformat_queue_attached_pictures;
#if FF_API_OLD_BSF
attribute_deprecated
av_apply_bitstream_filters;
enum AVTimebaseSource ;
avformat_transfer_internal_stream_timing_info;
av_stream_get_codec_timebase;
