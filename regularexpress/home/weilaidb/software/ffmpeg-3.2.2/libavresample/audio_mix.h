#define AVRESAMPLE_AUDIO_MIX_H
typedef void (mix_func)(uint8_t **src, void **matrix, int len, int out_ch,
int in_ch);
ff_audio_mix_set_func;
*ff_audio_mix_alloc;
ff_audio_mix_free;
ff_audio_mix;
ff_audio_mix_get_matrix;
ff_audio_mix_set_matrix;
ff_audio_mix_init_x86;
