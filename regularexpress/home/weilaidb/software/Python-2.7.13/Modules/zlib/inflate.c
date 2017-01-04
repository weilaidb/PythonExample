#  ifndef BUILDFIXED
#    define BUILDFIXED
#  endif
local void fixedtables OF((struct inflate_state FAR *state));
local int updatewindow OF((z_streamp strm, const unsigned char FAR *end,
unsigned copy));
void makefixed OF((void));
local unsigned syncsearch OF((unsigned FAR *have, const unsigned char FAR *buf,
unsigned len));
int ZEXPORT inflateResetKeep(strm)
z_streamp strm;
int ZEXPORT inflateReset(strm)
z_streamp strm;
int ZEXPORT inflateReset2(strm, windowBits)
z_streamp strm;
int windowBits;
int ZEXPORT inflateInit2_(strm, windowBits, version, stream_size)
z_streamp strm;
int windowBits;
const char *version;
int stream_size;
int ZEXPORT inflateInit_(strm, version, stream_size)
z_streamp strm;
const char *version;
int stream_size;
int ZEXPORT inflatePrime(strm, bits, value)
z_streamp strm;
int bits;
int value;
local void fixedtables(state)
struct inflate_state FAR *state;
void makefixed()
local int updatewindow(strm, end, copy)
z_streamp strm;
const Bytef *end;
unsigned copy;
#  define UPDATE(check, buf, len) \
(state->flags ? crc32(check, buf, len) : adler32(check, buf, len))
#  define UPDATE(check, buf, len) adler32(check, buf, len)
#  define CRC2(check, word) \
do  while (0)
#  define CRC4(check, word) \
do  while (0)
#define LOAD() \
do  while (0)
#define RESTORE() \
do  while (0)
#define INITBITS() \
do  while (0)
#define PULLBYTE() \
do  while (0)
#define NEEDBITS(n) \
do  while (0)
#define BITS(n) \
((unsigned)hold & ((1U << (n)) - 1))
#define DROPBITS(n) \
do  while (0)
#define BYTEBITS() \
do  while (0)
int ZEXPORT inflate(strm, flush)
z_streamp strm;
int flush;
int ZEXPORT inflateEnd(strm)
z_streamp strm;
int ZEXPORT inflateGetDictionary(strm, dictionary, dictLength)
z_streamp strm;
Bytef *dictionary;
uInt *dictLength;
int ZEXPORT inflateSetDictionary(strm, dictionary, dictLength)
z_streamp strm;
const Bytef *dictionary;
uInt dictLength;
int ZEXPORT inflateGetHeader(strm, head)
z_streamp strm;
gz_headerp head;
local unsigned syncsearch(have, buf, len)
unsigned FAR *have;
const unsigned char FAR *buf;
unsigned len;
int ZEXPORT inflateSync(strm)
z_streamp strm;
int ZEXPORT inflateSyncPoint(strm)
z_streamp strm;
int ZEXPORT inflateCopy(dest, source)
z_streamp dest;
z_streamp source;
int ZEXPORT inflateUndermine(strm, subvert)
z_streamp strm;
int subvert;
long ZEXPORT inflateMark(strm)
z_streamp strm;
