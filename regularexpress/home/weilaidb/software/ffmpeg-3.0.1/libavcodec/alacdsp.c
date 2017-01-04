static void decorrelate_stereo(int32_t *buffer[2], int nb_samples,
int decorr_shift, int decorr_left_weight)
static void append_extra_bits(int32_t *buffer[2], int32_t *extra_bits_buffer[2],
int extra_bits, int channels, int nb_samples)
av_cold void ff_alacdsp_init(ALACDSPContext *c)
