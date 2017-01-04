typedef struct OggVorbisDecContext  OggVorbisDecContext;
static int oggvorbis_decode_close(AVCodecContext *avccontext);
static int oggvorbis_decode_init(AVCodecContext *avccontext)
static inline int conv(int samples, float **pcm, char *buf, int channels)
static int oggvorbis_decode_frame(AVCodecContext *avccontext, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static int oggvorbis_decode_close(AVCodecContext *avccontext)
AVCodec ff_libvorbis_decoder = ;
