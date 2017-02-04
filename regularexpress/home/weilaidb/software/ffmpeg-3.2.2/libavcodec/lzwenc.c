#define LZW_MAXBITS 12
#define LZW_SIZTABLE (1<<LZW_MAXBITS)
#define LZW_HASH_SIZE 16411
#define LZW_HASH_SHIFT 6
#define LZW_PREFIX_EMPTY -1
#define LZW_PREFIX_FREE -2
typedef struct CodeCode;
typedef struct LZWEncodeState LZWEncodeState;
const int ff_lzw_encode_state_size = sizeof(LZWEncodeState);
hash
hashNext
hashOffset
writeCode
findCode
addCode
clearTable
writtenBytes
ff_lzw_encode_init(PutBitContext *, int, unsigned))
ff_lzw_encode
ff_lzw_encode_flush(PutBitContext *))
