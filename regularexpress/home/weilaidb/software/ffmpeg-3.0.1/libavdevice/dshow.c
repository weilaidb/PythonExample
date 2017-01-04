static enum AVPixelFormat dshow_pixfmt(DWORD biCompression, WORD biBitCount)
static int
dshow_read_close(AVFormatContext *s)
static char *dup_wchar_to_utf8(wchar_t *w)
static int shall_we_drop(AVFormatContext *s, int index, enum dshowDeviceType devtype)
static void
callback(void *priv_data, int index, uint8_t *buf, int buf_size, int64_t time, enum dshowDeviceType devtype)
static int
dshow_cycle_devices(AVFormatContext *avctx, ICreateDevEnum *devenum,
enum dshowDeviceType devtype, enum dshowSourceFilterType sourcetype, IBaseFilter **pfilter)
static void
dshow_cycle_formats(AVFormatContext *avctx, enum dshowDeviceType devtype,
IPin *pin, int *pformat_set)
static int
dshow_set_audio_buffer_size(AVFormatContext *avctx, IPin *pin)
void
dshow_show_filter_properties(IBaseFilter *device_filter, AVFormatContext *avctx)
static int
dshow_cycle_pins(AVFormatContext *avctx, enum dshowDeviceType devtype,
enum dshowSourceFilterType sourcetype, IBaseFilter *device_filter, IPin **ppin)
static int
dshow_list_device_options(AVFormatContext *avctx, ICreateDevEnum *devenum,
enum dshowDeviceType devtype, enum dshowSourceFilterType sourcetype)
static int
dshow_open_device(AVFormatContext *avctx, ICreateDevEnum *devenum,
enum dshowDeviceType devtype, enum dshowSourceFilterType sourcetype)
static enum AVCodecID waveform_codec_id(enum AVSampleFormat sample_fmt)
static enum AVSampleFormat sample_fmt_bits_per_sample(int bits)
static int
dshow_add_device(AVFormatContext *avctx,
enum dshowDeviceType devtype)
static int parse_device_name(AVFormatContext *avctx)
static int dshow_read_header(AVFormatContext *avctx)
static int dshow_check_event_queue(IMediaEvent *media_event)
static int dshow_read_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(struct dshow_ctx, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass dshow_class = ;
AVInputFormat ff_dshow_demuxer = ;
