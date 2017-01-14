#  include
struct internal_state      ;
z_const char * const z_errmsg[10] = ;
const char * ZEXPORT zlibVersion()
uLong ZEXPORT zlibCompileFlags()
#  ifndef verbose
#    define verbose 0
#  endif
int ZLIB_INTERNAL z_verbose = verbose;
void ZLIB_INTERNAL z_error (m)
char *m;
const char * ZEXPORT zError(err)
int err;
#if defined(_WIN32_WCE)
int errno = 0;
void ZLIB_INTERNAL zmemcpy(dest, source, len)
Bytef* dest;
const Bytef* source;
uInt  len;
int ZLIB_INTERNAL zmemcmp(s1, s2, len)
const Bytef* s1;
const Bytef* s2;
uInt  len;
void ZLIB_INTERNAL zmemzero(dest, len)
Bytef* dest;
uInt  len;
#  define MY_ZCALLOC
#define MAX_PTR 10
local int next_ptr = 0;
typedef struct ptr_table_s  ptr_table;
local ptr_table table[MAX_PTR];
voidpf ZLIB_INTERNAL zcalloc (voidpf opaque, unsigned items, unsigned size)
void ZLIB_INTERNAL zcfree (voidpf opaque, voidpf ptr)
#  define MY_ZCALLOC
#if (!defined(_MSC_VER) || (_MSC_VER <= 600))
#  define _halloc  halloc
#  define _hfree   hfree
voidpf ZLIB_INTERNAL zcalloc (voidpf opaque, uInt items, uInt size)
void ZLIB_INTERNAL zcfree (voidpf opaque, voidpf ptr)
extern voidp  malloc OF((uInt size));
extern voidp  calloc OF((uInt items, uInt size));
extern void   free   OF((voidpf ptr));
voidpf ZLIB_INTERNAL zcalloc (opaque, items, size)
voidpf opaque;
unsigned items;
unsigned size;
void ZLIB_INTERNAL zcfree (opaque, ptr)
voidpf opaque;
voidpf ptr;
