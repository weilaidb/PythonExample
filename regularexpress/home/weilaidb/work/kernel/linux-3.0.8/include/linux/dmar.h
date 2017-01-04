#define __DMAR_H__
struct intel_iommu;
#if defined(CONFIG_DMAR) || defined(CONFIG_INTR_REMAP)
struct dmar_drhd_unit ;
extern struct list_head dmar_drhd_units;
#define for_each_drhd_unit(drhd) \
list_for_each_entry(drhd, &dmar_drhd_units, list)
#define for_each_active_iommu(i, drhd)					\
list_for_each_entry(drhd, &dmar_drhd_units, list)		\
if (i=drhd->iommu, drhd->ignored)  else
#define for_each_iommu(i, drhd)						\
list_for_each_entry(drhd, &dmar_drhd_units, list)		\
if (i=drhd->iommu, 0)  else
extern int dmar_table_init(void);
extern int dmar_dev_scope_init(void);
extern int detect_intel_iommu(void);
extern int enable_drhd_fault_handling(void);
extern int parse_ioapics_under_ir(void);
extern int alloc_iommu(struct dmar_drhd_unit *);
static inline int detect_intel_iommu(void)
static inline int dmar_table_init(void)
static inline int enable_drhd_fault_handling(void)
struct irte ;
extern int intr_remapping_enabled;
extern int intr_remapping_supported(void);
extern int enable_intr_remapping(int);
extern void disable_intr_remapping(void);
extern int reenable_intr_remapping(int);
extern int get_irte(int irq, struct irte *entry);
extern int modify_irte(int irq, struct irte *irte_modified);
extern int alloc_irte(struct intel_iommu *iommu, int irq, u16 count);
extern int set_irte_irq(int irq, struct intel_iommu *iommu, u16 index,
u16 sub_handle);
extern int map_irq_to_irte_handle(int irq, u16 *sub_handle);
extern int free_irte(int irq);
extern struct intel_iommu *map_dev_to_ir(struct pci_dev *dev);
extern struct intel_iommu *map_ioapic_to_ir(int apic);
extern struct intel_iommu *map_hpet_to_ir(u8 id);
extern int set_ioapic_sid(struct irte *irte, int apic);
extern int set_hpet_sid(struct irte *irte, u8 id);
extern int set_msi_sid(struct irte *irte, struct pci_dev *dev);
static inline int alloc_irte(struct intel_iommu *iommu, int irq, u16 count)
static inline int modify_irte(int irq, struct irte *irte_modified)
static inline int free_irte(int irq)
static inline int map_irq_to_irte_handle(int irq, u16 *sub_handle)
static inline int set_irte_irq(int irq, struct intel_iommu *iommu, u16 index,
u16 sub_handle)
static inline struct intel_iommu *map_dev_to_ir(struct pci_dev *dev)
static inline struct intel_iommu *map_ioapic_to_ir(int apic)
static inline struct intel_iommu *map_hpet_to_ir(unsigned int hpet_id)
static inline int set_ioapic_sid(struct irte *irte, int apic)
static inline int set_hpet_sid(struct irte *irte, u8 id)
static inline int set_msi_sid(struct irte *irte, struct pci_dev *dev)
#define intr_remapping_enabled		(0)
static inline int enable_intr_remapping(int eim)
static inline void disable_intr_remapping(void)
static inline int reenable_intr_remapping(int eim)
struct irq_data;
extern void dmar_msi_unmask(struct irq_data *data);
extern void dmar_msi_mask(struct irq_data *data);
extern void dmar_msi_read(int irq, struct msi_msg *msg);
extern void dmar_msi_write(int irq, struct msi_msg *msg);
extern int dmar_set_interrupt(struct intel_iommu *iommu);
extern irqreturn_t dmar_fault(int irq, void *dev_id);
extern int arch_setup_dmar_msi(unsigned int irq);
extern int iommu_detected, no_iommu;
extern struct list_head dmar_rmrr_units;
struct dmar_rmrr_unit ;
#define for_each_rmrr_units(rmrr) \
list_for_each_entry(rmrr, &dmar_rmrr_units, list)
struct dmar_atsr_unit ;
extern int intel_iommu_init(void);
static inline int intel_iommu_init(void)
