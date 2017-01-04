#define IB_UMEM_H
struct ib_ucontext;
struct ib_umem ;
struct ib_umem_chunk ;
struct ib_umem *ib_umem_get(struct ib_ucontext *context, unsigned long addr,
size_t size, int access, int dmasync);
void ib_umem_release(struct ib_umem *umem);
int ib_umem_page_count(struct ib_umem *umem);
static inline struct ib_umem *ib_umem_get(struct ib_ucontext *context,
unsigned long addr, size_t size,
int access, int dmasync)
static inline void ib_umem_release(struct ib_umem *umem)
static inline int ib_umem_page_count(struct ib_umem *umem)
