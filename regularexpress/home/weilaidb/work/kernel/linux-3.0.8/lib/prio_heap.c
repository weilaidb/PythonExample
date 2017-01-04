int heap_init(struct ptr_heap *heap, size_t size, gfp_t gfp_mask,
int (*gt)(void *, void *))
void heap_free(struct ptr_heap *heap)
void *heap_insert(struct ptr_heap *heap, void *p)
