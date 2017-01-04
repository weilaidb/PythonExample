#define MAX_AUDIO_FRAME_SIZE 192000
struct DVMuxContext ;
static const int dv_aaux_packs_dist[12][9] = ;
static int dv_audio_frame_size(const AVDVProfile* sys, int frame, int sample_rate)
static int dv_write_pack(enum dv_pack_type pack_id, DVMuxContext *c, uint8_t* buf, ...)
static void dv_inject_audio(DVMuxContext *c, int channel, uint8_t* frame_ptr)
static void dv_inject_metadata(DVMuxContext *c, uint8_t* frame)
static int dv_assemble_frame(DVMuxContext *c, AVStream* st,
uint8_t* data, int data_size, uint8_t** frame)
static DVMuxContext* dv_init_mux(AVFormatContext* s)
static void dv_delete_mux(DVMuxContext *c)
static int dv_write_header(AVFormatContext *s)
static int dv_write_packet(struct AVFormatContext *s, AVPacket *pkt)
static int dv_write_trailer(struct AVFormatContext *s)
AVOutputFormat ff_dv_muxer = ;
