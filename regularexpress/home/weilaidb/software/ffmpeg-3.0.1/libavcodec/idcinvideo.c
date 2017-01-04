#define HUFFMAN_TABLE_SIZE 64 * 1024
#define HUF_TOKENS 256
#define PALETTE_COUNT 256
typedef struct hnode  hnode;
typedef struct IdcinContext  IdcinContext;
static int huff_smallest_node(hnode *hnodes, int num_hnodes)
static av_cold void huff_build_tree(IdcinContext *s, int prev)
static av_cold int idcin_decode_init(AVCodecContext *avctx)
static int idcin_decode_vlcs(IdcinContext *s, AVFrame *frame)
static int idcin_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_idcin_decoder = ;
