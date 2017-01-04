static void id3v2_put_size(AVIOContext *pb, int size)
static int string_is_ascii(const uint8_t *str)
static void id3v2_encode_string(AVIOContext *pb, const uint8_t *str,
enum ID3v2Encoding enc)
static int id3v2_put_ttag(ID3v2EncContext *id3, AVIOContext *avioc, const char *str1, const char *str2,
uint32_t tag, enum ID3v2Encoding enc)
static int id3v2_check_write_tag(ID3v2EncContext *id3, AVIOContext *pb, AVDictionaryEntry *t,
const char table[][4], enum ID3v2Encoding enc)
static void id3v2_3_metadata_split_date(AVDictionary **pm)
void ff_id3v2_start(ID3v2EncContext *id3, AVIOContext *pb, int id3v2_version,
const char *magic)
static int write_metadata(AVIOContext *pb, AVDictionary **metadata,
ID3v2EncContext *id3, int enc)
static int write_chapter(AVFormatContext *s, ID3v2EncContext *id3, int id, int enc)
int ff_id3v2_write_metadata(AVFormatContext *s, ID3v2EncContext *id3)
int ff_id3v2_write_apic(AVFormatContext *s, ID3v2EncContext *id3, AVPacket *pkt)
void ff_id3v2_finish(ID3v2EncContext *id3, AVIOContext *pb,
int padding_bytes)
int ff_id3v2_write_simple(struct AVFormatContext *s, int id3v2_version,
const char *magic)
