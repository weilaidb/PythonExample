typedef struct AVIStream  AVIStream;
typedef struct AVIContext  AVIContext;
static const AVOption options[] = ;
static const AVClass demuxer_class = ;
static const char avi_headers[][8] = ;
static const AVMetadataConv avi_metadata_conv[] = ;
avi_load_index;
guess_ni_flag;
print_tag                        \
av_log(NULL, AV_LOG_TRACE, , \
avio_tell(pb), str, tag & 0xff,              \
(tag >> 8) & 0xff,                           \
(tag >> 16) & 0xff,                          \
(tag >> 24) & 0xff,                          \
size)
get_duration
get_riff
read_braindead_odml_indx
clean_index
avi_read_tag
static const char months[12][4] = ;
avi_metadata_creation_time
avi_read_nikon
avi_extract_stream_metadata
calculate_bitrate
avi_read_header
read_gab2_sub
*get_subtitle_pkt
get_stream_idx
avi_sync
ni_prepare_read
avi_read_packet
avi_read_idx1
check_stream_max_drift
guess_ni_flag
avi_load_index
seek_subtitle
avi_read_seek
avi_read_close
avi_probe
AVInputFormat ff_avi_demuxer = ;
