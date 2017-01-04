#define ACPI_PFX "ACPI: "
static LIST_HEAD(acpi_iomaps);
static DEFINE_SPINLOCK(acpi_iomaps_lock);
struct acpi_iomap ;
static struct acpi_iomap *__acpi_find_iomap(phys_addr_t paddr,
unsigned long size)
static void __iomem *__acpi_ioremap_fast(phys_addr_t paddr,
unsigned long size)
static void __iomem *__acpi_try_ioremap(phys_addr_t paddr,
unsigned long size)
static void __iomem *acpi_pre_map(phys_addr_t paddr,
unsigned long size)
static void __acpi_kref_del_iomap(struct kref *ref)
static void acpi_post_unmap(phys_addr_t paddr, unsigned long size)
static int acpi_check_gar(struct acpi_generic_address *reg,
u64 *paddr, int silent)
int acpi_pre_map_gar(struct acpi_generic_address *reg)
EXPORT_SYMBOL_GPL(acpi_pre_map_gar);
int acpi_post_unmap_gar(struct acpi_generic_address *reg)
EXPORT_SYMBOL_GPL(acpi_post_unmap_gar);
static int acpi_atomic_read_mem(u64 paddr, u64 *val, u32 width)
static int acpi_atomic_write_mem(u64 paddr, u64 val, u32 width)
int acpi_atomic_read(u64 *val, struct acpi_generic_address *reg)
EXPORT_SYMBOL_GPL(acpi_atomic_read);
int acpi_atomic_write(u64 val, struct acpi_generic_address *reg)
EXPORT_SYMBOL_GPL(acpi_atomic_write);
