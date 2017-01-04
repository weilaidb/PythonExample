static inline void
region_put(struct nouveau_mm *rmm, struct nouveau_mm_node *a)
static struct nouveau_mm_node *
region_split(struct nouveau_mm *rmm, struct nouveau_mm_node *a, u32 size)
#define node(root, dir) ((root)->nl_entry.dir == &rmm->nodes) ? NULL : \
list_entry((root)->nl_entry.dir, struct nouveau_mm_node, nl_entry)
void
nouveau_mm_put(struct nouveau_mm *rmm, struct nouveau_mm_node *this)
int
nouveau_mm_get(struct nouveau_mm *rmm, int type, u32 size, u32 size_nc,
u32 align, struct nouveau_mm_node **pnode)
int
nouveau_mm_init(struct nouveau_mm **prmm, u32 offset, u32 length, u32 block)
int
nouveau_mm_fini(struct nouveau_mm **prmm)
