#define BITSTREAM_READER_LE
#define SMKTREE_BITS 9
#define SMK_NODE 0x80000000
typedef struct SmackVContext  SmackVContext;
typedef struct HuffContext  HuffContext;
typedef struct DBCtx  DBCtx;
static const int block_runs[64] = ;
enum SmkBlockTypes ;
static int smacker_decode_tree(GetBitContext *gb, HuffContext *hc, uint32_t prefix, int length)
static int smacker_decode_bigtree(GetBitContext *gb, HuffContext *hc, DBCtx *ctx)
static int smacker_decode_header_tree(SmackVContext *smk, GetBitContext *gb, int **recodes, int *last, int size)
static int decode_header_trees(SmackVContext *smk)
static av_always_inline void last_reset(int *recode, int *last)
static av_always_inline int smk_get_code(GetBitContext *gb, int *recode, int *last)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int smka_decode_init(AVCodecContext *avctx)
static int smka_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_smacker_decoder = ;
AVCodec ff_smackaud_decoder = ;
