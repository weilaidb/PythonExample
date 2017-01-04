#define AVCODEC_ACELP_VECTORS_H
typedef struct ACELPVContext ACELPVContext;
void ff_acelp_vectors_init(ACELPVContext *c);
void ff_acelp_vectors_init_mips(ACELPVContext *c);
typedef struct AMRFixed  AMRFixed;
extern const uint8_t ff_fc_4pulses_8bits_tracks_13[16];
extern const uint8_t ff_fc_4pulses_8bits_track_4[32];
extern const uint8_t ff_fc_2pulses_9bits_track1[16];
extern const uint8_t ff_fc_2pulses_9bits_track1_gray[16];
extern const uint8_t ff_fc_2pulses_9bits_track2_gray[32];
extern const float ff_b60_sinc[61];
extern const float ff_pow_0_7[10];
extern const float ff_pow_0_75[10];
extern const float ff_pow_0_55[10];
void ff_acelp_fc_pulse_per_track(int16_t* fc_v,
const uint8_t *tab1,
const uint8_t *tab2,
int pulse_indexes,
int pulse_signs,
int pulse_count,
int bits);
void ff_decode_10_pulses_35bits(const int16_t *fixed_index,
AMRFixed *fixed_sparse,
const uint8_t *gray_decode,
int half_pulse_count, int bits);
void ff_acelp_weighted_vector_sum(int16_t* out,
const int16_t *in_a,
const int16_t *in_b,
int16_t weight_coeff_a,
int16_t weight_coeff_b,
int16_t rounder,
int shift,
int length);
void ff_weighted_vector_sumf(float *out, const float *in_a, const float *in_b,
float weight_coeff_a, float weight_coeff_b,
int length);
void ff_adaptive_gain_control(float *out, const float *in, float speech_energ,
int size, float alpha, float *gain_mem);
void ff_scale_vector_to_given_sum_of_squares(float *out, const float *in,
float sum_of_squares, const int n);
void ff_set_fixed_vector(float *out, const AMRFixed *in, float scale, int size);
void ff_clear_fixed_vector(float *out, const AMRFixed *in, int size);
