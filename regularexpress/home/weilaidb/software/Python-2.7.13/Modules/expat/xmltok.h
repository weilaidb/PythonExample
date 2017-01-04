#define XmlTok_INCLUDED 1
#define XML_TOK_TRAILING_RSQB -5
#define XML_TOK_NONE -4
#define XML_TOK_TRAILING_CR -3
#define XML_TOK_PARTIAL_CHAR -2
#define XML_TOK_PARTIAL -1
#define XML_TOK_INVALID 0
#define XML_TOK_START_TAG_WITH_ATTS 1
#define XML_TOK_START_TAG_NO_ATTS 2
#define XML_TOK_EMPTY_ELEMENT_WITH_ATTS 3
#define XML_TOK_EMPTY_ELEMENT_NO_ATTS 4
#define XML_TOK_END_TAG 5
#define XML_TOK_DATA_CHARS 6
#define XML_TOK_DATA_NEWLINE 7
#define XML_TOK_CDATA_SECT_OPEN 8
#define XML_TOK_ENTITY_REF 9
#define XML_TOK_CHAR_REF 10
#define XML_TOK_PI 11
#define XML_TOK_XML_DECL 12
#define XML_TOK_COMMENT 13
#define XML_TOK_BOM 14
#define XML_TOK_PROLOG_S 15
#define XML_TOK_DECL_OPEN 16
#define XML_TOK_DECL_CLOSE 17
#define XML_TOK_NAME 18
#define XML_TOK_NMTOKEN 19
#define XML_TOK_POUND_NAME 20
#define XML_TOK_OR 21
#define XML_TOK_PERCENT 22
#define XML_TOK_OPEN_PAREN 23
#define XML_TOK_CLOSE_PAREN 24
#define XML_TOK_OPEN_BRACKET 25
#define XML_TOK_CLOSE_BRACKET 26
#define XML_TOK_LITERAL 27
#define XML_TOK_PARAM_ENTITY_REF 28
#define XML_TOK_INSTANCE_START 29
#define XML_TOK_NAME_QUESTION 30
#define XML_TOK_NAME_ASTERISK 31
#define XML_TOK_NAME_PLUS 32
#define XML_TOK_COND_SECT_OPEN 33
#define XML_TOK_COND_SECT_CLOSE 34
#define XML_TOK_CLOSE_PAREN_QUESTION 35
#define XML_TOK_CLOSE_PAREN_ASTERISK 36
#define XML_TOK_CLOSE_PAREN_PLUS 37
#define XML_TOK_COMMA 38
#define XML_TOK_ATTRIBUTE_VALUE_S 39
#define XML_TOK_CDATA_SECT_CLOSE 40
#define XML_TOK_PREFIXED_NAME 41
#define XML_TOK_IGNORE_SECT 42
#define XML_N_STATES 4
#define XML_N_STATES 3
#define XML_PROLOG_STATE 0
#define XML_CONTENT_STATE 1
#define XML_CDATA_SECTION_STATE 2
#define XML_IGNORE_SECTION_STATE 3
#define XML_N_LITERAL_TYPES 2
#define XML_ATTRIBUTE_VALUE_LITERAL 0
#define XML_ENTITY_VALUE_LITERAL 1
#define XML_UTF8_ENCODE_MAX 4
#define XML_UTF16_ENCODE_MAX 2
typedef struct position  POSITION;
typedef struct  ATTRIBUTE;
struct encoding;
typedef struct encoding ENCODING;
typedef int (PTRCALL *SCANNER)(const ENCODING *,
const char *,
const char *,
const char **);
struct encoding ;
#define XmlTok(enc, state, ptr, end, nextTokPtr) \
(((enc)->scanners[state])(enc, ptr, end, nextTokPtr))
#define XmlPrologTok(enc, ptr, end, nextTokPtr) \
XmlTok(enc, XML_PROLOG_STATE, ptr, end, nextTokPtr)
#define XmlContentTok(enc, ptr, end, nextTokPtr) \
XmlTok(enc, XML_CONTENT_STATE, ptr, end, nextTokPtr)
#define XmlCdataSectionTok(enc, ptr, end, nextTokPtr) \
XmlTok(enc, XML_CDATA_SECTION_STATE, ptr, end, nextTokPtr)
#define XmlIgnoreSectionTok(enc, ptr, end, nextTokPtr) \
XmlTok(enc, XML_IGNORE_SECTION_STATE, ptr, end, nextTokPtr)
#define XmlLiteralTok(enc, literalType, ptr, end, nextTokPtr) \
(((enc)->literalScanners[literalType])(enc, ptr, end, nextTokPtr))
#define XmlAttributeValueTok(enc, ptr, end, nextTokPtr) \
XmlLiteralTok(enc, XML_ATTRIBUTE_VALUE_LITERAL, ptr, end, nextTokPtr)
#define XmlEntityValueTok(enc, ptr, end, nextTokPtr) \
XmlLiteralTok(enc, XML_ENTITY_VALUE_LITERAL, ptr, end, nextTokPtr)
#define XmlSameName(enc, ptr1, ptr2) (((enc)->sameName)(enc, ptr1, ptr2))
#define XmlNameMatchesAscii(enc, ptr1, end1, ptr2) \
(((enc)->nameMatchesAscii)(enc, ptr1, end1, ptr2))
#define XmlNameLength(enc, ptr) \
(((enc)->nameLength)(enc, ptr))
#define XmlSkipS(enc, ptr) \
(((enc)->skipS)(enc, ptr))
#define XmlGetAttributes(enc, ptr, attsMax, atts) \
(((enc)->getAtts)(enc, ptr, attsMax, atts))
#define XmlCharRefNumber(enc, ptr) \
(((enc)->charRefNumber)(enc, ptr))
#define XmlPredefinedEntityName(enc, ptr, end) \
(((enc)->predefinedEntityName)(enc, ptr, end))
#define XmlUpdatePosition(enc, ptr, end, pos) \
(((enc)->updatePosition)(enc, ptr, end, pos))
#define XmlIsPublicId(enc, ptr, end, badPtr) \
(((enc)->isPublicId)(enc, ptr, end, badPtr))
#define XmlUtf8Convert(enc, fromP, fromLim, toP, toLim) \
(((enc)->utf8Convert)(enc, fromP, fromLim, toP, toLim))
#define XmlUtf16Convert(enc, fromP, fromLim, toP, toLim) \
(((enc)->utf16Convert)(enc, fromP, fromLim, toP, toLim))
typedef struct  INIT_ENCODING;
int XmlParseXmlDecl(int isGeneralTextEntity,
const ENCODING *enc,
const char *ptr,
const char *end,
const char **badPtr,
const char **versionPtr,
const char **versionEndPtr,
const char **encodingNamePtr,
const ENCODING **namedEncodingPtr,
int *standalonePtr);
int XmlInitEncoding(INIT_ENCODING *, const ENCODING **, const char *name);
const ENCODING *XmlGetUtf8InternalEncoding(void);
const ENCODING *XmlGetUtf16InternalEncoding(void);
int FASTCALL XmlUtf8Encode(int charNumber, char *buf);
int FASTCALL XmlUtf16Encode(int charNumber, unsigned short *buf);
int XmlSizeOfUnknownEncoding(void);
typedef int (XMLCALL *CONVERTER) (void *userData, const char *p);
ENCODING *
XmlInitUnknownEncoding(void *mem,
int *table,
CONVERTER convert,
void *userData);
int XmlParseXmlDeclNS(int isGeneralTextEntity,
const ENCODING *enc,
const char *ptr,
const char *end,
const char **badPtr,
const char **versionPtr,
const char **versionEndPtr,
const char **encodingNamePtr,
const ENCODING **namedEncodingPtr,
int *standalonePtr);
int XmlInitEncodingNS(INIT_ENCODING *, const ENCODING **, const char *name);
const ENCODING *XmlGetUtf8InternalEncodingNS(void);
const ENCODING *XmlGetUtf16InternalEncodingNS(void);
ENCODING *
XmlInitUnknownEncodingNS(void *mem,
int *table,
CONVERTER convert,
void *userData);
