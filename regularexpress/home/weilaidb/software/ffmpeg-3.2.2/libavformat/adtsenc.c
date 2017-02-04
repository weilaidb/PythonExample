#define ADTS_HEADER_SIZE 7
typedef struct ADTSContext  ADTSContext;
#define ADTS_MAX_FRAME_BYTES ((1 << 13) - 1)
adts_decode_extradata
adts_write_header
adts_write_frame_header
adts_write_packet
adts_write_trailer
#define ENC AV_OPT_FLAG_ENCODING_PARAM
OFFSET offsetof(ADTSContext, obj)
static const AVOption options[] = ;
static const AVClass adts_muxer_class = ;
AVOutputFormat ff_adts_muxer = ;
