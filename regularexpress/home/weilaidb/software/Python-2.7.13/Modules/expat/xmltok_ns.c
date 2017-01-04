const ENCODING *
NS(XmlGetUtf8InternalEncoding)(void)
const ENCODING *
NS(XmlGetUtf16InternalEncoding)(void)
static const ENCODING * const NS(encodings)[] = ;
static int PTRCALL
NS(initScanProlog)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
static int PTRCALL
NS(initScanContent)(const ENCODING *enc, const char *ptr, const char *end,
const char **nextTokPtr)
int
NS(XmlInitEncoding)(INIT_ENCODING *p, const ENCODING **encPtr,
const char *name)
static const ENCODING *
NS(findEncoding)(const ENCODING *enc, const char *ptr, const char *end)
int
NS(XmlParseXmlDecl)(int isGeneralTextEntity,
const ENCODING *enc,
const char *ptr,
const char *end,
const char **badPtr,
const char **versionPtr,
const char **versionEndPtr,
const char **encodingName,
const ENCODING **encoding,
int *standalone)
