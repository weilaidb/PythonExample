static struct ioapic_scope ir_ioapic[MAX_IO_APICS];
static struct hpet_scope ir_hpet[MAX_HPET_TBS];
static int ir_ioapic_num, ir_hpet_num;
int intr_remapping_enabled;
static int disable_intremap;
static int disable_sourceid_checking;
static __init int setup_nointremap(char *str)
early_param("nointremap", setup_nointremap);
static __init int setup_intremap(char *str)
early_param("intremap", setup_intremap);
static DEFINE_SPINLOCK(irq_2_ir_lock);
static struct irq_2_iommu *irq_2_iommu(unsigned int irq)
int get_irte(int irq, struct irte *entry)
int alloc_irte(struct intel_iommu *iommu, int irq, u16 count)
static int qi_flush_iec(struct intel_iommu *iommu, int index, int mask)
int map_irq_to_irte_handle(int irq, u16 *sub_handle)
int set_irte_irq(int irq, struct intel_iommu *iommu, u16 index, u16 subhandle)
int modify_irte(int irq, struct irte *irte_modified)
struct intel_iommu *map_hpet_to_ir(u8 hpet_id)
struct intel_iommu *map_ioapic_to_ir(int apic)
struct intel_iommu *map_dev_to_ir(struct pci_dev *dev)
static int clear_entries(struct irq_2_iommu *irq_iommu)
int free_irte(int irq)
#define SVT_NO_VERIFY		0x0
#define SVT_VERIFY_SID_SQ	0x1
#define SVT_VERIFY_BUS		0x2
#define SQ_ALL_16	0x0
#define SQ_13_IGNORE_1	0x1
#define SQ_13_IGNORE_2	0x2
#define SQ_13_IGNORE_3	0x3
static void set_irte_sid(struct irte *irte, unsigned int svt,
unsigned int sq, unsigned int sid)
int set_ioapic_sid(struct irte *irte, int apic)
int set_hpet_sid(struct irte *irte, u8 id)
int set_msi_sid(struct irte *irte, struct pci_dev *dev)
static void iommu_set_intr_remapping(struct intel_iommu *iommu, int mode)
static int setup_intr_remapping(struct intel_iommu *iommu, int mode)
static void iommu_disable_intr_remapping(struct intel_iommu *iommu)
int __init intr_remapping_supported(void)
int __init enable_intr_remapping(int eim)
static void ir_parse_one_hpet_scope(struct acpi_dmar_device_scope *scope,
struct intel_iommu *iommu)
static void ir_parse_one_ioapic_scope(struct acpi_dmar_device_scope *scope,
struct intel_iommu *iommu)
static int ir_parse_ioapic_hpet_scope(struct acpi_dmar_header *header,
struct intel_iommu *iommu)
int __init parse_ioapics_under_ir(void)
void disable_intr_remapping(void)
int reenable_intr_remapping(int eim)
