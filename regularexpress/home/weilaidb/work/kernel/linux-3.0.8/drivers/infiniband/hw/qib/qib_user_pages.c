static void __qib_release_user_pages(struct page **p, size_t num_pages,
int dirty)
static int __qib_get_user_pages(unsigned long start_page, size_t num_pages,
struct page **p, struct vm_area_struct **vma)
dma_addr_t qib_map_page(struct pci_dev *hwdev, struct page *page,
unsigned long offset, size_t size, int direction)
int qib_get_user_pages(unsigned long start_page, size_t num_pages,
struct page **p)
void qib_release_user_pages(struct page **p, size_t num_pages)
