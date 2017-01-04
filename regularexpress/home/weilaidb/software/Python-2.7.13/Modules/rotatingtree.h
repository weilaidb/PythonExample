#define EMPTY_ROTATING_TREE       ((rotating_node_t *)NULL)
typedef struct rotating_node_s rotating_node_t;
typedef int (*rotating_tree_enum_fn) (rotating_node_t *node, void *arg);
struct rotating_node_s ;
void RotatingTree_Add(rotating_node_t **root, rotating_node_t *node);
rotating_node_t* RotatingTree_Get(rotating_node_t **root, void *key);
int RotatingTree_Enum(rotating_node_t *root, rotating_tree_enum_fn enumfn,
void *arg);
