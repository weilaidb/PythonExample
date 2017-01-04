struct libcelt_context ;
static int ff_celt_error_to_averror(int err)
static int ff_celt_bitstream_version_hack(CELTMode *mode)
static av_cold int libcelt_dec_init(AVCodecContext *c)
static av_cold int libcelt_dec_close(AVCodecContext *c)
static int libcelt_dec_decode(AVCodecContext *c, void *data,
int *got_frame_ptr, AVPacket *pkt)
AVCodec ff_libcelt_decoder = ;
