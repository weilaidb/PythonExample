#define AVFORMAT_AVC_H
int ff_avc_parse_nal_units(AVIOContext *s, const uint8_t *buf, int size);
int ff_avc_parse_nal_units_buf(const uint8_t *buf_in, uint8_t **buf, int *size);
int ff_isom_write_avcc(AVIOContext *pb, const uint8_t *data, int len);
const uint8_t *ff_avc_find_startcode(const uint8_t *p, const uint8_t *end);
int ff_avc_write_annexb_extradata(const uint8_t *in, uint8_t **buf, int *size);
const uint8_t *ff_avc_mp4_find_startcode(const uint8_t *start,
const uint8_t *end,
int nal_length_size);
