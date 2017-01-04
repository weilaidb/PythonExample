#define X264_FLV_BYTESTREAM_H
#define FLV_AUDIO_SAMPLESSIZE_OFFSET 1
#define FLV_AUDIO_SAMPLERATE_OFFSET  2
#define FLV_AUDIO_CODECID_OFFSET     4
#define FLV_VIDEO_FRAMETYPE_OFFSET   4
#define FLV_AUDIO_CHANNEL_MASK    0x01
#define FLV_AUDIO_SAMPLESIZE_MASK 0x02
#define FLV_AUDIO_SAMPLERATE_MASK 0x0c
#define FLV_AUDIO_CODECID_MASK    0xf0
#define FLV_VIDEO_CODECID_MASK    0x0f
#define FLV_VIDEO_FRAMETYPE_MASK  0xf0
#define AMF_END_OF_OBJECT         0x09
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
typedef enum
AMFDataType;
typedef struct flv_buffer
flv_buffer;
flv_buffer *flv_create_writer( const char *filename );
int flv_append_data( flv_buffer *c, uint8_t *data, unsigned size );
int flv_write_byte( flv_buffer *c, uint8_t *byte );
int flv_flush_data( flv_buffer *c );
void flv_rewrite_amf_be24( flv_buffer *c, unsigned length, unsigned start );
uint64_t flv_dbl2int( double value );
void flv_put_byte( flv_buffer *c, uint8_t b );
void flv_put_be32( flv_buffer *c, uint32_t val );
void flv_put_be64( flv_buffer *c, uint64_t val );
void flv_put_be16( flv_buffer *c, uint16_t val );
void flv_put_be24( flv_buffer *c, uint32_t val );
void flv_put_tag( flv_buffer *c, const char *tag );
void flv_put_amf_string( flv_buffer *c, const char *str );
void flv_put_amf_double( flv_buffer *c, double d );
