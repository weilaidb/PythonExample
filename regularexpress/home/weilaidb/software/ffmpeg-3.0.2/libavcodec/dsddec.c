#define FIFOSIZE 16
#define FIFOMASK (FIFOSIZE - 1)
#if FIFOSIZE * 8 < HTAPS * 2
#error "FIFOSIZE too small"
typedef struct  DSDContext;
static void dsd2pcm_translate(DSDContext* s, size_t samples, int lsbf,
const unsigned char *src, ptrdiff_t src_stride,
float *dst, ptrdiff_t dst_stride)
static av_cold void init_static_data(void)
static av_cold int decode_init(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#define DSD_DECODER(id_, name_, long_name_) \
AVCodec ff_##name_##_decoder = ;
DSD_DECODER(DSD_LSBF, dsd_lsbf, "DSD (Direct Stream Digital), least significant bit first")
DSD_DECODER(DSD_MSBF, dsd_msbf, "DSD (Direct Stream Digital), most significant bit first")
DSD_DECODER(DSD_MSBF_PLANAR, dsd_msbf_planar, "DSD (Direct Stream Digital), most significant bit first, planar")
DSD_DECODER(DSD_LSBF_PLANAR, dsd_lsbf_planar, "DSD (Direct Stream Digital), least significant bit first, planar")
