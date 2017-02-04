#define AVFORMAT_INTERNAL_H
#define MAX_URL_SIZE 4096
#define PROBE_BUF_MIN 2048
#define PROBE_BUF_MAX (1 << 20)
#define MAX_PROBE_PACKETS 2500
hex_dump_debug av_hex_dump_log(class, AV_LOG_DEBUG, buf, size)
while
typedef struct AVCodecTag  AVCodecTag;
typedef struct CodecMime CodecMime;
typedef struct FFFrac  FFFrac;
struct AVFormatInternal ;
struct AVStreamInternal ;
dynarray_add\
while
dynarray_add\
while
*ff_brktimegm;
*ff_data_to_hex;
ff_hex_to_data;
ff_interleave_add_packet(AVFormatContext *, AVPacket *, AVPacket *));
ff_read_frame_flush;
#define NTP_OFFSET 2208988800ULL
#define NTP_OFFSET_US (NTP_OFFSET * 1000000ULL)
ff_ntp_time;
ff_sdp_write_media;
ff_write_chained;
ff_get_v_length;
ff_put_v;
ff_get_line;
#define SPACE_CHARS
typedef void (*ff_parse_key_val_cb)(void *context, const char *key,
int key_len, char **dest, int *dest_len);
ff_parse_key_value;
ff_find_stream_index;
ff_index_search_timestamp;
ff_add_index_entry;
ff_configure_buffers_for_index;
*avpriv_new_chapter;
ff_reduce_index;
ff_guess_image2_codec;
ff_seek_frame_binary;
ff_update_cur_dts;
ff_find_last_ts(struct AVFormatContext *, int , int64_t *, int64_t ));
ff_gen_search(struct AVFormatContext *, int , int64_t *, int64_t ));
avpriv_set_pts_info;
ff_add_param_change;
ff_framehash_write_header;
ff_read_packet;
ff_interleave_packet_per_dts;
ff_free_stream;
ff_compute_frame_duration;
ff_codec_get_tag;
ff_codec_get_id;
ff_get_pcm_codec_id;
ff_choose_timebase;
ff_choose_chroma_location;
ff_generate_avci_extradata;
ff_stream_add_bitstream_filter;
ff_stream_encode_params_copy;
ff_rename
ff_alloc_extradata;
ff_get_extradata;
ff_rfps_add_frame;
ff_rfps_calculate;
enum AVWriteUncodedFrameFlags ;
ff_copy_whiteblacklists;
ffio_open2_wrapper;
FFERRTAG
ff_format_output_open;
ff_format_io_close;
ff_parse_creation_time_metadata;
ff_standardize_creation_time;
#define CONTAINS_PAL 2
ff_reshuffle_raw_rgb;
ff_get_packet_palette;
ff_bprint_to_codecpar_extradata;
*ff_interleaved_peek;
