void av_init_packet(AVPacket *pkt)
AVPacket *av_packet_alloc(void)
void av_packet_free(AVPacket **pkt)
static int packet_alloc(AVBufferRef **buf, int size)
int av_new_packet(AVPacket *pkt, int size)
void av_shrink_packet(AVPacket *pkt, int size)
int av_grow_packet(AVPacket *pkt, int grow_by)
int av_packet_from_data(AVPacket *pkt, uint8_t *data, int size)
#if FF_API_AVPACKET_OLD_API
FF_DISABLE_DEPRECATION_WARNINGS
#define ALLOC_MALLOC(data, size) data = av_malloc(size)
#define ALLOC_BUF(data, size)                \
do  while (0)
#define DUP_DATA(dst, src, size, padding, ALLOC)                        \
do  while (0)
static int copy_packet_data(AVPacket *pkt, const AVPacket *src, int dup)
int av_copy_packet_side_data(AVPacket *pkt, const AVPacket *src)
FF_ENABLE_DEPRECATION_WARNINGS
int av_dup_packet(AVPacket *pkt)
int av_copy_packet(AVPacket *dst, const AVPacket *src)
void av_packet_free_side_data(AVPacket *pkt)
#if FF_API_AVPACKET_OLD_API
FF_DISABLE_DEPRECATION_WARNINGS
void av_free_packet(AVPacket *pkt)
FF_ENABLE_DEPRECATION_WARNINGS
int av_packet_add_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
uint8_t *data, size_t size)
uint8_t *av_packet_new_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
int size)
uint8_t *av_packet_get_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
int *size)
const char *av_packet_side_data_name(enum AVPacketSideDataType type)
#define FF_MERGE_MARKER 0x8c4d9d108e25e9feULL
int av_packet_merge_side_data(AVPacket *pkt)
int av_packet_split_side_data(AVPacket *pkt)
uint8_t *av_packet_pack_dictionary(AVDictionary *dict, int *size)
int av_packet_unpack_dictionary(const uint8_t *data, int size, AVDictionary **dict)
int av_packet_shrink_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
int size)
int av_packet_copy_props(AVPacket *dst, const AVPacket *src)
void av_packet_unref(AVPacket *pkt)
int av_packet_ref(AVPacket *dst, const AVPacket *src)
AVPacket *av_packet_clone(AVPacket *src)
void av_packet_move_ref(AVPacket *dst, AVPacket *src)
void av_packet_rescale_ts(AVPacket *pkt, AVRational src_tb, AVRational dst_tb)
int ff_side_data_set_encoder_stats(AVPacket *pkt, int quality, int64_t *error, int error_count, int pict_type)
