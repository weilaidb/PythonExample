#elif defined(MACOS_CLASSIC)
#elif defined(__amigaos__)
#elif defined(__WATCOMC__)
static const char KW_ANY[] = ;
static const char KW_ATTLIST[] = ;
static const char KW_CDATA[] = ;
static const char KW_DOCTYPE[] = ;
static const char KW_ELEMENT[] = ;
static const char KW_EMPTY[] = ;
static const char KW_ENTITIES[] = ;
static const char KW_ENTITY[] = ;
static const char KW_FIXED[] = ;
static const char KW_ID[] = ;
static const char KW_IDREF[] = ;
static const char KW_IDREFS[] = ;
static const char KW_IGNORE[] = ;
static const char KW_IMPLIED[] = ;
static const char KW_INCLUDE[] = ;
static const char KW_NDATA[] = ;
static const char KW_NMTOKEN[] = ;
static const char KW_NMTOKENS[] = ;
static const char KW_NOTATION[] =
;
static const char KW_PCDATA[] = ;
static const char KW_PUBLIC[] = ;
static const char KW_REQUIRED[] = ;
static const char KW_SYSTEM[] = ;
#define MIN_BYTES_PER_CHAR(enc) ((enc)->minBytesPerChar)
#define setTopLevel(state) \
((state)->handler = ((state)->documentEntity \
? internalSubset \
: externalSubset1))
#define setTopLevel(state) ((state)->handler = internalSubset)
typedef int PTRCALL PROLOG_HANDLER(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc);
static PROLOG_HANDLER
prolog0, prolog1, prolog2,
doctype0, doctype1, doctype2, doctype3, doctype4, doctype5,
internalSubset,
entity0, entity1, entity2, entity3, entity4, entity5, entity6,
entity7, entity8, entity9, entity10,
notation0, notation1, notation2, notation3, notation4,
attlist0, attlist1, attlist2, attlist3, attlist4, attlist5, attlist6,
attlist7, attlist8, attlist9,
element0, element1, element2, element3, element4, element5, element6,
element7,
externalSubset0, externalSubset1,
condSect0, condSect1, condSect2,
declClose,
error;
static int FASTCALL common(PROLOG_STATE *state, int tok);
static int PTRCALL
prolog0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
prolog1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
prolog2(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
doctype0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
doctype1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
doctype2(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
doctype3(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
doctype4(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
doctype5(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
internalSubset(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
externalSubset0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
externalSubset1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity2(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity3(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity4(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity5(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity6(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity7(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity8(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity9(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
entity10(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
notation0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
notation1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
notation2(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
notation3(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
notation4(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist2(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist3(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist4(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist5(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist6(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist7(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist8(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
attlist9(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element2(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element3(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element4(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element5(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element6(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
element7(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
condSect0(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
condSect1(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
condSect2(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
declClose(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int PTRCALL
error(PROLOG_STATE *state,
int tok,
const char *ptr,
const char *end,
const ENCODING *enc)
static int FASTCALL
common(PROLOG_STATE *state, int tok)
void
XmlPrologStateInit(PROLOG_STATE *state)
void
XmlPrologStateInitExternalEntity(PROLOG_STATE *state)
