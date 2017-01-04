#elif defined(MACOS_CLASSIC)
#elif defined(__amigaos__)
#elif defined(__WATCOMC__)
#define IGNORE_SECTION_TOK_VTABLE , PREFIX(ignoreSectionTok)
#define IGNORE_SECTION_TOK_VTABLE
#define VTABLE1 \
, \
, \
PREFIX(sameName), \
PREFIX(nameMatchesAscii), \
PREFIX(nameLength), \
PREFIX(skipS), \
PREFIX(getAtts), \
PREFIX(charRefNumber), \
PREFIX(predefinedEntityName), \
PREFIX(updatePosition), \
PREFIX(isPublicId)
#define VTABLE VTABLE1, PREFIX(toUtf8), PREFIX(toUtf16)
#define UCS2_GET_NAMING(pages, hi, lo) \
(namingBitmap[(pages[hi] << 3) + ((lo) >> 5)] & (1 << ((lo) & 0x1F)))
#define UTF8_GET_NAMING2(pages, byte) \
(namingBitmap[((pages)[(((byte)[0]) >> 2) & 7] << 3) \
+ ((((byte)[0]) & 3) << 1) \
+ ((((byte)[1]) >> 5) & 1)] \
& (1 << (((byte)[1]) & 0x1F)))
#define UTF8_GET_NAMING3(pages, byte) \
(namingBitmap[((pages)[((((byte)[0]) & 0xF) << 4) \
+ ((((byte)[1]) >> 2) & 0xF)] \
<< 3) \
+ ((((byte)[1]) & 3) << 1) \
+ ((((byte)[2]) >> 5) & 1)] \
& (1 << (((byte)[2]) & 0x1F)))
#define UTF8_GET_NAMING(pages, p, n) \
((n) == 2 \
? UTF8_GET_NAMING2(pages, (const unsigned char *)(p)) \
: ((n) == 3 \
? UTF8_GET_NAMING3(pages, (const unsigned char *)(p)) \
: 0))
#define UTF8_INVALID2(p) \
((*p) < 0xC2 || ((p)[1] & 0x80) == 0 || ((p)[1] & 0xC0) == 0xC0)
#define UTF8_INVALID3(p) \
(((p)[2] & 0x80) == 0 \
|| \
((*p) == 0xEF && (p)[1] == 0xBF \
? \
(p)[2] > 0xBD \
: \
((p)[2] & 0xC0) == 0xC0) \
|| \
((*p) == 0xE0 \
? \
(p)[1] < 0xA0 || ((p)[1] & 0xC0) == 0xC0 \
: \
((p)[1] & 0x80) == 0 \
|| \
((*p) == 0xED ? (p)[1] > 0x9F : ((p)[1] & 0xC0) == 0xC0)))
#define UTF8_INVALID4(p) \
(((p)[3] & 0x80) == 0 || ((p)[3] & 0xC0) == 0xC0 \
|| \
((p)[2] & 0x80) == 0 || ((p)[2] & 0xC0) == 0xC0 \
|| \
((*p) == 0xF0 \
? \
(p)[1] < 0x90 || ((p)[1] & 0xC0) == 0xC0 \
: \
((p)[1] & 0x80) == 0 \
|| \
((*p) == 0xF4 ? (p)[1] > 0x8F : ((p)[1] & 0xC0) == 0xC0)))
static int PTRFASTCALL
isNever(const ENCODING *enc, const char *p)
static int PTRFASTCALL
utf8_isName2(const ENCODING *enc, const char *p)
static int PTRFASTCALL
utf8_isName3(const ENCODING *enc, const char *p)
#define utf8_isName4 isNever
static int PTRFASTCALL
utf8_isNmstrt2(const ENCODING *enc, const char *p)
static int PTRFASTCALL
utf8_isNmstrt3(const ENCODING *enc, const char *p)
#define utf8_isNmstrt4 isNever
static int PTRFASTCALL
utf8_isInvalid2(const ENCODING *enc, const char *p)
static int PTRFASTCALL
utf8_isInvalid3(const ENCODING *enc, const char *p)
static int PTRFASTCALL
utf8_isInvalid4(const ENCODING *enc, const char *p)
struct normal_encoding ;
#define AS_NORMAL_ENCODING(enc)   ((const struct normal_encoding *) (enc))
#define STANDARD_VTABLE(E) \
E ## byteType, \
E ## isNameMin, \
E ## isNmstrtMin, \
E ## byteToAscii, \
E ## charMatches,
#define STANDARD_VTABLE(E)
#define NORMAL_VTABLE(E) \
E ## isName2, \
E ## isName3, \
E ## isName4, \
E ## isNmstrt2, \
E ## isNmstrt3, \
E ## isNmstrt4, \
E ## isInvalid2, \
E ## isInvalid3, \
E ## isInvalid4
static int FASTCALL checkCharRefNumber(int);
#define sb_isNameMin isNever
#define sb_isNmstrtMin isNever
#define MINBPC(enc) ((enc)->minBytesPerChar)
#define MINBPC(enc) 1
#define SB_BYTE_TYPE(enc, p) \
(((struct normal_encoding *)(enc))->type[(unsigned char)*(p)])
static int PTRFASTCALL
sb_byteType(const ENCODING *enc, const char *p)
#define BYTE_TYPE(enc, p) \
(AS_NORMAL_ENCODING(enc)->byteType(enc, p))
#define BYTE_TYPE(enc, p) SB_BYTE_TYPE(enc, p)
#define BYTE_TO_ASCII(enc, p) \
(AS_NORMAL_ENCODING(enc)->byteToAscii(enc, p))
static int PTRFASTCALL
sb_byteToAscii(const ENCODING *enc, const char *p)
#define BYTE_TO_ASCII(enc, p) (*(p))
#define IS_NAME_CHAR(enc, p, n) \
(AS_NORMAL_ENCODING(enc)->isName ## n(enc, p))
#define IS_NMSTRT_CHAR(enc, p, n) \
(AS_NORMAL_ENCODING(enc)->isNmstrt ## n(enc, p))
#define IS_INVALID_CHAR(enc, p, n) \
(AS_NORMAL_ENCODING(enc)->isInvalid ## n(enc, p))
#define IS_NAME_CHAR_MINBPC(enc, p) \
(AS_NORMAL_ENCODING(enc)->isNameMin(enc, p))
#define IS_NMSTRT_CHAR_MINBPC(enc, p) \
(AS_NORMAL_ENCODING(enc)->isNmstrtMin(enc, p))
#define IS_NAME_CHAR_MINBPC(enc, p) (0)
#define IS_NMSTRT_CHAR_MINBPC(enc, p) (0)
#define CHAR_MATCHES(enc, p, c) \
(AS_NORMAL_ENCODING(enc)->charMatches(enc, p, c))
static int PTRCALL
sb_charMatches(const ENCODING *enc, const char *p, int c)
#define CHAR_MATCHES(enc, p, c) (*(p) == c)
#define PREFIX(ident) normal_ ## ident
#define XML_TOK_IMPL_C
#undef XML_TOK_IMPL_C
#undef MINBPC
#undef BYTE_TYPE
#undef BYTE_TO_ASCII
#undef CHAR_MATCHES
#undef IS_NAME_CHAR
#undef IS_NAME_CHAR_MINBPC
#undef IS_NMSTRT_CHAR
#undef IS_NMSTRT_CHAR_MINBPC
#undef IS_INVALID_CHAR
enum ;
static void PTRCALL
utf8_toUtf8(const ENCODING *enc,
const char **fromP, const char *fromLim,
char **toP, const char *toLim)
static void PTRCALL
utf8_toUtf16(const ENCODING *enc,
const char **fromP, const char *fromLim,
unsigned short **toP, const unsigned short *toLim)
static const struct normal_encoding utf8_encoding_ns = ;
static const struct normal_encoding utf8_encoding = ;
static const struct normal_encoding internal_utf8_encoding_ns = ;
static const struct normal_encoding internal_utf8_encoding = ;
static void PTRCALL
latin1_toUtf8(const ENCODING *enc,
const char **fromP, const char *fromLim,
char **toP, const char *toLim)
static void PTRCALL
latin1_toUtf16(const ENCODING *enc,
const char **fromP, const char *fromLim,
unsigned short **toP, const unsigned short *toLim)
static const struct normal_encoding latin1_encoding_ns = ;
static const struct normal_encoding latin1_encoding = ;
static void PTRCALL
ascii_toUtf8(const ENCODING *enc,
const char **fromP, const char *fromLim,
char **toP, const char *toLim)
static const struct normal_encoding ascii_encoding_ns = ;
static const struct normal_encoding ascii_encoding = ;
static int PTRFASTCALL
unicode_byte_type(char hi, char lo)
#define DEFINE_UTF16_TO_UTF8(E) \
static void  PTRCALL \
E ## toUtf8(const ENCODING *enc, \
const char **fromP, const char *fromLim, \
char **toP, const char *toLim) \
#define DEFINE_UTF16_TO_UTF16(E) \
static void  PTRCALL \
E ## toUtf16(const ENCODING *enc, \
const char **fromP, const char *fromLim, \
unsigned short **toP, const unsigned short *toLim) \
#define SET2(ptr, ch) \
(((ptr)[0] = ((ch) & 0xff)), ((ptr)[1] = ((ch) >> 8)))
#define GET_LO(ptr) ((unsigned char)(ptr)[0])
#define GET_HI(ptr) ((unsigned char)(ptr)[1])
DEFINE_UTF16_TO_UTF8(little2_)
DEFINE_UTF16_TO_UTF16(little2_)
#undef SET2
#undef GET_LO
#undef GET_HI
#define SET2(ptr, ch) \
(((ptr)[0] = ((ch) >> 8)), ((ptr)[1] = ((ch) & 0xFF)))
#define GET_LO(ptr) ((unsigned char)(ptr)[1])
#define GET_HI(ptr) ((unsigned char)(ptr)[0])
DEFINE_UTF16_TO_UTF8(big2_)
DEFINE_UTF16_TO_UTF16(big2_)
#undef SET2
#undef GET_LO
#undef GET_HI
#define LITTLE2_BYTE_TYPE(enc, p) \
((p)[1] == 0 \
? ((struct normal_encoding *)(enc))->type[(unsigned char)*(p)] \
: unicode_byte_type((p)[1], (p)[0]))
#define LITTLE2_BYTE_TO_ASCII(enc, p) ((p)[1] == 0 ? (p)[0] : -1)
#define LITTLE2_CHAR_MATCHES(enc, p, c) ((p)[1] == 0 && (p)[0] == c)
#define LITTLE2_IS_NAME_CHAR_MINBPC(enc, p) \
UCS2_GET_NAMING(namePages, (unsigned char)p[1], (unsigned char)p[0])
#define LITTLE2_IS_NMSTRT_CHAR_MINBPC(enc, p) \
UCS2_GET_NAMING(nmstrtPages, (unsigned char)p[1], (unsigned char)p[0])
static int PTRFASTCALL
little2_byteType(const ENCODING *enc, const char *p)
static int PTRFASTCALL
little2_byteToAscii(const ENCODING *enc, const char *p)
static int PTRCALL
little2_charMatches(const ENCODING *enc, const char *p, int c)
static int PTRFASTCALL
little2_isNameMin(const ENCODING *enc, const char *p)
static int PTRFASTCALL
little2_isNmstrtMin(const ENCODING *enc, const char *p)
#undef VTABLE
#define VTABLE VTABLE1, little2_toUtf8, little2_toUtf16
#undef PREFIX
#define PREFIX(ident) little2_ ## ident
#define MINBPC(enc) 2
#define BYTE_TYPE(enc, p) LITTLE2_BYTE_TYPE(enc, p)
#define BYTE_TO_ASCII(enc, p) LITTLE2_BYTE_TO_ASCII(enc, p)
#define CHAR_MATCHES(enc, p, c) LITTLE2_CHAR_MATCHES(enc, p, c)
#define IS_NAME_CHAR(enc, p, n) 0
#define IS_NAME_CHAR_MINBPC(enc, p) LITTLE2_IS_NAME_CHAR_MINBPC(enc, p)
#define IS_NMSTRT_CHAR(enc, p, n) (0)
#define IS_NMSTRT_CHAR_MINBPC(enc, p) LITTLE2_IS_NMSTRT_CHAR_MINBPC(enc, p)
#define XML_TOK_IMPL_C
#undef XML_TOK_IMPL_C
#undef MINBPC
#undef BYTE_TYPE
#undef BYTE_TO_ASCII
#undef CHAR_MATCHES
#undef IS_NAME_CHAR
#undef IS_NAME_CHAR_MINBPC
#undef IS_NMSTRT_CHAR
#undef IS_NMSTRT_CHAR_MINBPC
#undef IS_INVALID_CHAR
static const struct normal_encoding little2_encoding_ns = ;
static const struct normal_encoding little2_encoding = ;
#if BYTEORDER != 4321
static const struct normal_encoding internal_little2_encoding_ns = ;
static const struct normal_encoding internal_little2_encoding = ;
#define BIG2_BYTE_TYPE(enc, p) \
((p)[0] == 0 \
? ((struct normal_encoding *)(enc))->type[(unsigned char)(p)[1]] \
: unicode_byte_type((p)[0], (p)[1]))
#define BIG2_BYTE_TO_ASCII(enc, p) ((p)[0] == 0 ? (p)[1] : -1)
#define BIG2_CHAR_MATCHES(enc, p, c) ((p)[0] == 0 && (p)[1] == c)
#define BIG2_IS_NAME_CHAR_MINBPC(enc, p) \
UCS2_GET_NAMING(namePages, (unsigned char)p[0], (unsigned char)p[1])
#define BIG2_IS_NMSTRT_CHAR_MINBPC(enc, p) \
UCS2_GET_NAMING(nmstrtPages, (unsigned char)p[0], (unsigned char)p[1])
static int PTRFASTCALL
big2_byteType(const ENCODING *enc, const char *p)
static int PTRFASTCALL
big2_byteToAscii(const ENCODING *enc, const char *p)
static int PTRCALL
big2_charMatches(const ENCODING *enc, const char *p, int c)
static int PTRFASTCALL
big2_isNameMin(const ENCODING *enc, const char *p)
static int PTRFASTCALL
big2_isNmstrtMin(const ENCODING *enc, const char *p)
#undef VTABLE
#define VTABLE VTABLE1, big2_toUtf8, big2_toUtf16
#undef PREFIX
#define PREFIX(ident) big2_ ## ident
#define MINBPC(enc) 2
#define BYTE_TYPE(enc, p) BIG2_BYTE_TYPE(enc, p)
#define BYTE_TO_ASCII(enc, p) BIG2_BYTE_TO_ASCII(enc, p)
#define CHAR_MATCHES(enc, p, c) BIG2_CHAR_MATCHES(enc, p, c)
#define IS_NAME_CHAR(enc, p, n) 0
#define IS_NAME_CHAR_MINBPC(enc, p) BIG2_IS_NAME_CHAR_MINBPC(enc, p)
#define IS_NMSTRT_CHAR(enc, p, n) (0)
#define IS_NMSTRT_CHAR_MINBPC(enc, p) BIG2_IS_NMSTRT_CHAR_MINBPC(enc, p)
#define XML_TOK_IMPL_C
#undef XML_TOK_IMPL_C
#undef MINBPC
#undef BYTE_TYPE
#undef BYTE_TO_ASCII
#undef CHAR_MATCHES
#undef IS_NAME_CHAR
#undef IS_NAME_CHAR_MINBPC
#undef IS_NMSTRT_CHAR
#undef IS_NMSTRT_CHAR_MINBPC
#undef IS_INVALID_CHAR
static const struct normal_encoding big2_encoding_ns = ;
static const struct normal_encoding big2_encoding = ;
#if BYTEORDER != 1234
static const struct normal_encoding internal_big2_encoding_ns = ;
static const struct normal_encoding internal_big2_encoding = ;
#undef PREFIX
static int FASTCALL
streqci(const char *s1, const char *s2)
static void PTRCALL
initUpdatePosition(const ENCODING *enc, const char *ptr,
const char *end, POSITION *pos)
static int
toAscii(const ENCODING *enc, const char *ptr, const char *end)
static int FASTCALL
isSpace(int c)
static int
parsePseudoAttribute(const ENCODING *enc,
const char *ptr,
const char *end,
const char **namePtr,
const char **nameEndPtr,
const char **valPtr,
const char **nextTokPtr)
static const char KW_version[] = ;
static const char KW_encoding[] = ;
static const char KW_standalone[] = ;
static const char KW_yes[] = ;
static const char KW_no[] = ;
static int
doParseXmlDecl(const ENCODING *(*encodingFinder)(const ENCODING *,
const char *,
const char *),
int isGeneralTextEntity,
const ENCODING *enc,
const char *ptr,
const char *end,
const char **badPtr,
const char **versionPtr,
const char **versionEndPtr,
const char **encodingName,
const ENCODING **encoding,
int *standalone)
static int FASTCALL
checkCharRefNumber(int result)
int FASTCALL
XmlUtf8Encode(int c, char *buf)
int FASTCALL
XmlUtf16Encode(int charNum, unsigned short *buf)
struct unknown_encoding ;
#define AS_UNKNOWN_ENCODING(enc)  ((const struct unknown_encoding *) (enc))
int
XmlSizeOfUnknownEncoding(void)
static int PTRFASTCALL
unknown_isName(const ENCODING *enc, const char *p)
static int PTRFASTCALL
unknown_isNmstrt(const ENCODING *enc, const char *p)
static int PTRFASTCALL
unknown_isInvalid(const ENCODING *enc, const char *p)
static void PTRCALL
unknown_toUtf8(const ENCODING *enc,
const char **fromP, const char *fromLim,
char **toP, const char *toLim)
static void PTRCALL
unknown_toUtf16(const ENCODING *enc,
const char **fromP, const char *fromLim,
unsigned short **toP, const unsigned short *toLim)
ENCODING *
XmlInitUnknownEncoding(void *mem,
int *table,
CONVERTER convert,
void *userData)
enum ;
static const char KW_ISO_8859_1[] = ;
static const char KW_US_ASCII[] = ;
static const char KW_UTF_8[] =  ;
static const char KW_UTF_16[] = ;
static const char KW_UTF_16BE[] = ;
static const char KW_UTF_16LE[] = ;
static int FASTCALL
getEncodingIndex(const char *name)
#define INIT_ENC_INDEX(enc) ((int)(enc)->initEnc.isUtf16)
#define SET_INIT_ENC_INDEX(enc, i) ((enc)->initEnc.isUtf16 = (char)i)
static int
initScan(const ENCODING * const *encodingTable,
const INIT_ENCODING *enc,
int state,
const char *ptr,
const char *end,
const char **nextTokPtr)
#define NS(x) x
#define ns(x) x
#define XML_TOK_NS_C
#undef XML_TOK_NS_C
#undef NS
#undef ns
#define NS(x) x ## NS
#define ns(x) x ## _ns
#define XML_TOK_NS_C
#undef XML_TOK_NS_C
#undef NS
#undef ns
ENCODING *
XmlInitUnknownEncodingNS(void *mem,
int *table,
CONVERTER convert,
void *userData)
