const float ff_nelly_dequantization_table[127] = ;
const uint8_t ff_nelly_band_sizes_table[NELLY_BANDS] = ;
const uint16_t ff_nelly_init_table[64] = ;
const int16_t ff_nelly_delta_table[32] = ;
static inline int signed_shift(int i, int shift)
static int sum_bits(short *buf, short shift, short off)
static int headroom(int *la)
void ff_nelly_get_sample_bits(const float *buf, int *bits)
