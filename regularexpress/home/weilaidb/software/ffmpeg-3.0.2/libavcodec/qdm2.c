#define BITSTREAM_READER_LE
#define QDM2_LIST_ADD(list, size, packet) \
do  while(0)
#define QDM2_SB_USED(sub_sampling) (((sub_sampling) >= 2) ? 30 : 8 << (sub_sampling))
#define FIX_NOISE_IDX(noise_idx) \
if ((noise_idx) >= 3840) \
(noise_idx) -= 3840; \
#define SB_DITHERING_NOISE(sb,noise_idx) (noise_table[(noise_idx)++] * sb_noise_attenuation[(sb)])
#define SAMPLES_NEEDED \
av_log (NULL,AV_LOG_INFO,"This file triggers some untested code. Please contact the developers.\n");
#define SAMPLES_NEEDED_2(why) \
av_log (NULL,AV_LOG_INFO,"This file triggers some missing code. Please contact the developers.\nPosition: %s\n",why);
#define QDM2_MAX_FRAME_SIZE 512
typedef int8_t sb_int8_array[2][30][64];
typedef struct QDM2SubPacket  QDM2SubPacket;
typedef struct QDM2SubPNode  QDM2SubPNode;
typedef struct QDM2Complex  QDM2Complex;
typedef struct FFTTone  FFTTone;
typedef struct FFTCoefficient  FFTCoefficient;
typedef struct QDM2FFT  QDM2FFT;
typedef struct QDM2Context  QDM2Context;
static const int switchtable[23] = ;
static int qdm2_get_vlc(GetBitContext *gb, const VLC *vlc, int flag, int depth)
static int qdm2_get_se_vlc(const VLC *vlc, GetBitContext *gb, int depth)
static uint16_t qdm2_packet_checksum(const uint8_t *data, int length, int value)
static void qdm2_decode_sub_packet_header(GetBitContext *gb,
QDM2SubPacket *sub_packet)
static QDM2SubPNode *qdm2_search_subpacket_type_in_list(QDM2SubPNode *list,
int type)
static void average_quantized_coeffs(QDM2Context *q)
static void build_sb_samples_from_noise(QDM2Context *q, int sb)
static int fix_coding_method_array(int sb, int channels,
sb_int8_array coding_method)
static void fill_tone_level_array(QDM2Context *q, int flag)
static void fill_coding_method_array(sb_int8_array tone_level_idx,
sb_int8_array tone_level_idx_temp,
sb_int8_array coding_method,
int nb_channels,
int c, int superblocktype_2_3,
int cm_table_select)
static int synthfilt_build_sb_samples(QDM2Context *q, GetBitContext *gb,
int length, int sb_min, int sb_max)
static int init_quantized_coeffs_elem0(int8_t *quantized_coeffs,
GetBitContext *gb)
static void init_tone_level_dequantization(QDM2Context *q, GetBitContext *gb)
static int process_subpacket_9(QDM2Context *q, QDM2SubPNode *node)
static void process_subpacket_10(QDM2Context *q, QDM2SubPNode *node)
static void process_subpacket_11(QDM2Context *q, QDM2SubPNode *node)
static void process_subpacket_12(QDM2Context *q, QDM2SubPNode *node)
static void process_synthesis_subpackets(QDM2Context *q, QDM2SubPNode *list)
static void qdm2_decode_super_block(QDM2Context *q)
static void qdm2_fft_init_coefficient(QDM2Context *q, int sub_packet,
int offset, int duration, int channel,
int exp, int phase)
static void qdm2_fft_decode_tones(QDM2Context *q, int duration,
GetBitContext *gb, int b)
static void qdm2_decode_fft_packets(QDM2Context *q)
static void qdm2_fft_generate_tone(QDM2Context *q, FFTTone *tone)
static void qdm2_fft_tone_synthesizer(QDM2Context *q, int sub_packet)
static void qdm2_calculate_fft(QDM2Context *q, int channel, int sub_packet)
static void qdm2_synthesis_filter(QDM2Context *q, int index)
static av_cold void qdm2_init_static_data(void)
static av_cold int qdm2_decode_init(AVCodecContext *avctx)
static av_cold int qdm2_decode_close(AVCodecContext *avctx)
static int qdm2_decode(QDM2Context *q, const uint8_t *in, int16_t *out)
static int qdm2_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_qdm2_decoder = ;
