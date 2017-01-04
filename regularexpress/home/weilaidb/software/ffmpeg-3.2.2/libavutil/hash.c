enum hashtype ;
typedef struct AVHashContext  AVHashContext;
static const struct  hashdesc[] = ;
const char *av_hash_names(int i)
const char *av_hash_get_name(const AVHashContext *ctx)
int av_hash_get_size(const AVHashContext *ctx)
int av_hash_alloc(AVHashContext **ctx, const char *name)
void av_hash_init(AVHashContext *ctx)
void av_hash_update(AVHashContext *ctx, const uint8_t *src, int len)
void av_hash_final(AVHashContext *ctx, uint8_t *dst)
void av_hash_final_bin(struct AVHashContext *ctx, uint8_t *dst, int size)
void av_hash_final_hex(struct AVHashContext *ctx, uint8_t *dst, int size)
void av_hash_final_b64(struct AVHashContext *ctx, uint8_t *dst, int size)
void av_hash_freep(AVHashContext **ctx)
