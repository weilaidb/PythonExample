#define XML_BUILDING_EXPAT 1
#elif defined(MACOS_CLASSIC)
#elif defined(__amigaos__)
#elif defined(__WATCOMC__)
#elif defined(HAVE_EXPAT_CONFIG_H)
#define XML_ENCODE_MAX XML_UTF16_ENCODE_MAX
#define XmlConvert XmlUtf16Convert
#define XmlGetInternalEncoding XmlGetUtf16InternalEncoding
#define XmlGetInternalEncodingNS XmlGetUtf16InternalEncodingNS
#define XmlEncode XmlUtf16Encode
#define MUST_CONVERT(enc, s) (!(enc)->isUtf16 || (((char *)(s) - (char *)NULL) & 1))
typedef unsigned short ICHAR;
#define XML_ENCODE_MAX XML_UTF8_ENCODE_MAX
#define XmlConvert XmlUtf8Convert
#define XmlGetInternalEncoding XmlGetUtf8InternalEncoding
#define XmlGetInternalEncodingNS XmlGetUtf8InternalEncodingNS
#define XmlEncode XmlUtf8Encode
#define MUST_CONVERT(enc, s) (!(enc)->isUtf8)
typedef char ICHAR;
#define XmlInitEncodingNS XmlInitEncoding
#define XmlInitUnknownEncodingNS XmlInitUnknownEncoding
#undef XmlGetInternalEncodingNS
#define XmlGetInternalEncodingNS XmlGetInternalEncoding
#define XmlParseXmlDeclNS XmlParseXmlDecl
#define XML_T(x) (const wchar_t)x
#define XML_L(x) L ## x
#define XML_T(x) (const unsigned short)x
#define XML_L(x) x
#define XML_T(x) x
#define XML_L(x) x
#define ROUND_UP(n, sz) (((n) + ((sz) - 1)) & ~((sz) - 1))
#define memmove(d,s,l) bcopy((s),(d),(l))
#error memmove does not exist on this platform, nor is a substitute available
typedef const XML_Char *KEY;
typedef struct  NAMED;
typedef struct  HASH_TABLE;
#define CHAR_HASH(h, c) \
(((h) * 0xF4243) ^ (unsigned short)(c))
#define CHAR_HASH(h, c) \
(((h) * 0xF4243) ^ (unsigned char)(c))
#define SECOND_HASH(hash, mask, power) \
((((hash) & ~(mask)) >> ((power) - 1)) & ((mask) >> 2))
#define PROBE_STEP(hash, mask, power) \
((unsigned char)((SECOND_HASH(hash, mask, power)) | 1))
typedef struct  HASH_TABLE_ITER;
#define INIT_TAG_BUF_SIZE 32
#define INIT_DATA_BUF_SIZE 1024
#define INIT_ATTS_SIZE 16
#define INIT_ATTS_VERSION 0xFFFFFFFF
#define INIT_BLOCK_SIZE 1024
#define INIT_BUFFER_SIZE 1024
#define EXPAND_SPARE 24
typedef struct binding  BINDING;
typedef struct prefix  PREFIX;
typedef struct  TAG_NAME;
typedef struct tag  TAG;
typedef struct  ENTITY;
typedef struct  CONTENT_SCAFFOLD;
#define INIT_SCAFFOLD_ELEMENTS 32
typedef struct block  BLOCK;
typedef struct  STRING_POOL;
typedef struct attribute_id  ATTRIBUTE_ID;
typedef struct  DEFAULT_ATTRIBUTE;
typedef struct  NS_ATT;
typedef struct  ELEMENT_TYPE;
typedef struct  DTD;
typedef struct open_internal_entity  OPEN_INTERNAL_ENTITY;
typedef enum XML_Error PTRCALL Processor(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr);
static Processor prologProcessor;
static Processor prologInitProcessor;
static Processor contentProcessor;
static Processor cdataSectionProcessor;
static Processor ignoreSectionProcessor;
static Processor externalParEntProcessor;
static Processor externalParEntInitProcessor;
static Processor entityValueProcessor;
static Processor entityValueInitProcessor;
static Processor epilogProcessor;
static Processor errorProcessor;
static Processor externalEntityInitProcessor;
static Processor externalEntityInitProcessor2;
static Processor externalEntityInitProcessor3;
static Processor externalEntityContentProcessor;
static Processor internalEntityProcessor;
static enum XML_Error
handleUnknownEncoding(XML_Parser parser, const XML_Char *encodingName);
static enum XML_Error
processXmlDecl(XML_Parser parser, int isGeneralTextEntity,
const char *s, const char *next);
static enum XML_Error
initializeEncoding(XML_Parser parser);
static enum XML_Error
doProlog(XML_Parser parser, const ENCODING *enc, const char *s,
const char *end, int tok, const char *next, const char **nextPtr,
XML_Bool haveMore);
static enum XML_Error
processInternalEntity(XML_Parser parser, ENTITY *entity,
XML_Bool betweenDecl);
static enum XML_Error
doContent(XML_Parser parser, int startTagLevel, const ENCODING *enc,
const char *start, const char *end, const char **endPtr,
XML_Bool haveMore);
static enum XML_Error
doCdataSection(XML_Parser parser, const ENCODING *, const char **startPtr,
const char *end, const char **nextPtr, XML_Bool haveMore);
static enum XML_Error
doIgnoreSection(XML_Parser parser, const ENCODING *, const char **startPtr,
const char *end, const char **nextPtr, XML_Bool haveMore);
static enum XML_Error
storeAtts(XML_Parser parser, const ENCODING *, const char *s,
TAG_NAME *tagNamePtr, BINDING **bindingsPtr);
static enum XML_Error
addBinding(XML_Parser parser, PREFIX *prefix, const ATTRIBUTE_ID *attId,
const XML_Char *uri, BINDING **bindingsPtr);
static int
defineAttribute(ELEMENT_TYPE *type, ATTRIBUTE_ID *, XML_Bool isCdata,
XML_Bool isId, const XML_Char *dfltValue, XML_Parser parser);
static enum XML_Error
storeAttributeValue(XML_Parser parser, const ENCODING *, XML_Bool isCdata,
const char *, const char *, STRING_POOL *);
static enum XML_Error
appendAttributeValue(XML_Parser parser, const ENCODING *, XML_Bool isCdata,
const char *, const char *, STRING_POOL *);
static ATTRIBUTE_ID *
getAttributeId(XML_Parser parser, const ENCODING *enc, const char *start,
const char *end);
static int
setElementTypePrefix(XML_Parser parser, ELEMENT_TYPE *);
static enum XML_Error
storeEntityValue(XML_Parser parser, const ENCODING *enc, const char *start,
const char *end);
static int
reportProcessingInstruction(XML_Parser parser, const ENCODING *enc,
const char *start, const char *end);
static int
reportComment(XML_Parser parser, const ENCODING *enc, const char *start,
const char *end);
static void
reportDefault(XML_Parser parser, const ENCODING *enc, const char *start,
const char *end);
static const XML_Char * getContext(XML_Parser parser);
static XML_Bool
setContext(XML_Parser parser, const XML_Char *context);
static void FASTCALL normalizePublicId(XML_Char *s);
static DTD * dtdCreate(const XML_Memory_Handling_Suite *ms);
static void dtdReset(DTD *p, const XML_Memory_Handling_Suite *ms);
static void
dtdDestroy(DTD *p, XML_Bool isDocEntity, const XML_Memory_Handling_Suite *ms);
static int
dtdCopy(XML_Parser oldParser,
DTD *newDtd, const DTD *oldDtd, const XML_Memory_Handling_Suite *ms);
static int
copyEntityTable(XML_Parser oldParser,
HASH_TABLE *, STRING_POOL *, const HASH_TABLE *);
static NAMED *
lookup(XML_Parser parser, HASH_TABLE *table, KEY name, size_t createSize);
static void FASTCALL
hashTableInit(HASH_TABLE *, const XML_Memory_Handling_Suite *ms);
static void FASTCALL hashTableClear(HASH_TABLE *);
static void FASTCALL hashTableDestroy(HASH_TABLE *);
static void FASTCALL
hashTableIterInit(HASH_TABLE_ITER *, const HASH_TABLE *);
static NAMED * FASTCALL hashTableIterNext(HASH_TABLE_ITER *);
static void FASTCALL
poolInit(STRING_POOL *, const XML_Memory_Handling_Suite *ms);
static void FASTCALL poolClear(STRING_POOL *);
static void FASTCALL poolDestroy(STRING_POOL *);
static XML_Char *
poolAppend(STRING_POOL *pool, const ENCODING *enc,
const char *ptr, const char *end);
static XML_Char *
poolStoreString(STRING_POOL *pool, const ENCODING *enc,
const char *ptr, const char *end);
static XML_Bool FASTCALL poolGrow(STRING_POOL *pool);
static const XML_Char * FASTCALL
poolCopyString(STRING_POOL *pool, const XML_Char *s);
static const XML_Char *
poolCopyStringN(STRING_POOL *pool, const XML_Char *s, int n);
static const XML_Char * FASTCALL
poolAppendString(STRING_POOL *pool, const XML_Char *s);
static int FASTCALL nextScaffoldPart(XML_Parser parser);
static XML_Content * build_model(XML_Parser parser);
static ELEMENT_TYPE *
getElementType(XML_Parser parser, const ENCODING *enc,
const char *ptr, const char *end);
static unsigned long generate_hash_secret_salt(void);
static XML_Bool startParsing(XML_Parser parser);
static XML_Parser
parserCreate(const XML_Char *encodingName,
const XML_Memory_Handling_Suite *memsuite,
const XML_Char *nameSep,
DTD *dtd);
static void
parserInit(XML_Parser parser, const XML_Char *encodingName);
#define poolStart(pool) ((pool)->start)
#define poolEnd(pool) ((pool)->ptr)
#define poolLength(pool) ((pool)->ptr - (pool)->start)
#define poolChop(pool) ((void)--(pool->ptr))
#define poolLastChar(pool) (((pool)->ptr)[-1])
#define poolDiscard(pool) ((pool)->ptr = (pool)->start)
#define poolFinish(pool) ((pool)->start = (pool)->ptr)
#define poolAppendChar(pool, c) \
(((pool)->ptr == (pool)->end && !poolGrow(pool)) \
? 0 \
: ((*((pool)->ptr)++ = c), 1))
struct XML_ParserStruct ;
#define MALLOC(s) (parser->m_mem.malloc_fcn((s)))
#define REALLOC(p,s) (parser->m_mem.realloc_fcn((p),(s)))
#define FREE(p) (parser->m_mem.free_fcn((p)))
#define userData (parser->m_userData)
#define handlerArg (parser->m_handlerArg)
#define startElementHandler (parser->m_startElementHandler)
#define endElementHandler (parser->m_endElementHandler)
#define characterDataHandler (parser->m_characterDataHandler)
#define processingInstructionHandler \
(parser->m_processingInstructionHandler)
#define commentHandler (parser->m_commentHandler)
#define startCdataSectionHandler \
(parser->m_startCdataSectionHandler)
#define endCdataSectionHandler (parser->m_endCdataSectionHandler)
#define defaultHandler (parser->m_defaultHandler)
#define startDoctypeDeclHandler (parser->m_startDoctypeDeclHandler)
#define endDoctypeDeclHandler (parser->m_endDoctypeDeclHandler)
#define unparsedEntityDeclHandler \
(parser->m_unparsedEntityDeclHandler)
#define notationDeclHandler (parser->m_notationDeclHandler)
#define startNamespaceDeclHandler \
(parser->m_startNamespaceDeclHandler)
#define endNamespaceDeclHandler (parser->m_endNamespaceDeclHandler)
#define notStandaloneHandler (parser->m_notStandaloneHandler)
#define externalEntityRefHandler \
(parser->m_externalEntityRefHandler)
#define externalEntityRefHandlerArg \
(parser->m_externalEntityRefHandlerArg)
#define internalEntityRefHandler \
(parser->m_internalEntityRefHandler)
#define skippedEntityHandler (parser->m_skippedEntityHandler)
#define unknownEncodingHandler (parser->m_unknownEncodingHandler)
#define elementDeclHandler (parser->m_elementDeclHandler)
#define attlistDeclHandler (parser->m_attlistDeclHandler)
#define entityDeclHandler (parser->m_entityDeclHandler)
#define xmlDeclHandler (parser->m_xmlDeclHandler)
#define encoding (parser->m_encoding)
#define initEncoding (parser->m_initEncoding)
#define internalEncoding (parser->m_internalEncoding)
#define unknownEncodingMem (parser->m_unknownEncodingMem)
#define unknownEncodingData (parser->m_unknownEncodingData)
#define unknownEncodingHandlerData \
(parser->m_unknownEncodingHandlerData)
#define unknownEncodingRelease (parser->m_unknownEncodingRelease)
#define protocolEncodingName (parser->m_protocolEncodingName)
#define ns (parser->m_ns)
#define ns_triplets (parser->m_ns_triplets)
#define prologState (parser->m_prologState)
#define processor (parser->m_processor)
#define errorCode (parser->m_errorCode)
#define eventPtr (parser->m_eventPtr)
#define eventEndPtr (parser->m_eventEndPtr)
#define positionPtr (parser->m_positionPtr)
#define position (parser->m_position)
#define openInternalEntities (parser->m_openInternalEntities)
#define freeInternalEntities (parser->m_freeInternalEntities)
#define defaultExpandInternalEntities \
(parser->m_defaultExpandInternalEntities)
#define tagLevel (parser->m_tagLevel)
#define buffer (parser->m_buffer)
#define bufferPtr (parser->m_bufferPtr)
#define bufferEnd (parser->m_bufferEnd)
#define parseEndByteIndex (parser->m_parseEndByteIndex)
#define parseEndPtr (parser->m_parseEndPtr)
#define bufferLim (parser->m_bufferLim)
#define dataBuf (parser->m_dataBuf)
#define dataBufEnd (parser->m_dataBufEnd)
#define _dtd (parser->m_dtd)
#define curBase (parser->m_curBase)
#define declEntity (parser->m_declEntity)
#define doctypeName (parser->m_doctypeName)
#define doctypeSysid (parser->m_doctypeSysid)
#define doctypePubid (parser->m_doctypePubid)
#define declAttributeType (parser->m_declAttributeType)
#define declNotationName (parser->m_declNotationName)
#define declNotationPublicId (parser->m_declNotationPublicId)
#define declElementType (parser->m_declElementType)
#define declAttributeId (parser->m_declAttributeId)
#define declAttributeIsCdata (parser->m_declAttributeIsCdata)
#define declAttributeIsId (parser->m_declAttributeIsId)
#define freeTagList (parser->m_freeTagList)
#define freeBindingList (parser->m_freeBindingList)
#define inheritedBindings (parser->m_inheritedBindings)
#define tagStack (parser->m_tagStack)
#define atts (parser->m_atts)
#define attsSize (parser->m_attsSize)
#define nSpecifiedAtts (parser->m_nSpecifiedAtts)
#define idAttIndex (parser->m_idAttIndex)
#define nsAtts (parser->m_nsAtts)
#define nsAttsVersion (parser->m_nsAttsVersion)
#define nsAttsPower (parser->m_nsAttsPower)
#define attInfo (parser->m_attInfo)
#define tempPool (parser->m_tempPool)
#define temp2Pool (parser->m_temp2Pool)
#define groupConnector (parser->m_groupConnector)
#define groupSize (parser->m_groupSize)
#define namespaceSeparator (parser->m_namespaceSeparator)
#define parentParser (parser->m_parentParser)
#define ps_parsing (parser->m_parsingStatus.parsing)
#define ps_finalBuffer (parser->m_parsingStatus.finalBuffer)
#define isParamEntity (parser->m_isParamEntity)
#define useForeignDTD (parser->m_useForeignDTD)
#define paramEntityParsing (parser->m_paramEntityParsing)
#define hash_secret_salt (parser->m_hash_secret_salt)
XML_Parser XMLCALL
XML_ParserCreate(const XML_Char *encodingName)
XML_Parser XMLCALL
XML_ParserCreateNS(const XML_Char *encodingName, XML_Char nsSep)
static const XML_Char implicitContext[] = ;
static unsigned long
generate_hash_secret_salt(void)
static XML_Bool
startParsing(XML_Parser parser)
XML_Parser XMLCALL
XML_ParserCreate_MM(const XML_Char *encodingName,
const XML_Memory_Handling_Suite *memsuite,
const XML_Char *nameSep)
static XML_Parser
parserCreate(const XML_Char *encodingName,
const XML_Memory_Handling_Suite *memsuite,
const XML_Char *nameSep,
DTD *dtd)
static void
parserInit(XML_Parser parser, const XML_Char *encodingName)
static void FASTCALL
moveToFreeBindingList(XML_Parser parser, BINDING *bindings)
XML_Bool XMLCALL
XML_ParserReset(XML_Parser parser, const XML_Char *encodingName)
enum XML_Status XMLCALL
XML_SetEncoding(XML_Parser parser, const XML_Char *encodingName)
XML_Parser XMLCALL
XML_ExternalEntityParserCreate(XML_Parser oldParser,
const XML_Char *context,
const XML_Char *encodingName)
static void FASTCALL
destroyBindings(BINDING *bindings, XML_Parser parser)
void XMLCALL
XML_ParserFree(XML_Parser parser)
void XMLCALL
XML_UseParserAsHandlerArg(XML_Parser parser)
enum XML_Error XMLCALL
XML_UseForeignDTD(XML_Parser parser, XML_Bool useDTD)
void XMLCALL
XML_SetReturnNSTriplet(XML_Parser parser, int do_nst)
void XMLCALL
XML_SetUserData(XML_Parser parser, void *p)
enum XML_Status XMLCALL
XML_SetBase(XML_Parser parser, const XML_Char *p)
const XML_Char * XMLCALL
XML_GetBase(XML_Parser parser)
int XMLCALL
XML_GetSpecifiedAttributeCount(XML_Parser parser)
int XMLCALL
XML_GetIdAttributeIndex(XML_Parser parser)
const XML_AttrInfo * XMLCALL
XML_GetAttributeInfo(XML_Parser parser)
void XMLCALL
XML_SetElementHandler(XML_Parser parser,
XML_StartElementHandler start,
XML_EndElementHandler end)
void XMLCALL
XML_SetStartElementHandler(XML_Parser parser,
XML_StartElementHandler start)
void XMLCALL
XML_SetEndElementHandler(XML_Parser parser,
XML_EndElementHandler end)
void XMLCALL
XML_SetCharacterDataHandler(XML_Parser parser,
XML_CharacterDataHandler handler)
void XMLCALL
XML_SetProcessingInstructionHandler(XML_Parser parser,
XML_ProcessingInstructionHandler handler)
void XMLCALL
XML_SetCommentHandler(XML_Parser parser,
XML_CommentHandler handler)
void XMLCALL
XML_SetCdataSectionHandler(XML_Parser parser,
XML_StartCdataSectionHandler start,
XML_EndCdataSectionHandler end)
void XMLCALL
XML_SetStartCdataSectionHandler(XML_Parser parser,
XML_StartCdataSectionHandler start)
void XMLCALL
XML_SetEndCdataSectionHandler(XML_Parser parser,
XML_EndCdataSectionHandler end)
void XMLCALL
XML_SetDefaultHandler(XML_Parser parser,
XML_DefaultHandler handler)
void XMLCALL
XML_SetDefaultHandlerExpand(XML_Parser parser,
XML_DefaultHandler handler)
void XMLCALL
XML_SetDoctypeDeclHandler(XML_Parser parser,
XML_StartDoctypeDeclHandler start,
XML_EndDoctypeDeclHandler end)
void XMLCALL
XML_SetStartDoctypeDeclHandler(XML_Parser parser,
XML_StartDoctypeDeclHandler start)
void XMLCALL
XML_SetEndDoctypeDeclHandler(XML_Parser parser,
XML_EndDoctypeDeclHandler end)
void XMLCALL
XML_SetUnparsedEntityDeclHandler(XML_Parser parser,
XML_UnparsedEntityDeclHandler handler)
void XMLCALL
XML_SetNotationDeclHandler(XML_Parser parser,
XML_NotationDeclHandler handler)
void XMLCALL
XML_SetNamespaceDeclHandler(XML_Parser parser,
XML_StartNamespaceDeclHandler start,
XML_EndNamespaceDeclHandler end)
void XMLCALL
XML_SetStartNamespaceDeclHandler(XML_Parser parser,
XML_StartNamespaceDeclHandler start)
void XMLCALL
XML_SetEndNamespaceDeclHandler(XML_Parser parser,
XML_EndNamespaceDeclHandler end)
void XMLCALL
XML_SetNotStandaloneHandler(XML_Parser parser,
XML_NotStandaloneHandler handler)
void XMLCALL
XML_SetExternalEntityRefHandler(XML_Parser parser,
XML_ExternalEntityRefHandler handler)
void XMLCALL
XML_SetExternalEntityRefHandlerArg(XML_Parser parser, void *arg)
void XMLCALL
XML_SetSkippedEntityHandler(XML_Parser parser,
XML_SkippedEntityHandler handler)
void XMLCALL
XML_SetUnknownEncodingHandler(XML_Parser parser,
XML_UnknownEncodingHandler handler,
void *data)
void XMLCALL
XML_SetElementDeclHandler(XML_Parser parser,
XML_ElementDeclHandler eldecl)
void XMLCALL
XML_SetAttlistDeclHandler(XML_Parser parser,
XML_AttlistDeclHandler attdecl)
void XMLCALL
XML_SetEntityDeclHandler(XML_Parser parser,
XML_EntityDeclHandler handler)
void XMLCALL
XML_SetXmlDeclHandler(XML_Parser parser,
XML_XmlDeclHandler handler)
int XMLCALL
XML_SetParamEntityParsing(XML_Parser parser,
enum XML_ParamEntityParsing peParsing)
int XMLCALL
XML_SetHashSalt(XML_Parser parser,
unsigned long hash_salt)
enum XML_Status XMLCALL
XML_Parse(XML_Parser parser, const char *s, int len, int isFinal)
enum XML_Status XMLCALL
XML_ParseBuffer(XML_Parser parser, int len, int isFinal)
void * XMLCALL
XML_GetBuffer(XML_Parser parser, int len)
enum XML_Status XMLCALL
XML_StopParser(XML_Parser parser, XML_Bool resumable)
enum XML_Status XMLCALL
XML_ResumeParser(XML_Parser parser)
void XMLCALL
XML_GetParsingStatus(XML_Parser parser, XML_ParsingStatus *status)
enum XML_Error XMLCALL
XML_GetErrorCode(XML_Parser parser)
XML_Index XMLCALL
XML_GetCurrentByteIndex(XML_Parser parser)
int XMLCALL
XML_GetCurrentByteCount(XML_Parser parser)
const char * XMLCALL
XML_GetInputContext(XML_Parser parser, int *offset, int *size)
XML_Size XMLCALL
XML_GetCurrentLineNumber(XML_Parser parser)
XML_Size XMLCALL
XML_GetCurrentColumnNumber(XML_Parser parser)
void XMLCALL
XML_FreeContentModel(XML_Parser parser, XML_Content *model)
void * XMLCALL
XML_MemMalloc(XML_Parser parser, size_t size)
void * XMLCALL
XML_MemRealloc(XML_Parser parser, void *ptr, size_t size)
void XMLCALL
XML_MemFree(XML_Parser parser, void *ptr)
void XMLCALL
XML_DefaultCurrent(XML_Parser parser)
const XML_LChar * XMLCALL
XML_ErrorString(enum XML_Error code)
const XML_LChar * XMLCALL
XML_ExpatVersion(void)
XML_Expat_Version XMLCALL
XML_ExpatVersionInfo(void)
const XML_Feature * XMLCALL
XML_GetFeatureList(void)
static XML_Bool
storeRawNames(XML_Parser parser)
static enum XML_Error PTRCALL
contentProcessor(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr)
static enum XML_Error PTRCALL
externalEntityInitProcessor(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr)
static enum XML_Error PTRCALL
externalEntityInitProcessor2(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr)
static enum XML_Error PTRCALL
externalEntityInitProcessor3(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr)
static enum XML_Error PTRCALL
externalEntityContentProcessor(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr)
static enum XML_Error
doContent(XML_Parser parser,
int startTagLevel,
const ENCODING *enc,
const char *s,
const char *end,
const char **nextPtr,
XML_Bool haveMore)
static enum XML_Error
storeAtts(XML_Parser parser, const ENCODING *enc,
const char *attStr, TAG_NAME *tagNamePtr,
BINDING **bindingsPtr)
static enum XML_Error
addBinding(XML_Parser parser, PREFIX *prefix, const ATTRIBUTE_ID *attId,
const XML_Char *uri, BINDING **bindingsPtr)
static enum XML_Error PTRCALL
cdataSectionProcessor(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr)
static enum XML_Error
doCdataSection(XML_Parser parser,
const ENCODING *enc,
const char **startPtr,
const char *end,
const char **nextPtr,
XML_Bool haveMore)
static enum XML_Error PTRCALL
ignoreSectionProcessor(XML_Parser parser,
const char *start,
const char *end,
const char **endPtr)
static enum XML_Error
doIgnoreSection(XML_Parser parser,
const ENCODING *enc,
const char **startPtr,
const char *end,
const char **nextPtr,
XML_Bool haveMore)
static enum XML_Error
initializeEncoding(XML_Parser parser)
static enum XML_Error
processXmlDecl(XML_Parser parser, int isGeneralTextEntity,
const char *s, const char *next)
static enum XML_Error
handleUnknownEncoding(XML_Parser parser, const XML_Char *encodingName)
static enum XML_Error PTRCALL
prologInitProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error PTRCALL
externalParEntInitProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error PTRCALL
entityValueInitProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error PTRCALL
externalParEntProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error PTRCALL
entityValueProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error PTRCALL
prologProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error
doProlog(XML_Parser parser,
const ENCODING *enc,
const char *s,
const char *end,
int tok,
const char *next,
const char **nextPtr,
XML_Bool haveMore)
static enum XML_Error PTRCALL
epilogProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error
processInternalEntity(XML_Parser parser, ENTITY *entity,
XML_Bool betweenDecl)
static enum XML_Error PTRCALL
internalEntityProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error PTRCALL
errorProcessor(XML_Parser parser,
const char *s,
const char *end,
const char **nextPtr)
static enum XML_Error
storeAttributeValue(XML_Parser parser, const ENCODING *enc, XML_Bool isCdata,
const char *ptr, const char *end,
STRING_POOL *pool)
static enum XML_Error
appendAttributeValue(XML_Parser parser, const ENCODING *enc, XML_Bool isCdata,
const char *ptr, const char *end,
STRING_POOL *pool)
static enum XML_Error
storeEntityValue(XML_Parser parser,
const ENCODING *enc,
const char *entityTextPtr,
const char *entityTextEnd)
static void FASTCALL
normalizeLines(XML_Char *s)
static int
reportProcessingInstruction(XML_Parser parser, const ENCODING *enc,
const char *start, const char *end)
static int
reportComment(XML_Parser parser, const ENCODING *enc,
const char *start, const char *end)
static void
reportDefault(XML_Parser parser, const ENCODING *enc,
const char *s, const char *end)
static int
defineAttribute(ELEMENT_TYPE *type, ATTRIBUTE_ID *attId, XML_Bool isCdata,
XML_Bool isId, const XML_Char *value, XML_Parser parser)
static int
setElementTypePrefix(XML_Parser parser, ELEMENT_TYPE *elementType)
static ATTRIBUTE_ID *
getAttributeId(XML_Parser parser, const ENCODING *enc,
const char *start, const char *end)
#define CONTEXT_SEP XML_T(ASCII_FF)
static const XML_Char *
getContext(XML_Parser parser)
static XML_Bool
setContext(XML_Parser parser, const XML_Char *context)
static void FASTCALL
normalizePublicId(XML_Char *publicId)
static DTD *
dtdCreate(const XML_Memory_Handling_Suite *ms)
static void
dtdReset(DTD *p, const XML_Memory_Handling_Suite *ms)
static void
dtdDestroy(DTD *p, XML_Bool isDocEntity, const XML_Memory_Handling_Suite *ms)
static int
dtdCopy(XML_Parser oldParser, DTD *newDtd, const DTD *oldDtd, const XML_Memory_Handling_Suite *ms)
static int
copyEntityTable(XML_Parser oldParser,
HASH_TABLE *newTable,
STRING_POOL *newPool,
const HASH_TABLE *oldTable)
#define INIT_POWER 6
static XML_Bool FASTCALL
keyeq(KEY s1, KEY s2)
static unsigned long FASTCALL
hash(XML_Parser parser, KEY s)
static NAMED *
lookup(XML_Parser parser, HASH_TABLE *table, KEY name, size_t createSize)
static void FASTCALL
hashTableClear(HASH_TABLE *table)
static void FASTCALL
hashTableDestroy(HASH_TABLE *table)
static void FASTCALL
hashTableInit(HASH_TABLE *p, const XML_Memory_Handling_Suite *ms)
static void FASTCALL
hashTableIterInit(HASH_TABLE_ITER *iter, const HASH_TABLE *table)
static NAMED * FASTCALL
hashTableIterNext(HASH_TABLE_ITER *iter)
static void FASTCALL
poolInit(STRING_POOL *pool, const XML_Memory_Handling_Suite *ms)
static void FASTCALL
poolClear(STRING_POOL *pool)
static void FASTCALL
poolDestroy(STRING_POOL *pool)
static XML_Char *
poolAppend(STRING_POOL *pool, const ENCODING *enc,
const char *ptr, const char *end)
static const XML_Char * FASTCALL
poolCopyString(STRING_POOL *pool, const XML_Char *s)
static const XML_Char *
poolCopyStringN(STRING_POOL *pool, const XML_Char *s, int n)
static const XML_Char * FASTCALL
poolAppendString(STRING_POOL *pool, const XML_Char *s)
static XML_Char *
poolStoreString(STRING_POOL *pool, const ENCODING *enc,
const char *ptr, const char *end)
static XML_Bool FASTCALL
poolGrow(STRING_POOL *pool)
static int FASTCALL
nextScaffoldPart(XML_Parser parser)
static void
build_node(XML_Parser parser,
int src_node,
XML_Content *dest,
XML_Content **contpos,
XML_Char **strpos)
static XML_Content *
build_model (XML_Parser parser)
static ELEMENT_TYPE *
getElementType(XML_Parser parser,
const ENCODING *enc,
const char *ptr,
const char *end)
