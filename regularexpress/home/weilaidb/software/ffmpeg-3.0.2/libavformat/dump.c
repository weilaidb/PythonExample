#define HEXDUMP_PRINT(...)                                                    \
do  while (0)
static void hex_dump_internal(void *avcl, FILE *f, int level,
const uint8_t *buf, int size)
void av_hex_dump(FILE *f, const uint8_t *buf, int size)
void av_hex_dump_log(void *avcl, int level, const uint8_t *buf, int size)
static void pkt_dump_internal(void *avcl, FILE *f, int level, const AVPacket *pkt,
int dump_payload, AVRational time_base)
void av_pkt_dump2(FILE *f, const AVPacket *pkt, int dump_payload, const AVStream *st)
void av_pkt_dump_log2(void *avcl, int level, const AVPacket *pkt, int dump_payload,
const AVStream *st)
static void print_fps(double d, const char *postfix)
static void dump_metadata(void *ctx, AVDictionary *m, const char *indent)
static void dump_paramchange(void *ctx, AVPacketSideData *sd)
static void print_gain(void *ctx, const char *str, int32_t gain)
static void print_peak(void *ctx, const char *str, uint32_t peak)
static void dump_replaygain(void *ctx, AVPacketSideData *sd)
static void dump_stereo3d(void *ctx, AVPacketSideData *sd)
static void dump_audioservicetype(void *ctx, AVPacketSideData *sd)
static void dump_sidedata(void *ctx, AVStream *st, const char *indent)
static void dump_stream_format(AVFormatContext *ic, int i,
int index, int is_output)
void av_dump_format(AVFormatContext *ic, int index,
const char *url, int is_output)
