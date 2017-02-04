dbl_rand
PUT_FUNC                                     \
static void put_sample_ ## name(void **data, enum AVSampleFormat sample_fmt,\
int channels, int sample, int ch,           \
double v_dbl)                               \
PUT_FUNC(u8,  AV_SAMPLE_FMT_U8,  uint8_t, av_clip_uint8 ( lrint(v_dbl * (1  <<  7)) + 128))
PUT_FUNC(s16, AV_SAMPLE_FMT_S16, int16_t, av_clip_int16 ( lrint(v_dbl * (1  << 15))))
PUT_FUNC(s32, AV_SAMPLE_FMT_S32, int32_t, av_clipl_int32(llrint(v_dbl * (1U << 31))))
PUT_FUNC(flt, AV_SAMPLE_FMT_FLT, float,   v_dbl)
PUT_FUNC(dbl, AV_SAMPLE_FMT_DBL, double,  v_dbl)
put_sample
audiogen
static const enum AVSampleFormat formats[] = ;
static const int rates[] = ;
static const uint64_t layouts[] = ;
main
