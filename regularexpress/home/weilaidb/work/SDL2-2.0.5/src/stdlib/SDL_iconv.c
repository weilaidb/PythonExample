#if defined(__clang_analyzer__) && !defined(SDL_DISABLE_ANALYZE_MACROS)
#define SDL_DISABLE_ANALYZE_MACROS 1
#if defined(HAVE_ICONV) && defined(HAVE_ICONV_H)
#if defined(_XGP6) || defined(__APPLE__) || \
(defined(__GLIBC__) && ((__GLIBC__ > 2) || (__GLIBC__ == 2 && __GLIBC_MINOR__ >= 2)) || \
(defined(_NEWLIB_VERSION)))
#define ICONV_INBUF_NONCONST
SDL_COMPILE_TIME_ASSERT(iconv_t, sizeof (iconv_t) <= sizeof (SDL_iconv_t));
SDL_iconv_t
SDL_iconv_open(const char *tocode, const char *fromcode)
int
SDL_iconv_close(SDL_iconv_t cd)
size_t
SDL_iconv(SDL_iconv_t cd,
const char **inbuf, size_t * inbytesleft,
char **outbuf, size_t * outbytesleft)
#define UNICODE_BOM	0xFEFF
#define UNKNOWN_ASCII	'?'
#define UNKNOWN_UNICODE	0xFFFD
enum
;
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
#define ENCODING_UTF16NATIVE	ENCODING_UTF16BE
#define ENCODING_UTF32NATIVE	ENCODING_UTF32BE
#define ENCODING_UCS2NATIVE     ENCODING_UCS2BE
#define ENCODING_UCS4NATIVE     ENCODING_UCS4BE
#define ENCODING_UTF16NATIVE	ENCODING_UTF16LE
#define ENCODING_UTF32NATIVE	ENCODING_UTF32LE
#define ENCODING_UCS2NATIVE     ENCODING_UCS2LE
#define ENCODING_UCS4NATIVE     ENCODING_UCS4LE
struct _SDL_iconv_t
;
static struct
encodings[] = ;
static const char *
getlocale(char *buffer, size_t bufsize)
SDL_iconv_t
SDL_iconv_open(const char *tocode, const char *fromcode)
size_t
SDL_iconv(SDL_iconv_t cd,
const char **inbuf, size_t * inbytesleft,
char **outbuf, size_t * outbytesleft)
int
SDL_iconv_close(SDL_iconv_t cd)
char *
SDL_iconv_string(const char *tocode, const char *fromcode, const char *inbuf,
size_t inbytesleft)
