#define BITSTREAM_READER_LE
QDM2_LIST_ADD \
while
QDM2_SB_USED (((sub_sampling) >= 2) ? 30 : 8 << (sub_sampling))
FIX_NOISE_IDX \
if ((noise_idx) >= 3840) \
(noise_idx) -= 3840; \
SB_DITHERING_NOISE (noise_table[(noise_idx)++] * sb_noise_attenuation[(sb)])
#define SAMPLES_NEEDED \
av_log (NULL,AV_LOG_INFO,);
SAMPLES_NEEDED_2 \
av_log (NULL,AV_LOG_INFO,,why);
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
qdm2_get_vlc
qdm2_get_se_vlc
qdm2_packet_checksum
qdm2_decode_sub_packet_header
*qdm2_search_subpacket_type_in_list
average_quantized_coeffs
build_sb_samples_from_noise
fix_coding_method_array
fill_tone_level_array
fill_coding_method_array
synthfilt_build_sb_samples
init_quantized_coeffs_elem0
init_tone_level_dequantization
process_subpacket_9
process_subpacket_10
process_subpacket_11
process_subpacket_12
process_synthesis_subpackets
qdm2_decode_super_block
qdm2_fft_init_coefficient
qdm2_fft_decode_tones
qdm2_decode_fft_packets
qdm2_fft_generate_tone
qdm2_fft_tone_synthesizer
qdm2_calculate_fft
qdm2_synthesis_filter
qdm2_init_static_data
qdm2_decode_init
qdm2_decode_close
qdm2_decode
qdm2_decode_frame
AVCodec ff_qdm2_decoder = ;
