#if CONFIG_ZLIB
const AVMetadataConv ff_id3v2_34_metadata_conv[] = ;
const AVMetadataConv ff_id3v2_4_metadata_conv[] = ;
static const AVMetadataConv id3v2_2_metadata_conv[] = ;
const char ff_id3v2_tags[][4] = ;
const char ff_id3v2_4_tags[][4] = ;
const char ff_id3v2_3_tags[][4] = ;
const char *ff_id3v2_picture_types[21] = ;
const CodecMime ff_id3v2_mime_tags[] = ;
int ff_id3v2_match(const uint8_t *buf, const char *magic)
int ff_id3v2_tag_len(const uint8_t *buf)
static unsigned int get_size(AVIOContext *s, int len)
static unsigned int size_to_syncsafe(unsigned int size)
static int is_tag(const char *buf, unsigned int len)
static int check_tag(AVIOContext *s, int offset, unsigned int len)
static void free_geobtag(void *obj)
static int decode_str(AVFormatContext *s, AVIOContext *pb, int encoding,
uint8_t **dst, int *maxread)
static void read_ttag(AVFormatContext *s, AVIOContext *pb, int taglen,
AVDictionary **metadata, const char *key)
static void read_uslt(AVFormatContext *s, AVIOContext *pb, int taglen,
AVDictionary **metadata)
static void read_comment(AVFormatContext *s, AVIOContext *pb, int taglen,
AVDictionary **metadata)
static void read_geobtag(AVFormatContext *s, AVIOContext *pb, int taglen,
const char *tag, ID3v2ExtraMeta **extra_meta,
int isv34)
static int is_number(const char *str)
static AVDictionaryEntry *get_date_tag(AVDictionary *m, const char *tag)
static void merge_date(AVDictionary **m)
static void free_apic(void *obj)
static void rstrip_spaces(char *buf)
static void read_apic(AVFormatContext *s, AVIOContext *pb, int taglen,
const char *tag, ID3v2ExtraMeta **extra_meta,
int isv34)
static void read_chapter(AVFormatContext *s, AVIOContext *pb, int len, const char *ttag, ID3v2ExtraMeta **extra_meta, int isv34)
static void free_priv(void *obj)
static void read_priv(AVFormatContext *s, AVIOContext *pb, int taglen,
const char *tag, ID3v2ExtraMeta **extra_meta, int isv34)
typedef struct ID3v2EMFunc  ID3v2EMFunc;
static const ID3v2EMFunc id3v2_extra_meta_funcs[] = ;
static const ID3v2EMFunc *get_extra_meta_func(const char *tag, int isv34)
static void id3v2_parse(AVIOContext *pb, AVDictionary **metadata,
AVFormatContext *s, int len, uint8_t version,
uint8_t flags, ID3v2ExtraMeta **extra_meta)
static void id3v2_read_internal(AVIOContext *pb, AVDictionary **metadata,
AVFormatContext *s, const char *magic,
ID3v2ExtraMeta **extra_meta, int64_t max_search_size)
void ff_id3v2_read_dict(AVIOContext *pb, AVDictionary **metadata,
const char *magic, ID3v2ExtraMeta **extra_meta)
void ff_id3v2_read(AVFormatContext *s, const char *magic,
ID3v2ExtraMeta **extra_meta, unsigned int max_search_size)
void ff_id3v2_free_extra_meta(ID3v2ExtraMeta **extra_meta)
int ff_id3v2_parse_apic(AVFormatContext *s, ID3v2ExtraMeta **extra_meta)
