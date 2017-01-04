#if ARCH_ARM
#define VLC_BITS            5
#define VLC_STATIC_SIZE     64
#define VLC_BITS            9
#define VLC_STATIC_SIZE     512
typedef struct SubStream  SubStream;
typedef struct MLPDecodeContext  MLPDecodeContext;
static const uint64_t thd_channel_order[] = ;
static uint64_t thd_channel_layout_extract_channel(uint64_t channel_layout,
int index)
static VLC huff_vlc[3];
static av_cold void init_static(void)
static inline int32_t calculate_sign_huff(MLPDecodeContext *m,
unsigned int substr, unsigned int ch)
static inline int read_huff_channels(MLPDecodeContext *m, GetBitContext *gbp,
unsigned int substr, unsigned int pos)
static av_cold int mlp_decode_init(AVCodecContext *avctx)
static int read_major_sync(MLPDecodeContext *m, GetBitContext *gb)
static int read_restart_header(MLPDecodeContext *m, GetBitContext *gbp,
const uint8_t *buf, unsigned int substr)
static int read_filter_params(MLPDecodeContext *m, GetBitContext *gbp,
unsigned int substr, unsigned int channel,
unsigned int filter)
static int read_matrix_params(MLPDecodeContext *m, unsigned int substr, GetBitContext *gbp)
static int read_channel_params(MLPDecodeContext *m, unsigned int substr,
GetBitContext *gbp, unsigned int ch)
static int read_decoding_params(MLPDecodeContext *m, GetBitContext *gbp,
unsigned int substr)
#define MSB_MASK(bits)  (-1u << (bits))
static void filter_channel(MLPDecodeContext *m, unsigned int substr,
unsigned int channel)
static int read_block_data(MLPDecodeContext *m, GetBitContext *gbp,
unsigned int substr)
static const int8_t noise_table[256] = ;
static void generate_2_noise_channels(MLPDecodeContext *m, unsigned int substr)
static void fill_noise_buffer(MLPDecodeContext *m, unsigned int substr)
static int output_data(MLPDecodeContext *m, unsigned int substr,
AVFrame *frame, int *got_frame_ptr)
static int read_access_unit(AVCodecContext *avctx, void* data,
int *got_frame_ptr, AVPacket *avpkt)
#if CONFIG_MLP_DECODER
AVCodec ff_mlp_decoder = ;
#if CONFIG_TRUEHD_DECODER
AVCodec ff_truehd_decoder = ;
