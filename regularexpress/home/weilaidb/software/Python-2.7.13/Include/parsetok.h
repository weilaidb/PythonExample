#define Py_PARSETOK_H
typedef struct  perrdetail;
#define PyPARSE_DONT_IMPLY_DEDENT	0x0002
#define PyPARSE_PRINT_IS_FUNCTION       0x0004
#define PyPARSE_UNICODE_LITERALS        0x0008
PyAPI_FUNC(node *) PyParser_ParseString(const char *, grammar *, int,
perrdetail *);
PyAPI_FUNC(node *) PyParser_ParseFile (FILE *, const char *, grammar *, int,
char *, char *, perrdetail *);
PyAPI_FUNC(node *) PyParser_ParseStringFlags(const char *, grammar *, int,
perrdetail *, int);
PyAPI_FUNC(node *) PyParser_ParseFileFlags(FILE *, const char *, grammar *,
int, char *, char *,
perrdetail *, int);
PyAPI_FUNC(node *) PyParser_ParseFileFlagsEx(FILE *, const char *, grammar *,
int, char *, char *,
perrdetail *, int *);
PyAPI_FUNC(node *) PyParser_ParseStringFlagsFilename(const char *,
const char *,
grammar *, int,
perrdetail *, int);
PyAPI_FUNC(node *) PyParser_ParseStringFlagsFilenameEx(const char *,
const char *,
grammar *, int,
perrdetail *, int *);
PyAPI_FUNC(void) PyParser_SetError(perrdetail *);
