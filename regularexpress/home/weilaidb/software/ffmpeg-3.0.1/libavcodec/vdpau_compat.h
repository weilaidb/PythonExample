#define AVCODEC_VDPAU_COMPAT_H
void ff_vdpau_add_data_chunk(uint8_t *data, const uint8_t *buf,
int buf_size);
void ff_vdpau_mpeg_picture_complete(MpegEncContext *s, const uint8_t *buf,
int buf_size, int slice_count);
void ff_vdpau_h264_picture_start(H264Context *h);
void ff_vdpau_h264_set_reference_frames(H264Context *h);
void ff_vdpau_h264_picture_complete(H264Context *h);
void ff_vdpau_vc1_decode_picture(MpegEncContext *s, const uint8_t *buf,
int buf_size);
void ff_vdpau_mpeg4_decode_picture(Mpeg4DecContext *s, const uint8_t *buf,
int buf_size);
