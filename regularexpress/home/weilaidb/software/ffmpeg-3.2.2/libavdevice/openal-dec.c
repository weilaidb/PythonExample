typedef struct  al_data;
typedef struct  al_format_info;
#define LOWEST_AL_FORMAT FFMIN(FFMIN(AL_FORMAT_MONO8,AL_FORMAT_MONO16),FFMIN(AL_FORMAT_STEREO8,AL_FORMAT_STEREO16))
static const inline al_format_info* get_al_format_info(ALCenum al_fmt)
static inline int al_get_error(ALCdevice *device, const char** error_msg_ret)
static inline void print_al_capture_devices(void *log_ctx)
static int read_header(AVFormatContext *ctx)
static int read_packet(AVFormatContext* ctx, AVPacket *pkt)
static int read_close(AVFormatContext* ctx)
#define OFFSET(x) offsetof(al_data, x)
static const AVOption options[] = ;
static const AVClass class = ;
AVInputFormat ff_openal_demuxer = ;
