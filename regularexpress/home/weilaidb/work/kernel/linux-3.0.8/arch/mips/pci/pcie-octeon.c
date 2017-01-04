union cvmx_pcie_address ;
static inline uint64_t cvmx_pcie_get_io_base_address(int pcie_port)
static inline uint64_t cvmx_pcie_get_io_size(int pcie_port)
static inline uint64_t cvmx_pcie_get_mem_base_address(int pcie_port)
static inline uint64_t cvmx_pcie_get_mem_size(int pcie_port)
static uint32_t cvmx_pcie_cfgx_read(int pcie_port, uint32_t cfg_offset)
static void cvmx_pcie_cfgx_write(int pcie_port, uint32_t cfg_offset,
uint32_t val)
static inline uint64_t __cvmx_pcie_build_config_addr(int pcie_port, int bus,
int dev, int fn, int reg)
static uint8_t cvmx_pcie_config_read8(int pcie_port, int bus, int dev,
int fn, int reg)
static uint16_t cvmx_pcie_config_read16(int pcie_port, int bus, int dev,
int fn, int reg)
static uint32_t cvmx_pcie_config_read32(int pcie_port, int bus, int dev,
int fn, int reg)
static void cvmx_pcie_config_write8(int pcie_port, int bus, int dev, int fn,
int reg, uint8_t val)
static void cvmx_pcie_config_write16(int pcie_port, int bus, int dev, int fn,
int reg, uint16_t val)
static void cvmx_pcie_config_write32(int pcie_port, int bus, int dev, int fn,
int reg, uint32_t val)
static void __cvmx_pcie_rc_initialize_config_space(int pcie_port)
static int __cvmx_pcie_rc_initialize_link(int pcie_port)
static int cvmx_pcie_rc_initialize(int pcie_port)
int __init octeon_pcie_pcibios_map_irq(const struct pci_dev *dev,
u8 slot, u8 pin)
static inline int octeon_pcie_read_config(int pcie_port, struct pci_bus *bus,
unsigned int devfn, int reg, int size,
u32 *val)
static int octeon_pcie0_read_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 *val)
static int octeon_pcie1_read_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 *val)
static inline int octeon_pcie_write_config(int pcie_port, struct pci_bus *bus,
unsigned int devfn, int reg,
int size, u32 val)
static int octeon_pcie0_write_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 val)
static int octeon_pcie1_write_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 val)
static struct pci_ops octeon_pcie0_ops = ;
static struct resource octeon_pcie0_mem_resource = ;
static struct resource octeon_pcie0_io_resource = ;
static struct pci_controller octeon_pcie0_controller = ;
static struct pci_ops octeon_pcie1_ops = ;
static struct resource octeon_pcie1_mem_resource = ;
static struct resource octeon_pcie1_io_resource = ;
static struct pci_controller octeon_pcie1_controller = ;
static int __init octeon_pcie_setup(void)
arch_initcall(octeon_pcie_setup);
