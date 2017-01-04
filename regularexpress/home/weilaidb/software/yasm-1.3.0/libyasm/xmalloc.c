#undef yasm_xmalloc
#undef yasm_xcalloc
#undef yasm_xrealloc
#undef yasm_xfree
static void *def_xmalloc(size_t size);
static void *def_xcalloc(size_t nelem, size_t elsize);
static void *def_xrealloc
( void *oldmem, size_t size);
static void def_xfree( void *p);
YASM_LIB_DECL void * (*yasm_xmalloc) (size_t size) = def_xmalloc;
YASM_LIB_DECL void * (*yasm_xcalloc) (size_t nelem, size_t elsize) = def_xcalloc;
YASM_LIB_DECL void * (*yasm_xrealloc)
( void *oldmem, size_t size) = def_xrealloc;
YASM_LIB_DECL
void (*yasm_xfree) ( void *p) = def_xfree;
static void *
def_xmalloc(size_t size)
static void *
def_xcalloc(size_t nelem, size_t elsize)
static void *
def_xrealloc(void *oldmem, size_t size)
static void
def_xfree(void *p)
