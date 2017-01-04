node *
PyNode_New(int type)
static int
fancy_roundup(int n)
#define XXXROUNDUP(n) ((n) <= 1 ? (n) :                 \
(n) <= 128 ? (((n) + 3) & ~3) :          \
fancy_roundup(n))
int
PyNode_AddChild(register node *n1, int type, char *str, int lineno, int col_offset)
static void freechildren(node *);
static Py_ssize_t sizeofchildren(node *n);
void
PyNode_Free(node *n)
Py_ssize_t
_PyNode_SizeOf(node *n)
static void
freechildren(node *n)
static Py_ssize_t
sizeofchildren(node *n)
