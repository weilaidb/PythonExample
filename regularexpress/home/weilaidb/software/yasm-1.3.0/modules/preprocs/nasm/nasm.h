#define YASM_NASM_H
#define NULL 0
#define FALSE 0
#define TRUE 1
#define FILENAME_MAX 256
#define PREFIX_MAX 10
#define POSTFIX_MAX 10
#define IDLEN_MAX 4096
typedef void (*efunc) (int severity, const char *fmt, ...);
#define ERR_DEBUG       0x00000008
#define ERR_WARNING     0x00000000
#define ERR_NONFATAL    0x00000001
#define ERR_FATAL       0x00000002
#define ERR_PANIC       0x00000003
#define ERR_MASK        0x0000000F
#define ERR_NOFILE      0x00000010
#define ERR_USAGE       0x00000020
#define ERR_PASS1       0x00000040
#define ERR_WARN_MASK   0x0000FF00
#define ERR_WARN_SHR  8
#define ERR_WARN_MNP    0x00000100
#define ERR_WARN_MSR    0x00000200
#define ERR_WARN_OL     0x00000300
#define ERR_WARN_NOV    0x00000400
#define ERR_WARN_GNUELF 0x00000500
#define ERR_WARN_MAX    5
typedef struct  ListGen;
struct tokenval ;
typedef int (*scanner) (void *private_data, struct tokenval *tv);
enum ;
#define CRITICAL 0x100
* (scanner sc, void *scprivate, struct tokenval *tv,
int critical, efunc error);
typedef struct  Preproc;
isidstart ( isalpha(c) || (c)=='_' || (c)=='.' || (c)=='?' \
|| (c)=='@' )
isidchar  ( isidstart(c) || isdigit(c) || (c)=='$' || (c)=='#' \
|| (c)=='~' )
isnumstart  ( isdigit(c) || (c)=='$' )
isnumchar   ( isalnum(c) )
numvalue  ((c)>='a' ? (c)-'a'+10 : (c)>='A' ? (c)-'A'+10 : (c)-'0')
enum ;
elements     ( sizeof(x) / sizeof(*(x)) )
extern int tasm_compatible_mode;
extern int tasm_locals;
extern const char *tasm_segment;
*tasm_get_segment_register;
