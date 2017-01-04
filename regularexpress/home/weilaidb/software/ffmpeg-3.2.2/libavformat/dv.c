struct DVDemuxContext ;
static inline uint16_t dv_audio_12to16(uint16_t sample)
static const uint8_t *dv_extract_pack(const uint8_t *frame, enum dv_pack_type t)
static const int dv_audio_frequency[3] = ;
static int dv_extract_audio(const uint8_t *frame, uint8_t **ppcm,
const AVDVProfile *sys)
static int dv_extract_audio_info(DVDemuxContext *c, const uint8_t *frame)
static int dv_extract_video_info(DVDemuxContext *c, const uint8_t *frame)
static int dv_extract_timecode(DVDemuxContext* c, const uint8_t* frame, char *tc)
DVDemuxContext *avpriv_dv_init_demux(AVFormatContext *s)
int avpriv_dv_get_packet(DVDemuxContext *c, AVPacket *pkt)
int avpriv_dv_produce_packet(DVDemuxContext *c, AVPacket *pkt,
uint8_t *buf, int buf_size, int64_t pos)
static int64_t dv_frame_offset(AVFormatContext *s, DVDemuxContext *c,
int64_t timestamp, int flags)
void ff_dv_offset_reset(DVDemuxContext *c, int64_t frame_offset)
typedef struct RawDVContext  RawDVContext;
static int dv_read_timecode(AVFormatContext *s)
static int dv_read_header(AVFormatContext *s)
static int dv_read_packet(AVFormatContext *s, AVPacket *pkt)
static int dv_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static int dv_read_close(AVFormatContext *s)
static int dv_probe(AVProbeData *p)
AVInputFormat ff_dv_demuxer = ;
