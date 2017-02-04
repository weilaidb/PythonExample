#define AVCODEC_PSYMODEL_H
#define PSY_MAX_BANDS 128
#define PSY_MAX_CHANS 20
AAC_CUTOFF_FROM_BITRATE (bit_rate ? FFMIN3(FFMIN3( \
FFMAX(bit_rate/channels/5, bit_rate/channels*15/32 - 5500), \
3000 + bit_rate/channels/4, \
12000 + bit_rate/channels/16), \
22000, \
sample_rate / 2): (sample_rate / 2))
AAC_CUTOFF ( \
(s->flags & CODEC_FLAG_QSCALE) \
? s->sample_rate / 2 \
: AAC_CUTOFF_FROM_BITRATE(s->bit_rate, s->channels, s->sample_rate) \
)
typedef struct FFPsyBand  FFPsyBand;
typedef struct FFPsyChannel  FFPsyChannel;
typedef struct FFPsyChannelGroup  FFPsyChannelGroup;
typedef struct FFPsyWindowInfo  FFPsyWindowInfo;
typedef struct FFPsyContext  FFPsyContext;
typedef struct FFPsyModel  FFPsyModel;
ff_psy_init;
*ff_psy_find_group;
ff_psy_end;
struct FFPsyPreprocessContext;
*ff_psy_preprocess_init;
ff_psy_preprocess;
ff_psy_preprocess_end;
