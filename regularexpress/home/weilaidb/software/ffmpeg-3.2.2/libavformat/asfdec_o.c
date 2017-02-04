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
detect_unknown_subobject;
*find_guid;
asf_probe
swap_guid
align_position
asf_read_unknown
get_asf_string
asf_read_marker
asf_read_metadata
asf_read_value
asf_read_generic_value
asf_set_metadata
asf_read_picture
get_id3_tag
process_metadata
asf_read_ext_content
*find_stream
asf_store_aspect_ratio
asf_read_metadata_obj
asf_read_content_desc
asf_read_properties
parse_video_info
asf_read_stream_properties
set_language
asf_read_ext_stream_properties
asf_read_language_list
asf_read_data
asf_read_simple_index
static const GUIDParseTable gdef[] = ;
READ_LEN            \
while
asf_read_subpayload
reset_packet
asf_read_replicated_data
asf_read_multiple_payload
asf_read_single_payload
asf_read_payload
asf_read_packet_header
asf_deinterleave
asf_read_packet
asf_read_close
reset_packet_state
asf_read_timestamp
asf_read_seek
*find_guid
detect_unknown_subobject
asf_read_header
AVInputFormat ff_asf_o_demuxer = ;
