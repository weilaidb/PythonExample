#define IMC_BLOCK_SIZE 64
#define IMC_FRAME_ID 0x21
#define BANDS 32
#define COEFFS 256
typedef struct IMCChannel  IMCChannel;
typedef struct IMCContext  IMCContext;
static VLC huffman_vlc[4][4];
#define VLC_TABLES_SIZE 9512
static const int vlc_offsets[17] = ;
static VLC_TYPE vlc_tables[VLC_TABLES_SIZE][2];
static inline double freq2bark(double freq)
static av_cold void iac_generate_tabs(IMCContext *q, int sampling_rate)
static av_cold int imc_decode_init(AVCodecContext *avctx)
static void imc_calculate_coeffs(IMCContext *q, float *flcoeffs1,
float *flcoeffs2, int *bandWidthT,
float *flcoeffs3, float *flcoeffs5)
static void imc_read_level_coeffs(IMCContext *q, int stream_format_code,
int *levlCoeffs)
static void imc_read_level_coeffs_raw(IMCContext *q, int stream_format_code,
int *levlCoeffs)
static void imc_decode_level_coefficients(IMCContext *q, int *levlCoeffBuf,
float *flcoeffs1, float *flcoeffs2)
static void imc_decode_level_coefficients2(IMCContext *q, int *levlCoeffBuf,
float *old_floor, float *flcoeffs1,
float *flcoeffs2)
static void imc_decode_level_coefficients_raw(IMCContext *q, int *levlCoeffBuf,
float *flcoeffs1, float *flcoeffs2)
static int bit_allocation(IMCContext *q, IMCChannel *chctx,
int stream_format_code, int freebits, int flag)
static void imc_get_skip_coeff(IMCContext *q, IMCChannel *chctx)
static void imc_adjust_bit_allocation(IMCContext *q, IMCChannel *chctx,
int summer)
static void imc_imdct256(IMCContext *q, IMCChannel *chctx, int channels)
static int inverse_quant_coeff(IMCContext *q, IMCChannel *chctx,
int stream_format_code)
static void imc_get_coeffs(AVCodecContext *avctx,
IMCContext *q, IMCChannel *chctx)
static void imc_refine_bit_allocation(IMCContext *q, IMCChannel *chctx)
static int imc_decode_block(AVCodecContext *avctx, IMCContext *q, int ch)
static int imc_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int imc_decode_close(AVCodecContext * avctx)
static av_cold void flush(AVCodecContext *avctx)
#if CONFIG_IMC_DECODER
AVCodec ff_imc_decoder = ;
#if CONFIG_IAC_DECODER
AVCodec ff_iac_decoder = ;
