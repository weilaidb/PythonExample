#define _CRT_SECURE_NO_DEPRECATE
#define NO_SHLWAPI_GDI
#define NO_SHLWAPI_STREAM
#define NO_SHLWAPI_REG
#if defined(_M_IA64) || defined(_M_AMD64)
#if _MSC_VER >= 1400 && _MSC_VER < 1500
#define   snprintf	_snprintf
static int CheckForCompilerFeature(const char *option);
static int CheckForLinkerFeature(const char *option);
static int IsIn(const char *string, const char *substring);
static int SubstituteFile(const char *substs, const char *filename);
static int QualifyPath(const char *path);
static const char *GetVersionFromFile(const char *filename, const char *match);
static DWORD WINAPI ReadFromPipe(LPVOID args);
#define CHUNK	25
#define STATICBUFFERSIZE    1000
typedef struct  pipeinfo;
pipeinfo Out = ;
pipeinfo Err = ;
int
main(
int argc,
char *argv[])
static int
CheckForCompilerFeature(
const char *option)
static int
CheckForLinkerFeature(
const char *option)
static DWORD WINAPI
ReadFromPipe(
LPVOID args)
static int
IsIn(
const char *string,
const char *substring)
static const char *
GetVersionFromFile(
const char *filename,
const char *match)
typedef struct list_item_t  list_item_t;
static list_item_t *
list_insert(list_item_t **listPtrPtr, const char *key, const char *value)
static void
list_free(list_item_t **listPtrPtr)
static int
SubstituteFile(
const char *substitutions,
const char *filename)
static int
QualifyPath(
const char *szPath)
