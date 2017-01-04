#define AVFILTER_REMOVEGRAIN_H
typedef struct RemoveGrainContext  RemoveGrainContext;
void ff_removegrain_init_x86(RemoveGrainContext *rg);
