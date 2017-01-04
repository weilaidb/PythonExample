#define AVFORMAT_HEVC_H
int ff_hevc_annexb2mp4(AVIOContext *pb, const uint8_t *buf_in,
int size, int filter_ps, int *ps_count);
int ff_hevc_annexb2mp4_buf(const uint8_t *buf_in, uint8_t **buf_out,
int *size, int filter_ps, int *ps_count);
int ff_isom_write_hvcc(AVIOContext *pb, const uint8_t *data,
int size, int ps_array_completeness);
