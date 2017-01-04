u32 mthca_alloc(struct mthca_alloc *alloc)
void mthca_free(struct mthca_alloc *alloc, u32 obj)
int mthca_alloc_init(struct mthca_alloc *alloc, u32 num, u32 mask,
u32 reserved)
void mthca_alloc_cleanup(struct mthca_alloc *alloc)
#define MTHCA_ARRAY_MASK (PAGE_SIZE / sizeof (void *) - 1)
void *mthca_array_get(struct mthca_array *array, int index)
int mthca_array_set(struct mthca_array *array, int index, void *value)
void mthca_array_clear(struct mthca_array *array, int index)
int mthca_array_init(struct mthca_array *array, int nent)
void mthca_array_cleanup(struct mthca_array *array, int nent)
int mthca_buf_alloc(struct mthca_dev *dev, int size, int max_direct,
union mthca_buf *buf, int *is_direct, struct mthca_pd *pd,
int hca_write, struct mthca_mr *mr)
void mthca_buf_free(struct mthca_dev *dev, int size, union mthca_buf *buf,
int is_direct, struct mthca_mr *mr)
