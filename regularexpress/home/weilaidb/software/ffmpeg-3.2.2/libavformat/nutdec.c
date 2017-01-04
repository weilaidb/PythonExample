#define NUT_MAX_STREAMS 256
static int64_t nut_read_timestamp(AVFormatContext *s, int stream_index,
int64_t *pos_arg, int64_t pos_limit);
static int get_str(AVIOContext *bc, char *string, unsigned int maxlen)
static int64_t get_s(AVIOContext *bc)
static uint64_t get_fourcc(AVIOContext *bc)
static inline uint64_t get_v_trace(AVIOContext *bc, const char *file,
const char *func, int line)
static inline int64_t get_s_trace(AVIOContext *bc, const char *file,
const char *func, int line)
static inline uint64_t get_4cc_trace(AVIOContext *bc, char *file,
char *func, int line)
#define ffio_read_varlen(bc) get_v_trace(bc,  __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_s(bc)            get_s_trace(bc,  __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_fourcc(bc)       get_4cc_trace(bc, __FILE__, __PRETTY_FUNCTION__, __LINE__)
static int get_packetheader(NUTContext *nut, AVIOContext *bc,
int calculate_checksum, uint64_t startcode)
static uint64_t find_any_startcode(AVIOContext *bc, int64_t pos)
static int64_t find_startcode(AVIOContext *bc, uint64_t code, int64_t pos)
static int nut_probe(AVProbeData *p)
#define GET_V(dst, check)                                                     \
do  while (0)
static int skip_reserved(AVIOContext *bc, int64_t pos)
static int decode_main_header(NUTContext *nut)
static int decode_stream_header(NUTContext *nut)
static void set_disposition_bits(AVFormatContext *avf, char *value,
int stream_id)
static int decode_info_header(NUTContext *nut)
static int decode_syncpoint(NUTContext *nut, int64_t *ts, int64_t *back_ptr)
static int64_t find_duration(NUTContext *nut, int64_t filesize)
static int find_and_decode_index(NUTContext *nut)
static int nut_read_close(AVFormatContext *s)
static int nut_read_header(AVFormatContext *s)
static int read_sm_data(AVFormatContext *s, AVIOContext *bc, AVPacket *pkt, int is_meta, int64_t maxpos)
static int decode_frame_header(NUTContext *nut, int64_t *pts, int *stream_id,
uint8_t *header_idx, int frame_code)
static int decode_frame(NUTContext *nut, AVPacket *pkt, int frame_code)
static int nut_read_packet(AVFormatContext *s, AVPacket *pkt)
static int64_t nut_read_timestamp(AVFormatContext *s, int stream_index,
int64_t *pos_arg, int64_t pos_limit)
static int read_seek(AVFormatContext *s, int stream_index,
int64_t pts, int flags)
AVInputFormat ff_nut_demuxer = ;
