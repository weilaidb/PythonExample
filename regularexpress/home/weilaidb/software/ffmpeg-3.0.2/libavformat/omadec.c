static const uint64_t leaf_table[] = ;
typedef struct OMAContext  OMAContext;
static void hex_log(AVFormatContext *s, int level,
const char *name, const uint8_t *value, int len)
static int kset(AVFormatContext *s, const uint8_t *r_val, const uint8_t *n_val,
int len)
#define OMA_RPROBE_M_VAL 48 + 1
static int rprobe(AVFormatContext *s, uint8_t *enc_header, unsigned size,
const uint8_t *r_val)
static int nprobe(AVFormatContext *s, uint8_t *enc_header, unsigned size,
const uint8_t *n_val)
static int decrypt_init(AVFormatContext *s, ID3v2ExtraMeta *em, uint8_t *header)
static int oma_read_header(AVFormatContext *s)
static int oma_read_packet(AVFormatContext *s, AVPacket *pkt)
static int oma_read_probe(AVProbeData *p)
static int oma_read_seek(struct AVFormatContext *s,
int stream_index, int64_t timestamp, int flags)
static int oma_read_close(AVFormatContext *s)
AVInputFormat ff_oma_demuxer = ;
