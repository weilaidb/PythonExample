#define PREFIX "DMAR: "
LIST_HEAD(dmar_drhd_units);
static struct acpi_table_header * __initdata dmar_tbl;
static acpi_size dmar_tbl_size;
static void __init dmar_register_drhd_unit(struct dmar_drhd_unit *drhd)
static int __init dmar_parse_one_dev_scope(struct acpi_dmar_device_scope *scope,
struct pci_dev **dev, u16 segment)
static int __init dmar_parse_dev_scope(void *start, void *end, int *cnt,
struct pci_dev ***devices, u16 segment)
static int __init
dmar_parse_one_drhd(struct acpi_dmar_header *header)
static int __init dmar_parse_dev(struct dmar_drhd_unit *dmaru)
LIST_HEAD(dmar_rmrr_units);
static void __init dmar_register_rmrr_unit(struct dmar_rmrr_unit *rmrr)
static int __init
dmar_parse_one_rmrr(struct acpi_dmar_header *header)
static int __init
rmrr_parse_dev(struct dmar_rmrr_unit *rmrru)
static LIST_HEAD(dmar_atsr_units);
static int __init dmar_parse_one_atsr(struct acpi_dmar_header *hdr)
static int __init atsr_parse_dev(struct dmar_atsr_unit *atsru)
int dmar_find_matched_atsr_unit(struct pci_dev *dev)
static int __init
dmar_parse_one_rhsa(struct acpi_dmar_header *header)
static void __init
dmar_table_print_dmar_entry(struct acpi_dmar_header *header)
static int __init dmar_table_detect(void)
static int __init
parse_dmar_table(void)
static int dmar_pci_device_match(struct pci_dev *devices[], int cnt,
struct pci_dev *dev)
struct dmar_drhd_unit *
dmar_find_matched_drhd_unit(struct pci_dev *dev)
int __init dmar_dev_scope_init(void)
int __init dmar_table_init(void)
static void warn_invalid_dmar(u64 addr, const char *message)
int __init check_zero_address(void)
int __init detect_intel_iommu(void)
int alloc_iommu(struct dmar_drhd_unit *drhd)
void free_iommu(struct intel_iommu *iommu)
static inline void reclaim_free_desc(struct q_inval *qi)
static int qi_check_fault(struct intel_iommu *iommu, int index)
int qi_submit_sync(struct qi_desc *desc, struct intel_iommu *iommu)
void qi_global_iec(struct intel_iommu *iommu)
void qi_flush_context(struct intel_iommu *iommu, u16 did, u16 sid, u8 fm,
u64 type)
void qi_flush_iotlb(struct intel_iommu *iommu, u16 did, u64 addr,
unsigned int size_order, u64 type)
void qi_flush_dev_iotlb(struct intel_iommu *iommu, u16 sid, u16 qdep,
u64 addr, unsigned mask)
void dmar_disable_qi(struct intel_iommu *iommu)
static void __dmar_enable_qi(struct intel_iommu *iommu)
int dmar_enable_qi(struct intel_iommu *iommu)
enum faulttype ;
static const char *dma_remap_fault_reasons[] =
;
static const char *intr_remap_fault_reasons[] =
;
#define MAX_FAULT_REASON_IDX 	(ARRAY_SIZE(fault_reason_strings) - 1)
const char *dmar_get_fault_reason(u8 fault_reason, int *fault_type)
void dmar_msi_unmask(struct irq_data *data)
void dmar_msi_mask(struct irq_data *data)
void dmar_msi_write(int irq, struct msi_msg *msg)
void dmar_msi_read(int irq, struct msi_msg *msg)
static int dmar_fault_do_one(struct intel_iommu *iommu, int type,
u8 fault_reason, u16 source_id, unsigned long long addr)
#define PRIMARY_FAULT_REG_LEN (16)
irqreturn_t dmar_fault(int irq, void *dev_id)
int dmar_set_interrupt(struct intel_iommu *iommu)
int __init enable_drhd_fault_handling(void)
int dmar_reenable_qi(struct intel_iommu *iommu)
int __init dmar_ir_support(void)
IOMMU_INIT_POST(detect_intel_iommu);
