#define ZLIB_INTERNAL
int ZEXPORT compress2 (dest, destLen, source, sourceLen, level)
Bytef *dest;
uLongf *destLen;
const Bytef *source;
uLong sourceLen;
int level;
int ZEXPORT compress (dest, destLen, source, sourceLen)
Bytef *dest;
uLongf *destLen;
const Bytef *source;
uLong sourceLen;
uLong ZEXPORT compressBound (sourceLen)
uLong sourceLen;
