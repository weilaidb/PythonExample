#define AVFILTER_MASKEDMERGE_H
typedef struct MaskedMergeContext  MaskedMergeContext;
void ff_maskedmerge_init_x86(MaskedMergeContext *s);
