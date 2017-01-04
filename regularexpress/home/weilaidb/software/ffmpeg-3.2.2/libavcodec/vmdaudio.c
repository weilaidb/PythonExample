#define BLOCK_TYPE_AUDIO    1
#define BLOCK_TYPE_INITIAL  2
#define BLOCK_TYPE_SILENCE  3
typedef struct VmdAudioContext  VmdAudioContext;
static const uint16_t vmdaudio_table[128] = ;
static av_cold int vmdaudio_decode_init(AVCodecContext *avctx)
static void decode_audio_s16(int16_t *out, const uint8_t *buf, int buf_size,
int channels)
static int vmdaudio_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_vmdaudio_decoder = ;
