const int sqlite3one = 1;
static const unsigned char sqlite3Utf8Trans1[] = ;
#define WRITE_UTF8(zOut, c)
#define WRITE_UTF16LE(zOut, c)
#define WRITE_UTF16BE(zOut, c)
#define READ_UTF16LE(zIn, TERM, c)
#define READ_UTF16BE(zIn, TERM, c)
#define READ_UTF8(zIn, zTerm, c)                           \
c = *(zIn++);                                            \
if( c>=0xc0 )
u32 sqlite3Utf8Read(
const unsigned char **pz
)
SQLITE_NOINLINE int sqlite3VdbeMemTranslate(Mem *pMem, u8 desiredEnc)
int sqlite3VdbeMemHandleBom(Mem *pMem)
int sqlite3Utf8CharLen(const char *zIn, int nByte)
#if defined(SQLITE_TEST) && defined(SQLITE_DEBUG)
int sqlite3Utf8To8(unsigned char *zIn)
char *sqlite3Utf16to8(sqlite3 *db, const void *z, int nByte, u8 enc)
int sqlite3Utf16ByteLen(const void *zIn, int nChar)
#if defined(SQLITE_TEST)
void sqlite3UtfSelfTest(void)
