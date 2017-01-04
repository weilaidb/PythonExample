struct AVBSFInternal ;
void av_bsf_free(AVBSFContext **pctx)
static void *bsf_child_next(void *obj, void *prev)
static const AVClass bsf_class = ;
const AVClass *av_bsf_get_class(void)
int av_bsf_alloc(const AVBitStreamFilter *filter, AVBSFContext **pctx)
int av_bsf_init(AVBSFContext *ctx)
int av_bsf_send_packet(AVBSFContext *ctx, AVPacket *pkt)
int av_bsf_receive_packet(AVBSFContext *ctx, AVPacket *pkt)
int ff_bsf_get_packet(AVBSFContext *ctx, AVPacket **pkt)
int ff_bsf_get_packet_ref(AVBSFContext *ctx, AVPacket *pkt)
typedef struct BSFListContext  BSFListContext;
static int bsf_list_init(AVBSFContext *bsf)
static int bsf_list_filter(AVBSFContext *bsf, AVPacket *out)
static void bsf_list_close(AVBSFContext *bsf)
static const char *bsf_list_item_name(void *ctx)
static const AVClass bsf_list_class = ;
const AVBitStreamFilter ff_list_bsf = ;
struct AVBSFList ;
AVBSFList *av_bsf_list_alloc(void)
void av_bsf_list_free(AVBSFList **lst)
int av_bsf_list_append(AVBSFList *lst, AVBSFContext *bsf)
int av_bsf_list_append2(AVBSFList *lst, const char *bsf_name, AVDictionary ** options)
int av_bsf_list_finalize(AVBSFList **lst, AVBSFContext **bsf)
static int bsf_parse_single(const char *str, AVBSFList *bsf_lst)
int av_bsf_list_parse_str(const char *str, AVBSFContext **bsf_lst)
int av_bsf_get_null_filter(AVBSFContext **bsf)
