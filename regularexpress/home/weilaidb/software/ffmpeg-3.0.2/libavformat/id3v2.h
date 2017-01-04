#define AVFORMAT_ID3V2_H
#define ID3v2_HEADER_SIZE 10
#define ID3v2_DEFAULT_MAGIC "ID3"
#define ID3v2_FLAG_DATALEN     0x0001
#define ID3v2_FLAG_UNSYNCH     0x0002
#define ID3v2_FLAG_ENCRYPTION  0x0004
#define ID3v2_FLAG_COMPRESSION 0x0008
enum ID3v2Encoding ;
typedef struct ID3v2EncContext  ID3v2EncContext;
typedef struct ID3v2ExtraMeta  ID3v2ExtraMeta;
typedef struct ID3v2ExtraMetaGEOB  ID3v2ExtraMetaGEOB;
typedef struct ID3v2ExtraMetaAPIC  ID3v2ExtraMetaAPIC;
typedef struct ID3v2ExtraMetaPRIV  ID3v2ExtraMetaPRIV;
int ff_id3v2_match(const uint8_t *buf, const char *magic);
int ff_id3v2_tag_len(const uint8_t *buf);
void ff_id3v2_read_dict(AVIOContext *pb, AVDictionary **metadata, const char *magic, ID3v2ExtraMeta **extra_meta);
void ff_id3v2_read(AVFormatContext *s, const char *magic, ID3v2ExtraMeta **extra_meta,
unsigned int max_search_size);
void ff_id3v2_start(ID3v2EncContext *id3, AVIOContext *pb, int id3v2_version,
const char *magic);
int ff_id3v2_write_metadata(AVFormatContext *s, ID3v2EncContext *id3);
int ff_id3v2_write_apic(AVFormatContext *s, ID3v2EncContext *id3, AVPacket *pkt);
void ff_id3v2_finish(ID3v2EncContext *id3, AVIOContext *pb, int padding_bytes);
int ff_id3v2_write_simple(struct AVFormatContext *s, int id3v2_version, const char *magic);
void ff_id3v2_free_extra_meta(ID3v2ExtraMeta **extra_meta);
int ff_id3v2_parse_apic(AVFormatContext *s, ID3v2ExtraMeta **extra_meta);
extern const AVMetadataConv ff_id3v2_34_metadata_conv[];
extern const AVMetadataConv ff_id3v2_4_metadata_conv[];
extern const char ff_id3v2_tags[][4];
extern const char ff_id3v2_4_tags[][4];
extern const char ff_id3v2_3_tags[][4];
extern const CodecMime ff_id3v2_mime_tags[];
extern const char *ff_id3v2_picture_types[21];
