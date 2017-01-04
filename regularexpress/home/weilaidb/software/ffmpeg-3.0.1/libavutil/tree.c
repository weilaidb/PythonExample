typedef struct AVTreeNode  AVTreeNode;
const int av_tree_node_size = sizeof(AVTreeNode);
struct AVTreeNode *av_tree_node_alloc(void)
void *av_tree_find(const AVTreeNode *t, void *key,
int (*cmp)(const void *key, const void *b), void *next[2])
void *av_tree_insert(AVTreeNode **tp, void *key,
int (*cmp)(const void *key, const void *b), AVTreeNode **next)
void av_tree_destroy(AVTreeNode *t)
void av_tree_enumerate(AVTreeNode *t, void *opaque,
int (*cmp)(void *opaque, void *elem),
int (*enu)(void *opaque, void *elem))
static int check(AVTreeNode *t)
static void print(AVTreeNode *t, int depth)
static int cmp(const void *a, const void *b)
int main(int argc, char **argv)
