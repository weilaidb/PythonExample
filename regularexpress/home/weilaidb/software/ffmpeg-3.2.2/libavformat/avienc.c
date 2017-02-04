typedef struct AVIIentry  AVIIentry;
#define AVI_INDEX_CLUSTER_SIZE 16384
typedef struct AVIIndex  AVIIndex;
typedef struct AVIContext  AVIContext;
typedef struct AVIStream  AVIStream;
avi_write_packet_internal;
*avi_get_ientry
avi_add_ientry
avi_start_new_riff
*avi_stream2fourcc
avi_write_counters
write_odml_master
avi_write_header
update_odml_entry
avi_write_ix
avi_write_idx1
write_skip_frames
avi_write_packet
avi_write_packet_internal
avi_write_trailer
OFFSET offsetof(AVIContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass avi_muxer_class = ;
AVOutputFormat ff_avi_muxer = ;
