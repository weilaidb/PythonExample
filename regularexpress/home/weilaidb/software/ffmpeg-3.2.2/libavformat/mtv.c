#define MTV_ASUBCHUNK_DATA_SIZE 500
#define MTV_HEADER_SIZE 512
#define MTV_AUDIO_PADDING_SIZE 12
#define MTV_IMAGE_DEFAULT_BPP 16
#define MTV_AUDIO_SAMPLING_RATE 44100
typedef struct MTVDemuxContext  MTVDemuxContext;
mtv_probe
mtv_read_header
mtv_read_packet
AVInputFormat ff_mtv_demuxer = ;
