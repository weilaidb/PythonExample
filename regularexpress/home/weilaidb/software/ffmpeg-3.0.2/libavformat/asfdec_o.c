#define ASF_BOOL                              0x2
#define ASF_WORD                              0x5
#define ASF_GUID                              0x6
#define ASF_DWORD                             0x3
#define ASF_QWORD                             0x4
#define ASF_UNICODE                           0x0
#define ASF_FLAG_BROADCAST                    0x1
#define ASF_BYTE_ARRAY                        0x1
#define ASF_TYPE_AUDIO                        0x2
#define ASF_TYPE_VIDEO                        0x1
#define ASF_STREAM_NUM                        0x7F
#define ASF_MAX_STREAMS                       128
#define BMP_HEADER_SIZE                       40
#define ASF_NUM_OF_PAYLOADS                   0x3F
#define ASF_ERROR_CORRECTION_LENGTH_TYPE      0x60
#define ASF_PACKET_ERROR_CORRECTION_DATA_SIZE 0x2
typedef struct GUIDParseTable  GUIDParseTable;
typedef struct ASFPacket  ASFPacket;
typedef struct ASFStream  ASFStream;
typedef struct ASFStreamData ASFStreamData;
typedef struct ASFContext  ASFContext;
static int detect_unknown_subobject(AVFormatContext *s, int64_t offset, int64_t size);
static const GUIDParseTable *find_guid(ff_asf_guid guid);
static int asf_probe(AVProbeData *pd)
static void swap_guid(ff_asf_guid guid)
static void align_position(AVIOContext *pb,  int64_t offset, uint64_t size)
static int asf_read_unknown(AVFormatContext *s, const GUIDParseTable *g)
static int get_asf_string(AVIOContext *pb, int maxlen, char *buf, int buflen)
static int asf_read_marker(AVFormatContext *s, const GUIDParseTable *g)
static int asf_read_metadata(AVFormatContext *s, const char *title, uint16_t len,
unsigned char *ch, uint16_t buflen)
static int asf_read_value(AVFormatContext *s, const uint8_t *name,
uint16_t val_len, int type, AVDictionary **met)
static int asf_read_generic_value(AVIOContext *pb, int type, uint64_t *value)
static int asf_set_metadata(AVFormatContext *s, const uint8_t *name,
int type, AVDictionary **met)
static int asf_read_picture(AVFormatContext *s, int len)
static void get_id3_tag(AVFormatContext *s, int len)
static int process_metadata(AVFormatContext *s, const uint8_t *name, uint16_t name_len,
uint16_t val_len, uint16_t type, AVDictionary **met)
static int asf_read_ext_content(AVFormatContext *s, const GUIDParseTable *g)
static AVStream *find_stream(AVFormatContext *s, uint16_t st_num)
static int asf_store_aspect_ratio(AVFormatContext *s, uint8_t st_num, uint8_t *name, int type)
static int asf_read_metadata_obj(AVFormatContext *s, const GUIDParseTable *g)
static int asf_read_content_desc(AVFormatContext *s, const GUIDParseTable *g)
static int asf_read_properties(AVFormatContext *s, const GUIDParseTable *g)
static int parse_video_info(AVIOContext *pb, AVStream *st)
static int asf_read_stream_properties(AVFormatContext *s, const GUIDParseTable *g)
static void set_language(AVFormatContext *s, const char *rfc1766, AVDictionary **met)
static int asf_read_ext_stream_properties(AVFormatContext *s, const GUIDParseTable *g)
static int asf_read_language_list(AVFormatContext *s, const GUIDParseTable *g)
static int asf_read_data(AVFormatContext *s, const GUIDParseTable *g)
static int asf_read_simple_index(AVFormatContext *s, const GUIDParseTable *g)
static const GUIDParseTable gdef[] = ;
#define READ_LEN(flag, name, len)            \
do  while(0)
static int asf_read_subpayload(AVFormatContext *s, AVPacket *pkt, int is_header)
static void reset_packet(ASFPacket *asf_pkt)
static int asf_read_replicated_data(AVFormatContext *s, ASFPacket *asf_pkt)
static int asf_read_multiple_payload(AVFormatContext *s, AVPacket *pkt,
ASFPacket *asf_pkt)
static int asf_read_single_payload(AVFormatContext *s, ASFPacket *asf_pkt)
static int asf_read_payload(AVFormatContext *s, AVPacket *pkt)
static int asf_read_packet_header(AVFormatContext *s)
static int asf_deinterleave(AVFormatContext *s, ASFPacket *asf_pkt, int st_num)
static int asf_read_packet(AVFormatContext *s, AVPacket *pkt)
static int asf_read_close(AVFormatContext *s)
static void reset_packet_state(AVFormatContext *s)
static int64_t asf_read_timestamp(AVFormatContext *s, int stream_index,
int64_t *pos, int64_t pos_limit)
static int asf_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static const GUIDParseTable *find_guid(ff_asf_guid guid)
static int detect_unknown_subobject(AVFormatContext *s, int64_t offset, int64_t size)
static int asf_read_header(AVFormatContext *s)
AVInputFormat ff_asf_o_demuxer = ;
