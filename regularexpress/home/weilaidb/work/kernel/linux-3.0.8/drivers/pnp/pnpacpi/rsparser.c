#define valid_IRQ(i) (1)
#define valid_IRQ(i) (((i) != 0) && ((i) != 2))
static int irq_flags(int triggering, int polarity, int shareable)
static void decode_irq_flags(struct pnp_dev *dev, int flags, int *triggering,
int *polarity, int *shareable)
static void pnpacpi_parse_allocated_irqresource(struct pnp_dev *dev,
u32 gsi, int triggering,
int polarity, int shareable)
static int dma_flags(struct pnp_dev *dev, int type, int bus_master,
int transfer)
static void pnpacpi_parse_allocated_ioresource(struct pnp_dev *dev, u64 start,
u64 len, int io_decode,
int window)
static struct acpi_vendor_uuid hp_ccsr_uuid = ;
static int vendor_resource_matches(struct pnp_dev *dev,
struct acpi_resource_vendor_typed *vendor,
struct acpi_vendor_uuid *match,
int expected_len)
static void pnpacpi_parse_allocated_vendor(struct pnp_dev *dev,
struct acpi_resource_vendor_typed *vendor)
static void pnpacpi_parse_allocated_memresource(struct pnp_dev *dev,
u64 start, u64 len,
int write_protect, int window)
static void pnpacpi_parse_allocated_busresource(struct pnp_dev *dev,
u64 start, u64 len)
static void pnpacpi_parse_allocated_address_space(struct pnp_dev *dev,
struct acpi_resource *res)
static void pnpacpi_parse_allocated_ext_address_space(struct pnp_dev *dev,
struct acpi_resource *res)
static acpi_status pnpacpi_allocated_resource(struct acpi_resource *res,
void *data)
int pnpacpi_parse_allocated_resource(struct pnp_dev *dev)
static __init void pnpacpi_parse_dma_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_dma *p)
static __init void pnpacpi_parse_irq_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_irq *p)
static __init void pnpacpi_parse_ext_irq_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_extended_irq *p)
static __init void pnpacpi_parse_port_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_io *io)
static __init void pnpacpi_parse_fixed_port_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_fixed_io *io)
static __init void pnpacpi_parse_mem24_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_memory24 *p)
static __init void pnpacpi_parse_mem32_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_memory32 *p)
static __init void pnpacpi_parse_fixed_mem32_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource_fixed_memory32 *p)
static __init void pnpacpi_parse_address_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource *r)
static __init void pnpacpi_parse_ext_address_option(struct pnp_dev *dev,
unsigned int option_flags,
struct acpi_resource *r)
struct acpipnp_parse_option_s ;
static __init acpi_status pnpacpi_option_resource(struct acpi_resource *res,
void *data)
int __init pnpacpi_parse_resource_option_data(struct pnp_dev *dev)
static int pnpacpi_supported_resource(struct acpi_resource *res)
static acpi_status pnpacpi_count_resources(struct acpi_resource *res,
void *data)
static acpi_status pnpacpi_type_resources(struct acpi_resource *res, void *data)
int pnpacpi_build_resource_template(struct pnp_dev *dev,
struct acpi_buffer *buffer)
static void pnpacpi_encode_irq(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
static void pnpacpi_encode_ext_irq(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
static void pnpacpi_encode_dma(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
static void pnpacpi_encode_io(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
static void pnpacpi_encode_fixed_io(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
static void pnpacpi_encode_mem24(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
static void pnpacpi_encode_mem32(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
static void pnpacpi_encode_fixed_mem32(struct pnp_dev *dev,
struct acpi_resource *resource,
struct resource *p)
int pnpacpi_encode_resources(struct pnp_dev *dev, struct acpi_buffer *buffer)
