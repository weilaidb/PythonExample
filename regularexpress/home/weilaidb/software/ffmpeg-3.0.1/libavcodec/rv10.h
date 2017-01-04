#define AVCODEC_RV10_H
int ff_rv_decode_dc(MpegEncContext *s, int n);
int ff_rv10_encode_picture_header(MpegEncContext *s, int picture_number);
void ff_rv20_encode_picture_header(MpegEncContext *s, int picture_number);
