extern AVOutputFormat ff_mxf_d10_muxer;
extern AVOutputFormat ff_mxf_opatom_muxer;
#define EDIT_UNITS_PER_BODY 250
#define KAG_SIZE 512
typedef struct MXFLocalTagPair  MXFLocalTagPair;
typedef struct MXFIndexEntry  MXFIndexEntry;
typedef struct MXFStreamContext  MXFStreamContext;
typedef struct MXFContainerEssenceEntry  MXFContainerEssenceEntry;
static const struct  mxf_essence_mappings[] = ;
static void mxf_write_wav_desc(AVFormatContext *s, AVStream *st);
static void mxf_write_aes3_desc(AVFormatContext *s, AVStream *st);
static void mxf_write_mpegvideo_desc(AVFormatContext *s, AVStream *st);
static void mxf_write_cdci_desc(AVFormatContext *s, AVStream *st);
static void mxf_write_generic_sound_desc(AVFormatContext *s, AVStream *st);
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
static void mxf_write_uuid(AVIOContext *pb, enum MXFMetadataSetType type, int value)
static void mxf_write_umid(AVFormatContext *s, int type)
static void mxf_write_refs_count(AVIOContext *pb, int ref_count)
static int klv_ber_length(uint64_t len)
static int klv_encode_ber_length(AVIOContext *pb, uint64_t len)
static void klv_encode_ber4_length(AVIOContext *pb, int len)
static void klv_encode_ber9_length(AVIOContext *pb, uint64_t len)
static int mxf_get_essence_container_ul_index(enum AVCodecID id)
static void mxf_write_primer_pack(AVFormatContext *s)
static void mxf_write_local_tag(AVIOContext *pb, int size, int tag)
static void mxf_write_metadata_key(AVIOContext *pb, unsigned int value)
static void mxf_free(AVFormatContext *s)
static const MXFCodecUL *mxf_get_data_definition_ul(int type)
#define DESCRIPTOR_COUNT(essence_container_count) \
(essence_container_count > 1 ? essence_container_count + 1 : essence_container_count)
static void mxf_write_essence_container_refs(AVFormatContext *s)
static void mxf_write_preface(AVFormatContext *s)
static uint64_t mxf_utf16len(const char *utf8_str)
static int mxf_utf16_local_tag_length(const char *utf8_str)
static void mxf_write_local_tag_utf16(AVIOContext *pb, int tag, const char *value)
static void mxf_write_identification(AVFormatContext *s)
static void mxf_write_content_storage(AVFormatContext *s)
static void mxf_write_track(AVFormatContext *s, AVStream *st, enum MXFMetadataSetType type)
static const uint8_t smpte_12m_timecode_track_data_ul[] = ;
static void mxf_write_common_fields(AVFormatContext *s, AVStream *st)
static void mxf_write_sequence(AVFormatContext *s, AVStream *st, enum MXFMetadataSetType type)
static void mxf_write_timecode_component(AVFormatContext *s, AVStream *st, enum MXFMetadataSetType type)
static void mxf_write_structural_component(AVFormatContext *s, AVStream *st, enum MXFMetadataSetType type)
static void mxf_write_multi_descriptor(AVFormatContext *s)
static void mxf_write_generic_desc(AVFormatContext *s, AVStream *st, const UID key, unsigned size)
static const UID mxf_mpegvideo_descriptor_key = ;
static const UID mxf_wav_descriptor_key       = ;
static const UID mxf_aes3_descriptor_key      = ;
static const UID mxf_cdci_descriptor_key      = ;
static const UID mxf_generic_sound_descriptor_key = ;
static void mxf_write_cdci_common(AVFormatContext *s, AVStream *st, const UID key, unsigned size)
static void mxf_write_cdci_desc(AVFormatContext *s, AVStream *st)
static void mxf_write_mpegvideo_desc(AVFormatContext *s, AVStream *st)
static void mxf_write_generic_sound_common(AVFormatContext *s, AVStream *st, const UID key, unsigned size)
static void mxf_write_wav_common(AVFormatContext *s, AVStream *st, const UID key, unsigned size)
static void mxf_write_wav_desc(AVFormatContext *s, AVStream *st)
static void mxf_write_aes3_desc(AVFormatContext *s, AVStream *st)
static void mxf_write_generic_sound_desc(AVFormatContext *s, AVStream *st)
static const uint8_t mxf_indirect_value_utf16le[] = ;
static int mxf_write_tagged_value(AVFormatContext *s, const char* name, const char* value)
static int mxf_write_user_comments(AVFormatContext *s, const AVDictionary *m)
static void mxf_write_package(AVFormatContext *s, enum MXFMetadataSetType type, const char *package_name)
static int mxf_write_essence_container_data(AVFormatContext *s)
static int mxf_write_header_metadata_sets(AVFormatContext *s)
static unsigned klv_fill_size(uint64_t size)
static void mxf_write_index_table_segment(AVFormatContext *s)
static void mxf_write_klv_fill(AVFormatContext *s)
static int mxf_write_partition(AVFormatContext *s, int bodysid,
int indexsid,
const uint8_t *key, int write_metadata)
static int mxf_parse_dnxhd_frame(AVFormatContext *s, AVStream *st,
AVPacket *pkt)
static int mxf_parse_dv_frame(AVFormatContext *s, AVStream *st, AVPacket *pkt)
static const struct  mxf_h264_codec_uls[] = ;
static int mxf_parse_h264_frame(AVFormatContext *s, AVStream *st,
AVPacket *pkt, MXFIndexEntry *e)
static const UID mxf_mpeg2_codec_uls[] = ;
static const UID *mxf_get_mpeg2_codec_ul(AVCodecParameters *par)
static int mxf_parse_mpeg2_frame(AVFormatContext *s, AVStream *st,
AVPacket *pkt, MXFIndexEntry *e)
static uint64_t mxf_parse_timestamp(time_t timestamp)
static void mxf_gen_umid(AVFormatContext *s)
static int mxf_init_timecode(AVFormatContext *s, AVStream *st, AVRational rate)
static int mxf_write_header(AVFormatContext *s)
static const uint8_t system_metadata_pack_key[]        = ;
static const uint8_t system_metadata_package_set_key[] = ;
static void mxf_write_system_item(AVFormatContext *s)
static void mxf_write_d10_video_packet(AVFormatContext *s, AVStream *st, AVPacket *pkt)
static void mxf_write_d10_audio_packet(AVFormatContext *s, AVStream *st, AVPacket *pkt)
static int mxf_write_opatom_body_partition(AVFormatContext *s)
static int mxf_write_opatom_packet(AVFormatContext *s, AVPacket *pkt, MXFIndexEntry *ie)
static int mxf_write_packet(AVFormatContext *s, AVPacket *pkt)
static void mxf_write_random_index_pack(AVFormatContext *s)
static int mxf_write_footer(AVFormatContext *s)
static int mxf_interleave_get_packet(AVFormatContext *s, AVPacket *out, AVPacket *pkt, int flush)
static int mxf_compare_timestamps(AVFormatContext *s, AVPacket *next, AVPacket *pkt)
static int mxf_interleave(AVFormatContext *s, AVPacket *out, AVPacket *pkt, int flush)
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
