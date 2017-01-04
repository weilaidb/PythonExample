static av_cold snd_pcm_format_t codec_id_to_pcm_format(int codec_id)
#define MAKE_REORDER_FUNC(NAME, TYPE, CHANNELS, LAYOUT, MAP)                \
static void alsa_reorder_ ## NAME ## _ ## LAYOUT(const void *in_v,          \
void *out_v,               \
int n)                     \
#define MAKE_REORDER_FUNCS(CHANNELS, LAYOUT, MAP) \
MAKE_REORDER_FUNC(int8,  int8_t,  CHANNELS, LAYOUT, MAP) \
MAKE_REORDER_FUNC(int16, int16_t, CHANNELS, LAYOUT, MAP) \
MAKE_REORDER_FUNC(int32, int32_t, CHANNELS, LAYOUT, MAP) \
MAKE_REORDER_FUNC(f32,   float,   CHANNELS, LAYOUT, MAP)
MAKE_REORDER_FUNCS(5, out_50, \
out[0] = in[0]; \
out[1] = in[1]; \
out[2] = in[3]; \
out[3] = in[4]; \
out[4] = in[2]; \
)
MAKE_REORDER_FUNCS(6, out_51, \
out[0] = in[0]; \
out[1] = in[1]; \
out[2] = in[4]; \
out[3] = in[5]; \
out[4] = in[2]; \
out[5] = in[3]; \
)
MAKE_REORDER_FUNCS(8, out_71, \
out[0] = in[0]; \
out[1] = in[1]; \
out[2] = in[4]; \
out[3] = in[5]; \
out[4] = in[2]; \
out[5] = in[3]; \
out[6] = in[6]; \
out[7] = in[7]; \
)
#define FORMAT_I8  0
#define FORMAT_I16 1
#define FORMAT_I32 2
#define FORMAT_F32 3
#define PICK_REORDER(layout)\
switch(format)
static av_cold int find_reorder_func(AlsaData *s, int codec_id, uint64_t layout, int out)
av_cold int ff_alsa_open(AVFormatContext *ctx, snd_pcm_stream_t mode,
unsigned int *sample_rate,
int channels, enum AVCodecID *codec_id)
av_cold int ff_alsa_close(AVFormatContext *s1)
int ff_alsa_xrun_recover(AVFormatContext *s1, int err)
int ff_alsa_extend_reorder_buf(AlsaData *s, int min_size)
int ff_alsa_get_device_list(AVDeviceInfoList *device_list, snd_pcm_stream_t stream_type)
