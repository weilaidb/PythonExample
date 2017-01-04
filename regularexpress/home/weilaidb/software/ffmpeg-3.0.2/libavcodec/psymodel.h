#define AVCODEC_PSYMODEL_H
#define PSY_MAX_BANDS 128
#define PSY_MAX_CHANS 20
#define AAC_CUTOFF_FROM_BITRATE(bit_rate,channels,sample_rate) (bit_rate ? FFMIN3(FFMIN3( \
FFMAX(bit_rate/channels/5, bit_rate/channels*15/32 - 5500), \
3000 + bit_rate/channels/4, \
12000 + bit_rate/channels/16), \
22000, \
sample_rate / 2): (sample_rate / 2))
#define AAC_CUTOFF(s) ( \
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
int ff_psy_init(FFPsyContext *ctx, AVCodecContext *avctx, int num_lens,
const uint8_t **bands, const int *num_bands,
int num_groups, const uint8_t *group_map);
FFPsyChannelGroup *ff_psy_find_group(FFPsyContext *ctx, int channel);
void ff_psy_end(FFPsyContext *ctx);
struct FFPsyPreprocessContext;
struct FFPsyPreprocessContext *ff_psy_preprocess_init(AVCodecContext *avctx);
void ff_psy_preprocess(struct FFPsyPreprocessContext *ctx, float **audio, int channels);
void ff_psy_preprocess_end(struct FFPsyPreprocessContext *ctx);
