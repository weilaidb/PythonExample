#define IB_UMEM_MAX_PAGE_CHUNK						\
((PAGE_SIZE - offsetof(struct ib_umem_chunk, page_list)) /	\
((void *) &((struct ib_umem_chunk *) 0)->page_list[1] -	\
(void *) &((struct ib_umem_chunk *) 0)->page_list[0]))
static void __ib_umem_release(struct ib_device *dev, struct ib_umem *umem, int dirty)
struct ib_umem *ib_umem_get(struct ib_ucontext *context, unsigned long addr,
size_t size, int access, int dmasync)
EXPORT_SYMBOL(ib_umem_get);
static void ib_umem_account(struct work_struct *work)
void ib_umem_release(struct ib_umem *umem)
EXPORT_SYMBOL(ib_umem_release);
int ib_umem_page_count(struct ib_umem *umem)
EXPORT_SYMBOL(ib_umem_page_count);
