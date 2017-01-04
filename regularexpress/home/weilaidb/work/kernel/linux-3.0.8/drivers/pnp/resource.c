static int pnp_reserve_irq[16] = ;
static int pnp_reserve_dma[8] = ;
static int pnp_reserve_io[16] = ;
static int pnp_reserve_mem[16] = ;
struct pnp_option *pnp_build_option(struct pnp_dev *dev, unsigned long type,
unsigned int option_flags)
int pnp_register_irq_resource(struct pnp_dev *dev, unsigned int option_flags,
pnp_irq_mask_t *map, unsigned char flags)
int pnp_register_dma_resource(struct pnp_dev *dev, unsigned int option_flags,
unsigned char map, unsigned char flags)
int pnp_register_port_resource(struct pnp_dev *dev, unsigned int option_flags,
resource_size_t min, resource_size_t max,
resource_size_t align, resource_size_t size,
unsigned char flags)
int pnp_register_mem_resource(struct pnp_dev *dev, unsigned int option_flags,
resource_size_t min, resource_size_t max,
resource_size_t align, resource_size_t size,
unsigned char flags)
void pnp_free_options(struct pnp_dev *dev)
#define length(start, end) (*(end) - *(start) + 1)
#define ranged_conflict(starta, enda, startb, endb) \
!((*(enda) < *(startb)) || (*(endb) < *(starta)))
#define cannot_compare(flags) \
((flags) & IORESOURCE_DISABLED)
int pnp_check_port(struct pnp_dev *dev, struct resource *res)
int pnp_check_mem(struct pnp_dev *dev, struct resource *res)
static irqreturn_t pnp_test_handler(int irq, void *dev_id)
static int pci_dev_uses_irq(struct pnp_dev *pnp, struct pci_dev *pci,
unsigned int irq)
static int pci_uses_irq(struct pnp_dev *pnp, unsigned int irq)
int pnp_check_irq(struct pnp_dev *dev, struct resource *res)
int pnp_check_dma(struct pnp_dev *dev, struct resource *res)
unsigned long pnp_resource_type(struct resource *res)
struct resource *pnp_get_resource(struct pnp_dev *dev,
unsigned long type, unsigned int num)
EXPORT_SYMBOL(pnp_get_resource);
static struct pnp_resource *pnp_new_resource(struct pnp_dev *dev)
struct pnp_resource *pnp_add_irq_resource(struct pnp_dev *dev, int irq,
int flags)
struct pnp_resource *pnp_add_dma_resource(struct pnp_dev *dev, int dma,
int flags)
struct pnp_resource *pnp_add_io_resource(struct pnp_dev *dev,
resource_size_t start,
resource_size_t end, int flags)
struct pnp_resource *pnp_add_mem_resource(struct pnp_dev *dev,
resource_size_t start,
resource_size_t end, int flags)
struct pnp_resource *pnp_add_bus_resource(struct pnp_dev *dev,
resource_size_t start,
resource_size_t end)
int pnp_possible_config(struct pnp_dev *dev, int type, resource_size_t start,
resource_size_t size)
EXPORT_SYMBOL(pnp_possible_config);
int pnp_range_reserved(resource_size_t start, resource_size_t end)
EXPORT_SYMBOL(pnp_range_reserved);
static int __init pnp_setup_reserve_irq(char *str)
__setup("pnp_reserve_irq=", pnp_setup_reserve_irq);
static int __init pnp_setup_reserve_dma(char *str)
__setup("pnp_reserve_dma=", pnp_setup_reserve_dma);
static int __init pnp_setup_reserve_io(char *str)
__setup("pnp_reserve_io=", pnp_setup_reserve_io);
static int __init pnp_setup_reserve_mem(char *str)
__setup("pnp_reserve_mem=", pnp_setup_reserve_mem);
