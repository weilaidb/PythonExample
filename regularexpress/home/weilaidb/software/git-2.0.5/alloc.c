#define BLOCKING 1024
union any_object ;
struct alloc_state ;
static inline void *alloc_node(struct alloc_state *s, size_t node_size)
static struct alloc_state blob_state;
void *alloc_blob_node(void)
static struct alloc_state tree_state;
void *alloc_tree_node(void)
static struct alloc_state tag_state;
void *alloc_tag_node(void)
static struct alloc_state object_state;
void *alloc_object_node(void)
static struct alloc_state commit_state;
unsigned int alloc_commit_index(void)
void *alloc_commit_node(void)
static void report(const char *name, unsigned int count, size_t size)
#define REPORT(name, type)	\
report(#name, name##_state.count, name##_state.count * sizeof(type) >> 10)
void alloc_report(void)
