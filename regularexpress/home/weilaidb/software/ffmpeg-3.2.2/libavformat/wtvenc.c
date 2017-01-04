#define WTV_BIGSECTOR_SIZE (1 << WTV_BIGSECTOR_BITS)
#define INDEX_BASE 0x2
#define MAX_NB_INDEX 10
#define _ , 0,
static const uint8_t timeline_table_0_header_events[] =
;
static const uint8_t table_0_header_legacy_attrib[] =
;
static const uint8_t table_0_redirector_legacy_attrib[] =
;
static const uint8_t table_0_header_time[] =
;
static const uint8_t legacy_attrib[] =
;
#undef _
static const ff_asf_guid sub_wtv_guid =
;
enum WtvFileIndex ;
typedef struct  WtvFile;
typedef struct  WtvChunkEntry;
typedef struct  WtvSyncEntry;
typedef struct  WtvContext;
static void add_serial_pair(WtvSyncEntry ** list, int * count, int64_t serial, int64_t value)
typedef int WTVHeaderWriteFunc(AVIOContext *pb);
typedef struct  WTVRootEntryTable;
#define write_pad(pb, size) ffio_fill(pb, 0, size)
static void write_chunk_header(AVFormatContext *s, const ff_asf_guid *guid, int length, int stream_id)
static void write_chunk_header2(AVFormatContext *s, const ff_asf_guid *guid, int stream_id)
static void finish_chunk_noindex(AVFormatContext *s)
static void write_index(AVFormatContext *s)
static void finish_chunk(AVFormatContext *s)
static void put_videoinfoheader2(AVIOContext *pb, AVStream *st)
static int write_stream_codec_info(AVFormatContext *s, AVStream *st)
static int write_stream_codec(AVFormatContext *s, AVStream * st)
static void write_sync(AVFormatContext *s)
static int write_stream_data(AVFormatContext *s, AVStream *st)
static int write_header(AVFormatContext *s)
static void write_timestamp(AVFormatContext *s, AVPacket *pkt)
static int write_packet(AVFormatContext *s, AVPacket *pkt)
static int write_table0_header_events(AVIOContext *pb)
static int write_table0_header_legacy_attrib(AVIOContext *pb)
static int write_table0_header_time(AVIOContext *pb)
static const WTVRootEntryTable wtv_root_entry_table[] = ;
static int write_root_table(AVFormatContext *s, int64_t sector_pos)
static void write_fat(AVIOContext *pb, int start_sector, int nb_sectors, int shift)
static int64_t write_fat_sector(AVFormatContext *s, int64_t start_pos, int nb_sectors, int sector_bits, int depth)
static void write_table_entries_events(AVFormatContext *s)
static void write_table_entries_time(AVFormatContext *s)
static void write_metadata_header(AVIOContext *pb, int type, const char *key, int value_size)
static int metadata_header_size(const char *key)
static void write_tag_int32(AVIOContext *pb, const char *key, int value)
static void write_tag(AVIOContext *pb, const char *key, const char *value)
static int attachment_value_size(const AVPacket *pkt, const AVDictionaryEntry *e)
static void write_table_entries_attrib(AVFormatContext *s)
static void write_table_redirector_legacy_attrib(AVFormatContext *s)
static int finish_file(AVFormatContext *s, enum WtvFileIndex index, int64_t start_pos)
static int write_trailer(AVFormatContext *s)
AVOutputFormat ff_wtv_muxer = ;
