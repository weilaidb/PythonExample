static int put_huffman_table(PutBitContext *p, int table_class, int table_id,
const uint8_t *bits_table, const uint8_t *value_table)
static void jpeg_table_header(AVCodecContext *avctx, PutBitContext *p,
ScanTable *intra_scantable,
uint16_t luma_intra_matrix[64],
uint16_t chroma_intra_matrix[64],
int hsample[3])
static void jpeg_put_comments(AVCodecContext *avctx, PutBitContext *p)
void ff_mjpeg_init_hvsample(AVCodecContext *avctx, int hsample[4], int vsample[4])
void ff_mjpeg_encode_picture_header(AVCodecContext *avctx, PutBitContext *pb,
ScanTable *intra_scantable, int pred,
uint16_t luma_intra_matrix[64],
uint16_t chroma_intra_matrix[64])
void ff_mjpeg_escape_FF(PutBitContext *pb, int start)
int ff_mjpeg_encode_stuffing(MpegEncContext *s)
void ff_mjpeg_encode_picture_trailer(PutBitContext *pb, int header_bits)
void ff_mjpeg_encode_dc(PutBitContext *pb, int val,
uint8_t *huff_size, uint16_t *huff_code)
