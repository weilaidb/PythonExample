#define LZW_MAXBITS 12
#define LZW_SIZTABLE (1<<LZW_MAXBITS)
#define LZW_HASH_SIZE 16411
#define LZW_HASH_SHIFT 6
#define LZW_PREFIX_EMPTY -1
#define LZW_PREFIX_FREE -2
typedef struct CodeCode;
typedef struct LZWEncodeState LZWEncodeState;
const int ff_lzw_encode_state_size = sizeof(LZWEncodeState);
static inline int hash(int head, const int add)
static inline int hashNext(int head, const int offset)
static inline int hashOffset(const int head)
static inline void writeCode(LZWEncodeState * s, int c)
static inline int findCode(LZWEncodeState * s, uint8_t c, int hash_prefix)
static inline void addCode(LZWEncodeState * s, uint8_t c, int hash_prefix, int hash_code)
static void clearTable(LZWEncodeState * s)
static int writtenBytes(LZWEncodeState *s)
void ff_lzw_encode_init(LZWEncodeState *s, uint8_t *outbuf, int outsize,
int maxbits, enum FF_LZW_MODES mode,
void (*lzw_put_bits)(PutBitContext *, int, unsigned))
int ff_lzw_encode(LZWEncodeState * s, const uint8_t * inbuf, int insize)
int ff_lzw_encode_flush(LZWEncodeState *s,
void (*lzw_flush_put_bits)(PutBitContext *))
