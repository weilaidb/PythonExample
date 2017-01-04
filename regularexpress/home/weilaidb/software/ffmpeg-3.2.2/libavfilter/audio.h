#define AVFILTER_AUDIO_H
static const enum AVSampleFormat ff_packed_sample_fmts_array[] = ;
static const enum AVSampleFormat ff_planar_sample_fmts_array[] = ;
AVFrame *ff_default_get_audio_buffer(AVFilterLink *link, int nb_samples);
AVFrame *ff_null_get_audio_buffer(AVFilterLink *link, int nb_samples);
AVFrame *ff_get_audio_buffer(AVFilterLink *link, int nb_samples);
