#define AVFORMAT_ID3V2_H
#define ID3v2_HEADER_SIZE 10
#define ID3v2_DEFAULT_MAGIC
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
ff_id3v2_match;
ff_id3v2_tag_len;
ff_id3v2_read_dict;
ff_id3v2_read;
ff_id3v2_start;
ff_id3v2_write_metadata;
ff_id3v2_write_apic;
ff_id3v2_finish;
ff_id3v2_write_simple;
ff_id3v2_free_extra_meta;
ff_id3v2_parse_apic;
extern const AVMetadataConv ff_id3v2_34_metadata_conv[];
extern const AVMetadataConv ff_id3v2_4_metadata_conv[];
extern const char ff_id3v2_tags[][4];
extern const char ff_id3v2_4_tags[][4];
extern const char ff_id3v2_3_tags[][4];
extern const CodecMime ff_id3v2_mime_tags[];
extern const char *ff_id3v2_picture_types[21];
