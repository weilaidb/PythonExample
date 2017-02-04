enum ;
MKTAG
typedef struct TMVContext  TMVContext;
#define TMV_HEADER_SIZE       12
#define PROBE_MIN_SAMPLE_RATE 5000
#define PROBE_MAX_FPS         120
#define PROBE_MIN_AUDIO_SIZE  (PROBE_MIN_SAMPLE_RATE / PROBE_MAX_FPS)
tmv_probe
tmv_read_header
tmv_read_packet
tmv_read_seek
AVInputFormat ff_tmv_demuxer = ;
