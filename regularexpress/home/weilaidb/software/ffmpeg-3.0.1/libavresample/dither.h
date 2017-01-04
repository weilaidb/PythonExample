#define AVRESAMPLE_DITHER_H
typedef struct DitherContext DitherContext;
typedef struct DitherDSPContext  DitherDSPContext;
DitherContext *ff_dither_alloc(AVAudioResampleContext *avr,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels, int sample_rate, int apply_map);
void ff_dither_free(DitherContext **c);
int ff_convert_dither(DitherContext *c, AudioData *dst, AudioData *src);
void ff_dither_init_x86(DitherDSPContext *ddsp,
enum AVResampleDitherMethod method);
