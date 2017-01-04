#define LZW_MAXBITS                 12
#define LZW_SIZTABLE                (1<<LZW_MAXBITS)
static const uint16_t mask[17] =
;
struct LZWState ;
static int lzw_get_code(struct LZWState * s)
int ff_lzw_decode_tail(LZWState *p)
av_cold void ff_lzw_decode_open(LZWState **p)
av_cold void ff_lzw_decode_close(LZWState **p)
int ff_lzw_decode_init(LZWState *p, int csize, const uint8_t *buf, int buf_size, int mode)
int ff_lzw_decode(LZWState *p, uint8_t *buf, int len)
