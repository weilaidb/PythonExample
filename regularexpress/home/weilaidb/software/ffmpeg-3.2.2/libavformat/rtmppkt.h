#define AVFORMAT_RTMPPKT_H
#define RTMP_CHANNELS 65599
enum RTMPChannel ;
typedef enum RTMPPacketType  RTMPPacketType;
enum RTMPPacketSize ;
typedef struct RTMPPacket  RTMPPacket;
ff_rtmp_packet_create;
ff_rtmp_packet_destroy;
ff_rtmp_packet_read;
ff_rtmp_packet_read_internal;
ff_rtmp_packet_write;
ff_rtmp_packet_dump;
ff_rtmp_check_alloc_array;
ff_amf_tag_size;
ff_amf_get_field_value;
ff_amf_write_bool;
ff_amf_write_number;
ff_amf_write_string;
ff_amf_write_string2;
ff_amf_write_null;
ff_amf_write_object_start;
ff_amf_write_field_name;
ff_amf_write_object_end;
ff_amf_read_bool;
ff_amf_read_number;
ff_amf_get_string;
ff_amf_read_string;
ff_amf_read_null;
ff_amf_match_string;
