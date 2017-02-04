static const char * const coeff_type_names[] = ;
struct AudioMix ;
ff_audio_mix_set_func
MIX_FUNC_NAME mix_any_ ## fmt ##_## cfmt ##_c
MIX_FUNC_GENERIC            \
MIX_FUNC_NAME(stype **samples, ctype **matrix,       \
int len, int out_ch, int in_ch)        \
MIX_FUNC_GENERIC(FLTP, FLT, float,   float,   float,   sum)
MIX_FUNC_GENERIC(S16P, FLT, int16_t, float,   float,   av_clip_int16(lrintf(sum)))
MIX_FUNC_GENERIC(S16P, Q15, int16_t, int32_t, int64_t, av_clip_int16(sum >> 15))
MIX_FUNC_GENERIC(S16P, Q8,  int16_t, int16_t, int32_t, av_clip_int16(sum >>  8))
mix_2_to_1_fltp_flt_c
mix_2_to_1_s16p_flt_c
mix_2_to_1_s16p_q8_c
mix_1_to_2_fltp_flt_c
mix_6_to_2_fltp_flt_c
mix_2_to_6_fltp_flt_c
mix_function_init
*ff_audio_mix_alloc
ff_audio_mix_free
ff_audio_mix
ff_audio_mix_get_matrix
reduce_matrix
ff_audio_mix_set_matrix
