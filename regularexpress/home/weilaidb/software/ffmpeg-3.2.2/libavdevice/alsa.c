codec_id_to_pcm_format
MAKE_REORDER_FUNC                \
static void alsa_reorder_ ## NAME ## _ ## LAYOUT(const void *in_v,          \
void *out_v,               \
int n)                     \
MAKE_REORDER_FUNCS \
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
PICK_REORDER\
switch(format)
find_reorder_func
ff_alsa_open
ff_alsa_close
ff_alsa_xrun_recover
ff_alsa_extend_reorder_buf
ff_alsa_get_device_list
