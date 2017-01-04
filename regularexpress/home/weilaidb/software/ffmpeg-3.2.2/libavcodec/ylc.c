typedef struct YLCContext  YLCContext;
static av_cold int decode_init(AVCodecContext *avctx)
typedef struct Node  Node;
static void get_tree_codes(uint32_t *bits, int16_t *lens, uint8_t *xlat,
Node *nodes, int node,
uint32_t pfx, int pl, int *pos)
static int build_vlc(AVCodecContext *avctx, VLC *vlc, const uint32_t *table)
static const uint8_t table_y1[] = ;
static const uint8_t table_u[] = ;
static const uint8_t table_y2[] = ;
static const uint8_t table_v[] = ;
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_ylc_decoder = ;
