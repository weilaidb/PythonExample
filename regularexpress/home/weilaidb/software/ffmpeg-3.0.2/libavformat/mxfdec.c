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
typedef int MXFMetadataReadFunc(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset);
typedef struct MXFMetadataReadTableEntry  MXFMetadataReadTableEntry;
static int mxf_read_close(AVFormatContext *s);
static const uint8_t mxf_header_partition_pack_key[]       = ;
static const uint8_t mxf_essence_element_key[]             = ;
static const uint8_t mxf_avid_essence_element_key[]        = ;
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
#define IS_KLV_KEY(x, y) (!memcmp(x, y, sizeof(y)))
static void mxf_free_metadataset(MXFMetadataSet **ctx, int freectx)
static int64_t klv_decode_ber_length(AVIOContext *pb)
static int mxf_read_sync(AVIOContext *pb, const uint8_t *key, unsigned size)
static int klv_read_packet(KLVPacket *klv, AVIOContext *pb)
static int mxf_get_stream_index(AVFormatContext *s, KLVPacket *klv)
static int mxf_get_d10_aes3_packet(AVIOContext *pb, AVStream *st, AVPacket *pkt, int64_t length)
static int mxf_decrypt_triplet(AVFormatContext *s, AVPacket *pkt, KLVPacket *klv)
static int mxf_read_primer_pack(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_partition_pack(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_add_metadata_set(MXFContext *mxf, void *metadata_set)
static int mxf_read_cryptographic_context(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_strong_ref_array(AVIOContext *pb, UID **refs, int *count)
static int mxf_read_content_storage(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_source_clip(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_timecode_component(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_pulldown_component(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_track(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_sequence(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_essence_group(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static inline int mxf_read_utf16_string(AVIOContext *pb, int size, char** str, int be)
#define READ_STR16(type, big_endian)                                               \
static int mxf_read_utf16 ## type ##_string(AVIOContext *pb, int size, char** str) \
READ_STR16(be, 1)
READ_STR16(le, 0)
#undef READ_STR16
static int mxf_read_package(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_index_entry_array(AVIOContext *pb, MXFIndexTableSegment *segment)
static int mxf_read_index_table_segment(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static void mxf_read_pixel_layout(AVIOContext *pb, MXFDescriptor *descriptor)
static int mxf_read_generic_descriptor(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_read_indirect_value(void *arg, AVIOContext *pb, int size)
static int mxf_read_tagged_value(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static int mxf_match_uid(const UID key, const UID uid, int len)
static const MXFCodecUL *mxf_get_codec_ul(const MXFCodecUL *uls, UID *uid)
static void *mxf_resolve_strong_ref(MXFContext *mxf, UID *strong_ref, enum MXFMetadataSetType type)
static const MXFCodecUL mxf_picture_essence_container_uls[] = ;
static const MXFCodecUL mxf_intra_only_essence_container_uls[] = ;
static const MXFCodecUL mxf_intra_only_picture_essence_coding_uls[] = ;
static const MXFCodecUL mxf_intra_only_picture_coded_width[] = ;
static const MXFCodecUL mxf_sound_essence_container_uls[] = ;
static const MXFCodecUL mxf_data_essence_container_uls[] = ;
static const char* const mxf_data_essence_descriptor[] = ;
static int mxf_get_sorted_table_segments(MXFContext *mxf, int *nb_sorted_segments, MXFIndexTableSegment ***sorted_segments)
static int mxf_absolute_bodysid_offset(MXFContext *mxf, int body_sid, int64_t offset, int64_t *offset_out)
static int64_t mxf_essence_container_end(MXFContext *mxf, int body_sid)
static int mxf_edit_unit_absolute_offset(MXFContext *mxf, MXFIndexTable *index_table, int64_t edit_unit, int64_t *edit_unit_out, int64_t *offset_out, int nag)
static int mxf_compute_ptses_fake_index(MXFContext *mxf, MXFIndexTable *index_table)
static int mxf_compute_index_tables(MXFContext *mxf)
static int mxf_is_intra_only(MXFDescriptor *descriptor)
static int mxf_uid_to_str(UID uid, char **str)
static int mxf_umid_to_str(UID ul, UID uid, char **str)
static int mxf_add_umid_metadata(AVDictionary **pm, const char *key, MXFPackage* package)
static int mxf_add_timecode_metadata(AVDictionary **pm, const char *key, AVTimecode *tc)
static MXFTimecodeComponent* mxf_resolve_timecode_component(MXFContext *mxf, UID *strong_ref)
static MXFPackage* mxf_resolve_source_package(MXFContext *mxf, UID package_uid)
static MXFDescriptor* mxf_resolve_multidescriptor(MXFContext *mxf, MXFDescriptor *descriptor, int track_id)
static MXFStructuralComponent* mxf_resolve_essence_group_choice(MXFContext *mxf, MXFEssenceGroup *essence_group)
static MXFStructuralComponent* mxf_resolve_sourceclip(MXFContext *mxf, UID *strong_ref)
static int mxf_parse_package_comments(MXFContext *mxf, AVDictionary **pm, MXFPackage *package)
static int mxf_parse_physical_source_package(MXFContext *mxf, MXFTrack *source_track, AVStream *st)
static int mxf_parse_structural_metadata(MXFContext *mxf)
static int mxf_timestamp_to_str(uint64_t timestamp, char **str)
#define SET_STR_METADATA(pb, name, str) do  while (0)
#define SET_UID_METADATA(pb, name, var, str) do  while (0)
#define SET_TS_METADATA(pb, name, var, str) do  while (0)
static int mxf_read_identification_metadata(void *arg, AVIOContext *pb, int tag, int size, UID _uid, int64_t klv_offset)
static int mxf_read_preface_metadata(void *arg, AVIOContext *pb, int tag, int size, UID uid, int64_t klv_offset)
static const MXFMetadataReadTableEntry mxf_metadata_read_table[] = ;
static int mxf_metadataset_init(MXFMetadataSet *ctx, enum MXFMetadataSetType type)
static int mxf_read_local_tags(MXFContext *mxf, KLVPacket *klv, MXFMetadataReadFunc *read_child, int ctx_size, enum MXFMetadataSetType type)
static int mxf_is_partition_pack_key(UID key)
static int mxf_parse_klv(MXFContext *mxf, KLVPacket klv, MXFMetadataReadFunc *read,
int ctx_size, enum MXFMetadataSetType type)
static int mxf_seek_to_previous_partition(MXFContext *mxf)
static int mxf_parse_handle_essence(MXFContext *mxf)
static int mxf_parse_handle_partition_or_eof(MXFContext *mxf)
static void mxf_compute_essence_containers(MXFContext *mxf)
static int64_t round_to_kag(int64_t position, int kag_size)
static int is_pcm(enum AVCodecID codec_id)
static void mxf_handle_small_eubc(AVFormatContext *s)
static int mxf_handle_missing_index_segment(MXFContext *mxf)
static void mxf_read_random_index_pack(AVFormatContext *s)
static int mxf_read_header(AVFormatContext *s)
static int64_t mxf_set_current_edit_unit(MXFContext *mxf, int64_t current_offset)
static int mxf_compute_sample_count(MXFContext *mxf, int stream_index,
uint64_t *sample_count)
static int mxf_set_audio_pts(MXFContext *mxf, AVCodecContext *codec,
AVPacket *pkt)
static int mxf_read_packet_old(AVFormatContext *s, AVPacket *pkt)
static int mxf_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mxf_read_close(AVFormatContext *s)
static int mxf_probe(AVProbeData *p)
static int mxf_read_seek(AVFormatContext *s, int stream_index, int64_t sample_time, int flags)
AVInputFormat ff_mxf_demuxer = ;
