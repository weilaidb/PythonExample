#define VALIDATE_INDEX_TS_THRESH 2500
#define RESYNC_BUFFER_SIZE (1<<20)
typedef struct FLVContext  FLVContext;
probe
flv_probe
live_flv_probe
add_keyframes_index
*create_stream
flv_same_audio_codec
flv_set_audio_codec
flv_same_video_codec
flv_set_video_codec
amf_get_string
parse_keyframes_index
amf_parse_object
#define TYPE_ONTEXTDATA 1
#define TYPE_ONCAPTION 2
#define TYPE_ONCAPTIONINFO 3
#define TYPE_UNKNOWN 9
flv_read_metabody
flv_read_header
flv_read_close
flv_get_extradata
flv_queue_extradata
clear_index_entries
amf_skip_tag
flv_data_packet
resync
flv_read_packet
flv_read_seek
OFFSET offsetof(FLVContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass flv_class = ;
AVInputFormat ff_flv_demuxer = ;
static const AVClass live_flv_class = ;
AVInputFormat ff_live_flv_demuxer = ;
