typedef enum  MXFPartitionType;
typedef enum  MXFOP;
typedef struct MXFPartition  MXFPartition;
typedef struct MXFCryptoContext  MXFCryptoContext;
typedef struct MXFStructuralComponent  MXFStructuralComponent;
typedef struct MXFSequence  MXFSequence;
typedef struct MXFTrack  MXFTimecodeComponent;
typedef struct  MXFPulldownComponent;
typedef struct  MXFEssenceGroup;
typedef struct  MXFTaggedValue;
typedef struct  MXFTrack;
typedef struct MXFDescriptor  MXFDescriptor;
typedef struct MXFIndexTableSegment  MXFIndexTableSegment;
typedef struct MXFPackage  MXFPackage;
typedef struct MXFMetadataSet  MXFMetadataSet;
typedef struct MXFIndexTable  MXFIndexTable;
typedef struct MXFContext  MXFContext;
enum MXFWrappingScheme ;
MXFMetadataReadFunc;
typedef struct MXFMetadataReadTableEntry  MXFMetadataReadTableEntry;
mxf_read_close;
static const uint8_t mxf_header_partition_pack_key[]       = ;
static const uint8_t mxf_essence_element_key[]             = ;
static const uint8_t mxf_avid_essence_element_key[]        = ;
static const uint8_t mxf_canopus_essence_element_key[]     = ;
static const uint8_t mxf_system_item_key[]                 = ;
static const uint8_t mxf_klv_key[]                         = ;
static const uint8_t mxf_crypto_source_container_ul[]      = ;
static const uint8_t mxf_encrypted_triplet_key[]           = ;
static const uint8_t mxf_encrypted_essence_container[]     = ;
static const uint8_t mxf_random_index_pack_key[]           = ;
static const uint8_t mxf_sony_mpeg4_extradata[]            = ;
static const uint8_t mxf_avid_project_name[]               = ;
static const uint8_t mxf_jp2k_rsiz[]                       = ;
static const uint8_t mxf_indirect_value_utf16le[]          = ;
static const uint8_t mxf_indirect_value_utf16be[]          = ;
IS_KLV_KEY (!memcmp(x, y, sizeof(y)))
mxf_free_metadataset
klv_decode_ber_length
mxf_read_sync
klv_read_packet
mxf_get_stream_index
mxf_get_d10_aes3_packet
mxf_decrypt_triplet
mxf_read_primer_pack
mxf_read_partition_pack
mxf_add_metadata_set
mxf_read_cryptographic_context
mxf_read_strong_ref_array
mxf_read_utf16_string
READ_STR16                                               \
static int mxf_read_utf16 ## type ##_string(AVIOContext *pb, int size, char** str) \
READ_STR16(be, 1)
READ_STR16(le, 0)
#undef READ_STR16
mxf_read_content_storage
mxf_read_source_clip
mxf_read_timecode_component
mxf_read_pulldown_component
mxf_read_track
mxf_read_sequence
mxf_read_essence_group
mxf_read_package
mxf_read_index_entry_array
mxf_read_index_table_segment
mxf_read_pixel_layout
mxf_read_generic_descriptor
mxf_read_indirect_value
mxf_read_tagged_value
mxf_match_uid
*mxf_get_codec_ul
*mxf_resolve_strong_ref
static const MXFCodecUL mxf_picture_essence_container_uls[] = ;
static const MXFCodecUL mxf_intra_only_essence_container_uls[] = ;
static const MXFCodecUL mxf_intra_only_picture_essence_coding_uls[] = ;
static const MXFCodecUL mxf_intra_only_picture_coded_width[] = ;
static const MXFCodecUL mxf_sound_essence_container_uls[] = ;
static const MXFCodecUL mxf_data_essence_container_uls[] = ;
static const char* const mxf_data_essence_descriptor[] = ;
mxf_get_sorted_table_segments
mxf_absolute_bodysid_offset
mxf_essence_container_end
mxf_edit_unit_absolute_offset
mxf_compute_ptses_fake_index
mxf_compute_index_tables
mxf_is_intra_only
mxf_uid_to_str
mxf_umid_to_str
mxf_add_umid_metadata
mxf_add_timecode_metadata
mxf_resolve_timecode_component
mxf_resolve_source_package
mxf_resolve_multidescriptor
mxf_resolve_essence_group_choice
mxf_resolve_sourceclip
mxf_parse_package_comments
mxf_parse_physical_source_package
mxf_add_metadata_stream
mxf_parse_structural_metadata
mxf_timestamp_to_int64
SET_STR_METADATA do  while (0)
SET_UID_METADATA do  while (0)
SET_TS_METADATA do  while (0)
mxf_read_identification_metadata
mxf_read_preface_metadata
static const MXFMetadataReadTableEntry mxf_metadata_read_table[] = ;
mxf_metadataset_init
mxf_read_local_tags
mxf_is_partition_pack_key
mxf_parse_klv
mxf_seek_to_previous_partition
mxf_parse_handle_essence
mxf_parse_handle_partition_or_eof
mxf_compute_essence_containers
round_to_kag
is_pcm
mxf_get_opatom_stream
mxf_handle_small_eubc
mxf_handle_missing_index_segment
mxf_read_random_index_pack
mxf_read_header
mxf_set_current_edit_unit
mxf_compute_sample_count
mxf_set_audio_pts
mxf_read_packet_old
mxf_read_packet
mxf_read_close
mxf_probe
mxf_read_seek
AVInputFormat ff_mxf_demuxer = ;
