#define RF64_AUTO   (-1)
#define RF64_NEVER  0
#define RF64_ALWAYS 1
#define PEAK_BUFFER_SIZE   1024
typedef enum  PeakType;
typedef enum  PeakFormat;
typedef struct WAVMuxContext  WAVMuxContext;
#if CONFIG_WAV_MUXER
bwf_write_bext_string
bwf_write_bext_chunk
peak_free_buffers
peak_init_writer
peak_write_frame
peak_write_chunk
wav_write_header
wav_write_packet
wav_write_trailer
OFFSET offsetof(WAVMuxContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass wav_muxer_class = ;
AVOutputFormat ff_wav_muxer = ;
#if CONFIG_W64_MUXER
start_guid
end_guid
w64_write_header
w64_write_trailer
AVOutputFormat ff_w64_muxer = ;
