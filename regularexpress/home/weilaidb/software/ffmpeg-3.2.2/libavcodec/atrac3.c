#define JOINT_STEREO    0x12
#define STEREO          0x2
#define SAMPLES_PER_FRAME 1024
#define MDCT_SIZE          512
typedef struct GainBlock  GainBlock;
typedef struct TonalComponent  TonalComponent;
typedef struct ChannelUnit  ChannelUnit;
typedef struct ATRAC3Context  ATRAC3Context;
static DECLARE_ALIGNED(32, float, mdct_window)[MDCT_SIZE];
static VLC_TYPE atrac3_vlc_table[4096][2];
static VLC   spectral_coeff_tab[7];
static void imlt(ATRAC3Context *q, float *input, float *output, int odd_band)
static int decode_bytes(const uint8_t *input, uint8_t *out, int bytes)
static av_cold void init_imdct_window(void)
{
int i, j;
static void read_quant_spectral_coeffs(GetBitContext *gb, int selector,
int coding_flag, int *mantissas,
int num_codes)
static int decode_spectrum(GetBitContext *gb, float *output)
static int decode_tonal_components(GetBitContext *gb,
TonalComponent *components, int num_bands)
static int decode_gain_control(GetBitContext *gb, GainBlock *block,
int num_bands)
static int add_tonal_components(float *spectrum, int num_components,
TonalComponent *components)
#define INTERPOLATE(old, new, nsample) \
((old) + (nsample) * 0.125 * ((new) - (old)))
static void reverse_matrixing(float *su1, float *su2, int *prev_code,
int *curr_code)
static void get_channel_weights(int index, int flag, float ch[2])
static void channel_weighting(float *su1, float *su2, int *p3)
static int decode_channel_sound_unit(ATRAC3Context *q, GetBitContext *gb,
ChannelUnit *snd, float *output,
int channel_num, int coding_mode)
static int decode_frame(AVCodecContext *avctx, const uint8_t *databuf,
float **out_samples)
static int atrac3_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void atrac3_init_static_data(void)
static av_cold int atrac3_decode_init(AVCodecContext *avctx)
AVCodec ff_atrac3_decoder = ;
