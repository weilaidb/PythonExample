#define MODULE_NAME "ccio"
#define U2_IOA_RUNWAY 0x580
#define U2_BC_GSC     0x501
#define UTURN_IOA_RUNWAY 0x581
#define UTURN_BC_GSC     0x502
#define IS_U2(id) ( \
(((id)->hw_type == HPHW_IOA) && ((id)->hversion == U2_IOA_RUNWAY)) || \
(((id)->hw_type == HPHW_BCPORT) && ((id)->hversion == U2_BC_GSC))  \
)
#define IS_UTURN(id) ( \
(((id)->hw_type == HPHW_IOA) && ((id)->hversion == UTURN_IOA_RUNWAY)) || \
(((id)->hw_type == HPHW_BCPORT) && ((id)->hversion == UTURN_BC_GSC))  \
)
static int ccio_dma_supported( struct pci_dev *dev, u64 mask)
static void *ccio_alloc_consistent(struct pci_dev *dev, size_t size,
dma_addr_t *handle)
static void ccio_free_consistent(struct pci_dev *dev, size_t size,
void *vaddr, dma_addr_t handle)
static dma_addr_t ccio_map_single(struct pci_dev *dev, void *ptr, size_t size,
int direction)
static void ccio_unmap_single(struct pci_dev *dev, dma_addr_t dma_addr,
size_t size, int direction)
static int ccio_map_sg(struct pci_dev *dev, struct scatterlist *sglist, int nents, int direction)
static void ccio_unmap_sg(struct pci_dev *dev, struct scatterlist *sglist, int nents, int direction)
static struct pci_dma_ops ccio_ops = ;
static int
ccio_probe(struct parisc_device *dev)
static struct parisc_device_id ccio_tbl[] = ;
static struct parisc_driver ccio_driver = ;
void __init ccio_init(void)
