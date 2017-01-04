#define IS_INVALID_CHAR(enc, ptr, n) (0)
#define INVALID_LEAD_CASE(n, ptr, nextTokPtr) \
case BT_LEAD ## n: \
if (end - ptr < n) \
return XML_TOK_PARTIAL_CHAR; \
if (IS_INVALID_CHAR(enc, ptr, n))  \
ptr += n; \
break;
#define INVALID_CASES(ptr, nextTokPtr) \
INVALID_LEAD_CASE(2, ptr, nextTokPtr) \
INVALID_LEAD_CASE(3, ptr, nextTokPtr) \
INVALID_LEAD_CASE(4, ptr, nextTokPtr) \
case BT_NONXML: \
case BT_MALFORM: \
case BT_TRAIL: \
*(nextTokPtr) = (ptr); \
return XML_TOK_INVALID;
#define CHECK_NAME_CASE(n, enc, ptr, end, nextTokPtr) \
case BT_LEAD ## n: \
if (end - ptr < n) \
return XML_TOK_PARTIAL_CHAR; \
if (!IS_NAME_CHAR(enc, ptr, n))  \
ptr += n; \
break;
#define CHECK_NAME_CASES(enc, ptr, end, nextTokPtr) \
case BT_NONASCII: \
if (!IS_NAME_CHAR_MINBPC(enc, ptr))  \
case BT_NMSTRT: \
case BT_HEX: \
case BT_DIGIT: \
case BT_NAME: \
case BT_MINUS: \
ptr += MINBPC(enc); \
break; \
CHECK_NAME_CASE(2, enc, ptr, end, nextTokPtr) \
CHECK_NAME_CASE(3, enc, ptr, end, nextTokPtr) \
CHECK_NAME_CASE(4, enc, ptr, end, nextTokPtr)
#define CHECK_NMSTRT_CASE(n, enc, ptr, end, nextTokPtr) \
case BT_LEAD ## n: \
if (end - ptr < n) \
return XML_TOK_PARTIAL_CHAR; \
if (!IS_NMSTRT_CHAR(enc, ptr, n))  \
ptr += n; \
break;
#define CHECK_NMSTRT_CASES(enc, ptr, end, nextTokPtr) \
case BT_NONASCII: \
if (!IS_NMSTRT_CHAR_MINBPC(enc, ptr))  \
case BT_NMSTRT: \
case BT_HEX: \
ptr += MINBPC(enc); \
break; \
CHECK_NMSTRT_CASE(2, enc, ptr, end, nextTokPtr) \
CHECK_NMSTRT_CASE(3, enc, ptr, end, nextTokPtr) \
CHECK_NMSTRT_CASE(4, enc, ptr, end, nextTokPtr)
#define PREFIX(ident) ident
static int PTRCALL
PREFIX(scanComment)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(scanDecl)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(checkPiTarget)(const ENCODING *enc, const char *ptr,
const char *end, int *tokPtr)
static int PTRCALL
PREFIX(scanPi)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(scanCdataSection)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(cdataSectionTok)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(scanEndTag)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(scanHexCharRef)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(scanCharRef)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(scanRef)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(scanAtts)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(scanLt)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(contentTok)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(scanPercent)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(scanPoundName)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(scanLit)(int open, const ENCODING *enc,
const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(prologTok)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
PREFIX(attributeValueTok)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(entityValueTok)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(ignoreSectionTok)(const ENCODING *enc, const char *ptr,
const char *end, const char **nextTokPtr)
static int PTRCALL
PREFIX(isPublicId)(const ENCODING *enc, const char *ptr, const char *end,
const char **badPtr)
static int PTRCALL
PREFIX(getAtts)(const ENCODING *enc, const char *ptr,
int attsMax, ATTRIBUTE *atts)
static int PTRFASTCALL
PREFIX(charRefNumber)(const ENCODING *enc, const char *ptr)
static int PTRCALL
PREFIX(predefinedEntityName)(const ENCODING *enc, const char *ptr,
const char *end)
static int PTRCALL
PREFIX(sameName)(const ENCODING *enc, const char *ptr1, const char *ptr2)
static int PTRCALL
PREFIX(nameMatchesAscii)(const ENCODING *enc, const char *ptr1,
const char *end1, const char *ptr2)
static int PTRFASTCALL
PREFIX(nameLength)(const ENCODING *enc, const char *ptr)
static const char * PTRFASTCALL
PREFIX(skipS)(const ENCODING *enc, const char *ptr)
static void PTRCALL
PREFIX(updatePosition)(const ENCODING *enc,
const char *ptr,
const char *end,
POSITION *pos)
#undef DO_LEAD_CASE
#undef MULTIBYTE_CASES
#undef INVALID_CASES
#undef CHECK_NAME_CASE
#undef CHECK_NAME_CASES
#undef CHECK_NMSTRT_CASE
#undef CHECK_NMSTRT_CASES
