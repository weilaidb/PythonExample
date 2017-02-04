struct HAMTEntry ;
typedef struct HAMTNode  HAMTNode;
struct HAMT ;
IsSubTrie            ((n)->BaseValue & 1)
SetSubTrie     do  while (0)
SetValue       do  while (0)
GetSubTrie           (HAMTNode *)(((n)->BaseValue | 1) ^ 1)
HashKey
ReHashKey
HashKey_nocase
ReHashKey_nocase
HAMT_create
(const char *file, unsigned int line, const char *message))
HAMT_delete_trie
HAMT_destroy ( void *data))
HAMT_traverse ( void *node, void *d))
HAMT_first
HAMT_next
HAMTEntry_get_data
HAMT_insert ( void *data))
HAMT_search
