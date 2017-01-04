struct biquad2_state ;
static inline void biquad2_init(struct biquad2_state *bq,
int32_t gain, int32_t a1, int32_t a2, int32_t b1, int32_t b2)
static inline int16_t biquad2(struct biquad2_state *bq, int16_t sample)
