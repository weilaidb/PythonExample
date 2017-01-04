const uint8_t ff_ac3_band_start_tab[AC3_CRITICAL_BANDS+1] = ;
const uint8_t ff_ac3_bin_to_band_tab[253] = ;
static inline int calc_lowcomp1(int a, int b0, int b1, int c)
static inline int calc_lowcomp(int a, int b0, int b1, int bin)
void ff_ac3_bit_alloc_calc_psd(int8_t *exp, int start, int end, int16_t *psd,
int16_t *band_psd)
int ff_ac3_bit_alloc_calc_mask(AC3BitAllocParameters *s, int16_t *band_psd,
int start, int end, int fast_gain, int is_lfe,
int dba_mode, int dba_nsegs, uint8_t *dba_offsets,
uint8_t *dba_lengths, uint8_t *dba_values,
int16_t *mask)
