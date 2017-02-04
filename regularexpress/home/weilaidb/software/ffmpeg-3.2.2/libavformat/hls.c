#define INITIAL_BUFFER_SIZE 32768
#define MAX_FIELD_LEN 64
#define MAX_CHARACTERISTICS_LEN 512
#define MPEG_TIME_BASE 90000
#define MPEG_TIME_BASE_Q (AVRational)
enum KeyType ;
struct segment ;
struct rendition;
enum PlaylistType ;
struct playlist ;
struct rendition ;
struct variant ;
typedef struct HLSContext  HLSContext;
read_chomp_line
free_segment_list
free_init_section_list
free_playlist_list
free_variant_list
free_rendition_list
reset_packet
*new_playlist
struct variant_info ;
*new_variant
handle_variant_args
struct key_info ;
handle_key_args
struct init_section_info ;
*new_init_section
handle_init_section_args
struct rendition_info ;
*new_rendition
handle_rendition_args
ensure_playlist
update_options
open_url
parse_playlist
*current_segment
enum ReadFromURLMode ;
read_from_url
parse_id3
id3_has_changed_values
handle_id3
intercept_id3
open_input
update_init_section
default_reload_interval
read_data
add_renditions_to_variant
add_metadata_from_renditions
find_timestamp_in_playlist
select_cur_seq_no
save_avio_options
nested_io_open
add_stream_to_programs
set_stream_info_from_input_stream
update_streams_from_subdemuxer
update_noheader_flag
hls_read_header
recheck_discard_flags
fill_timing_for_id3_timestamped_stream
get_timebase
compare_ts_with_wrapdetect
hls_read_packet
hls_close
hls_read_seek
hls_probe
OFFSET offsetof(HLSContext, x)
#define FLAGS AV_OPT_FLAG_DECODING_PARAM
static const AVOption hls_options[] = ;
static const AVClass hls_class = ;
AVInputFormat ff_hls_demuxer = ;
