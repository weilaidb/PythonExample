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
add_serial_pair
WTVHeaderWriteFunc;
typedef struct  WTVRootEntryTable;
write_pad ffio_fill(pb, 0, size)
write_chunk_header
write_chunk_header2
finish_chunk_noindex
write_index
finish_chunk
put_videoinfoheader2
write_stream_codec_info
write_stream_codec
write_sync
write_stream_data
write_header
write_timestamp
write_packet
write_table0_header_events
write_table0_header_legacy_attrib
write_table0_header_time
static const WTVRootEntryTable wtv_root_entry_table[] = ;
write_root_table
write_fat
write_fat_sector
write_table_entries_events
write_table_entries_time
write_metadata_header
metadata_header_size
write_tag_int32
write_tag
attachment_value_size
write_table_entries_attrib
write_table_redirector_legacy_attrib
finish_file
write_trailer
AVOutputFormat ff_wtv_muxer = ;
