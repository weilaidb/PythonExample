static const int16_t MACEtab1[] = ;
static const int16_t MACEtab3[] = ;
static const int16_t MACEtab2[][4] = ;
static const int16_t MACEtab4[][2] = ;
static const struct  tabs[] = ;
#define QT_8S_2_16S(x) (((x) & 0xFF00) | (((x) >> 8) & 0xFF))
typedef struct ChannelData  ChannelData;
typedef struct MACEContext  MACEContext;
static inline int16_t mace_broken_clip_int16(int n)
static int16_t read_table(ChannelData *chd, uint8_t val, int tab_idx)
static void chomp3(ChannelData *chd, int16_t *output, uint8_t val, int tab_idx)
static void chomp6(ChannelData *chd, int16_t *output, uint8_t val, int tab_idx)
static av_cold int mace_decode_init(AVCodecContext * avctx)
static int mace_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_mace3_decoder = ;
AVCodec ff_mace6_decoder = ;
