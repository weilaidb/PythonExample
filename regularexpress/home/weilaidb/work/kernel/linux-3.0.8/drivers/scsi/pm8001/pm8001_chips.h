#define _PM8001_CHIPS_H_
static inline u32 pm8001_read_32(void *virt_addr)
static inline void pm8001_write_32(void *addr, u32 offset, u32 val)
static inline u32 pm8001_cr32(struct pm8001_hba_info *pm8001_ha, u32 bar,
u32 offset)
static inline void pm8001_cw32(struct pm8001_hba_info *pm8001_ha, u32 bar,
u32 addr, u32 val)
static inline u32 pm8001_mr32(void __iomem *addr, u32 offset)
static inline void pm8001_mw32(void __iomem *addr, u32 offset, u32 val)
static inline u32 get_pci_bar_index(u32 pcibar)
