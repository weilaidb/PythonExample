#define DEFAULT_BLOCK_SIZE 8192
#define ALIGNMENT               8
#define ALIGNMENT_MASK          (ALIGNMENT - 1)
#define ROUNDUP(x)              (((x) + ALIGNMENT_MASK) & ~ALIGNMENT_MASK)
typedef struct _block  block;
struct _arena ;
static block *
block_new(size_t size)
static void
block_free(block *b)
static void *
block_alloc(block *b, size_t size)
PyArena *
PyArena_New()
void
PyArena_Free(PyArena *arena)
void *
PyArena_Malloc(PyArena *arena, size_t size)
int
PyArena_AddPyObject(PyArena *arena, PyObject *obj)
