static int config_out_of_range(struct pci_pbm_info *pbm,
unsigned long bus,
unsigned long devfn,
unsigned long reg)
static void *sun4u_config_mkaddr(struct pci_pbm_info *pbm,
unsigned long bus,
unsigned long devfn,
unsigned long reg)
static int sun4u_read_pci_cfg_host(struct pci_pbm_info *pbm,
unsigned char bus, unsigned int devfn,
int where, int size, u32 *value)
static int sun4u_read_pci_cfg(struct pci_bus *bus_dev, unsigned int devfn,
int where, int size, u32 *value)
static int sun4u_write_pci_cfg_host(struct pci_pbm_info *pbm,
unsigned char bus, unsigned int devfn,
int where, int size, u32 value)
static int sun4u_write_pci_cfg(struct pci_bus *bus_dev, unsigned int devfn,
int where, int size, u32 value)
struct pci_ops sun4u_pci_ops = ;
static int sun4v_read_pci_cfg(struct pci_bus *bus_dev, unsigned int devfn,
int where, int size, u32 *value)
static int sun4v_write_pci_cfg(struct pci_bus *bus_dev, unsigned int devfn,
int where, int size, u32 value)
struct pci_ops sun4v_pci_ops = ;
void pci_get_pbm_props(struct pci_pbm_info *pbm)
static void pci_register_legacy_regions(struct resource *io_res,
struct resource *mem_res)
static void pci_register_iommu_region(struct pci_pbm_info *pbm)
void pci_determine_mem_io_space(struct pci_pbm_info *pbm)
void pci_scan_for_target_abort(struct pci_pbm_info *pbm,
struct pci_bus *pbus)
void pci_scan_for_master_abort(struct pci_pbm_info *pbm,
struct pci_bus *pbus)
void pci_scan_for_parity_error(struct pci_pbm_info *pbm,
struct pci_bus *pbus)
