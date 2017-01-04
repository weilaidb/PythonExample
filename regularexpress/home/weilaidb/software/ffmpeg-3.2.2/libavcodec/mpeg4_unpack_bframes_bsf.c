typedef struct UnpackBFramesBSFContext  UnpackBFramesBSFContext;
static unsigned int find_startcode(const uint8_t *buf, int buf_size, int *pos)
static void scan_buffer(const uint8_t *buf, int buf_size,
int *pos_p, int *nb_vop, int *pos_vop2)
static uint8_t *create_new_buffer(const uint8_t *src, int size)
static int mpeg4_unpack_bframes_filter(AVBSFContext *ctx, AVPacket *out)
static int mpeg4_unpack_bframes_init(AVBSFContext *ctx)
static void mpeg4_unpack_bframes_close(AVBSFContext *bsfc)
static const enum AVCodecID codec_ids[] = ;
const AVBitStreamFilter ff_mpeg4_unpack_bframes_bsf = ;
