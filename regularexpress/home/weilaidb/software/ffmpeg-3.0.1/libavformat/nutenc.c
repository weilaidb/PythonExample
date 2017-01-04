static int find_expected_header(AVCodecContext *c, int size, int key_frame,
uint8_t out[64])
static int find_header_idx(AVFormatContext *s, AVCodecContext *c, int size, int frame_type)
static void build_elision_headers(AVFormatContext *s)
static void build_frame_code(AVFormatContext *s)
static void put_tt(NUTContext *nut, AVRational *time_base, AVIOContext *bc, uint64_t val)
static void put_str(AVIOContext *bc, const char *string)
static void put_s(AVIOContext *bc, int64_t val)
static inline void ff_put_v_trace(AVIOContext *bc, uint64_t v, const char *file,
const char *func, int line)
static inline void put_s_trace(AVIOContext *bc, int64_t v, const char *file, const char *func, int line)
#define ff_put_v(bc, v)  ff_put_v_trace(bc, v, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define put_s(bc, v)  put_s_trace(bc, v, __FILE__, __PRETTY_FUNCTION__, __LINE__)
static void put_packet(NUTContext *nut, AVIOContext *bc, AVIOContext *dyn_bc,
int calculate_checksum, uint64_t startcode)
static void write_mainheader(NUTContext *nut, AVIOContext *bc)
static int write_streamheader(AVFormatContext *avctx, AVIOContext *bc,
AVStream *st, int i)
static int add_info(AVIOContext *bc, const char *type, const char *value)
static int write_globalinfo(NUTContext *nut, AVIOContext *bc)
static int write_streaminfo(NUTContext *nut, AVIOContext *bc, int stream_id)
static int write_chapter(NUTContext *nut, AVIOContext *bc, int id)
static int write_index(NUTContext *nut, AVIOContext *bc)
static int write_headers(AVFormatContext *avctx, AVIOContext *bc)
static int nut_write_header(AVFormatContext *s)
static int get_needed_flags(NUTContext *nut, StreamContext *nus, FrameCode *fc,
AVPacket *pkt)
static int find_best_header_idx(NUTContext *nut, AVPacket *pkt)
static int write_sm_data(AVFormatContext *s, AVIOContext *bc, AVPacket *pkt, int is_meta)
static int nut_write_packet(AVFormatContext *s, AVPacket *pkt)
static int nut_write_trailer(AVFormatContext *s)
static void nut_write_deinit(AVFormatContext *s)
#define OFFSET(x) offsetof(NUTContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
AVOutputFormat ff_nut_muxer = ;
