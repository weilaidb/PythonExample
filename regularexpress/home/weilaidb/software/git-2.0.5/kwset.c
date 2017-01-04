#define NCHAR (UCHAR_MAX + 1)
#define obstack_chunk_alloc xmalloc
#define obstack_chunk_free free
#define U(c) ((unsigned char) (c))
struct tree
;
struct trie
;
struct kwset
;
kwset_t
kwsalloc (char const *trans)
#define DEPTH_SIZE (CHAR_BIT + CHAR_BIT/2)
const char *
kwsincr (kwset_t kws, char const *text, size_t len)
static void
enqueue (struct tree *tree, struct trie **last)
static void
treefails (register struct tree const *tree, struct trie const *fail,
struct trie *recourse)
static void
treedelta (register struct tree const *tree,
register unsigned int depth,
unsigned char delta[])
static int
hasevery (register struct tree const *a, register struct tree const *b)
static void
treenext (struct tree const *tree, struct trie *next[])
const char *
kwsprep (kwset_t kws)
static size_t
bmexec (kwset_t kws, char const *text, size_t size)
static size_t
cwexec (kwset_t kws, char const *text, size_t len, struct kwsmatch *kwsmatch)
size_t
kwsexec (kwset_t kws, char const *text, size_t size,
struct kwsmatch *kwsmatch)
void
kwsfree (kwset_t kws)
