enum RemoveFreq ;
typedef struct RemoveExtradataContext  RemoveExtradataContext;
static int remove_extradata(AVBSFContext *ctx, AVPacket *out)
static int remove_extradata_init(AVBSFContext *ctx)
static void remove_extradata_close(AVBSFContext *ctx)
#define OFFSET(x) offsetof(RemoveExtradataContext, x)
static const AVOption options[] = ;
static const AVClass remove_extradata_class = ;
const AVBitStreamFilter ff_remove_extradata_bsf = ;
