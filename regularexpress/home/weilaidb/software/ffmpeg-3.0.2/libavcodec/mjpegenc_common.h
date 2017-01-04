#define AVCODEC_MJPEGENC_COMMON_H
void ff_mjpeg_encode_picture_header(AVCodecContext *avctx, PutBitContext *pb,
ScanTable *intra_scantable, int pred,
uint16_t luma_intra_matrix[64],
uint16_t chroma_intra_matrix[64]);
void ff_mjpeg_encode_picture_trailer(PutBitContext *pb, int header_bits);
void ff_mjpeg_escape_FF(PutBitContext *pb, int start);
int ff_mjpeg_encode_stuffing(MpegEncContext *s);
void ff_mjpeg_init_hvsample(AVCodecContext *avctx, int hsample[4], int vsample[4]);
void ff_mjpeg_encode_dc(PutBitContext *pb, int val,
uint8_t *huff_size, uint16_t *huff_code);
