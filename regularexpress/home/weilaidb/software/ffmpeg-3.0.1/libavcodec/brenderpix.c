#define HEADER1_CHUNK    0x03
#define HEADER2_CHUNK    0x3D
#define IMAGE_DATA_CHUNK 0x21
static const uint32_t std_pal_table[256] = ;
typedef struct PixHeader  PixHeader;
static int pix_decode_header(PixHeader *out, GetByteContext *pgb)
static int pix_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_brender_pix_decoder = ;
