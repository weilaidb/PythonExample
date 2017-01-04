#define AVCODEC_RANGECODER_H
typedef struct RangeCoder  RangeCoder;
void ff_init_range_encoder(RangeCoder *c, uint8_t *buf, int buf_size);
void ff_init_range_decoder(RangeCoder *c, const uint8_t *buf, int buf_size);
int ff_rac_terminate(RangeCoder *c);
void ff_build_rac_states(RangeCoder *c, int factor, int max_p);
static inline void renorm_encoder(RangeCoder *c)
static inline int get_rac_count(RangeCoder *c)
static inline void put_rac(RangeCoder *c, uint8_t *const state, int bit)
static inline void refill(RangeCoder *c)
static inline int get_rac(RangeCoder *c, uint8_t *const state)
