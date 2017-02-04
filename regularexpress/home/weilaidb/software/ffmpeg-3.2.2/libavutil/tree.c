typedef struct AVTreeNode  AVTreeNode;
const int av_tree_node_size = sizeof(AVTreeNode);
*av_tree_node_alloc
*av_tree_find(const void *key, const void *b), void *next[2])
*av_tree_insert(const void *key, const void *b), AVTreeNode **next)
av_tree_destroy
av_tree_enumerate(void *opaque, void *elem),
int (*enu)(void *opaque, void *elem))
