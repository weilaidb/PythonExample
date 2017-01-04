av_cold void ff_init_range_encoder(RangeCoder *c, uint8_t *buf, int buf_size)
av_cold void ff_init_range_decoder(RangeCoder *c, const uint8_t *buf,
int buf_size)
void ff_build_rac_states(RangeCoder *c, int factor, int max_p)
int ff_rac_terminate(RangeCoder *c)
