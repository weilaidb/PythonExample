#define KEY_LOWER_THAN(key1, key2)  ((char*)(key1) < (char*)(key2))
static unsigned int random_value = 1;
static unsigned int random_stream = 0;
static int
randombits(int bits)
void
RotatingTree_Add(rotating_node_t **root, rotating_node_t *node)
rotating_node_t *
RotatingTree_Get(rotating_node_t **root, void *key)
int
RotatingTree_Enum(rotating_node_t *root, rotating_tree_enum_fn enumfn,
void *arg)
