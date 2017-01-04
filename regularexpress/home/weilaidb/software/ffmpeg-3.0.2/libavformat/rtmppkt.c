void ff_amf_write_bool(uint8_t **dst, int val)
void ff_amf_write_number(uint8_t **dst, double val)
void ff_amf_write_string(uint8_t **dst, const char *str)
void ff_amf_write_string2(uint8_t **dst, const char *str1, const char *str2)
void ff_amf_write_null(uint8_t **dst)
void ff_amf_write_object_start(uint8_t **dst)
void ff_amf_write_field_name(uint8_t **dst, const char *str)
void ff_amf_write_object_end(uint8_t **dst)
int ff_amf_read_bool(GetByteContext *bc, int *val)
int ff_amf_read_number(GetByteContext *bc, double *val)
int ff_amf_get_string(GetByteContext *bc, uint8_t *str,
int strsize, int *length)
int ff_amf_read_string(GetByteContext *bc, uint8_t *str,
int strsize, int *length)
int ff_amf_read_null(GetByteContext *bc)
int ff_rtmp_check_alloc_array(RTMPPacket **prev_pkt, int *nb_prev_pkt,
int channel)
int ff_rtmp_packet_read(URLContext *h, RTMPPacket *p,
int chunk_size, RTMPPacket **prev_pkt, int *nb_prev_pkt)
static int rtmp_packet_read_one_chunk(URLContext *h, RTMPPacket *p,
int chunk_size, RTMPPacket **prev_pkt_ptr,
int *nb_prev_pkt, uint8_t hdr)
int ff_rtmp_packet_read_internal(URLContext *h, RTMPPacket *p, int chunk_size,
RTMPPacket **prev_pkt, int *nb_prev_pkt,
uint8_t hdr)
int ff_rtmp_packet_write(URLContext *h, RTMPPacket *pkt,
int chunk_size, RTMPPacket **prev_pkt_ptr,
int *nb_prev_pkt)
int ff_rtmp_packet_create(RTMPPacket *pkt, int channel_id, RTMPPacketType type,
int timestamp, int size)
void ff_rtmp_packet_destroy(RTMPPacket *pkt)
int ff_amf_tag_size(const uint8_t *data, const uint8_t *data_end)
int ff_amf_get_field_value(const uint8_t *data, const uint8_t *data_end,
const uint8_t *name, uint8_t *dst, int dst_size)
static const char* rtmp_packet_type(int type)
static void amf_tag_contents(void *ctx, const uint8_t *data,
const uint8_t *data_end)
}
void ff_rtmp_packet_dump(void *ctx, RTMPPacket *p)
int ff_amf_match_string(const uint8_t *data, int size, const char *str)
