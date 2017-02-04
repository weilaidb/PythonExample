#define MAX_CHANNELS 6
#define DCA_MAX_FRAME_SIZE 16384
#define DCA_HEADER_SIZE 13
#define DCA_LFE_SAMPLES 8
#define DCAENC_SUBBANDS 32
#define SUBFRAMES 1
#define SUBSUBFRAMES 2
#define SUBBAND_SAMPLES (SUBFRAMES * SUBSUBFRAMES * 8)
#define AUBANDS 25
typedef struct DCAEncContext  DCAEncContext;
static int32_t cos_table[2048];
static int32_t band_interpolation[2][512];
static int32_t band_spectrum[2][8];
static int32_t auf[9][AUBANDS][256];
static int32_t cb_to_add[256];
static int32_t cb_to_level[2048];
static int32_t lfe_fir_64i[512];
hom
gammafilter
encode_init
cos_t
sin_t
half32
mul32
subband_transform
lfe_downsample
typedef struct  cplx32;
fft
get_cb
add_cb
adjust_jnd
typedef void (*walk_band_t)(DCAEncContext *c, int band1, int band2, int f,
int32_t spectrum1, int32_t spectrum2, int channel,
int32_t * arg);
walk_band_low
walk_band_high
update_band_masking
calc_masking
find_peaks
static const int snr_fudge = 128;
#define USED_1ABITS 1
#define USED_NABITS 2
#define USED_26ABITS 4
init_quantization_noise
assign_bits
shift_history
quantize_value
calc_one_scale
calc_scales
quantize_all
put_frame_header
put_primary_audio_header
put_subframe_samples
put_subframe
encode_frame
static const AVCodecDefault defaults[] = ;
AVCodec ff_dca_encoder = ;
