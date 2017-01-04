#define PCR_TIME_BASE 27000000
#define DVB_PRIVATE_NETWORK_START 0xff01
typedef struct MpegTSSection  MpegTSSection;
typedef struct MpegTSService  MpegTSService;
enum ;
typedef struct MpegTSWrite  MpegTSWrite;
#define DEFAULT_PES_HEADER_FREQ  16
#define DEFAULT_PES_PAYLOAD_SIZE ((DEFAULT_PES_HEADER_FREQ - 1) * 184 + 170)
#define SECTION_LENGTH 1020
static void mpegts_write_section(MpegTSSection *s, uint8_t *buf, int len)
static inline void put16(uint8_t **q_ptr, int val)
static int mpegts_write_section1(MpegTSSection *s, int tid, int id,
int version, int sec_num, int last_sec_num,
uint8_t *buf, int len)
#define DEFAULT_PROVIDER_NAME   "FFmpeg"
#define DEFAULT_SERVICE_NAME    "Service01"
#define SDT_RETRANS_TIME 500
#define PAT_RETRANS_TIME 100
#define PCR_RETRANS_TIME 20
typedef struct MpegTSWriteStream  MpegTSWriteStream;
static void mpegts_write_pat(AVFormatContext *s)
static int mpegts_write_pmt(AVFormatContext *s, MpegTSService *service)
static void putstr8(uint8_t **q_ptr, const char *str)
static void mpegts_write_sdt(AVFormatContext *s)
static MpegTSService *mpegts_add_service(MpegTSWrite *ts, int sid,
const char *provider_name,
const char *name)
static int64_t get_pcr(const MpegTSWrite *ts, AVIOContext *pb)
static void mpegts_prefix_m2ts_header(AVFormatContext *s)
static void section_write_packet(MpegTSSection *s, const uint8_t *packet)
static int mpegts_init(AVFormatContext *s)
static void retransmit_si_info(AVFormatContext *s, int force_pat, int64_t dts)
static int write_pcr_bits(uint8_t *buf, int64_t pcr)
static void mpegts_insert_null_packet(AVFormatContext *s)
static void mpegts_insert_pcr_only(AVFormatContext *s, AVStream *st)
static void write_pts(uint8_t *q, int fourbits, int64_t pts)
static void set_af_flag(uint8_t *pkt, int flag)
static void extend_af(uint8_t *pkt, int size)
static uint8_t *get_ts_payload_start(uint8_t *pkt)
static void mpegts_write_pes(AVFormatContext *s, AVStream *st,
const uint8_t *payload, int payload_size,
int64_t pts, int64_t dts, int key, int stream_id)
int ff_check_h264_startcode(AVFormatContext *s, const AVStream *st, const AVPacket *pkt)
static int check_hevc_startcode(AVFormatContext *s, const AVStream *st, const AVPacket *pkt)
static int opus_get_packet_samples(AVFormatContext *s, AVPacket *pkt)
static int mpegts_write_packet_internal(AVFormatContext *s, AVPacket *pkt)
static void mpegts_write_flush(AVFormatContext *s)
static int mpegts_write_packet(AVFormatContext *s, AVPacket *pkt)
static int mpegts_write_end(AVFormatContext *s)
static void mpegts_deinit(AVFormatContext *s)
static int mpegts_check_bitstream(struct AVFormatContext *s, const AVPacket *pkt)
static const AVOption options[] = ;
static const AVClass mpegts_muxer_class = ;
AVOutputFormat ff_mpegts_muxer = ;
