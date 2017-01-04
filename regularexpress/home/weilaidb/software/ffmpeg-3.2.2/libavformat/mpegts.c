#define MAX_RESYNC_SIZE 65536
#define MAX_PES_PAYLOAD 200 * 1024
#define MAX_MP4_DESCR_COUNT 16
#define MOD_UNLIKELY(modulus, dividend, divisor, prev_dividend)                \
do  while (0)
enum MpegTSFilterType ;
typedef struct MpegTSFilter MpegTSFilter;
typedef int PESCallback (MpegTSFilter *f, const uint8_t *buf, int len,
int is_start, int64_t pos);
typedef struct MpegTSPESFilter  MpegTSPESFilter;
typedef void SectionCallback (MpegTSFilter *f, const uint8_t *buf, int len);
typedef void SetServiceCallback (void *opaque, int ret);
typedef struct MpegTSSectionFilter  MpegTSSectionFilter;
struct MpegTSFilter ;
#define MAX_PIDS_PER_PROGRAM 64
struct Program ;
struct MpegTSContext ;
#define MPEGTS_OPTIONS \
static const AVOption options[] = ;
static const AVClass mpegts_class = ;
static const AVOption raw_options[] = ;
static const AVClass mpegtsraw_class = ;
enum MpegTSState ;
#define PES_START_SIZE  6
#define PES_HEADER_SIZE 9
#define MAX_PES_HEADER_SIZE (9 + 255)
typedef struct PESContext  PESContext;
extern AVInputFormat ff_mpegts_demuxer;
static struct Program * get_program(MpegTSContext *ts, unsigned int programid)
static void clear_avprogram(MpegTSContext *ts, unsigned int programid)
static void clear_program(MpegTSContext *ts, unsigned int programid)
static void clear_programs(MpegTSContext *ts)
static void add_pat_entry(MpegTSContext *ts, unsigned int programid)
static void add_pid_to_pmt(MpegTSContext *ts, unsigned int programid,
unsigned int pid)
static void set_pmt_found(MpegTSContext *ts, unsigned int programid)
static void set_pcr_pid(AVFormatContext *s, unsigned int programid, unsigned int pid)
static int discard_pid(MpegTSContext *ts, unsigned int pid)
static void write_section_data(MpegTSContext *ts, MpegTSFilter *tss1,
const uint8_t *buf, int buf_size, int is_start)
static MpegTSFilter *mpegts_open_filter(MpegTSContext *ts, unsigned int pid,
enum MpegTSFilterType type)
static MpegTSFilter *mpegts_open_section_filter(MpegTSContext *ts,
unsigned int pid,
SectionCallback *section_cb,
void *opaque,
int check_crc)
static MpegTSFilter *mpegts_open_pes_filter(MpegTSContext *ts, unsigned int pid,
PESCallback *pes_cb,
void *opaque)
static MpegTSFilter *mpegts_open_pcr_filter(MpegTSContext *ts, unsigned int pid)
static void mpegts_close_filter(MpegTSContext *ts, MpegTSFilter *filter)
static int analyze(const uint8_t *buf, int size, int packet_size,
int probe)
static int get_packet_size(const uint8_t *buf, int size)
typedef struct SectionHeader  SectionHeader;
static int skip_identical(const SectionHeader *h, MpegTSSectionFilter *tssf)
static inline int get8(const uint8_t **pp, const uint8_t *p_end)
static inline int get16(const uint8_t **pp, const uint8_t *p_end)
static char *getstr8(const uint8_t **pp, const uint8_t *p_end)
static int parse_section_header(SectionHeader *h,
const uint8_t **pp, const uint8_t *p_end)
typedef struct StreamType  StreamType;
static const StreamType ISO_types[] = ;
static const StreamType HDMV_types[] = ;
static const StreamType SCTE_types[] = ;
static const StreamType MISC_types[] = ;
static const StreamType REGD_types[] = ;
static const StreamType METADATA_types[] = ;
static const StreamType DESC_types[] = ;
static void mpegts_find_stream_type(AVStream *st,
uint32_t stream_type,
const StreamType *types)
static int mpegts_set_stream_info(AVStream *st, PESContext *pes,
uint32_t stream_type, uint32_t prog_reg_desc)
static void reset_pes_packet_state(PESContext *pes)
static void new_data_packet(const uint8_t *buffer, int len, AVPacket *pkt)
static int new_pes_packet(PESContext *pes, AVPacket *pkt)
static uint64_t get_ts64(GetBitContext *gb, int bits)
static int read_sl_header(PESContext *pes, SLConfigDescr *sl,
const uint8_t *buf, int buf_size)
static int mpegts_push_data(MpegTSFilter *filter,
const uint8_t *buf, int buf_size, int is_start,
int64_t pos)
static PESContext *add_pes_stream(MpegTSContext *ts, int pid, int pcr_pid)
#define MAX_LEVEL 4
typedef struct MP4DescrParseContext  MP4DescrParseContext;
static int init_MP4DescrParseContext(MP4DescrParseContext *d, AVFormatContext *s,
const uint8_t *buf, unsigned size,
Mp4Descr *descr, int max_descr_count)
static void update_offsets(AVIOContext *pb, int64_t *off, int *len)
static int parse_mp4_descr(MP4DescrParseContext *d, int64_t off, int len,
int target_tag);
static int parse_mp4_descr_arr(MP4DescrParseContext *d, int64_t off, int len)
static int parse_MP4IODescrTag(MP4DescrParseContext *d, int64_t off, int len)
static int parse_MP4ODescrTag(MP4DescrParseContext *d, int64_t off, int len)
static int parse_MP4ESDescrTag(MP4DescrParseContext *d, int64_t off, int len)
static int parse_MP4DecConfigDescrTag(MP4DescrParseContext *d, int64_t off,
int len)
static int parse_MP4SLDescrTag(MP4DescrParseContext *d, int64_t off, int len)
static int parse_mp4_descr(MP4DescrParseContext *d, int64_t off, int len,
int target_tag)
static int mp4_read_iods(AVFormatContext *s, const uint8_t *buf, unsigned size,
Mp4Descr *descr, int *descr_count, int max_descr_count)
static int mp4_read_od(AVFormatContext *s, const uint8_t *buf, unsigned size,
Mp4Descr *descr, int *descr_count, int max_descr_count)
static void m4sl_cb(MpegTSFilter *filter, const uint8_t *section,
int section_len)
static void scte_data_cb(MpegTSFilter *filter, const uint8_t *section,
int section_len)
static const uint8_t opus_coupled_stream_cnt[9] = ;
static const uint8_t opus_stream_cnt[9] = ;
static const uint8_t opus_channel_map[8][8] = ;
int ff_parse_mpeg2_descriptor(AVFormatContext *fc, AVStream *st, int stream_type,
const uint8_t **pp, const uint8_t *desc_list_end,
Mp4Descr *mp4_descr, int mp4_descr_count, int pid,
MpegTSContext *ts)
static int is_pes_stream(int stream_type, uint32_t prog_reg_desc)
static void pmt_cb(MpegTSFilter *filter, const uint8_t *section, int section_len)
static void pat_cb(MpegTSFilter *filter, const uint8_t *section, int section_len)
static void sdt_cb(MpegTSFilter *filter, const uint8_t *section, int section_len)
static int parse_pcr(int64_t *ppcr_high, int *ppcr_low,
const uint8_t *packet);
static int handle_packet(MpegTSContext *ts, const uint8_t *packet)
static void reanalyze(MpegTSContext *ts)
static int mpegts_resync(AVFormatContext *s, int seekback, const uint8_t *current_packet)
static int read_packet(AVFormatContext *s, uint8_t *buf, int raw_packet_size,
const uint8_t **data)
static void finished_reading_packet(AVFormatContext *s, int raw_packet_size)
static int handle_packets(MpegTSContext *ts, int64_t nb_packets)
static int mpegts_probe(AVProbeData *p)
static int parse_pcr(int64_t *ppcr_high, int *ppcr_low, const uint8_t *packet)
static void seek_back(AVFormatContext *s, AVIOContext *pb, int64_t pos)
static int mpegts_read_header(AVFormatContext *s)
#define MAX_PACKET_READAHEAD ((128 * 1024) / 188)
static int mpegts_raw_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mpegts_read_packet(AVFormatContext *s, AVPacket *pkt)
static void mpegts_free(MpegTSContext *ts)
static int mpegts_read_close(AVFormatContext *s)
static av_unused int64_t mpegts_get_pcr(AVFormatContext *s, int stream_index,
int64_t *ppos, int64_t pos_limit)
static int64_t mpegts_get_dts(AVFormatContext *s, int stream_index,
int64_t *ppos, int64_t pos_limit)
MpegTSContext *avpriv_mpegts_parse_open(AVFormatContext *s)
int avpriv_mpegts_parse_packet(MpegTSContext *ts, AVPacket *pkt,
const uint8_t *buf, int len)
void avpriv_mpegts_parse_close(MpegTSContext *ts)
AVInputFormat ff_mpegts_demuxer = ;
AVInputFormat ff_mpegtsraw_demuxer = ;
