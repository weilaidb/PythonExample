typedef struct DecodeContext  DecodeContext;
static mfxStatus frame_alloc(mfxHDL pthis, mfxFrameAllocRequest *req,
mfxFrameAllocResponse *resp)
static mfxStatus frame_free(mfxHDL pthis, mfxFrameAllocResponse *resp)
static mfxStatus frame_lock(mfxHDL pthis, mfxMemId mid, mfxFrameData *ptr)
static mfxStatus frame_unlock(mfxHDL pthis, mfxMemId mid, mfxFrameData *ptr)
static mfxStatus frame_get_hdl(mfxHDL pthis, mfxMemId mid, mfxHDL *hdl)
static void free_surfaces(DecodeContext *decode)
static void free_buffer(void *opaque, uint8_t *data)
static int get_buffer(AVCodecContext *avctx, AVFrame *frame, int flags)
static int get_format(AVCodecContext *avctx, const enum AVPixelFormat *pix_fmts)
static int decode_packet(DecodeContext *decode, AVCodecContext *decoder_ctx,
AVFrame *frame, AVPacket *pkt,
AVIOContext *output_ctx)
int main(int argc, char **argv)
