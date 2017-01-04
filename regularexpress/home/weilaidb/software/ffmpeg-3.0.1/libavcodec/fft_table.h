#define AVCODEC_FFT_TABLE_H
#define MAX_LOG2_NFFT 16
#define MAX_FFT_SIZE (1 << MAX_LOG2_NFFT)
extern const int32_t ff_w_tab_sr[];
extern uint16_t ff_fft_offsets_lut[];
void ff_fft_lut_init(uint16_t *table, int off, int size, int *index);
