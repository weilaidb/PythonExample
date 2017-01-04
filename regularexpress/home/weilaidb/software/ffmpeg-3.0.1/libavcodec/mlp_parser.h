#define AVCODEC_MLP_PARSER_H
typedef struct MLPHeaderInfo
MLPHeaderInfo;
int ff_mlp_read_major_sync(void *log, MLPHeaderInfo *mh, GetBitContext *gb);
uint64_t ff_truehd_layout(int chanmap);
extern const uint64_t ff_mlp_layout[32];
