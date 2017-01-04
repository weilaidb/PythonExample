#define AVFORMAT_RTMPPKT_H
#define RTMP_CHANNELS 65599
enum RTMPChannel ;
typedef enum RTMPPacketType  RTMPPacketType;
enum RTMPPacketSize ;
typedef struct RTMPPacket  RTMPPacket;
int ff_rtmp_packet_create(RTMPPacket *pkt, int channel_id, RTMPPacketType type,
int timestamp, int size);
void ff_rtmp_packet_destroy(RTMPPacket *pkt);
int ff_rtmp_packet_read(URLContext *h, RTMPPacket *p,
int chunk_size, RTMPPacket **prev_pkt,
int *nb_prev_pkt);
int ff_rtmp_packet_read_internal(URLContext *h, RTMPPacket *p, int chunk_size,
RTMPPacket **prev_pkt, int *nb_prev_pkt,
uint8_t c);
int ff_rtmp_packet_write(URLContext *h, RTMPPacket *p,
int chunk_size, RTMPPacket **prev_pkt,
int *nb_prev_pkt);
void ff_rtmp_packet_dump(void *ctx, RTMPPacket *p);
int ff_rtmp_check_alloc_array(RTMPPacket **prev_pkt, int *nb_prev_pkt,
int channel);
int ff_amf_tag_size(const uint8_t *data, const uint8_t *data_end);
int ff_amf_get_field_value(const uint8_t *data, const uint8_t *data_end,
const uint8_t *name, uint8_t *dst, int dst_size);
void ff_amf_write_bool(uint8_t **dst, int val);
void ff_amf_write_number(uint8_t **dst, double num);
void ff_amf_write_string(uint8_t **dst, const char *str);
void ff_amf_write_string2(uint8_t **dst, const char *str1, const char *str2);
void ff_amf_write_null(uint8_t **dst);
void ff_amf_write_object_start(uint8_t **dst);
void ff_amf_write_field_name(uint8_t **dst, const char *str);
void ff_amf_write_object_end(uint8_t **dst);
int ff_amf_read_bool(GetByteContext *gbc, int *val);
int ff_amf_read_number(GetByteContext *gbc, double *val);
int ff_amf_get_string(GetByteContext *bc, uint8_t *str,
int strsize, int *length);
int ff_amf_read_string(GetByteContext *gbc, uint8_t *str,
int strsize, int *length);
int ff_amf_read_null(GetByteContext *gbc);
int ff_amf_match_string(const uint8_t *data, int size, const char *str);
