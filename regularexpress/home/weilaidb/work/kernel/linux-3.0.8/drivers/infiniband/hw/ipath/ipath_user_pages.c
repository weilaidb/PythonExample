static void __ipath_release_user_pages(struct page **p, size_t num_pages,
int dirty)
static int __ipath_get_user_pages(unsigned long start_page, size_t num_pages,
struct page **p, struct vm_area_struct **vma)
dma_addr_t ipath_map_page(struct pci_dev *hwdev, struct page *page,
unsigned long offset, size_t size, int direction)
dma_addr_t ipath_map_single(struct pci_dev *hwdev, void *ptr, size_t size,
int direction)
int ipath_get_user_pages(unsigned long start_page, size_t num_pages,
struct page **p)
void ipath_release_user_pages(struct page **p, size_t num_pages)
struct ipath_user_pages_work ;
static void user_pages_account(struct work_struct *_work)
void ipath_release_user_pages_on_close(struct page **p, size_t num_pages)
