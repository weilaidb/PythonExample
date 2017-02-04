extern AVOutputFormat ff_mxf_d10_muxer;
extern AVOutputFormat ff_mxf_opatom_muxer;
#define EDIT_UNITS_PER_BODY 250
#define KAG_SIZE 512
typedef struct MXFLocalTagPair  MXFLocalTagPair;
typedef struct MXFIndexEntry  MXFIndexEntry;
typedef struct MXFStreamContext  MXFStreamContext;
typedef struct MXFContainerEssenceEntry  MXFContainerEssenceEntry;
static const struct  mxf_essence_mappings[] = ;
mxf_write_wav_desc;
mxf_write_aes3_desc;
mxf_write_mpegvideo_desc;
mxf_write_cdci_desc;
mxf_write_generic_sound_desc;
static const MXFContainerEssenceEntry mxf_essence_container_uls[] = ;
typedef struct MXFContext  MXFContext;
static const uint8_t uuid_base[]            = ;
static const uint8_t umid_ul[]              = ;
static const uint8_t op1a_ul[]                     = ;
static const uint8_t opatom_ul[]                   = ;
static const uint8_t footer_partition_key[]        = ;
static const uint8_t primer_pack_key[]             = ;
static const uint8_t index_table_segment_key[]     = ;
static const uint8_t random_index_pack_key[]       = ;
static const uint8_t header_open_partition_key[]   = ;
static const uint8_t header_closed_partition_key[] = ;
static const uint8_t klv_fill_key[]                = ;
static const uint8_t body_partition_key[]          = ;
static const uint8_t header_metadata_key[]  = ;
static const uint8_t multiple_desc_ul[]     = ;
static const MXFLocalTagPair mxf_local_tag_batch[] = ;
static const MXFLocalTagPair mxf_user_comments_local_tag[] = ;
mxf_write_uuid
mxf_write_umid
mxf_write_refs_count
klv_ber_length
klv_encode_ber_length
klv_encode_ber4_length
klv_encode_ber9_length
mxf_get_essence_container_ul_index
mxf_write_primer_pack
mxf_write_local_tag
mxf_write_metadata_key
mxf_free
*mxf_get_data_definition_ul
DESCRIPTOR_COUNT \
(essence_container_count > 1 ? essence_container_count + 1 : essence_container_count)
mxf_write_essence_container_refs
mxf_write_preface
mxf_utf16len
mxf_utf16_local_tag_length
mxf_write_local_tag_utf16
mxf_write_identification
mxf_write_content_storage
mxf_write_track
static const uint8_t smpte_12m_timecode_track_data_ul[] = ;
mxf_write_common_fields
mxf_write_sequence
mxf_write_timecode_component
mxf_write_structural_component
mxf_write_multi_descriptor
mxf_write_generic_desc
static const UID mxf_mpegvideo_descriptor_key = ;
static const UID mxf_wav_descriptor_key       = ;
static const UID mxf_aes3_descriptor_key      = ;
static const UID mxf_cdci_descriptor_key      = ;
static const UID mxf_generic_sound_descriptor_key = ;
mxf_write_cdci_common
mxf_write_cdci_desc
mxf_write_mpegvideo_desc
mxf_write_generic_sound_common
mxf_write_wav_common
mxf_write_wav_desc
mxf_write_aes3_desc
mxf_write_generic_sound_desc
static const uint8_t mxf_indirect_value_utf16le[] = ;
mxf_write_tagged_value
mxf_write_user_comments
mxf_write_package
mxf_write_essence_container_data
mxf_write_header_metadata_sets
klv_fill_size
mxf_write_index_table_segment
mxf_write_klv_fill
mxf_write_partition
mxf_parse_dnxhd_frame
mxf_parse_dv_frame
static const struct  mxf_h264_codec_uls[] = ;
mxf_parse_h264_frame
static const UID mxf_mpeg2_codec_uls[] = ;
*mxf_get_mpeg2_codec_ul
mxf_parse_mpeg2_frame
mxf_parse_timestamp
mxf_gen_umid
mxf_init_timecode
mxf_write_header
static const uint8_t system_metadata_pack_key[]        = ;
static const uint8_t system_metadata_package_set_key[] = ;
mxf_write_system_item
mxf_write_d10_video_packet
mxf_write_d10_audio_packet
mxf_write_opatom_body_partition
mxf_write_opatom_packet
mxf_write_packet
mxf_write_random_index_pack
mxf_write_footer
mxf_interleave_get_packet
mxf_compare_timestamps
mxf_interleave
#define MXF_COMMON_OPTIONS \
,\
,\
,\
,\
,\
,\
,\
,
static const AVOption mxf_options[] = ;
static const AVClass mxf_muxer_class = ;
static const AVOption d10_options[] = ;
static const AVClass mxf_d10_muxer_class = ;
static const AVOption opatom_options[] = ;
static const AVClass mxf_opatom_muxer_class = ;
AVOutputFormat ff_mxf_muxer = ;
AVOutputFormat ff_mxf_d10_muxer = ;
AVOutputFormat ff_mxf_opatom_muxer = ;
