extern const FFPsyModel ff_aac_psy_model;
av_cold int ff_psy_init(FFPsyContext *ctx, AVCodecContext *avctx, int num_lens,
const uint8_t **bands, const int* num_bands,
int num_groups, const uint8_t *group_map)
FFPsyChannelGroup *ff_psy_find_group(FFPsyContext *ctx, int channel)
av_cold void ff_psy_end(FFPsyContext *ctx)
typedef struct FFPsyPreprocessContextFFPsyPreprocessContext;
#define FILT_ORDER 4
av_cold struct FFPsyPreprocessContext* ff_psy_preprocess_init(AVCodecContext *avctx)
void ff_psy_preprocess(struct FFPsyPreprocessContext *ctx, float **audio, int channels)
av_cold void ff_psy_preprocess_end(struct FFPsyPreprocessContext *ctx)
