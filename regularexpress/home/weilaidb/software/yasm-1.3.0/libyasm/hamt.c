struct HAMTEntry ;
typedef struct HAMTNode  HAMTNode;
struct HAMT ;
#define IsSubTrie(n)            ((n)->BaseValue & 1)
#define SetSubTrie(h, n, v)     do  while (0)
#define SetValue(h, n, v)       do  while (0)
#define GetSubTrie(n)           (HAMTNode *)(((n)->BaseValue | 1) ^ 1)
static unsigned long
HashKey(const char *key)
static unsigned long
ReHashKey(const char *key, int Level)
static unsigned long
HashKey_nocase(const char *key)
static unsigned long
ReHashKey_nocase(const char *key, int Level)
HAMT *
HAMT_create(int nocase, void (*error_func)
(const char *file, unsigned int line, const char *message))
static void
HAMT_delete_trie(HAMTNode *node)
void
HAMT_destroy(HAMT *hamt, void (*deletefunc) ( void *data))
int
HAMT_traverse(HAMT *hamt, void *d,
int (*func) ( void *node, void *d))
const HAMTEntry *
HAMT_first(const HAMT *hamt)
const HAMTEntry *
HAMT_next(const HAMTEntry *prev)
void *
HAMTEntry_get_data(const HAMTEntry *entry)
void *
HAMT_insert(HAMT *hamt, const char *str, void *data, int *replace,
void (*deletefunc) ( void *data))
void *
HAMT_search(HAMT *hamt, const char *str)
