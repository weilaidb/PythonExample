#define AVCODEC_LZW_H
struct PutBitContext;
enum FF_LZW_MODES;
typedef void LZWState;
ff_lzw_decode_open;
ff_lzw_decode_close;
ff_lzw_decode_init;
ff_lzw_decode;
ff_lzw_decode_tail;
struct LZWEncodeState;
extern const int ff_lzw_encode_state_size;
ff_lzw_encode_init(struct PutBitContext *, int, unsigned int));
ff_lzw_encode;
ff_lzw_encode_flush(struct PutBitContext *));
