#define AVCODEC_MPEG12_H
extern uint8_t ff_mpeg12_static_rl_table_store[2][2][2*MAX_RUN + MAX_LEVEL + 3];
void ff_mpeg12_common_init(MpegEncContext *s);
static inline int decode_dc(GetBitContext *gb, int component)
int ff_mpeg1_decode_block_intra(GetBitContext *gb,
const uint16_t *quant_matrix,
uint8_t *const scantable, int last_dc[3],
int16_t *block, int index, int qscale);
void ff_mpeg1_clean_buffers(MpegEncContext *s);
int ff_mpeg1_find_frame_end(ParseContext *pc, const uint8_t *buf, int buf_size, AVCodecParserContext *s);
void ff_mpeg1_encode_picture_header(MpegEncContext *s, int picture_number);
void ff_mpeg1_encode_mb(MpegEncContext *s, int16_t block[8][64],
int motion_x, int motion_y);
void ff_mpeg1_encode_init(MpegEncContext *s);
void ff_mpeg1_encode_slice_header(MpegEncContext *s);
